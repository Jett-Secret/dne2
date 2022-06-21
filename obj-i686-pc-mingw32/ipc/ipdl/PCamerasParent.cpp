//
// Automatically generated by ipdlc.
// Edit at your own risk
//


#include "mozilla/camera/PCamerasParent.h"

#include "mozilla/dom/PContentParent.h"
#include "mozilla/ipc/PBackgroundParent.h"

#include "nsIFile.h"
#include "GeckoProfiler.h"

namespace mozilla {
namespace camera {



MOZ_IMPLICIT PCamerasParent::PCamerasParent() :
    mozilla::ipc::IProtocol(mozilla::ipc::ParentSide),
    mState(PCameras::__Dead)
{
    MOZ_COUNT_CTOR(PCamerasParent);
}

PCamerasParent::~PCamerasParent()
{
    MOZ_COUNT_DTOR(PCamerasParent);
}

auto PCamerasParent::Manager() const -> PBackgroundParent*
{
    return static_cast<PBackgroundParent*>(IProtocol::Manager());
}

auto PCamerasParent::state() -> PCameras::State
{
    return mState;
}

auto PCamerasParent::SendFrameSizeChange(
        const CaptureEngine& capEngine,
        const int& cap_id,
        const int& w,
        const int& h) -> bool
{
    IPC::Message* msg__ = PCameras::Msg_FrameSizeChange(Id());

    Write(capEngine, msg__);
    // Sentinel = 'capEngine'
    (msg__)->WriteSentinel(653793175);
    Write(cap_id, msg__);
    // Sentinel = 'cap_id'
    (msg__)->WriteSentinel(2731159222);
    Write(w, msg__);
    // Sentinel = 'w'
    (msg__)->WriteSentinel(2347143926);
    Write(h, msg__);
    // Sentinel = 'h'
    (msg__)->WriteSentinel(427138153);




    if (mozilla::ipc::LoggingEnabledFor("PCamerasParent")) {
        mozilla::ipc::LogMessageForProtocol("PCamerasParent", OtherPid(), "Sending ", (msg__)->type(), mozilla::ipc::MessageDirection::eSending);
    }
    PROFILER_LABEL("PCameras", "Msg_FrameSizeChange", js::ProfileEntry::Category::OTHER);
    if ((!(PCameras::Transition(Trigger(Trigger::Send, PCameras::Msg_FrameSizeChange__ID), (&(mState)))))) {
        NS_WARNING("bad state transition!");
    }

    bool sendok__ = (GetIPCChannel())->Send(msg__);
    return sendok__;
}

auto PCamerasParent::SendDeliverFrame(
        const CaptureEngine& capEngine,
        const int& cap_id,
        Shmem& buffer,
        const size_t& size,
        const uint32_t& time_stamp,
        const int64_t& ntp_time,
        const int64_t& render_time) -> bool
{
    IPC::Message* msg__ = PCameras::Msg_DeliverFrame(Id());

    Write(capEngine, msg__);
    // Sentinel = 'capEngine'
    (msg__)->WriteSentinel(653793175);
    Write(cap_id, msg__);
    // Sentinel = 'cap_id'
    (msg__)->WriteSentinel(2731159222);
    Write(buffer, msg__);
    // Sentinel = 'buffer'
    (msg__)->WriteSentinel(4093250504);
    Write(size, msg__);
    // Sentinel = 'size'
    (msg__)->WriteSentinel(931048223);
    Write(time_stamp, msg__);
    // Sentinel = 'time_stamp'
    (msg__)->WriteSentinel(2521202361);
    Write(ntp_time, msg__);
    // Sentinel = 'ntp_time'
    (msg__)->WriteSentinel(2857123574);
    Write(render_time, msg__);
    // Sentinel = 'render_time'
    (msg__)->WriteSentinel(2620383615);




    if (mozilla::ipc::LoggingEnabledFor("PCamerasParent")) {
        mozilla::ipc::LogMessageForProtocol("PCamerasParent", OtherPid(), "Sending ", (msg__)->type(), mozilla::ipc::MessageDirection::eSending);
    }
    PROFILER_LABEL("PCameras", "Msg_DeliverFrame", js::ProfileEntry::Category::OTHER);
    if ((!(PCameras::Transition(Trigger(Trigger::Send, PCameras::Msg_DeliverFrame__ID), (&(mState)))))) {
        NS_WARNING("bad state transition!");
    }

    bool sendok__ = (GetIPCChannel())->Send(msg__);
    return sendok__;
}

auto PCamerasParent::SendDeviceChange() -> bool
{
    IPC::Message* msg__ = PCameras::Msg_DeviceChange(Id());





    if (mozilla::ipc::LoggingEnabledFor("PCamerasParent")) {
        mozilla::ipc::LogMessageForProtocol("PCamerasParent", OtherPid(), "Sending ", (msg__)->type(), mozilla::ipc::MessageDirection::eSending);
    }
    PROFILER_LABEL("PCameras", "Msg_DeviceChange", js::ProfileEntry::Category::OTHER);
    if ((!(PCameras::Transition(Trigger(Trigger::Send, PCameras::Msg_DeviceChange__ID), (&(mState)))))) {
        NS_WARNING("bad state transition!");
    }

    bool sendok__ = (GetIPCChannel())->Send(msg__);
    return sendok__;
}

auto PCamerasParent::SendReplyNumberOfCaptureDevices(const int& numdev) -> bool
{
    IPC::Message* msg__ = PCameras::Msg_ReplyNumberOfCaptureDevices(Id());

    Write(numdev, msg__);
    // Sentinel = 'numdev'
    (msg__)->WriteSentinel(2469121787);




    if (mozilla::ipc::LoggingEnabledFor("PCamerasParent")) {
        mozilla::ipc::LogMessageForProtocol("PCamerasParent", OtherPid(), "Sending ", (msg__)->type(), mozilla::ipc::MessageDirection::eSending);
    }
    PROFILER_LABEL("PCameras", "Msg_ReplyNumberOfCaptureDevices", js::ProfileEntry::Category::OTHER);
    if ((!(PCameras::Transition(Trigger(Trigger::Send, PCameras::Msg_ReplyNumberOfCaptureDevices__ID), (&(mState)))))) {
        NS_WARNING("bad state transition!");
    }

    bool sendok__ = (GetIPCChannel())->Send(msg__);
    return sendok__;
}

auto PCamerasParent::SendReplyNumberOfCapabilities(const int& numdev) -> bool
{
    IPC::Message* msg__ = PCameras::Msg_ReplyNumberOfCapabilities(Id());

    Write(numdev, msg__);
    // Sentinel = 'numdev'
    (msg__)->WriteSentinel(2469121787);




    if (mozilla::ipc::LoggingEnabledFor("PCamerasParent")) {
        mozilla::ipc::LogMessageForProtocol("PCamerasParent", OtherPid(), "Sending ", (msg__)->type(), mozilla::ipc::MessageDirection::eSending);
    }
    PROFILER_LABEL("PCameras", "Msg_ReplyNumberOfCapabilities", js::ProfileEntry::Category::OTHER);
    if ((!(PCameras::Transition(Trigger(Trigger::Send, PCameras::Msg_ReplyNumberOfCapabilities__ID), (&(mState)))))) {
        NS_WARNING("bad state transition!");
    }

    bool sendok__ = (GetIPCChannel())->Send(msg__);
    return sendok__;
}

auto PCamerasParent::SendReplyAllocateCaptureDevice(const int& numdev) -> bool
{
    IPC::Message* msg__ = PCameras::Msg_ReplyAllocateCaptureDevice(Id());

    Write(numdev, msg__);
    // Sentinel = 'numdev'
    (msg__)->WriteSentinel(2469121787);




    if (mozilla::ipc::LoggingEnabledFor("PCamerasParent")) {
        mozilla::ipc::LogMessageForProtocol("PCamerasParent", OtherPid(), "Sending ", (msg__)->type(), mozilla::ipc::MessageDirection::eSending);
    }
    PROFILER_LABEL("PCameras", "Msg_ReplyAllocateCaptureDevice", js::ProfileEntry::Category::OTHER);
    if ((!(PCameras::Transition(Trigger(Trigger::Send, PCameras::Msg_ReplyAllocateCaptureDevice__ID), (&(mState)))))) {
        NS_WARNING("bad state transition!");
    }

    bool sendok__ = (GetIPCChannel())->Send(msg__);
    return sendok__;
}

auto PCamerasParent::SendReplyGetCaptureCapability(const CaptureCapability& cap) -> bool
{
    IPC::Message* msg__ = PCameras::Msg_ReplyGetCaptureCapability(Id());

    Write(cap, msg__);
    // Sentinel = 'cap'
    (msg__)->WriteSentinel(405875051);




    if (mozilla::ipc::LoggingEnabledFor("PCamerasParent")) {
        mozilla::ipc::LogMessageForProtocol("PCamerasParent", OtherPid(), "Sending ", (msg__)->type(), mozilla::ipc::MessageDirection::eSending);
    }
    PROFILER_LABEL("PCameras", "Msg_ReplyGetCaptureCapability", js::ProfileEntry::Category::OTHER);
    if ((!(PCameras::Transition(Trigger(Trigger::Send, PCameras::Msg_ReplyGetCaptureCapability__ID), (&(mState)))))) {
        NS_WARNING("bad state transition!");
    }

    bool sendok__ = (GetIPCChannel())->Send(msg__);
    return sendok__;
}

auto PCamerasParent::SendReplyGetCaptureDevice(
        const nsCString& device_name,
        const nsCString& device_id,
        const bool& scary) -> bool
{
    IPC::Message* msg__ = PCameras::Msg_ReplyGetCaptureDevice(Id());

    Write(device_name, msg__);
    // Sentinel = 'device_name'
    (msg__)->WriteSentinel(2744663535);
    Write(device_id, msg__);
    // Sentinel = 'device_id'
    (msg__)->WriteSentinel(31832543);
    Write(scary, msg__);
    // Sentinel = 'scary'
    (msg__)->WriteSentinel(620600033);




    if (mozilla::ipc::LoggingEnabledFor("PCamerasParent")) {
        mozilla::ipc::LogMessageForProtocol("PCamerasParent", OtherPid(), "Sending ", (msg__)->type(), mozilla::ipc::MessageDirection::eSending);
    }
    PROFILER_LABEL("PCameras", "Msg_ReplyGetCaptureDevice", js::ProfileEntry::Category::OTHER);
    if ((!(PCameras::Transition(Trigger(Trigger::Send, PCameras::Msg_ReplyGetCaptureDevice__ID), (&(mState)))))) {
        NS_WARNING("bad state transition!");
    }

    bool sendok__ = (GetIPCChannel())->Send(msg__);
    return sendok__;
}

auto PCamerasParent::SendReplyFailure() -> bool
{
    IPC::Message* msg__ = PCameras::Msg_ReplyFailure(Id());





    if (mozilla::ipc::LoggingEnabledFor("PCamerasParent")) {
        mozilla::ipc::LogMessageForProtocol("PCamerasParent", OtherPid(), "Sending ", (msg__)->type(), mozilla::ipc::MessageDirection::eSending);
    }
    PROFILER_LABEL("PCameras", "Msg_ReplyFailure", js::ProfileEntry::Category::OTHER);
    if ((!(PCameras::Transition(Trigger(Trigger::Send, PCameras::Msg_ReplyFailure__ID), (&(mState)))))) {
        NS_WARNING("bad state transition!");
    }

    bool sendok__ = (GetIPCChannel())->Send(msg__);
    return sendok__;
}

auto PCamerasParent::SendReplySuccess() -> bool
{
    IPC::Message* msg__ = PCameras::Msg_ReplySuccess(Id());





    if (mozilla::ipc::LoggingEnabledFor("PCamerasParent")) {
        mozilla::ipc::LogMessageForProtocol("PCamerasParent", OtherPid(), "Sending ", (msg__)->type(), mozilla::ipc::MessageDirection::eSending);
    }
    PROFILER_LABEL("PCameras", "Msg_ReplySuccess", js::ProfileEntry::Category::OTHER);
    if ((!(PCameras::Transition(Trigger(Trigger::Send, PCameras::Msg_ReplySuccess__ID), (&(mState)))))) {
        NS_WARNING("bad state transition!");
    }

    bool sendok__ = (GetIPCChannel())->Send(msg__);
    return sendok__;
}

auto PCamerasParent::Send__delete__(PCamerasParent* actor) -> bool
{
    if ((!(actor))) {
        return false;
    }

    IPC::Message* msg__ = PCameras::Msg___delete__((actor)->Id());

    (actor)->Write(actor, msg__, false);
    // Sentinel = 'actor'
    (msg__)->WriteSentinel(875202478);



    if (mozilla::ipc::LoggingEnabledFor("PCamerasParent")) {
        mozilla::ipc::LogMessageForProtocol("PCamerasParent", (actor)->OtherPid(), "Sending ", (msg__)->type(), mozilla::ipc::MessageDirection::eSending);
    }
    PROFILER_LABEL("PCameras", "Msg___delete__", js::ProfileEntry::Category::OTHER);
    if ((!(PCameras::Transition(Trigger(Trigger::Send, PCameras::Msg___delete____ID), (&((actor)->mState)))))) {
        NS_WARNING("bad state transition!");
    }

    bool sendok__ = ((actor)->GetIPCChannel())->Send(msg__);

    (actor)->DestroySubtree(Deletion);
    (actor)->DeallocSubtree();
    ((actor)->Manager())->RemoveManagee(PCamerasMsgStart, actor);
    return sendok__;
}

auto PCamerasParent::RemoveManagee(
        int32_t aProtocolId,
        ProtocolBase* aListener) -> void
{
    FatalError("unreached");
    return;
}

auto PCamerasParent::OnMessageReceived(const Message& msg__) -> PCamerasParent::Result
{
    switch ((msg__).type()) {
    case PCameras::Reply___delete____ID:
        {
            return MsgProcessed;
        }
    case PCameras::Msg_NumberOfCaptureDevices__ID:
        {
            if (mozilla::ipc::LoggingEnabledFor("PCamerasParent")) {
                mozilla::ipc::LogMessageForProtocol("PCamerasParent", OtherPid(), "Received ", ((&(msg__)))->type(), mozilla::ipc::MessageDirection::eReceiving);
            }
            PROFILER_LABEL("PCameras", "Msg_NumberOfCaptureDevices", js::ProfileEntry::Category::OTHER);

            PickleIterator iter__ = PickleIterator(msg__);
            CaptureEngine engine;

            if ((!(Read((&(engine)), (&(msg__)), (&(iter__)))))) {
                FatalError("Error deserializing 'CaptureEngine'");
                return MsgValueError;
            }
            // Sentinel = 'engine'
            if ((!(((&(msg__)))->ReadSentinel((&(iter__)), 749038912)))) {
                FatalError("Error deserializing 'CaptureEngine'");
                return MsgValueError;
            }
            (msg__).EndRead(iter__);
            if ((!(PCameras::Transition(Trigger(Trigger::Recv, PCameras::Msg_NumberOfCaptureDevices__ID), (&(mState)))))) {
                NS_WARNING("bad state transition!");
            }
            if ((!(RecvNumberOfCaptureDevices(mozilla::Move(engine))))) {
                mozilla::ipc::ProtocolErrorBreakpoint("Handler returned error code!");
                return MsgProcessingError;
            }

            return MsgProcessed;
        }
    case PCameras::Msg_NumberOfCapabilities__ID:
        {
            if (mozilla::ipc::LoggingEnabledFor("PCamerasParent")) {
                mozilla::ipc::LogMessageForProtocol("PCamerasParent", OtherPid(), "Received ", ((&(msg__)))->type(), mozilla::ipc::MessageDirection::eReceiving);
            }
            PROFILER_LABEL("PCameras", "Msg_NumberOfCapabilities", js::ProfileEntry::Category::OTHER);

            PickleIterator iter__ = PickleIterator(msg__);
            CaptureEngine engine;
            nsCString deviceUniqueIdUTF8;

            if ((!(Read((&(engine)), (&(msg__)), (&(iter__)))))) {
                FatalError("Error deserializing 'CaptureEngine'");
                return MsgValueError;
            }
            // Sentinel = 'engine'
            if ((!(((&(msg__)))->ReadSentinel((&(iter__)), 749038912)))) {
                FatalError("Error deserializing 'CaptureEngine'");
                return MsgValueError;
            }
            if ((!(Read((&(deviceUniqueIdUTF8)), (&(msg__)), (&(iter__)))))) {
                FatalError("Error deserializing 'nsCString'");
                return MsgValueError;
            }
            // Sentinel = 'deviceUniqueIdUTF8'
            if ((!(((&(msg__)))->ReadSentinel((&(iter__)), 1853575775)))) {
                FatalError("Error deserializing 'nsCString'");
                return MsgValueError;
            }
            (msg__).EndRead(iter__);
            if ((!(PCameras::Transition(Trigger(Trigger::Recv, PCameras::Msg_NumberOfCapabilities__ID), (&(mState)))))) {
                NS_WARNING("bad state transition!");
            }
            if ((!(RecvNumberOfCapabilities(mozilla::Move(engine), mozilla::Move(deviceUniqueIdUTF8))))) {
                mozilla::ipc::ProtocolErrorBreakpoint("Handler returned error code!");
                return MsgProcessingError;
            }

            return MsgProcessed;
        }
    case PCameras::Msg_GetCaptureCapability__ID:
        {
            if (mozilla::ipc::LoggingEnabledFor("PCamerasParent")) {
                mozilla::ipc::LogMessageForProtocol("PCamerasParent", OtherPid(), "Received ", ((&(msg__)))->type(), mozilla::ipc::MessageDirection::eReceiving);
            }
            PROFILER_LABEL("PCameras", "Msg_GetCaptureCapability", js::ProfileEntry::Category::OTHER);

            PickleIterator iter__ = PickleIterator(msg__);
            CaptureEngine engine;
            nsCString unique_idUTF8;
            int capability_number;

            if ((!(Read((&(engine)), (&(msg__)), (&(iter__)))))) {
                FatalError("Error deserializing 'CaptureEngine'");
                return MsgValueError;
            }
            // Sentinel = 'engine'
            if ((!(((&(msg__)))->ReadSentinel((&(iter__)), 749038912)))) {
                FatalError("Error deserializing 'CaptureEngine'");
                return MsgValueError;
            }
            if ((!(Read((&(unique_idUTF8)), (&(msg__)), (&(iter__)))))) {
                FatalError("Error deserializing 'nsCString'");
                return MsgValueError;
            }
            // Sentinel = 'unique_idUTF8'
            if ((!(((&(msg__)))->ReadSentinel((&(iter__)), 1172699115)))) {
                FatalError("Error deserializing 'nsCString'");
                return MsgValueError;
            }
            if ((!(Read((&(capability_number)), (&(msg__)), (&(iter__)))))) {
                FatalError("Error deserializing 'int'");
                return MsgValueError;
            }
            // Sentinel = 'capability_number'
            if ((!(((&(msg__)))->ReadSentinel((&(iter__)), 2978179015)))) {
                FatalError("Error deserializing 'int'");
                return MsgValueError;
            }
            (msg__).EndRead(iter__);
            if ((!(PCameras::Transition(Trigger(Trigger::Recv, PCameras::Msg_GetCaptureCapability__ID), (&(mState)))))) {
                NS_WARNING("bad state transition!");
            }
            if ((!(RecvGetCaptureCapability(mozilla::Move(engine), mozilla::Move(unique_idUTF8), mozilla::Move(capability_number))))) {
                mozilla::ipc::ProtocolErrorBreakpoint("Handler returned error code!");
                return MsgProcessingError;
            }

            return MsgProcessed;
        }
    case PCameras::Msg_GetCaptureDevice__ID:
        {
            if (mozilla::ipc::LoggingEnabledFor("PCamerasParent")) {
                mozilla::ipc::LogMessageForProtocol("PCamerasParent", OtherPid(), "Received ", ((&(msg__)))->type(), mozilla::ipc::MessageDirection::eReceiving);
            }
            PROFILER_LABEL("PCameras", "Msg_GetCaptureDevice", js::ProfileEntry::Category::OTHER);

            PickleIterator iter__ = PickleIterator(msg__);
            CaptureEngine engine;
            int num;

            if ((!(Read((&(engine)), (&(msg__)), (&(iter__)))))) {
                FatalError("Error deserializing 'CaptureEngine'");
                return MsgValueError;
            }
            // Sentinel = 'engine'
            if ((!(((&(msg__)))->ReadSentinel((&(iter__)), 749038912)))) {
                FatalError("Error deserializing 'CaptureEngine'");
                return MsgValueError;
            }
            if ((!(Read((&(num)), (&(msg__)), (&(iter__)))))) {
                FatalError("Error deserializing 'int'");
                return MsgValueError;
            }
            // Sentinel = 'num'
            if ((!(((&(msg__)))->ReadSentinel((&(iter__)), 2933843091)))) {
                FatalError("Error deserializing 'int'");
                return MsgValueError;
            }
            (msg__).EndRead(iter__);
            if ((!(PCameras::Transition(Trigger(Trigger::Recv, PCameras::Msg_GetCaptureDevice__ID), (&(mState)))))) {
                NS_WARNING("bad state transition!");
            }
            if ((!(RecvGetCaptureDevice(mozilla::Move(engine), mozilla::Move(num))))) {
                mozilla::ipc::ProtocolErrorBreakpoint("Handler returned error code!");
                return MsgProcessingError;
            }

            return MsgProcessed;
        }
    case PCameras::Msg_AllocateCaptureDevice__ID:
        {
            if (mozilla::ipc::LoggingEnabledFor("PCamerasParent")) {
                mozilla::ipc::LogMessageForProtocol("PCamerasParent", OtherPid(), "Received ", ((&(msg__)))->type(), mozilla::ipc::MessageDirection::eReceiving);
            }
            PROFILER_LABEL("PCameras", "Msg_AllocateCaptureDevice", js::ProfileEntry::Category::OTHER);

            PickleIterator iter__ = PickleIterator(msg__);
            CaptureEngine engine;
            nsCString unique_idUTF8;
            nsCString origin;

            if ((!(Read((&(engine)), (&(msg__)), (&(iter__)))))) {
                FatalError("Error deserializing 'CaptureEngine'");
                return MsgValueError;
            }
            // Sentinel = 'engine'
            if ((!(((&(msg__)))->ReadSentinel((&(iter__)), 749038912)))) {
                FatalError("Error deserializing 'CaptureEngine'");
                return MsgValueError;
            }
            if ((!(Read((&(unique_idUTF8)), (&(msg__)), (&(iter__)))))) {
                FatalError("Error deserializing 'nsCString'");
                return MsgValueError;
            }
            // Sentinel = 'unique_idUTF8'
            if ((!(((&(msg__)))->ReadSentinel((&(iter__)), 1172699115)))) {
                FatalError("Error deserializing 'nsCString'");
                return MsgValueError;
            }
            if ((!(Read((&(origin)), (&(msg__)), (&(iter__)))))) {
                FatalError("Error deserializing 'nsCString'");
                return MsgValueError;
            }
            // Sentinel = 'origin'
            if ((!(((&(msg__)))->ReadSentinel((&(iter__)), 1429924608)))) {
                FatalError("Error deserializing 'nsCString'");
                return MsgValueError;
            }
            (msg__).EndRead(iter__);
            if ((!(PCameras::Transition(Trigger(Trigger::Recv, PCameras::Msg_AllocateCaptureDevice__ID), (&(mState)))))) {
                NS_WARNING("bad state transition!");
            }
            if ((!(RecvAllocateCaptureDevice(mozilla::Move(engine), mozilla::Move(unique_idUTF8), mozilla::Move(origin))))) {
                mozilla::ipc::ProtocolErrorBreakpoint("Handler returned error code!");
                return MsgProcessingError;
            }

            return MsgProcessed;
        }
    case PCameras::Msg_ReleaseCaptureDevice__ID:
        {
            if (mozilla::ipc::LoggingEnabledFor("PCamerasParent")) {
                mozilla::ipc::LogMessageForProtocol("PCamerasParent", OtherPid(), "Received ", ((&(msg__)))->type(), mozilla::ipc::MessageDirection::eReceiving);
            }
            PROFILER_LABEL("PCameras", "Msg_ReleaseCaptureDevice", js::ProfileEntry::Category::OTHER);

            PickleIterator iter__ = PickleIterator(msg__);
            CaptureEngine engine;
            int numdev;

            if ((!(Read((&(engine)), (&(msg__)), (&(iter__)))))) {
                FatalError("Error deserializing 'CaptureEngine'");
                return MsgValueError;
            }
            // Sentinel = 'engine'
            if ((!(((&(msg__)))->ReadSentinel((&(iter__)), 749038912)))) {
                FatalError("Error deserializing 'CaptureEngine'");
                return MsgValueError;
            }
            if ((!(Read((&(numdev)), (&(msg__)), (&(iter__)))))) {
                FatalError("Error deserializing 'int'");
                return MsgValueError;
            }
            // Sentinel = 'numdev'
            if ((!(((&(msg__)))->ReadSentinel((&(iter__)), 2469121787)))) {
                FatalError("Error deserializing 'int'");
                return MsgValueError;
            }
            (msg__).EndRead(iter__);
            if ((!(PCameras::Transition(Trigger(Trigger::Recv, PCameras::Msg_ReleaseCaptureDevice__ID), (&(mState)))))) {
                NS_WARNING("bad state transition!");
            }
            if ((!(RecvReleaseCaptureDevice(mozilla::Move(engine), mozilla::Move(numdev))))) {
                mozilla::ipc::ProtocolErrorBreakpoint("Handler returned error code!");
                return MsgProcessingError;
            }

            return MsgProcessed;
        }
    case PCameras::Msg_StartCapture__ID:
        {
            if (mozilla::ipc::LoggingEnabledFor("PCamerasParent")) {
                mozilla::ipc::LogMessageForProtocol("PCamerasParent", OtherPid(), "Received ", ((&(msg__)))->type(), mozilla::ipc::MessageDirection::eReceiving);
            }
            PROFILER_LABEL("PCameras", "Msg_StartCapture", js::ProfileEntry::Category::OTHER);

            PickleIterator iter__ = PickleIterator(msg__);
            CaptureEngine engine;
            int numdev;
            CaptureCapability capability;

            if ((!(Read((&(engine)), (&(msg__)), (&(iter__)))))) {
                FatalError("Error deserializing 'CaptureEngine'");
                return MsgValueError;
            }
            // Sentinel = 'engine'
            if ((!(((&(msg__)))->ReadSentinel((&(iter__)), 749038912)))) {
                FatalError("Error deserializing 'CaptureEngine'");
                return MsgValueError;
            }
            if ((!(Read((&(numdev)), (&(msg__)), (&(iter__)))))) {
                FatalError("Error deserializing 'int'");
                return MsgValueError;
            }
            // Sentinel = 'numdev'
            if ((!(((&(msg__)))->ReadSentinel((&(iter__)), 2469121787)))) {
                FatalError("Error deserializing 'int'");
                return MsgValueError;
            }
            if ((!(Read((&(capability)), (&(msg__)), (&(iter__)))))) {
                FatalError("Error deserializing 'CaptureCapability'");
                return MsgValueError;
            }
            // Sentinel = 'capability'
            if ((!(((&(msg__)))->ReadSentinel((&(iter__)), 2146873968)))) {
                FatalError("Error deserializing 'CaptureCapability'");
                return MsgValueError;
            }
            (msg__).EndRead(iter__);
            if ((!(PCameras::Transition(Trigger(Trigger::Recv, PCameras::Msg_StartCapture__ID), (&(mState)))))) {
                NS_WARNING("bad state transition!");
            }
            if ((!(RecvStartCapture(mozilla::Move(engine), mozilla::Move(numdev), mozilla::Move(capability))))) {
                mozilla::ipc::ProtocolErrorBreakpoint("Handler returned error code!");
                return MsgProcessingError;
            }

            return MsgProcessed;
        }
    case PCameras::Msg_StopCapture__ID:
        {
            if (mozilla::ipc::LoggingEnabledFor("PCamerasParent")) {
                mozilla::ipc::LogMessageForProtocol("PCamerasParent", OtherPid(), "Received ", ((&(msg__)))->type(), mozilla::ipc::MessageDirection::eReceiving);
            }
            PROFILER_LABEL("PCameras", "Msg_StopCapture", js::ProfileEntry::Category::OTHER);

            PickleIterator iter__ = PickleIterator(msg__);
            CaptureEngine engine;
            int numdev;

            if ((!(Read((&(engine)), (&(msg__)), (&(iter__)))))) {
                FatalError("Error deserializing 'CaptureEngine'");
                return MsgValueError;
            }
            // Sentinel = 'engine'
            if ((!(((&(msg__)))->ReadSentinel((&(iter__)), 749038912)))) {
                FatalError("Error deserializing 'CaptureEngine'");
                return MsgValueError;
            }
            if ((!(Read((&(numdev)), (&(msg__)), (&(iter__)))))) {
                FatalError("Error deserializing 'int'");
                return MsgValueError;
            }
            // Sentinel = 'numdev'
            if ((!(((&(msg__)))->ReadSentinel((&(iter__)), 2469121787)))) {
                FatalError("Error deserializing 'int'");
                return MsgValueError;
            }
            (msg__).EndRead(iter__);
            if ((!(PCameras::Transition(Trigger(Trigger::Recv, PCameras::Msg_StopCapture__ID), (&(mState)))))) {
                NS_WARNING("bad state transition!");
            }
            if ((!(RecvStopCapture(mozilla::Move(engine), mozilla::Move(numdev))))) {
                mozilla::ipc::ProtocolErrorBreakpoint("Handler returned error code!");
                return MsgProcessingError;
            }

            return MsgProcessed;
        }
    case PCameras::Msg_ReleaseFrame__ID:
        {
            if (mozilla::ipc::LoggingEnabledFor("PCamerasParent")) {
                mozilla::ipc::LogMessageForProtocol("PCamerasParent", OtherPid(), "Received ", ((&(msg__)))->type(), mozilla::ipc::MessageDirection::eReceiving);
            }
            PROFILER_LABEL("PCameras", "Msg_ReleaseFrame", js::ProfileEntry::Category::OTHER);

            PickleIterator iter__ = PickleIterator(msg__);
            Shmem s;

            if ((!(Read((&(s)), (&(msg__)), (&(iter__)))))) {
                FatalError("Error deserializing 'Shmem'");
                return MsgValueError;
            }
            // Sentinel = 's'
            if ((!(((&(msg__)))->ReadSentinel((&(iter__)), 1835142386)))) {
                FatalError("Error deserializing 'Shmem'");
                return MsgValueError;
            }
            (msg__).EndRead(iter__);
            if ((!(PCameras::Transition(Trigger(Trigger::Recv, PCameras::Msg_ReleaseFrame__ID), (&(mState)))))) {
                NS_WARNING("bad state transition!");
            }
            if ((!(RecvReleaseFrame(mozilla::Move(s))))) {
                mozilla::ipc::ProtocolErrorBreakpoint("Handler returned error code!");
                return MsgProcessingError;
            }

            return MsgProcessed;
        }
    case PCameras::Msg_AllDone__ID:
        {
            if (mozilla::ipc::LoggingEnabledFor("PCamerasParent")) {
                mozilla::ipc::LogMessageForProtocol("PCamerasParent", OtherPid(), "Received ", ((&(msg__)))->type(), mozilla::ipc::MessageDirection::eReceiving);
            }
            PROFILER_LABEL("PCameras", "Msg_AllDone", js::ProfileEntry::Category::OTHER);

            if ((!(PCameras::Transition(Trigger(Trigger::Recv, PCameras::Msg_AllDone__ID), (&(mState)))))) {
                NS_WARNING("bad state transition!");
            }
            if ((!(RecvAllDone()))) {
                mozilla::ipc::ProtocolErrorBreakpoint("Handler returned error code!");
                return MsgProcessingError;
            }

            return MsgProcessed;
        }
    case PCameras::Msg_EnsureInitialized__ID:
        {
            if (mozilla::ipc::LoggingEnabledFor("PCamerasParent")) {
                mozilla::ipc::LogMessageForProtocol("PCamerasParent", OtherPid(), "Received ", ((&(msg__)))->type(), mozilla::ipc::MessageDirection::eReceiving);
            }
            PROFILER_LABEL("PCameras", "Msg_EnsureInitialized", js::ProfileEntry::Category::OTHER);

            PickleIterator iter__ = PickleIterator(msg__);
            CaptureEngine engine;

            if ((!(Read((&(engine)), (&(msg__)), (&(iter__)))))) {
                FatalError("Error deserializing 'CaptureEngine'");
                return MsgValueError;
            }
            // Sentinel = 'engine'
            if ((!(((&(msg__)))->ReadSentinel((&(iter__)), 749038912)))) {
                FatalError("Error deserializing 'CaptureEngine'");
                return MsgValueError;
            }
            (msg__).EndRead(iter__);
            if ((!(PCameras::Transition(Trigger(Trigger::Recv, PCameras::Msg_EnsureInitialized__ID), (&(mState)))))) {
                NS_WARNING("bad state transition!");
            }
            if ((!(RecvEnsureInitialized(mozilla::Move(engine))))) {
                mozilla::ipc::ProtocolErrorBreakpoint("Handler returned error code!");
                return MsgProcessingError;
            }

            return MsgProcessed;
        }
    default:
        {
            return MsgNotKnown;
        }
    }
}

auto PCamerasParent::OnMessageReceived(
        const Message& msg__,
        Message*& reply__) -> PCamerasParent::Result
{
    return MsgNotKnown;
}

auto PCamerasParent::OnCallReceived(
        const Message& msg__,
        Message*& reply__) -> PCamerasParent::Result
{
    MOZ_ASSERT_UNREACHABLE("message protocol not supported");
    return MsgNotKnown;
}

auto PCamerasParent::GetProtocolTypeId() -> int32_t
{
    return PCamerasMsgStart;
}

auto PCamerasParent::ProtocolName() const -> const char*
{
    return "PCamerasParent";
}

auto PCamerasParent::DestroySubtree(ActorDestroyReason why) -> void
{
    // Unregister from our manager.
    Unregister(Id());
    SetId(1);

    // Finally, destroy "us".
    ActorDestroy(why);
}

auto PCamerasParent::DeallocSubtree() -> void
{
}

auto PCamerasParent::Write(
        const CaptureCapability& v__,
        Message* msg__) -> void
{
    Write((v__).width(), msg__);
    // Sentinel = 'width'
    (msg__)->WriteSentinel(1444841265);
    Write((v__).height(), msg__);
    // Sentinel = 'height'
    (msg__)->WriteSentinel(440091919);
    Write((v__).maxFPS(), msg__);
    // Sentinel = 'maxFPS'
    (msg__)->WriteSentinel(455546781);
    Write((v__).expectedCaptureDelay(), msg__);
    // Sentinel = 'expectedCaptureDelay'
    (msg__)->WriteSentinel(1711170115);
    Write((v__).rawType(), msg__);
    // Sentinel = 'rawType'
    (msg__)->WriteSentinel(112604069);
    Write((v__).codecType(), msg__);
    // Sentinel = 'codecType'
    (msg__)->WriteSentinel(133774863);
    Write((v__).interlaced(), msg__);
    // Sentinel = 'interlaced'
    (msg__)->WriteSentinel(3391760415);
}

auto PCamerasParent::Read(
        CaptureCapability* v__,
        const Message* msg__,
        PickleIterator* iter__) -> bool
{
    if ((!(Read((&((v__)->width())), msg__, iter__)))) {
        FatalError("Error deserializing 'width' (int) member of 'CaptureCapability'");
        return false;
    }
    // Sentinel = 'width'
    if ((!((msg__)->ReadSentinel(iter__, 1444841265)))) {
        FatalError("Error deserializing 'width' (int) member of 'CaptureCapability'");
        return false;
    }
    if ((!(Read((&((v__)->height())), msg__, iter__)))) {
        FatalError("Error deserializing 'height' (int) member of 'CaptureCapability'");
        return false;
    }
    // Sentinel = 'height'
    if ((!((msg__)->ReadSentinel(iter__, 440091919)))) {
        FatalError("Error deserializing 'height' (int) member of 'CaptureCapability'");
        return false;
    }
    if ((!(Read((&((v__)->maxFPS())), msg__, iter__)))) {
        FatalError("Error deserializing 'maxFPS' (int) member of 'CaptureCapability'");
        return false;
    }
    // Sentinel = 'maxFPS'
    if ((!((msg__)->ReadSentinel(iter__, 455546781)))) {
        FatalError("Error deserializing 'maxFPS' (int) member of 'CaptureCapability'");
        return false;
    }
    if ((!(Read((&((v__)->expectedCaptureDelay())), msg__, iter__)))) {
        FatalError("Error deserializing 'expectedCaptureDelay' (int) member of 'CaptureCapability'");
        return false;
    }
    // Sentinel = 'expectedCaptureDelay'
    if ((!((msg__)->ReadSentinel(iter__, 1711170115)))) {
        FatalError("Error deserializing 'expectedCaptureDelay' (int) member of 'CaptureCapability'");
        return false;
    }
    if ((!(Read((&((v__)->rawType())), msg__, iter__)))) {
        FatalError("Error deserializing 'rawType' (int) member of 'CaptureCapability'");
        return false;
    }
    // Sentinel = 'rawType'
    if ((!((msg__)->ReadSentinel(iter__, 112604069)))) {
        FatalError("Error deserializing 'rawType' (int) member of 'CaptureCapability'");
        return false;
    }
    if ((!(Read((&((v__)->codecType())), msg__, iter__)))) {
        FatalError("Error deserializing 'codecType' (int) member of 'CaptureCapability'");
        return false;
    }
    // Sentinel = 'codecType'
    if ((!((msg__)->ReadSentinel(iter__, 133774863)))) {
        FatalError("Error deserializing 'codecType' (int) member of 'CaptureCapability'");
        return false;
    }
    if ((!(Read((&((v__)->interlaced())), msg__, iter__)))) {
        FatalError("Error deserializing 'interlaced' (bool) member of 'CaptureCapability'");
        return false;
    }
    // Sentinel = 'interlaced'
    if ((!((msg__)->ReadSentinel(iter__, 3391760415)))) {
        FatalError("Error deserializing 'interlaced' (bool) member of 'CaptureCapability'");
        return false;
    }
    return true;
}

auto PCamerasParent::Write(
        const PCamerasParent* v__,
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

auto PCamerasParent::Read(
        PCamerasParent** v__,
        const Message* msg__,
        PickleIterator* iter__,
        bool nullable__) -> bool
{
    Maybe<mozilla::ipc::IProtocol*> actor = ReadActor(msg__, iter__, nullable__, "PCameras", PCamerasMsgStart);
    if ((actor).isNothing()) {
        return false;
    }

    (*(v__)) = static_cast<PCamerasParent*>((actor).value());
    return true;
}

auto PCamerasParent::Write(
        Shmem& v__,
        Message* msg__) -> void
{
    IPC::WriteParam(msg__, v__);
    (v__).RevokeRights(Shmem::IHadBetterBeIPDLCodeCallingThis_OtherwiseIAmADoodyhead());
    (v__).forget(Shmem::IHadBetterBeIPDLCodeCallingThis_OtherwiseIAmADoodyhead());
}

auto PCamerasParent::Read(
        Shmem* v__,
        const Message* msg__,
        PickleIterator* iter__) -> bool
{
    Shmem tmp;
    if ((!(IPC::ReadParam(msg__, iter__, (&(tmp)))))) {
        return false;
    }

    Shmem::id_t shmemid = (tmp).Id(Shmem::IHadBetterBeIPDLCodeCallingThis_OtherwiseIAmADoodyhead());
    Shmem::SharedMemory* rawmem = LookupSharedMemory(shmemid);
    if (rawmem) {
        (*(v__)) = Shmem(Shmem::IHadBetterBeIPDLCodeCallingThis_OtherwiseIAmADoodyhead(), rawmem, shmemid);
        return true;
    }
    (*(v__)) = Shmem();
    return true;
}



} // namespace camera
} // namespace mozilla
