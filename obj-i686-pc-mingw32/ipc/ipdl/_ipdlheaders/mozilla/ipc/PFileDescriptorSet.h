//
// Automatically generated by ipdlc.
// Edit at your own risk
//

#ifndef PFileDescriptorSet_h
#define PFileDescriptorSet_h

#include "mozilla/Attributes.h"
#include "IPCMessageStart.h"
#include "ipc/IPCMessageUtils.h"
#include "mozilla/RefPtr.h"
#include "nsStringGlue.h"
#include "nsTArray.h"
#include "mozilla/ipc/ProtocolUtils.h"
#include "nsTHashtable.h"
#include "mozilla/OperatorNewExtensions.h"

namespace mozilla {
namespace ipc {
class PFileDescriptorSetParent;
} // namespace ipc
} // namespace mozilla
namespace mozilla {
namespace ipc {
class PFileDescriptorSetChild;
} // namespace ipc
} // namespace mozilla

//-----------------------------------------------------------------------------
// Code common to PFileDescriptorSetChild and PFileDescriptorSetParent
//
namespace mozilla {
namespace ipc {
namespace PFileDescriptorSet {

nsresult
CreateEndpoints(
        base::ProcessId aParentDestPid,
        base::ProcessId aChildDestPid,
        mozilla::ipc::Endpoint<mozilla::ipc::PFileDescriptorSetParent>* aParent,
        mozilla::ipc::Endpoint<mozilla::ipc::PFileDescriptorSetChild>* aChild);

enum State {
    __Dead,
    __Null,
    __Error,
    __Dying,
    __Start = __Null
};

enum MessageType {
    PFileDescriptorSetStart = PFileDescriptorSetMsgStart << 16,
    Msg_AddFileDescriptor__ID,
    Msg___delete____ID,
    Reply___delete____ID,
    PFileDescriptorSetEnd
};

bool
Transition(
        mozilla::ipc::Trigger trigger,
        State* next);

IPC::Message*
Msg_AddFileDescriptor(int32_t routingId);

IPC::Message*
Msg___delete__(int32_t routingId);
IPC::Message*
Reply___delete__(int32_t routingId);



} // namespace PFileDescriptorSet
} // namespace ipc
} // namespace mozilla

#endif // ifndef PFileDescriptorSet_h
