/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* vim:set ts=2 sw=2 sts=2 et cindent: */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

/* THIS FILE IS AUTOGENERATED FROM RecordErrorEvent.webidl BY Codegen.py - DO NOT EDIT */

#include "EventBinding.h"
#include "RecordErrorEvent.h"
#include "RecordErrorEventBinding.h"
#include "js/GCAPI.h"
#include "mozilla/dom/Nullable.h"
#include "mozilla/dom/PrimitiveConversions.h"
#include "mozilla/dom/RecordErrorEvent.h"

namespace mozilla {
namespace dom {


NS_IMPL_CYCLE_COLLECTION_CLASS(RecordErrorEvent)

NS_IMPL_ADDREF_INHERITED(RecordErrorEvent, Event)
NS_IMPL_RELEASE_INHERITED(RecordErrorEvent, Event)

NS_IMPL_CYCLE_COLLECTION_TRAVERSE_BEGIN_INHERITED(RecordErrorEvent, Event)
NS_IMPL_CYCLE_COLLECTION_TRAVERSE_END

NS_IMPL_CYCLE_COLLECTION_TRACE_BEGIN_INHERITED(RecordErrorEvent, Event)
NS_IMPL_CYCLE_COLLECTION_TRACE_END

NS_IMPL_CYCLE_COLLECTION_UNLINK_BEGIN_INHERITED(RecordErrorEvent, Event)
NS_IMPL_CYCLE_COLLECTION_UNLINK_END

NS_INTERFACE_MAP_BEGIN_CYCLE_COLLECTION_INHERITED(RecordErrorEvent)
NS_INTERFACE_MAP_END_INHERITING(Event)

RecordErrorEvent::RecordErrorEvent(mozilla::dom::EventTarget* aOwner)
  : Event(aOwner, nullptr, nullptr)
{
}

RecordErrorEvent::~RecordErrorEvent()
{
}

RecordErrorEvent*
RecordErrorEvent::AsRecordErrorEvent()
{
  return this;
}

JSObject*
RecordErrorEvent::WrapObjectInternal(JSContext* aCx, JS::Handle<JSObject*> aGivenProto)
{
  return RecordErrorEventBinding::Wrap(aCx, this, aGivenProto);
}

already_AddRefed<RecordErrorEvent>
RecordErrorEvent::Constructor(mozilla::dom::EventTarget* aOwner, const nsAString& aType, const RecordErrorEventInit& aEventInitDict)
{
  RefPtr<RecordErrorEvent> e = new RecordErrorEvent(aOwner);
  bool trusted = e->Init(aOwner);
  e->InitEvent(aType, aEventInitDict.mBubbles, aEventInitDict.mCancelable);
  e->mName = aEventInitDict.mName;
  e->SetTrusted(trusted);
  e->SetComposed(aEventInitDict.mComposed);
  return e.forget();
}

already_AddRefed<RecordErrorEvent>
RecordErrorEvent::Constructor(const GlobalObject& aGlobal, const nsAString& aType, const RecordErrorEventInit& aEventInitDict, ErrorResult& aRv)
{
  nsCOMPtr<mozilla::dom::EventTarget> owner = do_QueryInterface(aGlobal.GetAsSupports());
  return Constructor(owner, aType, aEventInitDict);
}

void
RecordErrorEvent::GetName(nsString& aRetVal) const
{
  aRetVal = mName;
}


} // namespace dom
} // namespace mozilla
