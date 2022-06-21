//
// Automatically generated by ipdlc.
// Edit at your own risk
//


#include "mozilla/gfx/GraphicsMessages.h"


//-----------------------------------------------------------------------------
// Method definitions for the IPDL type |struct D3D11DeviceStatus|
//
namespace mozilla {
namespace gfx {
MOZ_IMPLICIT D3D11DeviceStatus::D3D11DeviceStatus() :
    isWARP_(),
    textureSharingWorks_(),
    featureLevel_(),
    adapter_()
{
    Init();
}

D3D11DeviceStatus::~D3D11DeviceStatus()
{
}

auto D3D11DeviceStatus::operator==(const D3D11DeviceStatus& _o) const -> bool
{
    if ((!((isWARP()) == ((_o).isWARP())))) {
        return false;
    }
    if ((!((textureSharingWorks()) == ((_o).textureSharingWorks())))) {
        return false;
    }
    if ((!((featureLevel()) == ((_o).featureLevel())))) {
        return false;
    }
    if ((!((adapter()) == ((_o).adapter())))) {
        return false;
    }
    return true;
}

auto D3D11DeviceStatus::Init() -> void
{
}

auto D3D11DeviceStatus::Assign(
        const bool& _isWARP,
        const bool& _textureSharingWorks,
        const uint32_t& _featureLevel,
        const DxgiAdapterDesc& _adapter) -> void
{
    isWARP_ = _isWARP;
    textureSharingWorks_ = _textureSharingWorks;
    featureLevel_ = _featureLevel;
    adapter_ = _adapter;
}

} // namespace gfx
} // namespace mozilla

//-----------------------------------------------------------------------------
// Method definitions for the IPDL type |struct DevicePrefs|
//
namespace mozilla {
namespace gfx {
MOZ_IMPLICIT DevicePrefs::DevicePrefs() :
    hwCompositing_(),
    d3d11Compositing_(),
    d3d9Compositing_(),
    oglCompositing_(),
    useD2D1_()
{
    Init();
}

DevicePrefs::~DevicePrefs()
{
}

auto DevicePrefs::operator==(const DevicePrefs& _o) const -> bool
{
    if ((!((hwCompositing()) == ((_o).hwCompositing())))) {
        return false;
    }
    if ((!((d3d11Compositing()) == ((_o).d3d11Compositing())))) {
        return false;
    }
    if ((!((d3d9Compositing()) == ((_o).d3d9Compositing())))) {
        return false;
    }
    if ((!((oglCompositing()) == ((_o).oglCompositing())))) {
        return false;
    }
    if ((!((useD2D1()) == ((_o).useD2D1())))) {
        return false;
    }
    return true;
}

auto DevicePrefs::Init() -> void
{
}

auto DevicePrefs::Assign(
        const FeatureStatus& _hwCompositing,
        const FeatureStatus& _d3d11Compositing,
        const FeatureStatus& _d3d9Compositing,
        const FeatureStatus& _oglCompositing,
        const FeatureStatus& _useD2D1) -> void
{
    hwCompositing_ = _hwCompositing;
    d3d11Compositing_ = _d3d11Compositing;
    d3d9Compositing_ = _d3d9Compositing;
    oglCompositing_ = _oglCompositing;
    useD2D1_ = _useD2D1;
}

} // namespace gfx
} // namespace mozilla

//-----------------------------------------------------------------------------
// Method definitions for the IPDL type |struct ContentDeviceData|
//
namespace mozilla {
namespace gfx {
MOZ_IMPLICIT ContentDeviceData::ContentDeviceData()
{
    Init();
}

ContentDeviceData::~ContentDeviceData()
{
}

auto ContentDeviceData::operator==(const ContentDeviceData& _o) const -> bool
{
    if ((!((prefs()) == ((_o).prefs())))) {
        return false;
    }
    if ((!((d3d11()) == ((_o).d3d11())))) {
        return false;
    }
    return true;
}

auto ContentDeviceData::Init() -> void
{
}

auto ContentDeviceData::Assign(
        const DevicePrefs& _prefs,
        const D3D11DeviceStatus& _d3d11) -> void
{
    prefs_ = _prefs;
    d3d11_ = _d3d11;
}

} // namespace gfx
} // namespace mozilla

