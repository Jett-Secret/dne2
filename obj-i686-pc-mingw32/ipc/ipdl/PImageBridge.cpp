//
// Automatically generated by ipdlc.
// Edit at your own risk
//


#include "mozilla/layers/PImageBridge.h"

namespace mozilla {
namespace layers {
namespace PImageBridge {

nsresult
CreateEndpoints(
        base::ProcessId aParentDestPid,
        base::ProcessId aChildDestPid,
        mozilla::ipc::Endpoint<mozilla::layers::PImageBridgeParent>* aParent,
        mozilla::ipc::Endpoint<mozilla::layers::PImageBridgeChild>* aChild)
{
    return mozilla::ipc::CreateEndpoints(mozilla::ipc::PrivateIPDLInterface(), aParentDestPid, aChildDestPid, PImageBridgeMsgStart, PImageBridgeMsgStartChild, aParent, aChild);
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
Msg_ParentAsyncMessages(int32_t routingId)
{
    return new IPC::Message(routingId, Msg_ParentAsyncMessages__ID, IPC::Message::NOT_NESTED, IPC::Message::NORMAL_PRIORITY, IPC::Message::COMPRESSION_NONE, "PImageBridge::Msg_ParentAsyncMessages");
}
IPC::Message*
Msg_DidComposite(int32_t routingId)
{
    return new IPC::Message(routingId, Msg_DidComposite__ID, IPC::Message::NOT_NESTED, IPC::Message::NORMAL_PRIORITY, IPC::Message::COMPRESSION_NONE, "PImageBridge::Msg_DidComposite");
}
IPC::Message*
Msg_ImageBridgeThreadId(int32_t routingId)
{
    return new IPC::Message(routingId, Msg_ImageBridgeThreadId__ID, IPC::Message::NOT_NESTED, IPC::Message::NORMAL_PRIORITY, IPC::Message::COMPRESSION_NONE, "PImageBridge::Msg_ImageBridgeThreadId");
}
IPC::Message*
Msg_Update(int32_t routingId)
{
    return new IPC::Message(routingId, Msg_Update__ID, IPC::Message::NOT_NESTED, IPC::Message::NORMAL_PRIORITY, IPC::Message::COMPRESSION_NONE, "PImageBridge::Msg_Update");
}
IPC::Message*
Reply_Update(int32_t routingId)
{
    return new IPC::Message(routingId, Reply_Update__ID, IPC::Message::NOT_NESTED, IPC::Message::NORMAL_PRIORITY, IPC::Message::COMPRESSION_NONE, "PImageBridge::Reply_Update");
}
IPC::Message*
Msg_UpdateNoSwap(int32_t routingId)
{
    return new IPC::Message(routingId, Msg_UpdateNoSwap__ID, IPC::Message::NOT_NESTED, IPC::Message::NORMAL_PRIORITY, IPC::Message::COMPRESSION_NONE, "PImageBridge::Msg_UpdateNoSwap");
}
IPC::Message*
Msg_WillClose(int32_t routingId)
{
    return new IPC::Message(routingId, Msg_WillClose__ID, IPC::Message::NOT_NESTED, IPC::Message::NORMAL_PRIORITY, IPC::Message::COMPRESSION_NONE, "PImageBridge::Msg_WillClose");
}
IPC::Message*
Reply_WillClose(int32_t routingId)
{
    return new IPC::Message(routingId, Reply_WillClose__ID, IPC::Message::NOT_NESTED, IPC::Message::NORMAL_PRIORITY, IPC::Message::COMPRESSION_NONE, "PImageBridge::Reply_WillClose");
}
IPC::Message*
Msg_PCompositableConstructor(int32_t routingId)
{
    return new IPC::Message(routingId, Msg_PCompositableConstructor__ID, IPC::Message::NOT_NESTED, IPC::Message::NORMAL_PRIORITY, IPC::Message::COMPRESSION_NONE, "PImageBridge::Msg_PCompositableConstructor");
}
IPC::Message*
Reply_PCompositableConstructor(int32_t routingId)
{
    return new IPC::Message(routingId, Reply_PCompositableConstructor__ID, IPC::Message::NOT_NESTED, IPC::Message::NORMAL_PRIORITY, IPC::Message::COMPRESSION_NONE, "PImageBridge::Reply_PCompositableConstructor");
}
IPC::Message*
Msg_PTextureConstructor(int32_t routingId)
{
    return new IPC::Message(routingId, Msg_PTextureConstructor__ID, IPC::Message::NOT_NESTED, IPC::Message::NORMAL_PRIORITY, IPC::Message::COMPRESSION_NONE, "PImageBridge::Msg_PTextureConstructor");
}
IPC::Message*
Reply_PTextureConstructor(int32_t routingId)
{
    return new IPC::Message(routingId, Reply_PTextureConstructor__ID, IPC::Message::NOT_NESTED, IPC::Message::NORMAL_PRIORITY, IPC::Message::COMPRESSION_NONE, "PImageBridge::Reply_PTextureConstructor");
}
IPC::Message*
Msg_PMediaSystemResourceManagerConstructor(int32_t routingId)
{
    return new IPC::Message(routingId, Msg_PMediaSystemResourceManagerConstructor__ID, IPC::Message::NOT_NESTED, IPC::Message::NORMAL_PRIORITY, IPC::Message::COMPRESSION_NONE, "PImageBridge::Msg_PMediaSystemResourceManagerConstructor");
}
IPC::Message*
Reply_PMediaSystemResourceManagerConstructor(int32_t routingId)
{
    return new IPC::Message(routingId, Reply_PMediaSystemResourceManagerConstructor__ID, IPC::Message::NOT_NESTED, IPC::Message::NORMAL_PRIORITY, IPC::Message::COMPRESSION_NONE, "PImageBridge::Reply_PMediaSystemResourceManagerConstructor");
}
IPC::Message*
Msg_PImageContainerConstructor(int32_t routingId)
{
    return new IPC::Message(routingId, Msg_PImageContainerConstructor__ID, IPC::Message::NOT_NESTED, IPC::Message::NORMAL_PRIORITY, IPC::Message::COMPRESSION_NONE, "PImageBridge::Msg_PImageContainerConstructor");
}
IPC::Message*
Reply_PImageContainerConstructor(int32_t routingId)
{
    return new IPC::Message(routingId, Reply_PImageContainerConstructor__ID, IPC::Message::NOT_NESTED, IPC::Message::NORMAL_PRIORITY, IPC::Message::COMPRESSION_NONE, "PImageBridge::Reply_PImageContainerConstructor");
}

} // namespace PImageBridge
} // namespace layers
} // namespace mozilla
