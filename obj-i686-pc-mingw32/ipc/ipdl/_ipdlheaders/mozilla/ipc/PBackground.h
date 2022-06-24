//
// Automatically generated by ipdlc.
// Edit at your own risk
//

#ifndef PBackground_h
#define PBackground_h

#include "mozilla/Attributes.h"
#include "IPCMessageStart.h"
#include "ipc/IPCMessageUtils.h"
#include "mozilla/RefPtr.h"
#include "nsStringGlue.h"
#include "nsTArray.h"
#include "mozilla/ipc/ProtocolUtils.h"
#include "nsTHashtable.h"
#include "mozilla/OperatorNewExtensions.h"
#include "mozilla/dom/DOMTypes.h"
#include "mozilla/ipc/PBackgroundSharedTypes.h"
#include "mozilla/dom/indexedDB/PBackgroundIDBSharedTypes.h"
#include "mozilla/dom/PFileSystemParams.h"
#include "mozilla/ipc/ProtocolTypes.h"

namespace mozilla {
namespace ipc {
class PBackgroundParent;
} // namespace ipc
} // namespace mozilla
namespace mozilla {
namespace ipc {
class PBackgroundChild;
} // namespace ipc
} // namespace mozilla

namespace mozilla {
namespace dom {
class PContentChild;
} // namespace dom
} // namespace mozilla