//-----------------------------------------------------------------------------
// Method definitions for the IPDL type |struct FeatureFailure|
//
namespace mozilla {
namespace gfx {
MOZ_IMPLICIT FeatureFailure::FeatureFailure() :
    status_(),
    message_(),
    failureId_()
{
    Init();
}

FeatureFailure::~FeatureFailure()
{
}

auto FeatureFailure::operator==(const FeatureFailure& _o) const -> bool
{
    if ((!((status()) == ((_o).status())))) {
        return false;
    }
    if ((!((message()) == ((_o).message())))) {
        return false;
    }
    if ((!((failureId()) == ((_o).failureId())))) {
        return false;
    }
    return true;
}

auto FeatureFailure::Init() -> void
{
}

auto FeatureFailure::Assign(
        const FeatureStatus& _status,
        const nsCString& _message,
        const nsCString& _failureId) -> void
{
    status_ = _status;
    message_ = _message;
    failureId_ = _failureId;
}

} // namespace gfx
} // namespace mozilla

//-----------------------------------------------------------------------------
// Method definitions for the IPDL type |union FeatureChange|
//
namespace mozilla {
namespace gfx {
auto FeatureChange::MaybeDestroy(Type aNewType) -> bool
{
    if ((mType) == (T__None)) {
        return true;
    }
    if ((mType) == (aNewType)) {
        return false;
    }
    switch (mType) {
    case Tnull_t:
        {
            (ptr_null_t())->~null_t__tdef();
            break;
        }
    case TFeatureFailure:
        {
            (ptr_FeatureFailure())->~FeatureFailure__tdef();
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

MOZ_IMPLICIT FeatureChange::FeatureChange(const null_t& aOther)
{
    new (mozilla::KnownNotNull, ptr_null_t()) null_t(aOther);
    mType = Tnull_t;
}

MOZ_IMPLICIT FeatureChange::FeatureChange(const FeatureFailure& aOther)
{
    new (mozilla::KnownNotNull, ptr_FeatureFailure()) FeatureFailure(aOther);
    mType = TFeatureFailure;
}

MOZ_IMPLICIT FeatureChange::FeatureChange(const FeatureChange& aOther)
{
    (aOther).AssertSanity();
    switch ((aOther).type()) {
    case Tnull_t:
        {
            new (mozilla::KnownNotNull, ptr_null_t()) null_t((aOther).get_null_t());
            break;
        }
    case TFeatureFailure:
        {
            new (mozilla::KnownNotNull, ptr_FeatureFailure()) FeatureFailure((aOther).get_FeatureFailure());
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

FeatureChange::~FeatureChange()
{
    static_cast<void>(MaybeDestroy(T__None));
}

auto FeatureChange::operator=(const null_t& aRhs) -> FeatureChange&
{
    if (MaybeDestroy(Tnull_t)) {
        new (mozilla::KnownNotNull, ptr_null_t()) null_t;
    }
    (*(ptr_null_t())) = aRhs;
    mType = Tnull_t;
    return (*(this));
}

auto FeatureChange::operator=(const FeatureFailure& aRhs) -> FeatureChange&
{
    if (MaybeDestroy(TFeatureFailure)) {
        new (mozilla::KnownNotNull, ptr_FeatureFailure()) FeatureFailure;
    }
    (*(ptr_FeatureFailure())) = aRhs;
    mType = TFeatureFailure;
    return (*(this));
}

auto FeatureChange::operator=(const FeatureChange& aRhs) -> FeatureChange&
{
    (aRhs).AssertSanity();
    Type t = (aRhs).type();
    switch (t) {
    case Tnull_t:
        {
            if (MaybeDestroy(t)) {
                new (mozilla::KnownNotNull, ptr_null_t()) null_t;
            }
            (*(ptr_null_t())) = (aRhs).get_null_t();
            break;
        }
    case TFeatureFailure:
        {
            if (MaybeDestroy(t)) {
                new (mozilla::KnownNotNull, ptr_FeatureFailure()) FeatureFailure;
            }
            (*(ptr_FeatureFailure())) = (aRhs).get_FeatureFailure();
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

auto FeatureChange::operator==(const null_t& aRhs) const -> bool
{
    return (get_null_t()) == (aRhs);
}

auto FeatureChange::operator==(const FeatureFailure& aRhs) const -> bool
{
    return (get_FeatureFailure()) == (aRhs);
}

auto FeatureChange::operator==(const FeatureChange& aRhs) const -> bool
{
    if ((type()) != ((aRhs).type())) {
        return false;
    }

    switch (type()) {
    case Tnull_t:
        {
            return (get_null_t()) == ((aRhs).get_null_t());
        }
    case TFeatureFailure:
        {
            return (get_FeatureFailure()) == ((aRhs).get_FeatureFailure());
        }
    default:
        {
            mozilla::ipc::LogicError("unreached");
            return false;
        }
    }
}

auto FeatureChange::get(null_t* aOutValue) const -> void
{
    (*(aOutValue)) = get_null_t();
}

auto FeatureChange::get(FeatureFailure* aOutValue) const -> void
{
    (*(aOutValue)) = get_FeatureFailure();
}

} // namespace gfx
} // namespace mozilla

//-----------------------------------------------------------------------------
// Method definitions for the IPDL type |union GPUDeviceStatus|
//
namespace mozilla {
namespace gfx {
auto GPUDeviceStatus::MaybeDestroy(Type aNewType) -> bool
{
    if ((mType) == (T__None)) {
        return true;
    }
    if ((mType) == (aNewType)) {
        return false;
    }
    switch (mType) {
    case Tnull_t:
        {
            (ptr_null_t())->~null_t__tdef();
            break;
        }
    case TD3D11DeviceStatus:
        {
            (ptr_D3D11DeviceStatus())->~D3D11DeviceStatus__tdef();
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

MOZ_IMPLICIT GPUDeviceStatus::GPUDeviceStatus(const null_t& aOther)
{
    new (mozilla::KnownNotNull, ptr_null_t()) null_t(aOther);
    mType = Tnull_t;
}

MOZ_IMPLICIT GPUDeviceStatus::GPUDeviceStatus(const D3D11DeviceStatus& aOther)
{
    new (mozilla::KnownNotNull, ptr_D3D11DeviceStatus()) D3D11DeviceStatus(aOther);
    mType = TD3D11DeviceStatus;
}

MOZ_IMPLICIT GPUDeviceStatus::GPUDeviceStatus(const GPUDeviceStatus& aOther)
{
    (aOther).AssertSanity();
    switch ((aOther).type()) {
    case Tnull_t:
        {
            new (mozilla::KnownNotNull, ptr_null_t()) null_t((aOther).get_null_t());
            break;
        }
    case TD3D11DeviceStatus:
        {
            new (mozilla::KnownNotNull, ptr_D3D11DeviceStatus()) D3D11DeviceStatus((aOther).get_D3D11DeviceStatus());
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

GPUDeviceStatus::~GPUDeviceStatus()
{
    static_cast<void>(MaybeDestroy(T__None));
}

auto GPUDeviceStatus::operator=(const null_t& aRhs) -> GPUDeviceStatus&
{
    if (MaybeDestroy(Tnull_t)) {
        new (mozilla::KnownNotNull, ptr_null_t()) null_t;
    }
    (*(ptr_null_t())) = aRhs;
    mType = Tnull_t;
    return (*(this));
}

auto GPUDeviceStatus::operator=(const D3D11DeviceStatus& aRhs) -> GPUDeviceStatus&
{
    if (MaybeDestroy(TD3D11DeviceStatus)) {
        new (mozilla::KnownNotNull, ptr_D3D11DeviceStatus()) D3D11DeviceStatus;
    }
    (*(ptr_D3D11DeviceStatus())) = aRhs;
    mType = TD3D11DeviceStatus;
    return (*(this));
}

auto GPUDeviceStatus::operator=(const GPUDeviceStatus& aRhs) -> GPUDeviceStatus&
{
    (aRhs).AssertSanity();
    Type t = (aRhs).type();
    switch (t) {
    case Tnull_t:
        {
            if (MaybeDestroy(t)) {
                new (mozilla::KnownNotNull, ptr_null_t()) null_t;
            }
            (*(ptr_null_t())) = (aRhs).get_null_t();
            break;
        }
    case TD3D11DeviceStatus:
        {
            if (MaybeDestroy(t)) {
                new (mozilla::KnownNotNull, ptr_D3D11DeviceStatus()) D3D11DeviceStatus;
            }
            (*(ptr_D3D11DeviceStatus())) = (aRhs).get_D3D11DeviceStatus();
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

auto GPUDeviceStatus::operator==(const null_t& aRhs) const -> bool
{
    return (get_null_t()) == (aRhs);
}

auto GPUDeviceStatus::operator==(const D3D11DeviceStatus& aRhs) const -> bool
{
    return (get_D3D11DeviceStatus()) == (aRhs);
}

auto GPUDeviceStatus::operator==(const GPUDeviceStatus& aRhs) const -> bool
{
    if ((type()) != ((aRhs).type())) {
        return false;
    }

    switch (type()) {
    case Tnull_t:
        {
            return (get_null_t()) == ((aRhs).get_null_t());
        }
    case TD3D11DeviceStatus:
        {
            return (get_D3D11DeviceStatus()) == ((aRhs).get_D3D11DeviceStatus());
        }
    default:
        {
            mozilla::ipc::LogicError("unreached");
            return false;
        }
    }
}

auto GPUDeviceStatus::get(null_t* aOutValue) const -> void
{
    (*(aOutValue)) = get_null_t();
}

auto GPUDeviceStatus::get(D3D11DeviceStatus* aOutValue) const -> void
{
    (*(aOutValue)) = get_D3D11DeviceStatus();
}

} // namespace gfx
} // namespace mozilla

//-----------------------------------------------------------------------------
// Method definitions for the IPDL type |struct GPUDeviceData|
//
namespace mozilla {
namespace gfx {
MOZ_IMPLICIT GPUDeviceData::GPUDeviceData()
{
    Init();
}

GPUDeviceData::~GPUDeviceData()
{
}

auto GPUDeviceData::operator==(const GPUDeviceData& _o) const -> bool
{
    if ((!((d3d11Compositing()) == ((_o).d3d11Compositing())))) {
        return false;
    }
    if ((!((d3d9Compositing()) == ((_o).d3d9Compositing())))) {
        return false;
    }
    if ((!((oglCompositing()) == ((_o).oglCompositing())))) {
        return false;
    }
    if ((!((gpuDevice()) == ((_o).gpuDevice())))) {
        return false;
    }
    return true;
}

auto GPUDeviceData::Init() -> void
{
}

auto GPUDeviceData::Assign(
        const FeatureChange& _d3d11Compositing,
        const FeatureChange& _d3d9Compositing,
        const FeatureChange& _oglCompositing,
        const GPUDeviceStatus& _gpuDevice) -> void
{
    d3d11Compositing_ = _d3d11Compositing;
    d3d9Compositing_ = _d3d9Compositing;
    oglCompositing_ = _oglCompositing;
    gpuDevice_ = _gpuDevice;
}

} // namespace gfx
} // namespace mozilla

//-----------------------------------------------------------------------------
// Method definitions for the IPDL type |union GfxVarValue|
//
namespace mozilla {
namespace gfx {
auto GfxVarValue::MaybeDestroy(Type aNewType) -> bool
{
    if ((mType) == (T__None)) {
        return true;
    }
    if ((mType) == (aNewType)) {
        return false;
    }
    switch (mType) {
    case TBackendType:
        {
            (ptr_BackendType())->~BackendType__tdef();
            break;
        }
    case Tbool:
        {
            (ptr_bool())->~bool__tdef();
            break;
        }
    case TgfxImageFormat:
        {
            (ptr_gfxImageFormat())->~gfxImageFormat__tdef();
            break;
        }
    case TIntSize:
        {
            (ptr_IntSize())->~IntSize__tdef();
            break;
        }
    case TnsCString:
        {
            (ptr_nsCString())->~nsCString__tdef();
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

MOZ_IMPLICIT GfxVarValue::GfxVarValue(const BackendType& aOther)
{
    new (mozilla::KnownNotNull, ptr_BackendType()) BackendType(aOther);
    mType = TBackendType;
}

MOZ_IMPLICIT GfxVarValue::GfxVarValue(const bool& aOther)
{
    new (mozilla::KnownNotNull, ptr_bool()) bool(aOther);
    mType = Tbool;
}

MOZ_IMPLICIT GfxVarValue::GfxVarValue(const gfxImageFormat& aOther)
{
    new (mozilla::KnownNotNull, ptr_gfxImageFormat()) gfxImageFormat(aOther);
    mType = TgfxImageFormat;
}

MOZ_IMPLICIT GfxVarValue::GfxVarValue(const IntSize& aOther)
{
    new (mozilla::KnownNotNull, ptr_IntSize()) IntSize(aOther);
    mType = TIntSize;
}

MOZ_IMPLICIT GfxVarValue::GfxVarValue(const nsCString& aOther)
{
    new (mozilla::KnownNotNull, ptr_nsCString()) nsCString(aOther);
    mType = TnsCString;
}

MOZ_IMPLICIT GfxVarValue::GfxVarValue(const GfxVarValue& aOther)
{
    (aOther).AssertSanity();
    switch ((aOther).type()) {
    case TBackendType:
        {
            new (mozilla::KnownNotNull, ptr_BackendType()) BackendType((aOther).get_BackendType());
            break;
        }
    case Tbool:
        {
            new (mozilla::KnownNotNull, ptr_bool()) bool((aOther).get_bool());
            break;
        }
    case TgfxImageFormat:
        {
            new (mozilla::KnownNotNull, ptr_gfxImageFormat()) gfxImageFormat((aOther).get_gfxImageFormat());
            break;
        }
    case TIntSize:
        {
            new (mozilla::KnownNotNull, ptr_IntSize()) IntSize((aOther).get_IntSize());
            break;
        }
    case TnsCString:
        {
            new (mozilla::KnownNotNull, ptr_nsCString()) nsCString((aOther).get_nsCString());
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

GfxVarValue::~GfxVarValue()
{
    static_cast<void>(MaybeDestroy(T__None));
}

auto GfxVarValue::operator=(const BackendType& aRhs) -> GfxVarValue&
{
    if (MaybeDestroy(TBackendType)) {
        new (mozilla::KnownNotNull, ptr_BackendType()) BackendType;
    }
    (*(ptr_BackendType())) = aRhs;
    mType = TBackendType;
    return (*(this));
}

auto GfxVarValue::operator=(const bool& aRhs) -> GfxVarValue&
{
    if (MaybeDestroy(Tbool)) {
        new (mozilla::KnownNotNull, ptr_bool()) bool;
    }
    (*(ptr_bool())) = aRhs;
    mType = Tbool;
    return (*(this));
}

auto GfxVarValue::operator=(const gfxImageFormat& aRhs) -> GfxVarValue&
{
    if (MaybeDestroy(TgfxImageFormat)) {
        new (mozilla::KnownNotNull, ptr_gfxImageFormat()) gfxImageFormat;
    }
    (*(ptr_gfxImageFormat())) = aRhs;
    mType = TgfxImageFormat;
    return (*(this));
}

auto GfxVarValue::operator=(const IntSize& aRhs) -> GfxVarValue&
{
    if (MaybeDestroy(TIntSize)) {
        new (mozilla::KnownNotNull, ptr_IntSize()) IntSize;
    }
    (*(ptr_IntSize())) = aRhs;
    mType = TIntSize;
    return (*(this));
}

auto GfxVarValue::operator=(const nsCString& aRhs) -> GfxVarValue&
{
    if (MaybeDestroy(TnsCString)) {
        new (mozilla::KnownNotNull, ptr_nsCString()) nsCString;
    }
    (*(ptr_nsCString())) = aRhs;
    mType = TnsCString;
    return (*(this));
}

auto GfxVarValue::operator=(const GfxVarValue& aRhs) -> GfxVarValue&
{
    (aRhs).AssertSanity();
    Type t = (aRhs).type();
    switch (t) {
    case TBackendType:
        {
            if (MaybeDestroy(t)) {
                new (mozilla::KnownNotNull, ptr_BackendType()) BackendType;
            }
            (*(ptr_BackendType())) = (aRhs).get_BackendType();
            break;
        }
    case Tbool:
        {
            if (MaybeDestroy(t)) {
                new (mozilla::KnownNotNull, ptr_bool()) bool;
            }
            (*(ptr_bool())) = (aRhs).get_bool();
            break;
        }
    case TgfxImageFormat:
        {
            if (MaybeDestroy(t)) {
                new (mozilla::KnownNotNull, ptr_gfxImageFormat()) gfxImageFormat;
            }
            (*(ptr_gfxImageFormat())) = (aRhs).get_gfxImageFormat();
            break;
        }
    case TIntSize:
        {
            if (MaybeDestroy(t)) {
                new (mozilla::KnownNotNull, ptr_IntSize()) IntSize;
            }
            (*(ptr_IntSize())) = (aRhs).get_IntSize();
            break;
        }
    case TnsCString:
        {
            if (MaybeDestroy(t)) {
                new (mozilla::KnownNotNull, ptr_nsCString()) nsCString;
            }
            (*(ptr_nsCString())) = (aRhs).get_nsCString();
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

auto GfxVarValue::operator==(const BackendType& aRhs) const -> bool
{
    return (get_BackendType()) == (aRhs);
}

auto GfxVarValue::operator==(const bool& aRhs) const -> bool
{
    return (get_bool()) == (aRhs);
}

auto GfxVarValue::operator==(const gfxImageFormat& aRhs) const -> bool
{
    return (get_gfxImageFormat()) == (aRhs);
}

auto GfxVarValue::operator==(const IntSize& aRhs) const -> bool
{
    return (get_IntSize()) == (aRhs);
}

auto GfxVarValue::operator==(const nsCString& aRhs) const -> bool
{
    return (get_nsCString()) == (aRhs);
}

auto GfxVarValue::operator==(const GfxVarValue& aRhs) const -> bool
{
    if ((type()) != ((aRhs).type())) {
        return false;
    }

    switch (type()) {
    case TBackendType:
        {
            return (get_BackendType()) == ((aRhs).get_BackendType());
        }
    case Tbool:
        {
            return (get_bool()) == ((aRhs).get_bool());
        }
    case TgfxImageFormat:
        {
            return (get_gfxImageFormat()) == ((aRhs).get_gfxImageFormat());
        }
    case TIntSize:
        {
            return (get_IntSize()) == ((aRhs).get_IntSize());
        }
    case TnsCString:
        {
            return (get_nsCString()) == ((aRhs).get_nsCString());
        }
    default:
        {
            mozilla::ipc::LogicError("unreached");
            return false;
        }
    }
}

auto GfxVarValue::get(BackendType* aOutValue) const -> void
{
    (*(aOutValue)) = get_BackendType();
}

auto GfxVarValue::get(bool* aOutValue) const -> void
{
    (*(aOutValue)) = get_bool();
}

auto GfxVarValue::get(gfxImageFormat* aOutValue) const -> void
{
    (*(aOutValue)) = get_gfxImageFormat();
}

auto GfxVarValue::get(IntSize* aOutValue) const -> void
{
    (*(aOutValue)) = get_IntSize();
}

auto GfxVarValue::get(nsCString* aOutValue) const -> void
{
    (*(aOutValue)) = get_nsCString();
}

} // namespace gfx
} // namespace mozilla

//-----------------------------------------------------------------------------
// Method definitions for the IPDL type |struct GfxVarUpdate|
//
namespace mozilla {
namespace gfx {
MOZ_IMPLICIT GfxVarUpdate::GfxVarUpdate() :
    index_()
{
    Init();
}

GfxVarUpdate::~GfxVarUpdate()
{
}

auto GfxVarUpdate::operator==(const GfxVarUpdate& _o) const -> bool
{
    if ((!((index()) == ((_o).index())))) {
        return false;
    }
    if ((!((value()) == ((_o).value())))) {
        return false;
    }
    return true;
}

auto GfxVarUpdate::Init() -> void
{
}

auto GfxVarUpdate::Assign(
        const size_t& _index,
        const GfxVarValue& _value) -> void
{
    index_ = _index;
    value_ = _value;
}

} // namespace gfx
} // namespace mozilla