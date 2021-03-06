//
// Automatically generated by ipdlc.
// Edit at your own risk
//


#include "mozilla/embedding/PPrintProgressDialogParent.h"

#include "mozilla/embedding/PPrintingParent.h"

#include "nsIFile.h"
#include "GeckoProfiler.h"

namespace mozilla {
namespace embedding {


auto PPrintProgressDialogParent::Recv__delete__() -> bool
{
    return true;
}


MOZ_IMPLICIT PPrintProgressDialogParent::PPrintProgressDialogParent() :
    mozilla::ipc::IProtocol(mozilla::ipc::ParentSide),
    mState(PPrintProgressDialog::__Dead)
{
    MOZ_COUNT_CTOR(PPrintProgressDialogParent);
}

PPrintProgressDialogParent::~PPrintProgressDialogParent()
{
    MOZ_COUNT_DTOR(PPrintProgressDialogParent);
}

auto PPrintProgressDialogParent::Manager() const -> PPrintingParent*
{
    return static_cast<PPrintingParent*>(IProtocol::Manager());
}

auto PPrintProgressDialogParent::state() -> PPrintProgressDialog::State
{
    return mState;
}

auto PPrintProgressDialogParent::SendDialogOpened() -> bool
{
    IPC::Message* msg__ = PPrintProgressDialog::Msg_DialogOpened(Id());





    if (mozilla::ipc::LoggingEnabledFor("PPrintProgressDialogParent")) {
        mozilla::ipc::LogMessageForProtocol("PPrintProgressDialogParent", OtherPid(), "Sending ", (msg__)->type(), mozilla::ipc::MessageDirection::eSending);
    }
    PROFILER_LABEL("PPrintProgressDialog", "Msg_DialogOpened", js::ProfileEntry::Category::OTHER);
    if ((!(PPrintProgressDialog::Transition(Trigger(Trigger::Send, PPrintProgressDialog::Msg_DialogOpened__ID), (&(mState)))))) {
        NS_WARNING("bad state transition!");
    }

    bool sendok__ = (GetIPCChannel())->Send(msg__);
    return sendok__;
}

auto PPrintProgressDialogParent::RemoveManagee(
        int32_t aProtocolId,
        ProtocolBase* aListener) -> void
{
    FatalError("unreached");
    return;
}

auto PPrintProgressDialogParent::OnMessageReceived(const Message& msg__) -> PPrintProgressDialogParent::Result
{
    switch ((msg__).type()) {
    case PPrintProgressDialog::Msg_StateChange__ID:
        {
            if (mozilla::ipc::LoggingEnabledFor("PPrintProgressDialogParent")) {
                mozilla::ipc::LogMessageForProtocol("PPrintProgressDialogParent", OtherPid(), "Received ", ((&(msg__)))->type(), mozilla::ipc::MessageDirection::eReceiving);
            }
            PROFILER_LABEL("PPrintProgressDialog", "Msg_StateChange", js::ProfileEntry::Category::OTHER);

            PickleIterator iter__ = PickleIterator(msg__);
            long stateFlags;
            nsresult status;

            if ((!(Read((&(stateFlags)), (&(msg__)), (&(iter__)))))) {
                FatalError("Error deserializing 'long'");
                return MsgValueError;
            }
            // Sentinel = 'stateFlags'
            if ((!(((&(msg__)))->ReadSentinel((&(iter__)), 2666547646)))) {
                FatalError("Error deserializing 'long'");
                return MsgValueError;
            }
            if ((!(Read((&(status)), (&(msg__)), (&(iter__)))))) {
                FatalError("Error deserializing 'nsresult'");
                return MsgValueError;
            }
            // Sentinel = 'status'
            if ((!(((&(msg__)))->ReadSentinel((&(iter__)), 3714608576)))) {
                FatalError("Error deserializing 'nsresult'");
                return MsgValueError;
            }
            (msg__).EndRead(iter__);
            if ((!(PPrintProgressDialog::Transition(Trigger(Trigger::Recv, PPrintProgressDialog::Msg_StateChange__ID), (&(mState)))))) {
                NS_WARNING("bad state transition!");
            }
            if ((!(RecvStateChange(mozilla::Move(stateFlags), mozilla::Move(status))))) {
                mozilla::ipc::ProtocolErrorBreakpoint("Handler returned error code!");
                return MsgProcessingError;
            }

            return MsgProcessed;
        }
    case PPrintProgressDialog::Msg_ProgressChange__ID:
        {
            if (mozilla::ipc::LoggingEnabledFor("PPrintProgressDialogParent")) {
                mozilla::ipc::LogMessageForProtocol("PPrintProgressDialogParent", OtherPid(), "Received ", ((&(msg__)))->type(), mozilla::ipc::MessageDirection::eReceiving);
            }
            PROFILER_LABEL("PPrintProgressDialog", "Msg_ProgressChange", js::ProfileEntry::Category::OTHER);

            PickleIterator iter__ = PickleIterator(msg__);
            long curSelfProgress;
            long maxSelfProgress;
            long curTotalProgress;
            long maxTotalProgress;

            if ((!(Read((&(curSelfProgress)), (&(msg__)), (&(iter__)))))) {
                FatalError("Error deserializing 'long'");
                return MsgValueError;
            }
            // Sentinel = 'curSelfProgress'
            if ((!(((&(msg__)))->ReadSentinel((&(iter__)), 4225363786)))) {
                FatalError("Error deserializing 'long'");
                return MsgValueError;
            }
            if ((!(Read((&(maxSelfProgress)), (&(msg__)), (&(iter__)))))) {
                FatalError("Error deserializing 'long'");
                return MsgValueError;
            }
            // Sentinel = 'maxSelfProgress'
            if ((!(((&(msg__)))->ReadSentinel((&(iter__)), 3605923158)))) {
                FatalError("Error deserializing 'long'");
                return MsgValueError;
            }
            if ((!(Read((&(curTotalProgress)), (&(msg__)), (&(iter__)))))) {
                FatalError("Error deserializing 'long'");
                return MsgValueError;
            }
            // Sentinel = 'curTotalProgress'
            if ((!(((&(msg__)))->ReadSentinel((&(iter__)), 3294949245)))) {
                FatalError("Error deserializing 'long'");
                return MsgValueError;
            }
            if ((!(Read((&(maxTotalProgress)), (&(msg__)), (&(iter__)))))) {
                FatalError("Error deserializing 'long'");
                return MsgValueError;
            }
            // Sentinel = 'maxTotalProgress'
            if ((!(((&(msg__)))->ReadSentinel((&(iter__)), 2454639121)))) {
                FatalError("Error deserializing 'long'");
                return MsgValueError;
            }
            (msg__).EndRead(iter__);
            if ((!(PPrintProgressDialog::Transition(Trigger(Trigger::Recv, PPrintProgressDialog::Msg_ProgressChange__ID), (&(mState)))))) {
                NS_WARNING("bad state transition!");
            }
            if ((!(RecvProgressChange(mozilla::Move(curSelfProgress), mozilla::Move(maxSelfProgress), mozilla::Move(curTotalProgress), mozilla::Move(maxTotalProgress))))) {
                mozilla::ipc::ProtocolErrorBreakpoint("Handler returned error code!");
                return MsgProcessingError;
            }

            return MsgProcessed;
        }
    case PPrintProgressDialog::Msg_DocTitleChange__ID:
        {
            if (mozilla::ipc::LoggingEnabledFor("PPrintProgressDialogParent")) {
                mozilla::ipc::LogMessageForProtocol("PPrintProgressDialogParent", OtherPid(), "Received ", ((&(msg__)))->type(), mozilla::ipc::MessageDirection::eReceiving);
            }
            PROFILER_LABEL("PPrintProgressDialog", "Msg_DocTitleChange", js::ProfileEntry::Category::OTHER);

            PickleIterator iter__ = PickleIterator(msg__);
            nsString newTitle;

            if ((!(Read((&(newTitle)), (&(msg__)), (&(iter__)))))) {
                FatalError("Error deserializing 'nsString'");
                return MsgValueError;
            }
            // Sentinel = 'newTitle'
            if ((!(((&(msg__)))->ReadSentinel((&(iter__)), 2867378368)))) {
                FatalError("Error deserializing 'nsString'");
                return MsgValueError;
            }
            (msg__).EndRead(iter__);
            if ((!(PPrintProgressDialog::Transition(Trigger(Trigger::Recv, PPrintProgressDialog::Msg_DocTitleChange__ID), (&(mState)))))) {
                NS_WARNING("bad state transition!");
            }
            if ((!(RecvDocTitleChange(mozilla::Move(newTitle))))) {
                mozilla::ipc::ProtocolErrorBreakpoint("Handler returned error code!");
                return MsgProcessingError;
            }

            return MsgProcessed;
        }
    case PPrintProgressDialog::Msg_DocURLChange__ID:
        {
            if (mozilla::ipc::LoggingEnabledFor("PPrintProgressDialogParent")) {
                mozilla::ipc::LogMessageForProtocol("PPrintProgressDialogParent", OtherPid(), "Received ", ((&(msg__)))->type(), mozilla::ipc::MessageDirection::eReceiving);
            }
            PROFILER_LABEL("PPrintProgressDialog", "Msg_DocURLChange", js::ProfileEntry::Category::OTHER);

            PickleIterator iter__ = PickleIterator(msg__);
            nsString newURL;

            if ((!(Read((&(newURL)), (&(msg__)), (&(iter__)))))) {
                FatalError("Error deserializing 'nsString'");
                return MsgValueError;
            }
            // Sentinel = 'newURL'
            if ((!(((&(msg__)))->ReadSentinel((&(iter__)), 1179970083)))) {
                FatalError("Error deserializing 'nsString'");
                return MsgValueError;
            }
            (msg__).EndRead(iter__);
            if ((!(PPrintProgressDialog::Transition(Trigger(Trigger::Recv, PPrintProgressDialog::Msg_DocURLChange__ID), (&(mState)))))) {
                NS_WARNING("bad state transition!");
            }
            if ((!(RecvDocURLChange(mozilla::Move(newURL))))) {
                mozilla::ipc::ProtocolErrorBreakpoint("Handler returned error code!");
                return MsgProcessingError;
            }

            return MsgProcessed;
        }
    case PPrintProgressDialog::Msg___delete____ID:
        {
            if (mozilla::ipc::LoggingEnabledFor("PPrintProgressDialogParent")) {
                mozilla::ipc::LogMessageForProtocol("PPrintProgressDialogParent", OtherPid(), "Received ", ((&(msg__)))->type(), mozilla::ipc::MessageDirection::eReceiving);
            }
            PROFILER_LABEL("PPrintProgressDialog", "Msg___delete__", js::ProfileEntry::Category::OTHER);

            PickleIterator iter__ = PickleIterator(msg__);
            PPrintProgressDialogParent* actor;

            if ((!(Read((&(actor)), (&(msg__)), (&(iter__)), false)))) {
                FatalError("Error deserializing 'PPrintProgressDialogParent'");
                return MsgValueError;
            }
            // Sentinel = 'actor'
            if ((!(((&(msg__)))->ReadSentinel((&(iter__)), 875202478)))) {
                FatalError("Error deserializing 'PPrintProgressDialogParent'");
                return MsgValueError;
            }
            (msg__).EndRead(iter__);
            if ((!(PPrintProgressDialog::Transition(Trigger(Trigger::Recv, PPrintProgressDialog::Msg___delete____ID), (&(mState)))))) {
                NS_WARNING("bad state transition!");
            }
            if ((!(Recv__delete__()))) {
                mozilla::ipc::ProtocolErrorBreakpoint("Handler returned error code!");
                return MsgProcessingError;
            }


            (actor)->DestroySubtree(Deletion);
            (actor)->DeallocSubtree();
            ((actor)->Manager())->RemoveManagee(PPrintProgressDialogMsgStart, actor);

            return MsgProcessed;
        }
    default:
        {
            return MsgNotKnown;
        }
    }
}

auto PPrintProgressDialogParent::OnMessageReceived(
        const Message& msg__,
        Message*& reply__) -> PPrintProgressDialogParent::Result
{
    return MsgNotKnown;
}

auto PPrintProgressDialogParent::OnCallReceived(
        const Message& msg__,
        Message*& reply__) -> PPrintProgressDialogParent::Result
{
    MOZ_ASSERT_UNREACHABLE("message protocol not supported");
    return MsgNotKnown;
}

auto PPrintProgressDialogParent::GetProtocolTypeId() -> int32_t
{
    return PPrintProgressDialogMsgStart;
}

auto PPrintProgressDialogParent::ProtocolName() const -> const char*
{
    return "PPrintProgressDialogParent";
}

auto PPrintProgressDialogParent::DestroySubtree(ActorDestroyReason why) -> void
{
    // Unregister from our manager.
    Unregister(Id());
    SetId(1);

    // Finally, destroy "us".
    ActorDestroy(why);
}

auto PPrintProgressDialogParent::DeallocSubtree() -> void
{
}

auto PPrintProgressDialogParent::Write(
        const PPrintProgressDialogParent* v__,
        Message* msg__,
        bool nullable__) -> void
{
    int32_t id;
    if ((!(v__))) {
        if ((!(nullable__))) {
            FatalError("NULL actor value passed to non-nullable param");
        }
        id = 0;
    }
    else {
        id = (v__)->Id();
        if ((1) == (id)) {
            FatalError("actor has been |delete|d");
        }
    }

    Write(id, msg__);
}

auto PPrintProgressDialogParent::Read(
        PPrintProgressDialogParent** v__,
        const Message* msg__,
        PickleIterator* iter__,
        bool nullable__) -> bool
{
    Maybe<mozilla::ipc::IProtocol*> actor = ReadActor(msg__, iter__, nullable__, "PPrintProgressDialog", PPrintProgressDialogMsgStart);
    if ((actor).isNothing()) {
        return false;
    }

    (*(v__)) = static_cast<PPrintProgressDialogParent*>((actor).value());
    return true;
}



} // namespace embedding
} // namespace mozilla
