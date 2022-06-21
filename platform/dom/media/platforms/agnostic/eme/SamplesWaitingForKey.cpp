/* -*- Mode: C++; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "SamplesWaitingForKey.h"
#include "mozilla/CDMProxy.h"
#include "mozilla/CDMCaps.h"
#include "MediaData.h"

namespace mozilla {

SamplesWaitingForKey::SamplesWaitingForKey(MediaDataDecoder* aDecoder,
                                           MediaDataDecoderCallback* aCallback,
                                           TaskQueue* aTaskQueue,
                                           CDMProxy* aProxy)
  : mMutex("SamplesWaitingForKey")
  , mDecoder(aDecoder)
  , mDecoderCallback(aCallback)
  , mTaskQueue(aTaskQueue)
  , mProxy(aProxy)
{
}

SamplesWaitingForKey::~SamplesWaitingForKey()
{
}

bool
SamplesWaitingForKey::WaitIfKeyNotUsable(MediaRawData* aSample)
{
  if (!aSample || !aSample->mCrypto.mValid || !mProxy) {
    return false;
  }
  CDMCaps::AutoLock caps(mProxy->Capabilites());
  const auto& keyid = aSample->mCrypto.mKeyId;
  if (!caps.IsKeyUsable(keyid)) {
    {
      MutexAutoLock lock(mMutex);
      mSamples.AppendElement(aSample);
    }
    mDecoderCallback->WaitingForKey();
    caps.NotifyWhenKeyIdUsable(aSample->mCrypto.mKeyId, this);
    return true;
  }
  return false;
}

void
SamplesWaitingForKey::NotifyUsable(const CencKeyId& aKeyId)
{
  MutexAutoLock lock(mMutex);
  size_t i = 0;
  while (i < mSamples.Length()) {
    if (aKeyId == mSamples[i]->mCrypto.mKeyId) {
      RefPtr<nsIRunnable> task;
      task = NewRunnableMethod<RefPtr<MediaRawData>>(mDecoder,
                                                     &MediaDataDecoder::Input,
                                                     RefPtr<MediaRawData>(mSamples[i]));
      mSamples.RemoveElementAt(i);
      mTaskQueue->Dispatch(task.forget());
    } else {
      i++;
    }
  }
}

void
SamplesWaitingForKey::Flush()
{
  MutexAutoLock lock(mMutex);
  mSamples.Clear();
}

void
SamplesWaitingForKey::BreakCycles()
{
  MutexAutoLock lock(mMutex);
  mDecoder = nullptr;
  mTaskQueue = nullptr;
  mProxy = nullptr;
  mSamples.Clear();
}

} // namespace mozilla
