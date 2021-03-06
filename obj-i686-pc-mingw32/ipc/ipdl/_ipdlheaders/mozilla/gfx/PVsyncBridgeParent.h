//
// Automatically generated by ipdlc.
// Edit at your own risk
//

#ifndef PVsyncBridgeParent_h
#define PVsyncBridgeParent_h

#include "mozilla/gfx/PVsyncBridge.h"
#ifdef DEBUG
#include "prenv.h"
#endif // DEBUG
#include "base/id_map.h"
#include "mozilla/ipc/MessageChannel.h"

class nsIFile;

namespace mozilla {
class TimeStamp;
} // namespace mozilla

namespace mozilla {
namespace gfx {


class PVsyncBridgeParent :
    public mozilla::ipc::IToplevelProtocol
{
protected:
    typedef mozilla::ipc::ActorHandle ActorHandle;
    template<class FooSide> using Endpoint = mozilla::ipc::Endpoint<FooSide>;
    typedef mozilla::ipc::FileDescriptor FileDescriptor;
    typedef base::ProcessId ProcessId;
    typedef mozilla::ipc::ProtocolId ProtocolId;
    typedef mozilla::ipc::Shmem Shmem;
    typedef mozilla::TimeStamp TimeStamp;
    typedef mozilla::ipc::Transport Transport;
    typedef mozilla::ipc::TransportDescriptor TransportDescriptor;

    typedef PVsyncBridge::State State;

    virtual bool
    RecvNotifyVsync(
            const TimeStamp& vsyncTimeStamp,
            const uint64_t& layersId) = 0;

    virtual void
    ActorDestroy(ActorDestroyReason aWhy) = 0;

    virtual void
    ProcessingError(
            Result aCode,
            const char* aReason);
    virtual bool
    ShouldContinueFromReplyTimeout();
    virtual void
    EnteredCxxStack();
    virtual void
    ExitedCxxStack();
    virtual void
    EnteredCall();
    virtual void
    ExitedCall();

public:
    typedef mozilla::ipc::IProtocol ProtocolBase;
    typedef IPC::Message Message;
    typedef mozilla::ipc::MessageChannel Channel;
    typedef mozilla::ipc::IProtocol ChannelListener;
    typedef base::ProcessHandle ProcessHandle;
    typedef mozilla::ipc::MessageChannel MessageChannel;
    typedef mozilla::ipc::SharedMemory SharedMemory;
    typedef mozilla::ipc::Trigger Trigger;

public:
    MOZ_IMPLICIT PVsyncBridgeParent();

    virtual ~PVsyncBridgeParent();

    PVsyncBridge::State
    state();

    virtual MessageChannel*
    GetIPCChannel();
    virtual const MessageChannel*
    GetIPCChannel() const;
    virtual void
    RemoveManagee(
            int32_t aProtocolId,
            ProtocolBase* aListener);

    virtual Result
    OnMessageReceived(const Message& msg__);

    virtual Result
    OnMessageReceived(
            const Message& msg__,
            Message*& reply__);

    virtual Result
    OnCallReceived(
            const Message& msg__,
            Message*& reply__);

    int32_t
    GetProtocolTypeId();

    void
    OnChannelClose();

    void
    OnChannelError();

private:
    virtual const char*
    ProtocolName() const;

    void
    DestroySubtree(ActorDestroyReason why);

    void
    DeallocSubtree();

    virtual void
    DeallocPVsyncBridgeParent();

    template<typename T>
    void
    Write(
            const T& v__,
            Message* msg__)
    {
        IPC::WriteParam(msg__, v__);
    }

    template<typename T>
    bool
    Read(
            T* v__,
            const Message* msg__,
            PickleIterator* iter__)
    {
        return IPC::ReadParam(msg__, iter__, v__);
    }

    Channel mChannel;
    State mState;
};


} // namespace gfx
} // namespace mozilla

#if 0

//-----------------------------------------------------------------------------
// Skeleton implementation of abstract actor class

// Header file contents
namespace mozilla {
namespace gfx {
class VsyncBridgeParent :
    public PVsyncBridgeParent
{
    virtual bool
    RecvNotifyVsync(
            const TimeStamp& vsyncTimeStamp,
            const uint64_t& layersId);

    virtual void
    ActorDestroy(ActorDestroyReason aWhy);

    MOZ_IMPLICIT VsyncBridgeParent();
    virtual ~VsyncBridgeParent();
};
} // namespace gfx
} // namespace mozilla


// C++ file contents
namespace mozilla {
namespace gfx {
bool
VsyncBridgeParent::RecvNotifyVsync(
        const TimeStamp& vsyncTimeStamp,
        const uint64_t& layersId)
{
    return false;
}

void
VsyncBridgeParent::ActorDestroy(ActorDestroyReason aWhy)
{
}

MOZ_IMPLICIT VsyncBridgeParent::VsyncBridgeParent()
{
    MOZ_COUNT_CTOR(VsyncBridgeParent);
}

MOZ_IMPLICIT VsyncBridgeParent::~VsyncBridgeParent()
{
    MOZ_COUNT_DTOR(VsyncBridgeParent);
}

} // namespace gfx
} // namespace mozilla
#endif // if 0

#endif // ifndef PVsyncBridgeParent_h
