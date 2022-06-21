//
// Automatically generated by ipdlc.
// Edit at your own risk
//

#ifndef PRtspChannelParent_h
#define PRtspChannelParent_h

#include "mozilla/net/PRtspChannel.h"
#ifdef DEBUG
#include "prenv.h"
#endif // DEBUG
#include "base/id_map.h"
#include "mozilla/ipc/MessageChannel.h"

namespace mozilla {
namespace net {
class PNeckoParent;
} // namespace net
} // namespace mozilla
namespace mozilla {
namespace net {
class PNeckoChild;
} // namespace net
} // namespace mozilla

namespace mozilla {
namespace net {
class PNeckoParent;
} // namespace net
} // namespace mozilla

namespace mozilla {
namespace net {


class PRtspChannelParent :
    public mozilla::ipc::IProtocol
{
    friend class mozilla::net::PNeckoParent;

protected:
    typedef mozilla::ipc::ActorHandle ActorHandle;
    typedef mozilla::ipc::ContentPrincipalInfo ContentPrincipalInfo;
    typedef mozilla::ipc::ContentPrincipalInfoOriginNoSuffix ContentPrincipalInfoOriginNoSuffix;
    template<class FooSide> using Endpoint = mozilla::ipc::Endpoint<FooSide>;
    typedef mozilla::ipc::ExpandedPrincipalInfo ExpandedPrincipalInfo;
    typedef mozilla::ipc::FileDescriptor FileDescriptor;
    typedef mozilla::ipc::HostObjectURIParams HostObjectURIParams;
    typedef mozilla::ipc::IconURIParams IconURIParams;
    typedef mozilla::ipc::JARURIParams JARURIParams;
    typedef mozilla::ipc::JSURIParams JSURIParams;
    typedef mozilla::ipc::NullPrincipalInfo NullPrincipalInfo;
    typedef mozilla::ipc::NullPrincipalURIParams NullPrincipalURIParams;
    typedef mozilla::ipc::OptionalPrincipalInfo OptionalPrincipalInfo;
    typedef mozilla::ipc::OptionalURIParams OptionalURIParams;
    typedef mozilla::ipc::PrincipalInfo PrincipalInfo;
    typedef mozilla::PrincipalOriginAttributes PrincipalOriginAttributes;
    typedef base::ProcessId ProcessId;
    typedef mozilla::ipc::ProtocolId ProtocolId;
    typedef mozilla::ipc::Shmem Shmem;
    typedef mozilla::ipc::SimpleNestedURIParams SimpleNestedURIParams;
    typedef mozilla::ipc::SimpleURIParams SimpleURIParams;
    typedef mozilla::ipc::StandardURLParams StandardURLParams;
    typedef mozilla::ipc::StandardURLSegment StandardURLSegment;
    typedef mozilla::ipc::SystemPrincipalInfo SystemPrincipalInfo;
    typedef mozilla::ipc::Transport Transport;
    typedef mozilla::ipc::TransportDescriptor TransportDescriptor;
    typedef mozilla::ipc::URIParams URIParams;
    typedef mozilla::void_t void_t;
    typedef mozilla::net::PNeckoParent PNeckoParent;
    typedef mozilla::net::PNeckoChild PNeckoChild;

    typedef PRtspChannel::State State;

    virtual bool
    Recv__delete__();

    virtual void
    ActorDestroy(ActorDestroyReason aWhy) = 0;

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
    MOZ_IMPLICIT PRtspChannelParent();

    virtual ~PRtspChannelParent();

    PNeckoParent*
    Manager() const;

    PRtspChannel::State
    state();

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

private:
    virtual const char*
    ProtocolName() const;

    void
    DestroySubtree(ActorDestroyReason why);

    void
    DeallocSubtree();

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

    void
    Write(
            const PRtspChannelParent* v__,
            Message* msg__,
            bool nullable__);

    MOZ_MUST_USE bool
    Read(
            PRtspChannelParent** v__,
            const Message* msg__,
            PickleIterator* iter__,
            bool nullable__);

    State mState;
};


} // namespace net
} // namespace mozilla

#if 0

//-----------------------------------------------------------------------------
// Skeleton implementation of abstract actor class

// Header file contents
namespace mozilla {
namespace net {
class RtspChannelParent :
    public PRtspChannelParent
{
    virtual void
    ActorDestroy(ActorDestroyReason aWhy);

    MOZ_IMPLICIT RtspChannelParent();
    virtual ~RtspChannelParent();
};
} // namespace net
} // namespace mozilla


// C++ file contents
namespace mozilla {
namespace net {
void
RtspChannelParent::ActorDestroy(ActorDestroyReason aWhy)
{
}

MOZ_IMPLICIT RtspChannelParent::RtspChannelParent()
{
    MOZ_COUNT_CTOR(RtspChannelParent);
}

MOZ_IMPLICIT RtspChannelParent::~RtspChannelParent()
{
    MOZ_COUNT_DTOR(RtspChannelParent);
}

} // namespace net
} // namespace mozilla
#endif // if 0

#endif // ifndef PRtspChannelParent_h