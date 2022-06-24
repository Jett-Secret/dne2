//
// Automatically generated by ipdlc.
// Edit at your own risk
//

#ifndef PUDPSocketParent_h
#define PUDPSocketParent_h

#include "mozilla/net/PUDPSocket.h"
#ifdef DEBUG
#include "prenv.h"
#endif // DEBUG
#include "base/id_map.h"
#include "mozilla/ipc/MessageChannel.h"

// Headers for things that cannot be forward declared
#include "mozilla/net/DNS.h"
#include "mozilla/net/NeckoMessageUtils.h"
#include "prio.h"

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
namespace ipc {
class PBackgroundParent;
} // namespace ipc
} // namespace mozilla
namespace mozilla {
namespace ipc {
class PBackgroundChild;
} // namespace ipc
} // namespace mozilla

namespace mozilla {
namespace dom {
class PBlobParent;
} // namespace dom
} // namespace mozilla
namespace mozilla {
namespace dom {
class PBlobChild;
} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace ipc {
class PBackgroundParent;
} // namespace ipc
} // namespace mozilla

namespace mozilla {
namespace net {
class PNeckoParent;
} // namespace net
} // namespace mozilla

namespace mozilla {
struct void_t;
} // namespace mozilla

namespace mozilla {
namespace net {


class PUDPSocketParent :
    public mozilla::ipc::IProtocol
{
    friend class mozilla::ipc::PBackgroundParent;

    friend class mozilla::net::PNeckoParent;

protected:
    typedef mozilla::ipc::ActorHandle ActorHandle;
    typedef mozilla::ipc::BufferedInputStreamParams BufferedInputStreamParams;
    template<class FooSide> using Endpoint = mozilla::ipc::Endpoint<FooSide>;
    typedef mozilla::ipc::FileDescriptor FileDescriptor;
    typedef mozilla::ipc::FileInputStreamParams FileInputStreamParams;
    typedef mozilla::ipc::InputStreamParams InputStreamParams;
    typedef mozilla::ipc::MIMEInputStreamParams MIMEInputStreamParams;
    typedef mozilla::ipc::MultiplexInputStreamParams MultiplexInputStreamParams;
    typedef mozilla::net::NetAddr NetAddr;
    typedef mozilla::ipc::OptionalInputStreamParams OptionalInputStreamParams;
    typedef mozilla::ipc::PartialFileInputStreamParams PartialFileInputStreamParams;
    typedef base::ProcessId ProcessId;
    typedef mozilla::ipc::ProtocolFdMapping ProtocolFdMapping;
    typedef mozilla::ipc::ProtocolId ProtocolId;
    typedef mozilla::ipc::RemoteInputStreamParams RemoteInputStreamParams;
    typedef mozilla::ipc::SameProcessInputStreamParams SameProcessInputStreamParams;
    typedef mozilla::ipc::Shmem Shmem;
    typedef mozilla::ipc::StringInputStreamParams StringInputStreamParams;
    typedef mozilla::ipc::TemporaryFileInputStreamParams TemporaryFileInputStreamParams;
    typedef mozilla::ipc::Transport Transport;
    typedef mozilla::ipc::TransportDescriptor TransportDescriptor;
    typedef mozilla::void_t void_t;
    typedef mozilla::net::PNeckoParent PNeckoParent;
    typedef mozilla::net::PNeckoChild PNeckoChild;
    typedef mozilla::ipc::PBackgroundParent PBackgroundParent;
    typedef mozilla::ipc::PBackgroundChild PBackgroundChild;
    typedef mozilla::dom::PBlobParent PBlobParent;
    typedef mozilla::dom::PBlobChild PBlobChild;

    typedef PUDPSocket::State State;

    virtual bool
    RecvBind(
            const UDPAddressInfo& addressInfo,
            const bool& addressReuse,
            const bool& loopback,
            const uint32_t& recvBufferSize,
            const uint32_t& sendBufferSize) = 0;
    virtual bool
    RecvConnect(const UDPAddressInfo& addressInfo) = 0;
    virtual bool
    RecvOutgoingData(
            const UDPData& data,
            const UDPSocketAddr& addr) = 0;
    virtual bool
    RecvJoinMulticast(
            const nsCString& multicastAddress,
            const nsCString& iface) = 0;
    virtual bool
    RecvLeaveMulticast(
            const nsCString& multicastAddress,
            const nsCString& iface) = 0;
    virtual bool
    RecvClose() = 0;
    virtual bool
    RecvRequestDelete() = 0;

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
    MOZ_IMPLICIT PUDPSocketParent();

    virtual ~PUDPSocketParent();

    PUDPSocket::State
    state();

    MOZ_MUST_USE bool
    SendCallbackOpened(const UDPAddressInfo& addressInfo);

    MOZ_MUST_USE bool
    SendCallbackConnected(const UDPAddressInfo& addressInfo);

    MOZ_MUST_USE bool
    SendCallbackClosed();

    MOZ_MUST_USE bool
    SendCallbackReceivedData(
            const UDPAddressInfo& addressInfo,
            const nsTArray<uint8_t>& data);

    MOZ_MUST_USE bool
    SendCallbackError(
            const nsCString& message,
            const nsCString& filename,
            const uint32_t& lineNumber);

    MOZ_MUST_USE static bool
    Send__delete__(PUDPSocketParent* actor);

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
            const StringInputStreamParams& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            StringInputStreamParams* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const FileInputStreamParams& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            FileInputStreamParams* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const PUDPSocketParent* v__,
            Message* msg__,
            bool nullable__);

