//
// Automatically generated by ipdlc.
// Edit at your own risk
//


#include "mozilla/dom/quota/PQuotaRequest.h"

namespace mozilla {
namespace dom {
namespace quota {
namespace PQuotaRequest {

nsresult
CreateEndpoints(
        base::ProcessId aParentDestPid,
        base::ProcessId aChildDestPid,
        mozilla::ipc::Endpoint<mozilla::dom::quota::PQuotaRequestParent>* aParent,
        mozilla::ipc::Endpoint<mozilla::dom::quota::PQuotaRequestChild>* aChild)
{
    return mozilla::ipc::CreateEndpoints(mozilla::ipc::PrivateIPDLInterface(), aParentDestPid, aChildDestPid, PQuotaRequestMsgStart, PQuotaRequestMsgStartChild, aParent, aChild);
}
bool
Transition(
        mozilla::ipc::Trigger trigger,
        State* next)
{
    State from = (*(next));
    switch (from) {
    case __Null:
    case __Error:
        if ((Msg___delete____ID) == ((trigger).mMessage)) {
            (*(next)) = __Dead;
            return true;
        }
        return (__Null) == (from);
    case __Dead:
        mozilla::ipc::LogicError("__delete__()d actor");
        return false;
    case __Dying:
        mozilla::ipc::LogicError("__delete__()d (and unexpectedly dying) actor");
        return false;
    default:
        mozilla::ipc::LogicError("corrupted actor state");
        return false;
    }
}
IPC::Message*
Msg___delete__(int32_t routingId)
{
    return new IPC::Message(routingId, Msg___delete____ID, IPC::Message::NOT_NESTED, IPC::Message::NORMAL_PRIORITY, IPC::Message::COMPRESSION_NONE, "PQuotaRequest::Msg___delete__");
}
IPC::Message*
Reply___delete__(int32_t routingId)
{
    return new IPC::Message(routingId, Reply___delete____ID, IPC::Message::NOT_NESTED, IPC::Message::NORMAL_PRIORITY, IPC::Message::COMPRESSION_NONE, "PQuotaRequest::Reply___delete__");
}

} // namespace PQuotaRequest
} // namespace quota
} // namespace dom
} // namespace mozilla

//-----------------------------------------------------------------------------
// Method definitions for the IPDL type |struct ClearOriginResponse|
//
namespace mozilla {
namespace dom {
namespace quota {
ClearOriginResponse::~ClearOriginResponse()
{
}

auto ClearOriginResponse::operator==(const ClearOriginResponse& _o) const -> bool
{
    return true;
}

auto ClearOriginResponse::Init() -> void
{
}

auto ClearOriginResponse::Assign() -> void
{
}

} // namespace quota
} // namespace dom
} // namespace mozilla

//-----------------------------------------------------------------------------
// Method definitions for the IPDL type |struct ClearOriginsResponse|
//
namespace mozilla {
namespace dom {
namespace quota {
ClearOriginsResponse::~ClearOriginsResponse()
{
}

auto ClearOriginsResponse::operator==(const ClearOriginsResponse& _o) const -> bool
{
    return true;
}

auto ClearOriginsResponse::Init() -> void
{
}

auto ClearOriginsResponse::Assign() -> void
{
}

} // namespace quota
} // namespace dom
} // namespace mozilla

//-----------------------------------------------------------------------------
// Method definitions for the IPDL type |struct ClearAllResponse|
//
namespace mozilla {
namespace dom {
namespace quota {
ClearAllResponse::~ClearAllResponse()
{
}

auto ClearAllResponse::operator==(const ClearAllResponse& _o) const -> bool
{
    return true;
}

auto ClearAllResponse::Init() -> void
{
}

auto ClearAllResponse::Assign() -> void
{
}

} // namespace quota
} // namespace dom
} // namespace mozilla

//-----------------------------------------------------------------------------
// Method definitions for the IPDL type |struct ResetAllResponse|
//
namespace mozilla {
namespace dom {
namespace quota {
ResetAllResponse::~ResetAllResponse()
{
}

auto ResetAllResponse::operator==(const ResetAllResponse& _o) const -> bool
{
    return true;
}

auto ResetAllResponse::Init() -> void
{
}

auto ResetAllResponse::Assign() -> void
{
}

} // namespace quota
} // namespace dom
} // namespace mozilla

