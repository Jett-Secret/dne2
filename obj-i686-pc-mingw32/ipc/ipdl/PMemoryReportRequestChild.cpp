//
// Automatically generated by ipdlc.
// Edit at your own risk
//


#include "mozilla/dom/PMemoryReportRequestChild.h"

#include "mozilla/dom/PContentChild.h"

#include "nsIFile.h"
#include "GeckoProfiler.h"

namespace mozilla {
namespace dom {


auto PMemoryReportRequestChild::ActorDestroy(ActorDestroyReason aWhy) -> void
{
}

MOZ_IMPLICIT PMemoryReportRequestChild::PMemoryReportRequestChild() :
    mozilla::ipc::IProtocol(mozilla::ipc::ChildSide),
    mState(PMemoryReportRequest::__Dead)
{
    MOZ_COUNT_CTOR(PMemoryReportRequestChild);
}

PMemoryReportRequestChild::~PMemoryReportRequestChild()
{
    MOZ_COUNT_DTOR(PMemoryReportRequestChild);
}

auto PMemoryReportRequestChild::Manager() const -> PContentChild*
{
    return static_cast<PContentChild*>(IProtocol::Manager());
}

auto PMemoryReportRequestChild::state() -> PMemoryReportRequest::State
{
    return mState;
}

auto PMemoryReportRequestChild::SendReport(const MemoryReport& aReport) -> bool
{
    IPC::Message* msg__ = PMemoryReportRequest::Msg_Report(Id());

    Write(aReport, msg__);
    // Sentinel = 'aReport'
    (msg__)->WriteSentinel(3792799576);




    if (mozilla::ipc::LoggingEnabledFor("PMemoryReportRequestChild")) {
        mozilla::ipc::LogMessageForProtocol("PMemoryReportRequestChild", OtherPid(), "Sending ", (msg__)->type(), mozilla::ipc::MessageDirection::eSending);
    }
    PROFILER_LABEL("PMemoryReportRequest", "Msg_Report", js::ProfileEntry::Category::OTHER);
    if ((!(PMemoryReportRequest::Transition(Trigger(Trigger::Recv, PMemoryReportRequest::Msg_Report__ID), (&(mState)))))) {
        NS_WARNING("bad state transition!");
    }

    bool sendok__ = (GetIPCChannel())->Send(msg__);
    return sendok__;
}

auto PMemoryReportRequestChild::Send__delete__(PMemoryReportRequestChild* actor) -> bool
{
    if ((!(actor))) {
        return false;
    }

    IPC::Message* msg__ = PMemoryReportRequest::Msg___delete__((actor)->Id());

    (actor)->Write(actor, msg__, false);
    // Sentinel = 'actor'
    (msg__)->WriteSentinel(875202478);



    if (mozilla::ipc::LoggingEnabledFor("PMemoryReportRequestChild")) {
        mozilla::ipc::LogMessageForProtocol("PMemoryReportRequestChild", (actor)->OtherPid(), "Sending ", (msg__)->type(), mozilla::ipc::MessageDirection::eSending);
    }
    PROFILER_LABEL("PMemoryReportRequest", "Msg___delete__", js::ProfileEntry::Category::OTHER);
    if ((!(PMemoryReportRequest::Transition(Trigger(Trigger::Recv, PMemoryReportRequest::Msg___delete____ID), (&((actor)->mState)))))) {
        NS_WARNING("bad state transition!");
    }

    bool sendok__ = ((actor)->GetIPCChannel())->Send(msg__);

    (actor)->DestroySubtree(Deletion);
    (actor)->DeallocSubtree();
    ((actor)->Manager())->RemoveManagee(PMemoryReportRequestMsgStart, actor);
    return sendok__;
}

auto PMemoryReportRequestChild::RemoveManagee(
        int32_t aProtocolId,
        ProtocolBase* aListener) -> void
{
    FatalError("unreached");
    return;
}

auto PMemoryReportRequestChild::OnMessageReceived(const Message& msg__) -> PMemoryReportRequestChild::Result
{
    switch ((msg__).type()) {
    case PMemoryReportRequest::Reply___delete____ID:
        {
            return MsgProcessed;
        }
    default:
        {
            return MsgNotKnown;
        }
    }
}

auto PMemoryReportRequestChild::OnMessageReceived(
        const Message& msg__,
        Message*& reply__) -> PMemoryReportRequestChild::Result
{
    return MsgNotKnown;
}

auto PMemoryReportRequestChild::OnCallReceived(
        const Message& msg__,
        Message*& reply__) -> PMemoryReportRequestChild::Result
{
    MOZ_ASSERT_UNREACHABLE("message protocol not supported");
    return MsgNotKnown;
}

auto PMemoryReportRequestChild::GetProtocolTypeId() -> int32_t
{
    return PMemoryReportRequestMsgStart;
}

auto PMemoryReportRequestChild::ProtocolName() const -> const char*
{
    return "PMemoryReportRequestChild";
}

auto PMemoryReportRequestChild::DestroySubtree(ActorDestroyReason why) -> void
{
    // Unregister from our manager.
    Unregister(Id());
    SetId(1);

    // Finally, destroy "us".
    ActorDestroy(why);
}

auto PMemoryReportRequestChild::DeallocSubtree() -> void
{
}

auto PMemoryReportRequestChild::Write(
        const PMemoryReportRequestChild* v__,
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

auto PMemoryReportRequestChild::Read(
        PMemoryReportRequestChild** v__,
        const Message* msg__,
        PickleIterator* iter__,
        bool nullable__) -> bool
{
    Maybe<mozilla::ipc::IProtocol*> actor = ReadActor(msg__, iter__, nullable__, "PMemoryReportRequest", PMemoryReportRequestMsgStart);
    if ((actor).isNothing()) {
        return false;
    }

    (*(v__)) = static_cast<PMemoryReportRequestChild*>((actor).value());
    return true;
}

auto PMemoryReportRequestChild::Write(
        const MemoryReport& v__,
        Message* msg__) -> void
{
    Write((v__).process(), msg__);
    // Sentinel = 'process'
    (msg__)->WriteSentinel(2642549128);
    Write((v__).path(), msg__);
    // Sentinel = 'path'
    (msg__)->WriteSentinel(913629401);
    Write((v__).kind(), msg__);
    // Sentinel = 'kind'
    (msg__)->WriteSentinel(2950460258);
    Write((v__).units(), msg__);
    // Sentinel = 'units'
    (msg__)->WriteSentinel(4054023608);
    Write((v__).amount(), msg__);
    // Sentinel = 'amount'
    (msg__)->WriteSentinel(2439491826);
    Write((v__).desc(), msg__);
    // Sentinel = 'desc'
    (msg__)->WriteSentinel(3761872479);
}

auto PMemoryReportRequestChild::Read(
        MemoryReport* v__,
        const Message* msg__,
        PickleIterator* iter__) -> bool
{
    if ((!(Read((&((v__)->process())), msg__, iter__)))) {
        FatalError("Error deserializing 'process' (nsCString) member of 'MemoryReport'");
        return false;
    }
    // Sentinel = 'process'
    if ((!((msg__)->ReadSentinel(iter__, 2642549128)))) {
        FatalError("Error deserializing 'process' (nsCString) member of 'MemoryReport'");
        return false;
    }
    if ((!(Read((&((v__)->path())), msg__, iter__)))) {
        FatalError("Error deserializing 'path' (nsCString) member of 'MemoryReport'");
        return false;
    }
    // Sentinel = 'path'
    if ((!((msg__)->ReadSentinel(iter__, 913629401)))) {
        FatalError("Error deserializing 'path' (nsCString) member of 'MemoryReport'");
        return false;
    }
    if ((!(Read((&((v__)->kind())), msg__, iter__)))) {
        FatalError("Error deserializing 'kind' (int32_t) member of 'MemoryReport'");
        return false;
    }
    // Sentinel = 'kind'
    if ((!((msg__)->ReadSentinel(iter__, 2950460258)))) {
        FatalError("Error deserializing 'kind' (int32_t) member of 'MemoryReport'");
        return false;
    }
    if ((!(Read((&((v__)->units())), msg__, iter__)))) {
        FatalError("Error deserializing 'units' (int32_t) member of 'MemoryReport'");
        return false;
    }
    // Sentinel = 'units'
    if ((!((msg__)->ReadSentinel(iter__, 4054023608)))) {
        FatalError("Error deserializing 'units' (int32_t) member of 'MemoryReport'");
        return false;
    }
    if ((!(Read((&((v__)->amount())), msg__, iter__)))) {
        FatalError("Error deserializing 'amount' (int64_t) member of 'MemoryReport'");
        return false;
    }
    // Sentinel = 'amount'
    if ((!((msg__)->ReadSentinel(iter__, 2439491826)))) {
        FatalError("Error deserializing 'amount' (int64_t) member of 'MemoryReport'");
        return false;
    }
    if ((!(Read((&((v__)->desc())), msg__, iter__)))) {
        FatalError("Error deserializing 'desc' (nsCString) member of 'MemoryReport'");
        return false;
    }
    // Sentinel = 'desc'
    if ((!((msg__)->ReadSentinel(iter__, 3761872479)))) {
        FatalError("Error deserializing 'desc' (nsCString) member of 'MemoryReport'");
        return false;
    }
    return true;
}



} // namespace dom
} // namespace mozilla
