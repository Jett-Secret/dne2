//
// Automatically generated by ipdlc.
// Edit at your own risk
//

#ifndef PluginTypes_h
#define PluginTypes_h

#include "mozilla/Attributes.h"
#include "IPCMessageStart.h"
#include "ipc/IPCMessageUtils.h"
#include "mozilla/RefPtr.h"
#include "nsStringGlue.h"
#include "nsTArray.h"
#include "mozilla/ipc/ProtocolUtils.h"
#include "nsTHashtable.h"
#include "mozilla/OperatorNewExtensions.h"


//-----------------------------------------------------------------------------
// Declaration of the IPDL type |struct PluginTag|
//
namespace mozilla {
namespace plugins {
class PluginTag final
{
private:

public:
    MOZ_IMPLICIT PluginTag();

    MOZ_IMPLICIT PluginTag(
            const uint32_t& _id,
            const nsCString& _name,
            const nsCString& _description,
            const nsTArray<nsCString>& _mimeTypes,
            const nsTArray<nsCString>& _mimeDescriptions,
            const nsTArray<nsCString>& _extensions,
            const bool& _isJavaPlugin,
            const bool& _isFlashPlugin,
            const bool& _supportsAsyncInit,
            const bool& _supportsAsyncRender,
            const nsCString& _filename,
            const nsCString& _version,
            const int64_t& _lastModifiedTime,
            const bool& _isFromExtension,
            const int32_t& _sandboxLevel)
    {
        Init();
        Assign(_id, _name, _description, _mimeTypes, _mimeDescriptions, _extensions, _isJavaPlugin, _isFlashPlugin, _supportsAsyncInit, _supportsAsyncRender, _filename, _version, _lastModifiedTime, _isFromExtension, _sandboxLevel);
    }

    MOZ_IMPLICIT PluginTag(const PluginTag& _o)
    {
        Init();
        Assign((_o).id(), (_o).name(), (_o).description(), (_o).mimeTypes(), (_o).mimeDescriptions(), (_o).extensions(), (_o).isJavaPlugin(), (_o).isFlashPlugin(), (_o).supportsAsyncInit(), (_o).supportsAsyncRender(), (_o).filename(), (_o).version(), (_o).lastModifiedTime(), (_o).isFromExtension(), (_o).sandboxLevel());
    }

    ~PluginTag();

    void
    operator=(const PluginTag& _o)
    {
        Assign((_o).id(), (_o).name(), (_o).description(), (_o).mimeTypes(), (_o).mimeDescriptions(), (_o).extensions(), (_o).isJavaPlugin(), (_o).isFlashPlugin(), (_o).supportsAsyncInit(), (_o).supportsAsyncRender(), (_o).filename(), (_o).version(), (_o).lastModifiedTime(), (_o).isFromExtension(), (_o).sandboxLevel());
    }

    bool
    operator==(const PluginTag& _o) const;

    uint32_t&
    id()
    {
        return id_;
    }
    const uint32_t&
    id() const
    {
        return id_;
    }

    nsCString&
    name()
    {
        return name_;
    }
    const nsCString&
    name() const
    {
        return name_;
    }

    nsCString&
    description()
    {
        return description_;
    }
    const nsCString&
    description() const
    {
        return description_;
    }

    nsTArray<nsCString>&
    mimeTypes()
    {
        return mimeTypes_;
    }
    const nsTArray<nsCString>&
    mimeTypes() const
    {
        return mimeTypes_;
    }

    nsTArray<nsCString>&
    mimeDescriptions()
    {
        return mimeDescriptions_;
    }
    const nsTArray<nsCString>&
    mimeDescriptions() const
    {
        return mimeDescriptions_;
    }

    nsTArray<nsCString>&
    extensions()
    {
        return extensions_;
    }
    const nsTArray<nsCString>&
    extensions() const
    {
        return extensions_;
    }

    bool&
    isJavaPlugin()
    {
        return isJavaPlugin_;
    }
    const bool&
    isJavaPlugin() const
    {
        return isJavaPlugin_;
    }

    bool&
    isFlashPlugin()
    {
        return isFlashPlugin_;
    }
    const bool&
    isFlashPlugin() const
    {
        return isFlashPlugin_;
    }

    bool&
    supportsAsyncInit()
    {
        return supportsAsyncInit_;
    }
    const bool&
    supportsAsyncInit() const
    {
        return supportsAsyncInit_;
    }

    bool&
    supportsAsyncRender()
    {
        return supportsAsyncRender_;
    }
    const bool&
    supportsAsyncRender() const
    {
        return supportsAsyncRender_;
    }

    nsCString&
    filename()
    {
        return filename_;
    }
    const nsCString&
    filename() const
    {
        return filename_;
    }

    nsCString&
    version()
    {
        return version_;
    }
    const nsCString&
    version() const
    {
        return version_;
    }

    int64_t&
    lastModifiedTime()
    {
        return lastModifiedTime_;
    }
    const int64_t&
    lastModifiedTime() const
    {
        return lastModifiedTime_;
    }

