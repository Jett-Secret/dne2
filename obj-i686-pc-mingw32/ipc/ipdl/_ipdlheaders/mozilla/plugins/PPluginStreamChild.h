//
// Automatically generated by ipdlc.
// Edit at your own risk
//

#ifndef PPluginStreamChild_h
#define PPluginStreamChild_h

#include "mozilla/plugins/PPluginStream.h"
#ifdef DEBUG
#include "prenv.h"
#endif // DEBUG
#include "base/id_map.h"
#include "mozilla/ipc/MessageChannel.h"

// Headers for things that cannot be forward declared
#include "mozilla/plugins/PluginMessageUtils.h"
#include "npapi.h"

namespace mozilla {
namespace plugins {
class PPluginInstanceChild;
} // namespace plugins
} // namespace mozilla
namespace mozilla {
namespace plugins {
class PPluginInstanceParent;
} // namespace plugins
} // namespace mozilla

namespace mozilla {
namespace plugins {
class PPluginInstanceChild;
} // namespace plugins
} // namespace mozilla

namespace mozilla {
namespace plugins {


class PPluginStreamChild :
    public mozilla::ipc::IProtocol
{
    friend class mozilla::plugins::PPluginInstanceChild;

protected:
    typedef mozilla::ipc::ActorHandle ActorHandle;
    typedef mozilla::plugins::Buffer Buffer;
    template<class FooSide> using Endpoint = mozilla::ipc::Endpoint<FooSide>;
    typedef mozilla::ipc::FileDescriptor FileDescriptor;
    typedef base::ProcessId ProcessId;
    typedef mozilla::ipc::ProtocolId ProtocolId;
    typedef mozilla::ipc::Shmem Shmem;
    typedef mozilla::ipc::Transport Transport;
    typedef mozilla::ipc::TransportDescriptor TransportDescriptor;
    typedef mozilla::plugins::PPluginInstanceChild PPluginInstanceChild;
    typedef mozilla::plugins::PPluginInstanceParent PPluginInstanceParent;

    typedef PPluginStream::State State;

    virtual bool
    Answer__delete__(
            const NPReason& reason,
            const bool& artificial);

    virtual void
    ActorDestroy(ActorDestroyReason aWhy);

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
    MOZ_IMPLICIT PPluginStreamChild();

    virtual ~PPluginStreamChild();

    PPluginInstanceChild*
    Manager() const;

    PPluginStream::State
    state();

    bool
    CallNPN_Write(
            const Buffer& data,
            int32_t* written);

    static bool
    Call__delete__(
            PPluginStreamChild* actor,
            const NPReason& reason,
            const bool& artificial);

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
            const PPluginStreamChild* v__,
            Message* msg__,
            bool nullable__);

    MOZ_MUST_USE bool
    Read(
            PPluginStreamChild** v__,
            const Message* msg__,
            PickleIterator* iter__,
            bool nullable__);

    State mState;
};


} // namespace plugins
} // namespace mozilla

#if 0

//-----------------------------------------------------------------------------
// Skeleton implementation of abstract actor class

// Header file contents
namespace mozilla {
namespace plugins {
class PluginStreamChild :
    public PPluginStreamChild
{
    MOZ_IMPLICIT PluginStreamChild();
    virtual ~PluginStreamChild();
};
} // namespace plugins
} // namespace mozilla


// C++ file contents
namespace mozilla {
namespace plugins {
MOZ_IMPLICIT PluginStreamChild::PluginStreamChild()
{
    MOZ_COUNT_CTOR(PluginStreamChild);
}

MOZ_IMPLICIT PluginStreamChild::~PluginStreamChild()
{
    MOZ_COUNT_DTOR(PluginStreamChild);
}

} // namespace plugins
} // namespace mozilla
#endif // if 0

#endif // ifndef PPluginStreamChild_h