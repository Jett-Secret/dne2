//
// Automatically generated by ipdlc.
// Edit at your own risk
//

#ifndef PTestShell_h
#define PTestShell_h

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
class PTestShellParent;
} // namespace ipc
} // namespace mozilla
namespace mozilla {
namespace ipc {
class PTestShellChild;
} // namespace ipc
} // namespace mozilla

//-----------------------------------------------------------------------------
// Code common to PTestShellChild and PTestShellParent
//
namespace mozilla {
namespace ipc {
namespace PTestShell {

nsresult
CreateEndpoints(
        base::ProcessId aParentDestPid,
        base::ProcessId aChildDestPid,
        mozilla::ipc::Endpoint<mozilla::ipc::PTestShellParent>* aParent,
        mozilla::ipc::Endpoint<mozilla::ipc::PTestShellChild>* aChild);

enum State {
    __Dead,
    __Null,
    __Error,
    __Dying,
    __Start = __Null
};

enum MessageType {
    PTestShellStart = PTestShellMsgStart << 16,
    Msg___delete____ID,
    Reply___delete____ID,
    Msg_ExecuteCommand__ID,
    Msg_PTestShellCommandConstructor__ID,
    Reply_PTestShellCommandConstructor__ID,
    PTestShellEnd
};

bool
Transition(
        mozilla::ipc::Trigger trigger,
        State* next);

IPC::Message*
Msg___delete__(int32_t routingId);
IPC::Message*
Reply___delete__(int32_t routingId);

IPC::Message*
Msg_ExecuteCommand(int32_t routingId);

IPC::Message*
Msg_PTestShellCommandConstructor(int32_t routingId);
IPC::Message*
Reply_PTestShellCommandConstructor(int32_t routingId);



} // namespace PTestShell
} // namespace ipc
} // namespace mozilla

#endif // ifndef PTestShell_h
