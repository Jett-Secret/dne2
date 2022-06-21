//
// Automatically generated by ipdlc.
// Edit at your own risk
//


#include "mozilla/layout/PVsyncParent.h"
#include "mozilla/TimeStamp.h"

#include "mozilla/ipc/PBackgroundParent.h"

#include "nsIFile.h"
#include "GeckoProfiler.h"

namespace mozilla {
namespace layout {


auto PVsyncParent::Recv__delete__() -> bool
{
    return true;
}


MOZ_IMPLICIT PVsyncParent::PVsyncParent() :
    mozilla::ipc::IProtocol(mozilla::ipc::ParentSide),
    mState(PVsync::__Dead)
{
    MOZ_COUNT_CTOR(PVsyncParent);
}

PVsyncParent::~PVsyncParent()
{
    MOZ_COUNT_DTOR(PVsyncParent);
}

auto PVsyncParent::Manager() const -> PBackgroundParent*
{
    return static_cast<PBackgroundParent*>(IProtocol::Manager());
}

auto PVsyncParent::state() -> PVsync::State
{
    return mState;
}

auto PVsyncParent::SendNotify(const TimeStamp& aVsyncTimestamp) -> bool
{
    IPC::Message* msg__ = PVsync::Msg_Notify(Id());

    Write(aVsyncTimestamp, msg__);
    // Sentinel = 'aVsyncTimestamp'
    (msg__)->WriteSentinel(4125926023);




    if (mozilla::ipc::LoggingEnabledFor("PVsyncParent")) {
        mozilla::ipc::LogMessageForProtocol("PVsyncParent", OtherPid(), "Sending ", (msg__)->type(), mozilla::ipc::MessageDirection::eSending);
    }
    PROFILER_LABEL("PVsync", "Msg_Notify", js::ProfileEntry::Category::OTHER);
    if ((!(PVsync::Transition(Trigger(Trigger::Send, PVsync::Msg_Notify__ID), (&(mState)))))) {
        NS_WARNING("bad state transition!");
    }

    bool sendok__ = (GetIPCChannel())->Send(msg__);
    return sendok__;
}

auto PVsyncParent::SendVsyncRate(const float& aVsyncRate) -> bool
{
    IPC::Message* msg__ = PVsync::Msg_VsyncRate(Id());

    Write(aVsyncRate, msg__);
    // Sentinel = 'aVsyncRate'
    (msg__)->WriteSentinel(4032022932);




    if (mozilla::ipc::LoggingEnabledFor("PVsyncParent")) {
        mozilla::ipc::LogMessageForProtocol("PVsyncParent", OtherPid(), "Sending ", (msg__)->type(), mozilla::ipc::MessageDirection::eSending);
    }
    PROFILER_LABEL("PVsync", "Msg_VsyncRate", js::ProfileEntry::Category::OTHER);
    if ((!(PVsync::Transition(Trigger(Trigger::Send, PVsync::Msg_VsyncRate__ID), (&(mState)))))) {
        NS_WARNING("bad state transition!");
    }

    bool sendok__ = (GetIPCChannel())->Send(msg__);
    return sendok__;
}

auto PVsyncParent::RemoveManagee(
        int32_t aProtocolId,
        ProtocolBase* aListener) -> void
{
    FatalError("unreached");
    return;
}

auto PVsyncParent::OnMessageReceived(const Message& msg__) -> PVsyncParent::Result
{
    switch ((msg__).type()) {
    case PVsync::Msg_Observe__ID:
        {
            if (mozilla::ipc::LoggingEnabledFor("PVsyncParent")) {
                mozilla::ipc::LogMessageForProtocol("PVsyncParent", OtherPid(), "Received ", ((&(msg__)))->type(), mozilla::ipc::MessageDirection::eReceiving);
            }
            PROFILER_LABEL("PVsync", "Msg_Observe", js::ProfileEntry::Category::OTHER);

            if ((!(PVsync::Transition(Trigger(Trigger::Recv, PVsync::Msg_Observe__ID), (&(mState)))))) {
                NS_WARNING("bad state transition!");
            }
            if ((!(RecvObserve()))) {
                mozilla::ipc::ProtocolErrorBreakpoint("Handler returned error code!");
                return MsgProcessingError;
            }

            return MsgProcessed;
        }
    case PVsync::Msg_Unobserve__ID:
        {
            if (mozilla::ipc::LoggingEnabledFor("PVsyncParent")) {
                mozilla::ipc::LogMessageForProtocol("PVsyncParent", OtherPid(), "Received ", ((&(msg__)))->type(), mozilla::ipc::MessageDirection::eReceiving);
            }
            PROFILER_LABEL("PVsync", "Msg_Unobserve", js::ProfileEntry::Category::OTHER);

            if ((!(PVsync::Transition(Trigger(Trigger::Recv, PVsync::Msg_Unobserve__ID), (&(mState)))))) {
                NS_WARNING("bad state transition!");
            }
            if ((!(RecvUnobserve()))) {
                mozilla::ipc::ProtocolErrorBreakpoint("Handler returned error code!");
                return MsgProcessingError;
            }

            return MsgProcessed;
        }
    case PVsync::Msg_RequestVsyncRate__ID:
        {
            if (mozilla::ipc::LoggingEnabledFor("PVsyncParent")) {
                mozilla::ipc::LogMessageForProtocol("PVsyncParent", OtherPid(), "Received ", ((&(msg__)))->type(), mozilla::ipc::MessageDirection::eReceiving);
            }
            PROFILER_LABEL("PVsync", "Msg_RequestVsyncRate", js::ProfileEntry::Category::OTHER);

            if ((!(PVsync::Transition(Trigger(Trigger::Recv, PVsync::Msg_RequestVsyncRate__ID), (&(mState)))))) {
                NS_WARNING("bad state transition!");
            }
            if ((!(RecvRequestVsyncRate()))) {
                mozilla::ipc::ProtocolErrorBreakpoint("Handler returned error code!");
                return MsgProcessingError;
            }

            return MsgProcessed;
        }
    case PVsync::Msg___delete____ID:
        {
            if (mozilla::ipc::LoggingEnabledFor("PVsyncParent")) {
                mozilla::ipc::LogMessageForProtocol("PVsyncParent", OtherPid(), "Received ", ((&(msg__)))->type(), mozilla::ipc::MessageDirection::eReceiving);
            }
            PROFILER_LABEL("PVsync", "Msg___delete__", js::ProfileEntry::Category::OTHER);

            PickleIterator iter__ = PickleIterator(msg__);
            PVsyncParent* actor;

            if ((!(Read((&(actor)), (&(msg__)), (&(iter__)), false)))) {
                FatalError("Error deserializing 'PVsyncParent'");
                return MsgValueError;
            }
            // Sentinel = 'actor'
            if ((!(((&(msg__)))->ReadSentinel((&(iter__)), 875202478)))) {
                FatalError("Error deserializing 'PVsyncParent'");
                return MsgValueError;
            }
            (msg__).EndRead(iter__);
            if ((!(PVsync::Transition(Trigger(Trigger::Recv, PVsync::Msg___delete____ID), (&(mState)))))) {
                NS_WARNING("bad state transition!");
            }
            if ((!(Recv__delete__()))) {
                mozilla::ipc::ProtocolErrorBreakpoint("Handler returned error code!");
                return MsgProcessingError;
            }


            (actor)->DestroySubtree(Deletion);
            (actor)->DeallocSubtree();
            ((actor)->Manager())->RemoveManagee(PVsyncMsgStart, actor);

            return MsgProcessed;
        }
    default:
        {
            return MsgNotKnown;
        }
    }
}

auto PVsyncParent::OnMessageReceived(
        const Message& msg__,
        Message*& reply__) -> PVsyncParent::Result
{
    return MsgNotKnown;
}

auto PVsyncParent::OnCallReceived(
        const Message& msg__,
        Message*& reply__) -> PVsyncParent::Result
{
    MOZ_ASSERT_UNREACHABLE("message protocol not supported");
    return MsgNotKnown;
}

auto PVsyncParent::GetProtocolTypeId() -> int32_t
{
    return PVsyncMsgStart;
}

auto PVsyncParent::ProtocolName() const -> const char*
{
    return "PVsyncParent";
}

auto PVsyncParent::DestroySubtree(ActorDestroyReason why) -> void
{
    // Unregister from our manager.
    Unregister(Id());
    SetId(1);

    // Finally, destroy "us".
    ActorDestroy(why);
}

auto PVsyncParent::DeallocSubtree() -> void
{
}

auto PVsyncParent::Write(
        const PVsyncParent* v__,
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

auto PVsyncParent::Read(
        PVsyncParent** v__,
        const Message* msg__,
        PickleIterator* iter__,
        bool nullable__) -> bool
{
    Maybe<mozilla::ipc::IProtocol*> actor = ReadActor(msg__, iter__, nullable__, "PVsync", PVsyncMsgStart);
    if ((actor).isNothing()) {
        return false;
    }

    (*(v__)) = static_cast<PVsyncParent*>((actor).value());
    return true;
}



} // namespace layout
} // namespace mozilla