    bool&
    isFromExtension()
    {
        return isFromExtension_;
    }
    const bool&
    isFromExtension() const
    {
        return isFromExtension_;
    }

    int32_t&
    sandboxLevel()
    {
        return sandboxLevel_;
    }
    const int32_t&
    sandboxLevel() const
    {
        return sandboxLevel_;
    }

private:
    void
    Init();

    void
    Assign(
            const uint32_t& _id,
            const nsCString& _name,
            const nsCString& _description,
            const nsTArray<nsCString>& _mimeTypes,
            const nsTArray<nsCString>& _mimeDescriptions,
            const nsTArray<nsCString>& _extensions,
            const bool& _isJavaPlugin,
            const bool& _isFlashPlugin,
            const bool& _supportsAsyncInit,
            const bool& _supportsAsyncRender,
            const nsCString& _filename,
            const nsCString& _version,
            const int64_t& _lastModifiedTime,
            const bool& _isFromExtension,
            const int32_t& _sandboxLevel);

    uint32_t id_;
    nsCString name_;
    nsCString description_;
    nsTArray<nsCString> mimeTypes_;
    nsTArray<nsCString> mimeDescriptions_;
    nsTArray<nsCString> extensions_;
    bool isJavaPlugin_;
    bool isFlashPlugin_;
    bool supportsAsyncInit_;
    bool supportsAsyncRender_;
    nsCString filename_;
    nsCString version_;
    int64_t lastModifiedTime_;
    bool isFromExtension_;
    int32_t sandboxLevel_;
};
} // namespace plugins
} // namespace mozilla


//-----------------------------------------------------------------------------
// Declaration of the IPDL type |union PluginIdentifier|
//
namespace mozilla {
namespace plugins {
class PluginIdentifier final
{
public:
    enum Type {
        T__None,
        TnsCString = 1,
        Tint32_t,
        T__Last = Tint32_t
    };

private:
    typedef nsCString nsCString__tdef;
    typedef int32_t int32_t__tdef;

    union Value {
        mozilla::AlignedStorage2<nsCString> VnsCString;
        mozilla::AlignedStorage2<int32_t> Vint32_t;
    };

    nsCString*
    ptr_nsCString()
    {
        return ((mValue).VnsCString).addr();
    }
    const nsCString*
    constptr_nsCString() const
    {
        return ((mValue).VnsCString).addr();
    }
    int32_t*
    ptr_int32_t()
    {
        return ((mValue).Vint32_t).addr();
    }
    const int32_t*
    constptr_int32_t() const
    {
        return ((mValue).Vint32_t).addr();
    }

    bool
    MaybeDestroy(Type aNewType);

    void
    AssertSanity() const
    {
        MOZ_RELEASE_ASSERT((T__None) <= (mType), "invalid type tag");
        MOZ_RELEASE_ASSERT((mType) <= (T__Last), "invalid type tag");
    }
    void
    AssertSanity(Type aType) const
    {
        AssertSanity();
        MOZ_RELEASE_ASSERT((mType) == (aType), "unexpected type tag");
    }

public:
    MOZ_IMPLICIT PluginIdentifier() :
        mType(T__None)
    {
    }

    MOZ_IMPLICIT PluginIdentifier(const nsCString& aOther);

    MOZ_IMPLICIT PluginIdentifier(const int32_t& aOther);

    MOZ_IMPLICIT PluginIdentifier(const PluginIdentifier& aOther);

    ~PluginIdentifier();

    Type
    type() const
    {
        return mType;
    }

    PluginIdentifier&
    operator=(const nsCString& aRhs);

    PluginIdentifier&
    operator=(const int32_t& aRhs);

    PluginIdentifier&
    operator=(const PluginIdentifier& aRhs);

    bool
    operator==(const nsCString& aRhs) const;

    bool
    operator==(const int32_t& aRhs) const;

    bool
    operator==(const PluginIdentifier& aRhs) const;

    nsCString&
    get_nsCString()
    {
        AssertSanity(TnsCString);
        return (*(ptr_nsCString()));
    }
    const nsCString&
    get_nsCString() const
    {
        AssertSanity(TnsCString);
        return (*(constptr_nsCString()));
    }
    void
    get(nsCString* aOutValue) const;
    operator nsCString&()
    {
        return get_nsCString();
    }
    operator const nsCString&() const
    {
        return get_nsCString();
    }

    int32_t&
    get_int32_t()
    {
        AssertSanity(Tint32_t);
        return (*(ptr_int32_t()));
    }
    const int32_t&
    get_int32_t() const
    {
        AssertSanity(Tint32_t);
        return (*(constptr_int32_t()));
    }
    void
    get(int32_t* aOutValue) const;
    operator int32_t&()
    {
        return get_int32_t();
    }
    operator const int32_t&() const
    {
        return get_int32_t();
    }

private:
    Value mValue;
    Type mType;
};
} // namespace plugins
} // namespace mozilla

#endif // ifndef PluginTypes_h