//-----------------------------------------------------------------------------
// Code common to PBackgroundChild and PBackgroundParent
//
namespace mozilla {
namespace ipc {
namespace PBackground {

bool
Open(mozilla::dom::PContentChild* opener);

nsresult
CreateEndpoints(
        base::ProcessId aParentDestPid,
        base::ProcessId aChildDestPid,
        mozilla::ipc::Endpoint<mozilla::ipc::PBackgroundParent>* aParent,
        mozilla::ipc::Endpoint<mozilla::ipc::PBackgroundChild>* aChild);

enum State {
    __Dead,
    __Null,
    __Error,
    __Dying,
    __Start = __Null
};

enum MessageType {
    PBackgroundStart = PBackgroundMsgStart << 16,
    Msg_PBackgroundTestConstructor__ID,
    Reply_PBackgroundTestConstructor__ID,
    Msg_PBackgroundIDBFactoryConstructor__ID,
    Reply_PBackgroundIDBFactoryConstructor__ID,
    Msg_PBackgroundIndexedDBUtilsConstructor__ID,
    Reply_PBackgroundIndexedDBUtilsConstructor__ID,
    Msg_FlushPendingFileDeletions__ID,
    Msg_PVsyncConstructor__ID,
    Reply_PVsyncConstructor__ID,
    Msg_PCamerasConstructor__ID,
    Reply_PCamerasConstructor__ID,
    Msg_PUDPSocketConstructor__ID,
    Reply_PUDPSocketConstructor__ID,
    Msg_PBroadcastChannelConstructor__ID,
    Reply_PBroadcastChannelConstructor__ID,
    Msg_PServiceWorkerManagerConstructor__ID,
    Reply_PServiceWorkerManagerConstructor__ID,
    Msg_ShutdownServiceWorkerRegistrar__ID,
    Msg_PCacheStorageConstructor__ID,
    Reply_PCacheStorageConstructor__ID,
    Msg_PMessagePortConstructor__ID,
    Reply_PMessagePortConstructor__ID,
    Msg_PSendStreamConstructor__ID,
    Reply_PSendStreamConstructor__ID,
    Msg_MessagePortForceClose__ID,
    Msg_PAsmJSCacheEntryConstructor__ID,
    Reply_PAsmJSCacheEntryConstructor__ID,
    Msg_PQuotaConstructor__ID,
    Reply_PQuotaConstructor__ID,
    Msg_PFileSystemRequestConstructor__ID,
    Reply_PFileSystemRequestConstructor__ID,
    Msg_PGamepadEventChannelConstructor__ID,
    Reply_PGamepadEventChannelConstructor__ID,
    Msg_PGamepadTestChannelConstructor__ID,
    Reply_PGamepadTestChannelConstructor__ID,
    Msg_PCacheConstructor__ID,
    Reply_PCacheConstructor__ID,
    Msg_PCacheStreamControlConstructor__ID,
    Reply_PCacheStreamControlConstructor__ID,
    Msg_PBlobConstructor__ID,
    Reply_PBlobConstructor__ID,
    Msg_PFileDescriptorSetConstructor__ID,
    Reply_PFileDescriptorSetConstructor__ID,
    PBackgroundEnd
};

bool
Transition(
        mozilla::ipc::Trigger trigger,
        State* next);

IPC::Message*
Msg_PBackgroundTestConstructor(int32_t routingId);
IPC::Message*
Reply_PBackgroundTestConstructor(int32_t routingId);

IPC::Message*
Msg_PBackgroundIDBFactoryConstructor(int32_t routingId);
IPC::Message*
Reply_PBackgroundIDBFactoryConstructor(int32_t routingId);

IPC::Message*
Msg_PBackgroundIndexedDBUtilsConstructor(int32_t routingId);
IPC::Message*
Reply_PBackgroundIndexedDBUtilsConstructor(int32_t routingId);

IPC::Message*
Msg_FlushPendingFileDeletions(int32_t routingId);

IPC::Message*
Msg_PVsyncConstructor(int32_t routingId);
IPC::Message*
Reply_PVsyncConstructor(int32_t routingId);

IPC::Message*
Msg_PCamerasConstructor(int32_t routingId);
IPC::Message*
Reply_PCamerasConstructor(int32_t routingId);

IPC::Message*
Msg_PUDPSocketConstructor(int32_t routingId);
IPC::Message*
Reply_PUDPSocketConstructor(int32_t routingId);

IPC::Message*
Msg_PBroadcastChannelConstructor(int32_t routingId);
IPC::Message*
Reply_PBroadcastChannelConstructor(int32_t routingId);

IPC::Message*
Msg_PServiceWorkerManagerConstructor(int32_t routingId);
IPC::Message*
Reply_PServiceWorkerManagerConstructor(int32_t routingId);

IPC::Message*
Msg_ShutdownServiceWorkerRegistrar(int32_t routingId);

IPC::Message*
Msg_PCacheStorageConstructor(int32_t routingId);
IPC::Message*
Reply_PCacheStorageConstructor(int32_t routingId);

IPC::Message*
Msg_PMessagePortConstructor(int32_t routingId);
IPC::Message*
Reply_PMessagePortConstructor(int32_t routingId);

IPC::Message*
Msg_PSendStreamConstructor(int32_t routingId);
IPC::Message*
Reply_PSendStreamConstructor(int32_t routingId);

IPC::Message*
Msg_MessagePortForceClose(int32_t routingId);

IPC::Message*
Msg_PAsmJSCacheEntryConstructor(int32_t routingId);
IPC::Message*
Reply_PAsmJSCacheEntryConstructor(int32_t routingId);

IPC::Message*
Msg_PQuotaConstructor(int32_t routingId);
IPC::Message*
Reply_PQuotaConstructor(int32_t routingId);

IPC::Message*
Msg_PFileSystemRequestConstructor(int32_t routingId);
IPC::Message*
Reply_PFileSystemRequestConstructor(int32_t routingId);

IPC::Message*
Msg_PGamepadEventChannelConstructor(int32_t routingId);
IPC::Message*
Reply_PGamepadEventChannelConstructor(int32_t routingId);

IPC::Message*
Msg_PGamepadTestChannelConstructor(int32_t routingId);
IPC::Message*
Reply_PGamepadTestChannelConstructor(int32_t routingId);

IPC::Message*
Msg_PCacheConstructor(int32_t routingId);
IPC::Message*
Reply_PCacheConstructor(int32_t routingId);

IPC::Message*
Msg_PCacheStreamControlConstructor(int32_t routingId);
IPC::Message*
Reply_PCacheStreamControlConstructor(int32_t routingId);

IPC::Message*
Msg_PBlobConstructor(int32_t routingId);
IPC::Message*
Reply_PBlobConstructor(int32_t routingId);

IPC::Message*
Msg_PFileDescriptorSetConstructor(int32_t routingId);
IPC::Message*
Reply_PFileDescriptorSetConstructor(int32_t routingId);



} // namespace PBackground
} // namespace ipc
} // namespace mozilla

#endif // ifndef PBackground_h