    MOZ_MUST_USE bool
    Read(
            PUDPSocketParent** v__,
            const Message* msg__,
            PickleIterator* iter__,
            bool nullable__);

    void
    Write(
            const MultiplexInputStreamParams& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            MultiplexInputStreamParams* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const nsTArray<InputStreamParams>& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            nsTArray<InputStreamParams>* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const OptionalInputStreamParams& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            OptionalInputStreamParams* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const TemporaryFileInputStreamParams& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            TemporaryFileInputStreamParams* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const MIMEInputStreamParams& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            MIMEInputStreamParams* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const InputStreamParams& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            InputStreamParams* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const BufferedInputStreamParams& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            BufferedInputStreamParams* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const SameProcessInputStreamParams& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            SameProcessInputStreamParams* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const UDPSocketAddr& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            UDPSocketAddr* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const PartialFileInputStreamParams& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            PartialFileInputStreamParams* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const RemoteInputStreamParams& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            RemoteInputStreamParams* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const UDPAddressInfo& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            UDPAddressInfo* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const UDPData& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            UDPData* v__,
            const Message* msg__,
            PickleIterator* iter__);

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
class UDPSocketParent :
    public PUDPSocketParent
{
    virtual bool
    RecvBind(
            const UDPAddressInfo& addressInfo,
            const bool& addressReuse,
            const bool& loopback,
            const uint32_t& recvBufferSize,
            const uint32_t& sendBufferSize);

    virtual bool
    RecvConnect(const UDPAddressInfo& addressInfo);

    virtual bool
    RecvOutgoingData(
            const UDPData& data,
            const UDPSocketAddr& addr);

    virtual bool
    RecvJoinMulticast(
            const nsCString& multicastAddress,
            const nsCString& iface);

    virtual bool
    RecvLeaveMulticast(
            const nsCString& multicastAddress,
            const nsCString& iface);

    virtual bool
    RecvClose();

    virtual bool
    RecvRequestDelete();

    virtual void
    ActorDestroy(ActorDestroyReason aWhy);

    MOZ_IMPLICIT UDPSocketParent();
    virtual ~UDPSocketParent();
};
} // namespace net
} // namespace mozilla


// C++ file contents
namespace mozilla {
namespace net {
bool
UDPSocketParent::RecvBind(
        const UDPAddressInfo& addressInfo,
        const bool& addressReuse,
        const bool& loopback,
        const uint32_t& recvBufferSize,
        const uint32_t& sendBufferSize)
{
    return false;
}

bool
UDPSocketParent::RecvConnect(const UDPAddressInfo& addressInfo)
{
    return false;
}

bool
UDPSocketParent::RecvOutgoingData(
        const UDPData& data,
        const UDPSocketAddr& addr)
{
    return false;
}

bool
UDPSocketParent::RecvJoinMulticast(
        const nsCString& multicastAddress,
        const nsCString& iface)
{
    return false;
}

bool
UDPSocketParent::RecvLeaveMulticast(
        const nsCString& multicastAddress,
        const nsCString& iface)
{
    return false;
}

bool
UDPSocketParent::RecvClose()
{
    return false;
}

bool
UDPSocketParent::RecvRequestDelete()
{
    return false;
}

void
UDPSocketParent::ActorDestroy(ActorDestroyReason aWhy)
{
}

MOZ_IMPLICIT UDPSocketParent::UDPSocketParent()
{
    MOZ_COUNT_CTOR(UDPSocketParent);
}

MOZ_IMPLICIT UDPSocketParent::~UDPSocketParent()
{
    MOZ_COUNT_DTOR(UDPSocketParent);
}

} // namespace net
} // namespace mozilla
#endif // if 0

#endif // ifndef PUDPSocketParent_h
