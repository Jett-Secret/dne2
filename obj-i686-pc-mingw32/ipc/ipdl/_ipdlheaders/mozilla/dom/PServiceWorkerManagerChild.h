//
// Automatically generated by ipdlc.
// Edit at your own risk
//

#ifndef PServiceWorkerManagerChild_h
#define PServiceWorkerManagerChild_h

#include "mozilla/dom/PServiceWorkerManager.h"
#ifdef DEBUG
#include "prenv.h"
#endif // DEBUG
#include "base/id_map.h"
#include "mozilla/ipc/MessageChannel.h"

// Headers for things that cannot be forward declared
#include "mozilla/ipc/BackgroundUtils.h"

namespace mozilla {
namespace ipc {
class PBackgroundChild;
} // namespace ipc
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


class PServiceWorkerManagerChild :
    public mozilla::ipc::IProtocol
{
    friend class mozilla::ipc::PBackgroundChild;

protected:
    typedef mozilla::ipc::ActorHandle ActorHandle;
    typedef mozilla::ipc::ContentPrincipalInfo ContentPrincipalInfo;
    typedef mozilla::ipc::ContentPrincipalInfoOriginNoSuffix ContentPrincipalInfoOriginNoSuffix;
    template<class FooSide> using Endpoint = mozilla::ipc::Endpoint<FooSide>;
    typedef mozilla::ipc::ExpandedPrincipalInfo ExpandedPrincipalInfo;
    typedef mozilla::ipc::FileDescriptor FileDescriptor;
    typedef mozilla::ipc::NullPrincipalInfo NullPrincipalInfo;
    typedef mozilla::ipc::OptionalPrincipalInfo OptionalPrincipalInfo;
    typedef mozilla::ipc::PrincipalInfo PrincipalInfo;
    typedef mozilla::PrincipalOriginAttributes PrincipalOriginAttributes;
    typedef base::ProcessId ProcessId;
    typedef mozilla::ipc::ProtocolId ProtocolId;
    typedef mozilla::dom::ServiceWorkerRegistrationData ServiceWorkerRegistrationData;
    typedef mozilla::ipc::Shmem Shmem;
    typedef mozilla::ipc::SystemPrincipalInfo SystemPrincipalInfo;
    typedef mozilla::ipc::Transport Transport;
    typedef mozilla::ipc::TransportDescriptor TransportDescriptor;
    typedef mozilla::void_t void_t;
    typedef mozilla::ipc::PBackgroundChild PBackgroundChild;
    typedef mozilla::ipc::PBackgroundParent PBackgroundParent;

    typedef PServiceWorkerManager::State State;

    virtual bool
    RecvNotifyRegister(const ServiceWorkerRegistrationData& data) = 0;
    virtual bool
    RecvNotifySoftUpdate(
            const PrincipalOriginAttributes& originAttributes,
            const nsString& scope) = 0;
    virtual bool
    RecvNotifyUnregister(
            const PrincipalInfo& principalInfo,
            const nsString& scope) = 0;
    virtual bool
    RecvNotifyRemove(const nsCString& host) = 0;
    virtual bool
    RecvNotifyRemoveAll() = 0;
    virtual bool
    Recv__delete__();

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
    MOZ_IMPLICIT PServiceWorkerManagerChild();

    virtual ~PServiceWorkerManagerChild();

    PBackgroundChild*
    Manager() const;

    PServiceWorkerManager::State
    state();

    bool
    SendRegister(const ServiceWorkerRegistrationData& data);

    bool
    SendUnregister(
            const PrincipalInfo& principalInfo,
            const nsString& scope);

    bool
    SendPropagateSoftUpdate(
            const PrincipalOriginAttributes& originAttributes,
            const nsString& scope);

    bool
    SendPropagateUnregister(
            const PrincipalInfo& principalInfo,
            const nsString& scope);

    bool
    SendPropagateRemove(const nsCString& host);

    bool
    SendPropagateRemoveAll();

    bool
    SendShutdown();

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
            const SystemPrincipalInfo& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            SystemPrincipalInfo* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const nsTArray<PrincipalInfo>& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            nsTArray<PrincipalInfo>* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const ExpandedPrincipalInfo& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            ExpandedPrincipalInfo* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const PrincipalInfo& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            PrincipalInfo* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const ContentPrincipalInfoOriginNoSuffix& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            ContentPrincipalInfoOriginNoSuffix* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const PServiceWorkerManagerChild* v__,
            Message* msg__,
            bool nullable__);

    MOZ_MUST_USE bool
    Read(
            PServiceWorkerManagerChild** v__,
            const Message* msg__,
            PickleIterator* iter__,
            bool nullable__);

    void
    Write(
            const ContentPrincipalInfo& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            ContentPrincipalInfo* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const NullPrincipalInfo& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            NullPrincipalInfo* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const ServiceWorkerRegistrationData& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            ServiceWorkerRegistrationData* v__,
            const Message* msg__,
            PickleIterator* iter__);

    State mState;
};


} // namespace dom
} // namespace mozilla

#if 0

//-----------------------------------------------------------------------------
// Skeleton implementation of abstract actor class

// Header file contents
namespace mozilla {
namespace dom {
class ServiceWorkerManagerChild :
    public PServiceWorkerManagerChild
{
    virtual bool
    RecvNotifyRegister(const ServiceWorkerRegistrationData& data);

    virtual bool
    RecvNotifySoftUpdate(
            const PrincipalOriginAttributes& originAttributes,
            const nsString& scope);

    virtual bool
    RecvNotifyUnregister(
            const PrincipalInfo& principalInfo,
            const nsString& scope);

    virtual bool
    RecvNotifyRemove(const nsCString& host);

    virtual bool
    RecvNotifyRemoveAll();

    MOZ_IMPLICIT ServiceWorkerManagerChild();
    virtual ~ServiceWorkerManagerChild();
};
} // namespace dom
} // namespace mozilla


// C++ file contents
namespace mozilla {
namespace dom {
bool
ServiceWorkerManagerChild::RecvNotifyRegister(const ServiceWorkerRegistrationData& data)
{
    return false;
}

bool
ServiceWorkerManagerChild::RecvNotifySoftUpdate(
        const PrincipalOriginAttributes& originAttributes,
        const nsString& scope)
{
    return false;
}

bool
ServiceWorkerManagerChild::RecvNotifyUnregister(
        const PrincipalInfo& principalInfo,
        const nsString& scope)
{
    return false;
}

bool
ServiceWorkerManagerChild::RecvNotifyRemove(const nsCString& host)
{
    return false;
}

bool
ServiceWorkerManagerChild::RecvNotifyRemoveAll()
{
    return false;
}

MOZ_IMPLICIT ServiceWorkerManagerChild::ServiceWorkerManagerChild()
{
    MOZ_COUNT_CTOR(ServiceWorkerManagerChild);
}

MOZ_IMPLICIT ServiceWorkerManagerChild::~ServiceWorkerManagerChild()
{
    MOZ_COUNT_DTOR(ServiceWorkerManagerChild);
}

} // namespace dom
} // namespace mozilla
#endif // if 0

#endif // ifndef PServiceWorkerManagerChild_h
