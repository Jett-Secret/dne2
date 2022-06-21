//
// Automatically generated by ipdlc.
// Edit at your own risk
//


#include "mozilla/embedding/PPrintProgressDialog.h"

namespace mozilla {
namespace embedding {
namespace PPrintProgressDialog {

nsresult
CreateEndpoints(
        base::ProcessId aParentDestPid,
        base::ProcessId aChildDestPid,
        mozilla::ipc::Endpoint<mozilla::embedding::PPrintProgressDialogParent>* aParent,
        mozilla::ipc::Endpoint<mozilla::embedding::PPrintProgressDialogChild>* aChild)
{
    return mozilla::ipc::CreateEndpoints(mozilla::ipc::PrivateIPDLInterface(), aParentDestPid, aChildDestPid, PPrintProgressDialogMsgStart, PPrintProgressDialogMsgStartChild, aParent, aChild);
}
bool
Transition(
        mozilla::ipc::Trigger trigger,
        State* next)
{
    State from = (*(next));
    switch (from) {
    case __Null:
    case __Error:
        if ((Msg___delete____ID) == ((trigger).mMessage)) {
            (*(next)) = __Dead;
            return true;
        }
        return (__Null) == (from);
    case __Dead:
        mozilla::ipc::LogicError("__delete__()d actor");
        return false;
    case __Dying:
        mozilla::ipc::LogicError("__delete__()d (and unexpectedly dying) actor");
        return false;
    default:
        mozilla::ipc::LogicError("corrupted actor state");
        return false;
    }
}
IPC::Message*
Msg_StateChange(int32_t routingId)
{
    return new IPC::Message(routingId, Msg_StateChange__ID, IPC::Message::NOT_NESTED, IPC::Message::NORMAL_PRIORITY, IPC::Message::COMPRESSION_NONE, "PPrintProgressDialog::Msg_StateChange");
}
IPC::Message*
Msg_ProgressChange(int32_t routingId)
{
    return new IPC::Message(routingId, Msg_ProgressChange__ID, IPC::Message::NOT_NESTED, IPC::Message::NORMAL_PRIORITY, IPC::Message::COMPRESSION_NONE, "PPrintProgressDialog::Msg_ProgressChange");
}
IPC::Message*
Msg_DocTitleChange(int32_t routingId)
{
    return new IPC::Message(routingId, Msg_DocTitleChange__ID, IPC::Message::NOT_NESTED, IPC::Message::NORMAL_PRIORITY, IPC::Message::COMPRESSION_NONE, "PPrintProgressDialog::Msg_DocTitleChange");
}
IPC::Message*
Msg_DocURLChange(int32_t routingId)
{
    return new IPC::Message(routingId, Msg_DocURLChange__ID, IPC::Message::NOT_NESTED, IPC::Message::NORMAL_PRIORITY, IPC::Message::COMPRESSION_NONE, "PPrintProgressDialog::Msg_DocURLChange");
}
IPC::Message*
Msg___delete__(int32_t routingId)
{
    return new IPC::Message(routingId, Msg___delete____ID, IPC::Message::NOT_NESTED, IPC::Message::NORMAL_PRIORITY, IPC::Message::COMPRESSION_NONE, "PPrintProgressDialog::Msg___delete__");
}
IPC::Message*
Reply___delete__(int32_t routingId)
{
    return new IPC::Message(routingId, Reply___delete____ID, IPC::Message::NOT_NESTED, IPC::Message::NORMAL_PRIORITY, IPC::Message::COMPRESSION_NONE, "PPrintProgressDialog::Reply___delete__");
}
IPC::Message*
Msg_DialogOpened(int32_t routingId)
{
    return new IPC::Message(routingId, Msg_DialogOpened__ID, IPC::Message::NOT_NESTED, IPC::Message::NORMAL_PRIORITY, IPC::Message::COMPRESSION_NONE, "PPrintProgressDialog::Msg_DialogOpened");
}

} // namespace PPrintProgressDialog
} // namespace embedding
} // namespace mozilla