/* -*- Mode: C++; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef mozilla_dom_workers_workerdebuggermanager_h
#define mozilla_dom_workers_workerdebuggermanager_h

#include "Workers.h"

#include "nsIObserver.h"
#include "nsIWorkerDebuggerManager.h"

#include "nsServiceManagerUtils.h"
#include "nsTArray.h"
#include "nsThreadUtils.h"

#define WORKERDEBUGGERMANAGER_CID \
  { 0x62ec8731, 0x55ad, 0x4246, \
    { 0xb2, 0xea, 0xf2, 0x6c, 0x1f, 0xe1, 0x9d, 0x2d } }
#define WORKERDEBUGGERMANAGER_CONTRACTID \
  "@mozilla.org/dom/workers/workerdebuggermanager;1"

BEGIN_WORKERS_NAMESPACE

class WorkerDebugger;

class WorkerDebuggerManager final : public nsIObserver,
                                    public nsIWorkerDebuggerManager
{
  Mutex mMutex;

  // Protected by mMutex.
  nsTArray<nsCOMPtr<nsIWorkerDebuggerManagerListener>> mListeners;

  // Only touched on the main thread.
  nsTArray<RefPtr<WorkerDebugger>> mDebuggers;

public:
  static already_AddRefed<WorkerDebuggerManager>
  GetInstance();

  static WorkerDebuggerManager*
  GetOrCreate();

  static WorkerDebuggerManager*
  Get();

  WorkerDebuggerManager();

  NS_DECL_ISUPPORTS
  NS_DECL_NSIOBSERVER
  NS_DECL_NSIWORKERDEBUGGERMANAGER

  nsresult
  Init();

  void
  Shutdown();

  void
  RegisterDebugger(WorkerPrivate* aWorkerPrivate);

  void
  RegisterDebuggerMainThread(WorkerPrivate* aWorkerPrivate,
                             bool aNotifyListeners);

  void
  UnregisterDebugger(WorkerPrivate* aWorkerPrivate);

  void
  UnregisterDebuggerMainThread(WorkerPrivate* aWorkerPrivate);

private:
  virtual ~WorkerDebuggerManager();
};

inline nsresult
RegisterWorkerDebugger(WorkerPrivate* aWorkerPrivate)
{
  WorkerDebuggerManager* manager;

  if (NS_IsMainThread()) {
    manager = WorkerDebuggerManager::GetOrCreate();
    if (!manager) {
      NS_WARNING("Failed to create worker debugger manager!");
      return NS_ERROR_FAILURE;
    }
  }
  else {
    manager = WorkerDebuggerManager::Get();
  }

  manager->RegisterDebugger(aWorkerPrivate);
  return NS_OK;
}

inline nsresult
UnregisterWorkerDebugger(WorkerPrivate* aWorkerPrivate)
{
  WorkerDebuggerManager* manager;

  if (NS_IsMainThread()) {
    manager = WorkerDebuggerManager::GetOrCreate();
    if (!manager) {
      NS_WARNING("Failed to create worker debugger manager!");
      return NS_ERROR_FAILURE;
    }
  }
  else {
    manager = WorkerDebuggerManager::Get();
  }

  manager->UnregisterDebugger(aWorkerPrivate);
  return NS_OK;
}

END_WORKERS_NAMESPACE

#endif // mozilla_dom_workers_workerdebuggermanager_h