//-----------------------------------------------------------------------------
// Method definitions for the IPDL type |union RequestResponse|
//
namespace mozilla {
namespace dom {
namespace quota {
auto RequestResponse::MaybeDestroy(Type aNewType) -> bool
{
    if ((mType) == (T__None)) {
        return true;
    }
    if ((mType) == (aNewType)) {
        return false;
    }
    switch (mType) {
    case Tnsresult:
        {
            (ptr_nsresult())->~nsresult__tdef();
            break;
        }
    case TClearOriginResponse:
        {
            (ptr_ClearOriginResponse())->~ClearOriginResponse__tdef();
            break;
        }
    case TClearOriginsResponse:
        {
            (ptr_ClearOriginsResponse())->~ClearOriginsResponse__tdef();
            break;
        }
    case TClearAllResponse:
        {
            (ptr_ClearAllResponse())->~ClearAllResponse__tdef();
            break;
        }
    case TResetAllResponse:
        {
            (ptr_ResetAllResponse())->~ResetAllResponse__tdef();
            break;
        }
    default:
        {
            mozilla::ipc::LogicError("not reached");
            break;
        }
    }
    return true;
}

MOZ_IMPLICIT RequestResponse::RequestResponse(const nsresult& aOther)
{
    new (mozilla::KnownNotNull, ptr_nsresult()) nsresult(aOther);
    mType = Tnsresult;
}

MOZ_IMPLICIT RequestResponse::RequestResponse(const ClearOriginResponse& aOther)
{
    new (mozilla::KnownNotNull, ptr_ClearOriginResponse()) ClearOriginResponse(aOther);
    mType = TClearOriginResponse;
}

MOZ_IMPLICIT RequestResponse::RequestResponse(const ClearOriginsResponse& aOther)
{
    new (mozilla::KnownNotNull, ptr_ClearOriginsResponse()) ClearOriginsResponse(aOther);
    mType = TClearOriginsResponse;
}

MOZ_IMPLICIT RequestResponse::RequestResponse(const ClearAllResponse& aOther)
{
    new (mozilla::KnownNotNull, ptr_ClearAllResponse()) ClearAllResponse(aOther);
    mType = TClearAllResponse;
}

MOZ_IMPLICIT RequestResponse::RequestResponse(const ResetAllResponse& aOther)
{
    new (mozilla::KnownNotNull, ptr_ResetAllResponse()) ResetAllResponse(aOther);
    mType = TResetAllResponse;
}

MOZ_IMPLICIT RequestResponse::RequestResponse(const RequestResponse& aOther)
{
    (aOther).AssertSanity();
    switch ((aOther).type()) {
    case Tnsresult:
        {
            new (mozilla::KnownNotNull, ptr_nsresult()) nsresult((aOther).get_nsresult());
            break;
        }
    case TClearOriginResponse:
        {
            new (mozilla::KnownNotNull, ptr_ClearOriginResponse()) ClearOriginResponse((aOther).get_ClearOriginResponse());
            break;
        }
    case TClearOriginsResponse:
        {
            new (mozilla::KnownNotNull, ptr_ClearOriginsResponse()) ClearOriginsResponse((aOther).get_ClearOriginsResponse());
            break;
        }
    case TClearAllResponse:
        {
            new (mozilla::KnownNotNull, ptr_ClearAllResponse()) ClearAllResponse((aOther).get_ClearAllResponse());
            break;
        }
    case TResetAllResponse:
        {
            new (mozilla::KnownNotNull, ptr_ResetAllResponse()) ResetAllResponse((aOther).get_ResetAllResponse());
            break;
        }
    case T__None:
        {
            break;
        }
    default:
        {
            mozilla::ipc::LogicError("unreached");
            return;
        }
    }
    mType = (aOther).type();
}

RequestResponse::~RequestResponse()
{
    static_cast<void>(MaybeDestroy(T__None));
}

auto RequestResponse::operator=(const nsresult& aRhs) -> RequestResponse&
{
    if (MaybeDestroy(Tnsresult)) {
        new (mozilla::KnownNotNull, ptr_nsresult()) nsresult;
    }
    (*(ptr_nsresult())) = aRhs;
    mType = Tnsresult;
    return (*(this));
}

auto RequestResponse::operator=(const ClearOriginResponse& aRhs) -> RequestResponse&
{
    if (MaybeDestroy(TClearOriginResponse)) {
        new (mozilla::KnownNotNull, ptr_ClearOriginResponse()) ClearOriginResponse;
    }
    (*(ptr_ClearOriginResponse())) = aRhs;
    mType = TClearOriginResponse;
    return (*(this));
}

auto RequestResponse::operator=(const ClearOriginsResponse& aRhs) -> RequestResponse&
{
    if (MaybeDestroy(TClearOriginsResponse)) {
        new (mozilla::KnownNotNull, ptr_ClearOriginsResponse()) ClearOriginsResponse;
    }
    (*(ptr_ClearOriginsResponse())) = aRhs;
    mType = TClearOriginsResponse;
    return (*(this));
}

auto RequestResponse::operator=(const ClearAllResponse& aRhs) -> RequestResponse&
{
    if (MaybeDestroy(TClearAllResponse)) {
        new (mozilla::KnownNotNull, ptr_ClearAllResponse()) ClearAllResponse;
    }
    (*(ptr_ClearAllResponse())) = aRhs;
    mType = TClearAllResponse;
    return (*(this));
}

auto RequestResponse::operator=(const ResetAllResponse& aRhs) -> RequestResponse&
{
    if (MaybeDestroy(TResetAllResponse)) {
        new (mozilla::KnownNotNull, ptr_ResetAllResponse()) ResetAllResponse;
    }
    (*(ptr_ResetAllResponse())) = aRhs;
    mType = TResetAllResponse;
    return (*(this));
}

auto RequestResponse::operator=(const RequestResponse& aRhs) -> RequestResponse&
{
    (aRhs).AssertSanity();
    Type t = (aRhs).type();
    switch (t) {
    case Tnsresult:
        {
            if (MaybeDestroy(t)) {
                new (mozilla::KnownNotNull, ptr_nsresult()) nsresult;
            }
            (*(ptr_nsresult())) = (aRhs).get_nsresult();
            break;
        }
    case TClearOriginResponse:
        {
            if (MaybeDestroy(t)) {
                new (mozilla::KnownNotNull, ptr_ClearOriginResponse()) ClearOriginResponse;
            }
            (*(ptr_ClearOriginResponse())) = (aRhs).get_ClearOriginResponse();
            break;
        }
    case TClearOriginsResponse:
        {
            if (MaybeDestroy(t)) {
                new (mozilla::KnownNotNull, ptr_ClearOriginsResponse()) ClearOriginsResponse;
            }
            (*(ptr_ClearOriginsResponse())) = (aRhs).get_ClearOriginsResponse();
            break;
        }
    case TClearAllResponse:
        {
            if (MaybeDestroy(t)) {
                new (mozilla::KnownNotNull, ptr_ClearAllResponse()) ClearAllResponse;
            }
            (*(ptr_ClearAllResponse())) = (aRhs).get_ClearAllResponse();
            break;
        }
    case TResetAllResponse:
        {
            if (MaybeDestroy(t)) {
                new (mozilla::KnownNotNull, ptr_ResetAllResponse()) ResetAllResponse;
            }
            (*(ptr_ResetAllResponse())) = (aRhs).get_ResetAllResponse();
            break;
        }
    case T__None:
        {
            static_cast<void>(MaybeDestroy(t));
            break;
        }
    default:
        {
            mozilla::ipc::LogicError("unreached");
            break;
        }
    }
    mType = t;
    return (*(this));
}

auto RequestResponse::operator==(const nsresult& aRhs) const -> bool
{
    return (get_nsresult()) == (aRhs);
}

auto RequestResponse::operator==(const ClearOriginResponse& aRhs) const -> bool
{
    return (get_ClearOriginResponse()) == (aRhs);
}

auto RequestResponse::operator==(const ClearOriginsResponse& aRhs) const -> bool
{
    return (get_ClearOriginsResponse()) == (aRhs);
}

auto RequestResponse::operator==(const ClearAllResponse& aRhs) const -> bool
{
    return (get_ClearAllResponse()) == (aRhs);
}

auto RequestResponse::operator==(const ResetAllResponse& aRhs) const -> bool
{
    return (get_ResetAllResponse()) == (aRhs);
}

auto RequestResponse::operator==(const RequestResponse& aRhs) const -> bool
{
    if ((type()) != ((aRhs).type())) {
        return false;
    }

    switch (type()) {
    case Tnsresult:
        {
            return (get_nsresult()) == ((aRhs).get_nsresult());
        }
    case TClearOriginResponse:
        {
            return (get_ClearOriginResponse()) == ((aRhs).get_ClearOriginResponse());
        }
    case TClearOriginsResponse:
        {
            return (get_ClearOriginsResponse()) == ((aRhs).get_ClearOriginsResponse());
        }
    case TClearAllResponse:
        {
            return (get_ClearAllResponse()) == ((aRhs).get_ClearAllResponse());
        }
    case TResetAllResponse:
        {
            return (get_ResetAllResponse()) == ((aRhs).get_ResetAllResponse());
        }
    default:
        {
            mozilla::ipc::LogicError("unreached");
            return false;
        }
    }
}

auto RequestResponse::get(nsresult* aOutValue) const -> void
{
    (*(aOutValue)) = get_nsresult();
}

auto RequestResponse::get(ClearOriginResponse* aOutValue) const -> void
{
    (*(aOutValue)) = get_ClearOriginResponse();
}

auto RequestResponse::get(ClearOriginsResponse* aOutValue) const -> void
{
    (*(aOutValue)) = get_ClearOriginsResponse();
}

auto RequestResponse::get(ClearAllResponse* aOutValue) const -> void
{
    (*(aOutValue)) = get_ClearAllResponse();
}

auto RequestResponse::get(ResetAllResponse* aOutValue) const -> void
{
    (*(aOutValue)) = get_ResetAllResponse();
}

} // namespace quota
} // namespace dom
} // namespace mozilla