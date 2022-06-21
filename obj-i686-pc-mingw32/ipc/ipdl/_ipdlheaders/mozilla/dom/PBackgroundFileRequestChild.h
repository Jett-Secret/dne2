//
// Automatically generated by ipdlc.
// Edit at your own risk
//

#ifndef PBackgroundFileRequestChild_h
#define PBackgroundFileRequestChild_h

#include "mozilla/dom/PBackgroundFileRequest.h"
#ifdef DEBUG
#include "prenv.h"
#endif // DEBUG
#include "base/id_map.h"
#include "mozilla/ipc/MessageChannel.h"

namespace mozilla {
namespace dom {
class PBackgroundFileHandleChild;
} // namespace dom
} // namespace mozilla
namespace mozilla {
namespace dom {
class PBackgroundFileHandleParent;
} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {
class PBlobChild;
} // namespace dom
} // namespace mozilla
namespace mozilla {
namespace dom {
class PBlobParent;
} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {
class PBackgroundFileHandleChild;
} // namespace dom
} // namespace mozilla

namespace mozilla {
struct void_t;
} // namespace mozilla

namespace mozilla {
namespace dom {


class PBackgroundFileRequestChild :
    public mozilla::ipc::IProtocol
{
    friend class mozilla::dom::PBackgroundFileHandleChild;

protected:
    typedef mozilla::ipc::ActorHandle ActorHandle;
    template<class FooSide> using Endpoint = mozilla::ipc::Endpoint<FooSide>;
    typedef mozilla::ipc::FileDescriptor FileDescriptor;
    typedef mozilla::dom::FileRequestFlushResponse FileRequestFlushResponse;
    typedef mozilla::dom::FileRequestGetFileResponse FileRequestGetFileResponse;
    typedef mozilla::dom::FileRequestGetMetadataResponse FileRequestGetMetadataResponse;
    typedef mozilla::dom::FileRequestLastModified FileRequestLastModified;
    typedef mozilla::dom::FileRequestMetadata FileRequestMetadata;
    typedef mozilla::dom::FileRequestReadResponse FileRequestReadResponse;
    typedef mozilla::dom::FileRequestResponse FileRequestResponse;
    typedef mozilla::dom::FileRequestSize FileRequestSize;
    typedef mozilla::dom::FileRequestTruncateResponse FileRequestTruncateResponse;
    typedef mozilla::dom::FileRequestWriteResponse FileRequestWriteResponse;
    typedef base::ProcessId ProcessId;
    typedef mozilla::ipc::ProtocolId ProtocolId;
    typedef mozilla::ipc::Shmem Shmem;
    typedef mozilla::ipc::Transport Transport;
    typedef mozilla::ipc::TransportDescriptor TransportDescriptor;
    typedef mozilla::void_t void_t;
    typedef mozilla::dom::PBackgroundFileHandleChild PBackgroundFileHandleChild;
    typedef mozilla::dom::PBackgroundFileHandleParent PBackgroundFileHandleParent;
    typedef mozilla::dom::PBlobChild PBlobChild;
    typedef mozilla::dom::PBlobParent PBlobParent;

    typedef PBackgroundFileRequest::State State;

    virtual bool
    Recv__delete__(const FileRequestResponse& response);
    virtual bool
    RecvProgress(
            const uint64_t& progress,
            const uint64_t& progressMax) = 0;

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
    MOZ_IMPLICIT PBackgroundFileRequestChild();

    virtual ~PBackgroundFileRequestChild();

    PBackgroundFileHandleChild*
    Manager() const;

    PBackgroundFileRequest::State
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
            const FileRequestGetMetadataResponse& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            FileRequestGetMetadataResponse* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const FileRequestSize& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            FileRequestSize* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const FileRequestWriteResponse& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            FileRequestWriteResponse* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const FileRequestResponse& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            FileRequestResponse* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const FileRequestReadResponse& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            FileRequestReadResponse* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const FileRequestTruncateResponse& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            FileRequestTruncateResponse* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const FileRequestGetFileResponse& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            FileRequestGetFileResponse* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const FileRequestLastModified& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            FileRequestLastModified* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const PBackgroundFileRequestChild* v__,
            Message* msg__,
            bool nullable__);

    MOZ_MUST_USE bool
    Read(
            PBackgroundFileRequestChild** v__,
            const Message* msg__,
            PickleIterator* iter__,
            bool nullable__);

    void
    Write(
            const FileRequestFlushResponse& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            FileRequestFlushResponse* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const FileRequestMetadata& v__,
            Message* msg__);

    MOZ_MUST_USE bool
    Read(
            FileRequestMetadata* v__,
            const Message* msg__,
            PickleIterator* iter__);

    void
    Write(
            const PBlobChild* v__,
            Message* msg__,
            bool nullable__);

    MOZ_MUST_USE bool
    Read(
            PBlobChild** v__,
            const Message* msg__,
            PickleIterator* iter__,
            bool nullable__);

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
class BackgroundFileRequestChild :
    public PBackgroundFileRequestChild
{
    virtual bool
    RecvProgress(
            const uint64_t& progress,
            const uint64_t& progressMax);

    MOZ_IMPLICIT BackgroundFileRequestChild();
    virtual ~BackgroundFileRequestChild();
};
} // namespace dom
} // namespace mozilla


// C++ file contents
namespace mozilla {
namespace dom {
bool
BackgroundFileRequestChild::RecvProgress(
        const uint64_t& progress,
        const uint64_t& progressMax)
{
    return false;
}

MOZ_IMPLICIT BackgroundFileRequestChild::BackgroundFileRequestChild()
{
    MOZ_COUNT_CTOR(BackgroundFileRequestChild);
}

MOZ_IMPLICIT BackgroundFileRequestChild::~BackgroundFileRequestChild()
{
    MOZ_COUNT_DTOR(BackgroundFileRequestChild);
}

} // namespace dom
} // namespace mozilla
#endif // if 0

#endif // ifndef PBackgroundFileRequestChild_h
