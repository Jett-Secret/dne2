#ifndef mozilla_dom_UnionConversions_h
#define mozilla_dom_UnionConversions_h

#include "AnimatableBinding.h"
#include "AudioTrackBinding.h"
#include "BlobBinding.h"
#include "CSSPseudoElementBinding.h"
#include "CanvasRenderingContext2DBinding.h"
#include "ClientBinding.h"
#include "ConsoleBinding.h"
#include "DirectoryBinding.h"
#include "DocumentBinding.h"
#include "ElementBinding.h"
#include "EventBinding.h"
#include "EventHandlerBinding.h"
#include "EventTargetBinding.h"
#include "ExtendableMessageEventBinding.h"
#include "ExternalBinding.h"
#include "FetchBinding.h"
#include "FileBinding.h"
#include "FontFaceBinding.h"
#include "FormDataBinding.h"
#include "GeometryUtilsBinding.h"
#include "HTMLAllCollectionBinding.h"
#include "HTMLCanvasElementBinding.h"
#include "HTMLCollectionBinding.h"
#include "HTMLElementBinding.h"
#include "HTMLFormControlsCollectionBinding.h"
#include "HTMLImageElementBinding.h"
#include "HTMLOptGroupElementBinding.h"
#include "HTMLOptionElementBinding.h"
#include "HTMLVideoElementBinding.h"
#include "HeadersBinding.h"
#include "IDBCursorBinding.h"
#include "IDBFileHandleBinding.h"
#include "IDBIndexBinding.h"
#include "IDBObjectStoreBinding.h"
#include "IDBRequestBinding.h"
#include "ImageBitmapBinding.h"
#include "ImageDataBinding.h"
#include "InputMethodBinding.h"
#include "InstallTriggerBinding.h"
#include "IntersectionObserverBinding.h"
#include "KeyframeAnimationOptionsBinding.h"
#include "KeyframeEffectBinding.h"
#include "MediaStreamBinding.h"
#include "MediaStreamTrackBinding.h"
#include "MediaTrackConstraintSetBinding.h"
#include "MessageEventBinding.h"
#include "MessagePortBinding.h"
#include "NavigatorBinding.h"
#include "NodeBinding.h"
#include "OffscreenCanvasBinding.h"
#include "PushEventBinding.h"
#include "RadioNodeListBinding.h"
#include "RequestBinding.h"
#include "SVGImageElementBinding.h"
#include "ServiceWorkerBinding.h"
#include "ServiceWorkerMessageEventBinding.h"
#include "SubtleCryptoBinding.h"
#include "TextBinding.h"
#include "TextTrackBinding.h"
#include "TrackEventBinding.h"
#include "UDPSocketBinding.h"
#include "URLSearchParamsBinding.h"
#include "VTTCueBinding.h"
#include "VideoTrackBinding.h"
#include "WebGL2RenderingContextBinding.h"
#include "WebGLRenderingContextBinding.h"
#include "WindowBinding.h"
#include "jsfriendapi.h"
#include "mozilla/dom/PrimitiveConversions.h"
#include "mozilla/dom/Record.h"
#include "mozilla/dom/TypedArray.h"
#include "mozilla/dom/UnionTypes.h"
#include "nsDebug.h"
#include "nsPIDOMWindow.h"

namespace mozilla {
namespace dom {
class AddEventListenerOptionsOrBooleanArgument
{
  AddEventListenerOptionsOrBoolean& mUnion;

  AddEventListenerOptionsOrBooleanArgument(const AddEventListenerOptionsOrBooleanArgument&) = delete;
  void operator=(const AddEventListenerOptionsOrBooleanArgument&) = delete;
public:
  explicit inline AddEventListenerOptionsOrBooleanArgument(const AddEventListenerOptionsOrBoolean& aUnion)
    : mUnion(const_cast<AddEventListenerOptionsOrBoolean&>(aUnion))
  {
  }

  inline bool
  TrySetToAddEventListenerOptions(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FastAddEventListenerOptions& memberSlot = RawSetAsAddEventListenerOptions();
      { // scope for isConvertible
        bool isConvertible;
        if (!IsConvertibleToDictionary(cx, value, &isConvertible)) {
          return false;
        }
        if (!isConvertible) {
          mUnion.DestroyAddEventListenerOptions();
          tryNext = true;
          return true;
        }

        if (!memberSlot.Init(cx, value,  "Member of AddEventListenerOptionsOrBoolean", passedToJSImpl)) {
          return false;
        }
      }

    }
    return true;
  }

  inline bool
  TrySetToBoolean(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      bool& memberSlot = RawSetAsBoolean();
      if (!ValueToPrimitive<bool, eDefault>(cx, value, &memberSlot)) {
        return false;
      }
    }
    return true;
  }

private:
  inline binding_detail::FastAddEventListenerOptions&
  RawSetAsAddEventListenerOptions()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eAddEventListenerOptions;
    return mUnion.mValue.mAddEventListenerOptions.SetValue();
  }

  inline bool&
  RawSetAsBoolean()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eBoolean;
    return mUnion.mValue.mBoolean.SetValue();
  }
};

class ArrayBufferOrArrayBufferViewOrBlobOrFormDataOrUSVStringOrURLSearchParamsArgument
{
  ArrayBufferOrArrayBufferViewOrBlobOrFormDataOrUSVStringOrURLSearchParams& mUnion;

  ArrayBufferOrArrayBufferViewOrBlobOrFormDataOrUSVStringOrURLSearchParamsArgument(const ArrayBufferOrArrayBufferViewOrBlobOrFormDataOrUSVStringOrURLSearchParamsArgument&) = delete;
  void operator=(const ArrayBufferOrArrayBufferViewOrBlobOrFormDataOrUSVStringOrURLSearchParamsArgument&) = delete;
public:
  explicit inline ArrayBufferOrArrayBufferViewOrBlobOrFormDataOrUSVStringOrURLSearchParamsArgument(const ArrayBufferOrArrayBufferViewOrBlobOrFormDataOrUSVStringOrURLSearchParams& aUnion)
    : mUnion(const_cast<ArrayBufferOrArrayBufferViewOrBlobOrFormDataOrUSVStringOrURLSearchParams&>(aUnion))
  {
  }

  inline bool
  TrySetToArrayBuffer(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      RootedTypedArray<ArrayBuffer>& memberSlot = RawSetAsArrayBuffer(cx);
      if (!memberSlot.Init(&value.toObject())) {
        mUnion.DestroyArrayBuffer();
        tryNext = true;
        return true;
      }
    }
    return true;
  }

  inline bool
  TrySetToArrayBufferView(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      RootedTypedArray<ArrayBufferView>& memberSlot = RawSetAsArrayBufferView(cx);
      if (!memberSlot.Init(&value.toObject())) {
        mUnion.DestroyArrayBufferView();
        tryNext = true;
        return true;
      }
    }
    return true;
  }

  inline bool
  TrySetToBlob(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::Blob>& memberSlot = RawSetAsBlob();
      {
        nsresult rv = UnwrapObject<prototypes::id::Blob, mozilla::dom::Blob>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyBlob();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToFormData(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::FormData>& memberSlot = RawSetAsFormData();
      {
        nsresult rv = UnwrapObject<prototypes::id::FormData, mozilla::dom::FormData>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyFormData();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToUSVString(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FakeString& memberSlot = RawSetAsUSVString();
      if (!ConvertJSValueToString(cx, value, eStringify, eStringify, memberSlot)) {
        return false;
      }
      NormalizeUSVString(memberSlot);
    }
    return true;
  }

  inline void
  SetStringData(const nsDependentString::char_type* aData, nsDependentString::size_type aLength)
  {
    RawSetAsUSVString().Rebind(aData, aLength);
  }

  inline bool
  TrySetToURLSearchParams(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::URLSearchParams>& memberSlot = RawSetAsURLSearchParams();
      {
        nsresult rv = UnwrapObject<prototypes::id::URLSearchParams, mozilla::dom::URLSearchParams>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyURLSearchParams();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

private:
  inline RootedTypedArray<ArrayBuffer>&
  RawSetAsArrayBuffer(JSContext* cx)
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eArrayBuffer;
    return mUnion.mValue.mArrayBuffer.SetValue(cx);
  }

  inline RootedTypedArray<ArrayBufferView>&
  RawSetAsArrayBufferView(JSContext* cx)
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eArrayBufferView;
    return mUnion.mValue.mArrayBufferView.SetValue(cx);
  }

  inline NonNull<mozilla::dom::Blob>&
  RawSetAsBlob()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eBlob;
    return mUnion.mValue.mBlob.SetValue();
  }

  inline NonNull<mozilla::dom::FormData>&
  RawSetAsFormData()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eFormData;
    return mUnion.mValue.mFormData.SetValue();
  }

  inline binding_detail::FakeString&
  RawSetAsUSVString()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eUSVString;
    return mUnion.mValue.mUSVString.SetValue();
  }

  inline NonNull<mozilla::dom::URLSearchParams>&
  RawSetAsURLSearchParams()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eURLSearchParams;
    return mUnion.mValue.mURLSearchParams.SetValue();
  }
};

class ArrayBufferOrArrayBufferViewOrBlobOrUSVStringArgument
{
  ArrayBufferOrArrayBufferViewOrBlobOrUSVString& mUnion;

  ArrayBufferOrArrayBufferViewOrBlobOrUSVStringArgument(const ArrayBufferOrArrayBufferViewOrBlobOrUSVStringArgument&) = delete;
  void operator=(const ArrayBufferOrArrayBufferViewOrBlobOrUSVStringArgument&) = delete;
public:
  explicit inline ArrayBufferOrArrayBufferViewOrBlobOrUSVStringArgument(const ArrayBufferOrArrayBufferViewOrBlobOrUSVString& aUnion)
    : mUnion(const_cast<ArrayBufferOrArrayBufferViewOrBlobOrUSVString&>(aUnion))
  {
  }

  inline bool
  TrySetToArrayBuffer(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      RootedTypedArray<ArrayBuffer>& memberSlot = RawSetAsArrayBuffer(cx);
      if (!memberSlot.Init(&value.toObject())) {
        mUnion.DestroyArrayBuffer();
        tryNext = true;
        return true;
      }
    }
    return true;
  }

  inline bool
  TrySetToArrayBufferView(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      RootedTypedArray<ArrayBufferView>& memberSlot = RawSetAsArrayBufferView(cx);
      if (!memberSlot.Init(&value.toObject())) {
        mUnion.DestroyArrayBufferView();
        tryNext = true;
        return true;
      }
    }
    return true;
  }

  inline bool
  TrySetToBlob(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::Blob>& memberSlot = RawSetAsBlob();
      {
        nsresult rv = UnwrapObject<prototypes::id::Blob, mozilla::dom::Blob>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyBlob();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToUSVString(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FakeString& memberSlot = RawSetAsUSVString();
      if (!ConvertJSValueToString(cx, value, eStringify, eStringify, memberSlot)) {
        return false;
      }
      NormalizeUSVString(memberSlot);
    }
    return true;
  }

  inline void
  SetStringData(const nsDependentString::char_type* aData, nsDependentString::size_type aLength)
  {
    RawSetAsUSVString().Rebind(aData, aLength);
  }

private:
  inline RootedTypedArray<ArrayBuffer>&
  RawSetAsArrayBuffer(JSContext* cx)
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eArrayBuffer;
    return mUnion.mValue.mArrayBuffer.SetValue(cx);
  }

  inline RootedTypedArray<ArrayBufferView>&
  RawSetAsArrayBufferView(JSContext* cx)
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eArrayBufferView;
    return mUnion.mValue.mArrayBufferView.SetValue(cx);
  }

  inline NonNull<mozilla::dom::Blob>&
  RawSetAsBlob()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eBlob;
    return mUnion.mValue.mBlob.SetValue();
  }

  inline binding_detail::FakeString&
  RawSetAsUSVString()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eUSVString;
    return mUnion.mValue.mUSVString.SetValue();
  }
};

class ArrayBufferViewOrArrayBufferArgument
{
  ArrayBufferViewOrArrayBuffer& mUnion;

  ArrayBufferViewOrArrayBufferArgument(const ArrayBufferViewOrArrayBufferArgument&) = delete;
  void operator=(const ArrayBufferViewOrArrayBufferArgument&) = delete;
public:
  explicit inline ArrayBufferViewOrArrayBufferArgument(const ArrayBufferViewOrArrayBuffer& aUnion)
    : mUnion(const_cast<ArrayBufferViewOrArrayBuffer&>(aUnion))
  {
  }

  inline bool
  TrySetToArrayBufferView(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      RootedTypedArray<ArrayBufferView>& memberSlot = RawSetAsArrayBufferView(cx);
      if (!memberSlot.Init(&value.toObject())) {
        mUnion.DestroyArrayBufferView();
        tryNext = true;
        return true;
      }
    }
    return true;
  }

  inline bool
  TrySetToArrayBuffer(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      RootedTypedArray<ArrayBuffer>& memberSlot = RawSetAsArrayBuffer(cx);
      if (!memberSlot.Init(&value.toObject())) {
        mUnion.DestroyArrayBuffer();
        tryNext = true;
        return true;
      }
    }
    return true;
  }

private:
  inline RootedTypedArray<ArrayBufferView>&
  RawSetAsArrayBufferView(JSContext* cx)
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eArrayBufferView;
    return mUnion.mValue.mArrayBufferView.SetValue(cx);
  }

  inline RootedTypedArray<ArrayBuffer>&
  RawSetAsArrayBuffer(JSContext* cx)
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eArrayBuffer;
    return mUnion.mValue.mArrayBuffer.SetValue(cx);
  }
};

class ArrayBufferViewOrArrayBufferOrUSVStringArgument
{
  ArrayBufferViewOrArrayBufferOrUSVString& mUnion;

  ArrayBufferViewOrArrayBufferOrUSVStringArgument(const ArrayBufferViewOrArrayBufferOrUSVStringArgument&) = delete;
  void operator=(const ArrayBufferViewOrArrayBufferOrUSVStringArgument&) = delete;
public:
  explicit inline ArrayBufferViewOrArrayBufferOrUSVStringArgument(const ArrayBufferViewOrArrayBufferOrUSVString& aUnion)
    : mUnion(const_cast<ArrayBufferViewOrArrayBufferOrUSVString&>(aUnion))
  {
  }

  inline bool
  TrySetToArrayBufferView(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      RootedTypedArray<ArrayBufferView>& memberSlot = RawSetAsArrayBufferView(cx);
      if (!memberSlot.Init(&value.toObject())) {
        mUnion.DestroyArrayBufferView();
        tryNext = true;
        return true;
      }
    }
    return true;
  }

  inline bool
  TrySetToArrayBuffer(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      RootedTypedArray<ArrayBuffer>& memberSlot = RawSetAsArrayBuffer(cx);
      if (!memberSlot.Init(&value.toObject())) {
        mUnion.DestroyArrayBuffer();
        tryNext = true;
        return true;
      }
    }
    return true;
  }

  inline bool
  TrySetToUSVString(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FakeString& memberSlot = RawSetAsUSVString();
      if (!ConvertJSValueToString(cx, value, eStringify, eStringify, memberSlot)) {
        return false;
      }
      NormalizeUSVString(memberSlot);
    }
    return true;
  }

  inline void
  SetStringData(const nsDependentString::char_type* aData, nsDependentString::size_type aLength)
  {
    RawSetAsUSVString().Rebind(aData, aLength);
  }

private:
  inline RootedTypedArray<ArrayBufferView>&
  RawSetAsArrayBufferView(JSContext* cx)
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eArrayBufferView;
    return mUnion.mValue.mArrayBufferView.SetValue(cx);
  }

  inline RootedTypedArray<ArrayBuffer>&
  RawSetAsArrayBuffer(JSContext* cx)
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eArrayBuffer;
    return mUnion.mValue.mArrayBuffer.SetValue(cx);
  }

  inline binding_detail::FakeString&
  RawSetAsUSVString()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eUSVString;
    return mUnion.mValue.mUSVString.SetValue();
  }
};

class ArrayBufferViewOrBlobOrStringOrFormDataArgument
{
  ArrayBufferViewOrBlobOrStringOrFormData& mUnion;

  ArrayBufferViewOrBlobOrStringOrFormDataArgument(const ArrayBufferViewOrBlobOrStringOrFormDataArgument&) = delete;
  void operator=(const ArrayBufferViewOrBlobOrStringOrFormDataArgument&) = delete;
public:
  explicit inline ArrayBufferViewOrBlobOrStringOrFormDataArgument(const ArrayBufferViewOrBlobOrStringOrFormData& aUnion)
    : mUnion(const_cast<ArrayBufferViewOrBlobOrStringOrFormData&>(aUnion))
  {
  }

  inline bool
  TrySetToArrayBufferView(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      RootedTypedArray<ArrayBufferView>& memberSlot = RawSetAsArrayBufferView(cx);
      if (!memberSlot.Init(&value.toObject())) {
        mUnion.DestroyArrayBufferView();
        tryNext = true;
        return true;
      }
    }
    return true;
  }

  inline bool
  TrySetToBlob(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::Blob>& memberSlot = RawSetAsBlob();
      {
        nsresult rv = UnwrapObject<prototypes::id::Blob, mozilla::dom::Blob>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyBlob();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToString(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FakeString& memberSlot = RawSetAsString();
      if (!ConvertJSValueToString(cx, value, eStringify, eStringify, memberSlot)) {
        return false;
      }
    }
    return true;
  }

  inline void
  SetStringData(const nsDependentString::char_type* aData, nsDependentString::size_type aLength)
  {
    RawSetAsString().Rebind(aData, aLength);
  }

  inline bool
  TrySetToFormData(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::FormData>& memberSlot = RawSetAsFormData();
      {
        nsresult rv = UnwrapObject<prototypes::id::FormData, mozilla::dom::FormData>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyFormData();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

private:
  inline RootedTypedArray<ArrayBufferView>&
  RawSetAsArrayBufferView(JSContext* cx)
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eArrayBufferView;
    return mUnion.mValue.mArrayBufferView.SetValue(cx);
  }

  inline NonNull<mozilla::dom::Blob>&
  RawSetAsBlob()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eBlob;
    return mUnion.mValue.mBlob.SetValue();
  }

  inline binding_detail::FakeString&
  RawSetAsString()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eString;
    return mUnion.mValue.mString.SetValue();
  }

  inline NonNull<mozilla::dom::FormData>&
  RawSetAsFormData()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eFormData;
    return mUnion.mValue.mFormData.SetValue();
  }
};

class BlobOrDirectoryOrUSVStringArgument
{
  BlobOrDirectoryOrUSVString& mUnion;

  BlobOrDirectoryOrUSVStringArgument(const BlobOrDirectoryOrUSVStringArgument&) = delete;
  void operator=(const BlobOrDirectoryOrUSVStringArgument&) = delete;
public:
  explicit inline BlobOrDirectoryOrUSVStringArgument(const BlobOrDirectoryOrUSVString& aUnion)
    : mUnion(const_cast<BlobOrDirectoryOrUSVString&>(aUnion))
  {
  }

  inline bool
  TrySetToBlob(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::Blob>& memberSlot = RawSetAsBlob();
      {
        nsresult rv = UnwrapObject<prototypes::id::Blob, mozilla::dom::Blob>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyBlob();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToDirectory(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::Directory>& memberSlot = RawSetAsDirectory();
      {
        nsresult rv = UnwrapObject<prototypes::id::Directory, mozilla::dom::Directory>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyDirectory();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToUSVString(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FakeString& memberSlot = RawSetAsUSVString();
      if (!ConvertJSValueToString(cx, value, eStringify, eStringify, memberSlot)) {
        return false;
      }
      NormalizeUSVString(memberSlot);
    }
    return true;
  }

  inline void
  SetStringData(const nsDependentString::char_type* aData, nsDependentString::size_type aLength)
  {
    RawSetAsUSVString().Rebind(aData, aLength);
  }

private:
  inline NonNull<mozilla::dom::Blob>&
  RawSetAsBlob()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eBlob;
    return mUnion.mValue.mBlob.SetValue();
  }

  inline NonNull<mozilla::dom::Directory>&
  RawSetAsDirectory()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eDirectory;
    return mUnion.mValue.mDirectory.SetValue();
  }

  inline binding_detail::FakeString&
  RawSetAsUSVString()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eUSVString;
    return mUnion.mValue.mUSVString.SetValue();
  }
};

class BooleanOrConstrainBooleanParametersArgument
{
  BooleanOrConstrainBooleanParameters& mUnion;

  BooleanOrConstrainBooleanParametersArgument(const BooleanOrConstrainBooleanParametersArgument&) = delete;
  void operator=(const BooleanOrConstrainBooleanParametersArgument&) = delete;
public:
  explicit inline BooleanOrConstrainBooleanParametersArgument(const BooleanOrConstrainBooleanParameters& aUnion)
    : mUnion(const_cast<BooleanOrConstrainBooleanParameters&>(aUnion))
  {
  }

  inline bool
  TrySetToBoolean(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      bool& memberSlot = RawSetAsBoolean();
      if (!ValueToPrimitive<bool, eDefault>(cx, value, &memberSlot)) {
        return false;
      }
    }
    return true;
  }

  inline bool
  TrySetToConstrainBooleanParameters(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FastConstrainBooleanParameters& memberSlot = RawSetAsConstrainBooleanParameters();
      { // scope for isConvertible
        bool isConvertible;
        if (!IsConvertibleToDictionary(cx, value, &isConvertible)) {
          return false;
        }
        if (!isConvertible) {
          mUnion.DestroyConstrainBooleanParameters();
          tryNext = true;
          return true;
        }

        if (!memberSlot.Init(cx, value,  "Member of BooleanOrConstrainBooleanParameters", passedToJSImpl)) {
          return false;
        }
      }

    }
    return true;
  }

private:
  inline bool&
  RawSetAsBoolean()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eBoolean;
    return mUnion.mValue.mBoolean.SetValue();
  }

  inline binding_detail::FastConstrainBooleanParameters&
  RawSetAsConstrainBooleanParameters()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eConstrainBooleanParameters;
    return mUnion.mValue.mConstrainBooleanParameters.SetValue();
  }
};

class BooleanOrMediaTrackConstraintsArgument
{
  BooleanOrMediaTrackConstraints& mUnion;

  BooleanOrMediaTrackConstraintsArgument(const BooleanOrMediaTrackConstraintsArgument&) = delete;
  void operator=(const BooleanOrMediaTrackConstraintsArgument&) = delete;
public:
  explicit inline BooleanOrMediaTrackConstraintsArgument(const BooleanOrMediaTrackConstraints& aUnion)
    : mUnion(const_cast<BooleanOrMediaTrackConstraints&>(aUnion))
  {
  }

  inline bool
  TrySetToBoolean(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      bool& memberSlot = RawSetAsBoolean();
      if (!ValueToPrimitive<bool, eDefault>(cx, value, &memberSlot)) {
        return false;
      }
    }
    return true;
  }

  inline bool
  TrySetToMediaTrackConstraints(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FastMediaTrackConstraints& memberSlot = RawSetAsMediaTrackConstraints();
      { // scope for isConvertible
        bool isConvertible;
        if (!IsConvertibleToDictionary(cx, value, &isConvertible)) {
          return false;
        }
        if (!isConvertible) {
          mUnion.DestroyMediaTrackConstraints();
          tryNext = true;
          return true;
        }

        if (!memberSlot.Init(cx, value,  "Member of BooleanOrMediaTrackConstraints", passedToJSImpl)) {
          return false;
        }
      }

    }
    return true;
  }

private:
  inline bool&
  RawSetAsBoolean()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eBoolean;
    return mUnion.mValue.mBoolean.SetValue();
  }

  inline binding_detail::FastMediaTrackConstraints&
  RawSetAsMediaTrackConstraints()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eMediaTrackConstraints;
    return mUnion.mValue.mMediaTrackConstraints.SetValue();
  }
};

class BooleanOrScrollIntoViewOptionsArgument
{
  BooleanOrScrollIntoViewOptions& mUnion;

  BooleanOrScrollIntoViewOptionsArgument(const BooleanOrScrollIntoViewOptionsArgument&) = delete;
  void operator=(const BooleanOrScrollIntoViewOptionsArgument&) = delete;
public:
  explicit inline BooleanOrScrollIntoViewOptionsArgument(const BooleanOrScrollIntoViewOptions& aUnion)
    : mUnion(const_cast<BooleanOrScrollIntoViewOptions&>(aUnion))
  {
  }

  inline bool
  TrySetToBoolean(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      bool& memberSlot = RawSetAsBoolean();
      if (!ValueToPrimitive<bool, eDefault>(cx, value, &memberSlot)) {
        return false;
      }
    }
    return true;
  }

  inline bool
  TrySetToScrollIntoViewOptions(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FastScrollIntoViewOptions& memberSlot = RawSetAsScrollIntoViewOptions();
      { // scope for isConvertible
        bool isConvertible;
        if (!IsConvertibleToDictionary(cx, value, &isConvertible)) {
          return false;
        }
        if (!isConvertible) {
          mUnion.DestroyScrollIntoViewOptions();
          tryNext = true;
          return true;
        }

        if (!memberSlot.Init(cx, value,  "Member of BooleanOrScrollIntoViewOptions", passedToJSImpl)) {
          return false;
        }
      }

    }
    return true;
  }

private:
  inline bool&
  RawSetAsBoolean()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eBoolean;
    return mUnion.mValue.mBoolean.SetValue();
  }

  inline binding_detail::FastScrollIntoViewOptions&
  RawSetAsScrollIntoViewOptions()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eScrollIntoViewOptions;
    return mUnion.mValue.mScrollIntoViewOptions.SetValue();
  }
};

class ClientOrServiceWorkerOrMessagePortArgument
{
  ClientOrServiceWorkerOrMessagePort& mUnion;

  ClientOrServiceWorkerOrMessagePortArgument(const ClientOrServiceWorkerOrMessagePortArgument&) = delete;
  void operator=(const ClientOrServiceWorkerOrMessagePortArgument&) = delete;
public:
  explicit inline ClientOrServiceWorkerOrMessagePortArgument(const ClientOrServiceWorkerOrMessagePort& aUnion)
    : mUnion(const_cast<ClientOrServiceWorkerOrMessagePort&>(aUnion))
  {
  }

  inline bool
  TrySetToClient(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::workers::ServiceWorkerClient>& memberSlot = RawSetAsClient();
      {
        nsresult rv = UnwrapObject<prototypes::id::Client, mozilla::dom::workers::ServiceWorkerClient>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyClient();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToServiceWorker(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::workers::ServiceWorker>& memberSlot = RawSetAsServiceWorker();
      {
        nsresult rv = UnwrapObject<prototypes::id::ServiceWorker, mozilla::dom::workers::ServiceWorker>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyServiceWorker();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToMessagePort(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::MessagePort>& memberSlot = RawSetAsMessagePort();
      {
        nsresult rv = UnwrapObject<prototypes::id::MessagePort, mozilla::dom::MessagePort>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyMessagePort();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

private:
  inline NonNull<mozilla::dom::workers::ServiceWorkerClient>&
  RawSetAsClient()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eClient;
    return mUnion.mValue.mClient.SetValue();
  }

  inline NonNull<mozilla::dom::workers::ServiceWorker>&
  RawSetAsServiceWorker()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eServiceWorker;
    return mUnion.mValue.mServiceWorker.SetValue();
  }

  inline NonNull<mozilla::dom::MessagePort>&
  RawSetAsMessagePort()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eMessagePort;
    return mUnion.mValue.mMessagePort.SetValue();
  }
};

class DoubleOrAutoKeywordArgument
{
  DoubleOrAutoKeyword& mUnion;

  DoubleOrAutoKeywordArgument(const DoubleOrAutoKeywordArgument&) = delete;
  void operator=(const DoubleOrAutoKeywordArgument&) = delete;
public:
  explicit inline DoubleOrAutoKeywordArgument(const DoubleOrAutoKeyword& aUnion)
    : mUnion(const_cast<DoubleOrAutoKeyword&>(aUnion))
  {
  }

  inline bool
  TrySetToDouble(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      double& memberSlot = RawSetAsDouble();
      if (!ValueToPrimitive<double, eDefault>(cx, value, &memberSlot)) {
        return false;
      } else if (!mozilla::IsFinite(memberSlot)) {
        ThrowErrorMessage(cx, MSG_NOT_FINITE, "Member of DoubleOrAutoKeyword");
        return false;
      }
    }
    return true;
  }

  inline bool
  TrySetToAutoKeyword(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      AutoKeyword& memberSlot = RawSetAsAutoKeyword();
      {
        int index;
        if (!FindEnumStringIndex<true>(cx, value, AutoKeywordValues::strings, "AutoKeyword", "Member of DoubleOrAutoKeyword", &index)) {
          return false;
        }
        MOZ_ASSERT(index >= 0);
        memberSlot = static_cast<AutoKeyword>(index);
      }
    }
    return true;
  }

private:
  inline double&
  RawSetAsDouble()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eDouble;
    return mUnion.mValue.mDouble.SetValue();
  }

  inline AutoKeyword&
  RawSetAsAutoKeyword()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eAutoKeyword;
    return mUnion.mValue.mAutoKeyword.SetValue();
  }
};

class DoubleOrConstrainDoubleRangeArgument
{
  DoubleOrConstrainDoubleRange& mUnion;

  DoubleOrConstrainDoubleRangeArgument(const DoubleOrConstrainDoubleRangeArgument&) = delete;
  void operator=(const DoubleOrConstrainDoubleRangeArgument&) = delete;
public:
  explicit inline DoubleOrConstrainDoubleRangeArgument(const DoubleOrConstrainDoubleRange& aUnion)
    : mUnion(const_cast<DoubleOrConstrainDoubleRange&>(aUnion))
  {
  }

  inline bool
  TrySetToDouble(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      double& memberSlot = RawSetAsDouble();
      if (!ValueToPrimitive<double, eDefault>(cx, value, &memberSlot)) {
        return false;
      } else if (!mozilla::IsFinite(memberSlot)) {
        ThrowErrorMessage(cx, MSG_NOT_FINITE, "Member of DoubleOrConstrainDoubleRange");
        return false;
      }
    }
    return true;
  }

  inline bool
  TrySetToConstrainDoubleRange(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FastConstrainDoubleRange& memberSlot = RawSetAsConstrainDoubleRange();
      { // scope for isConvertible
        bool isConvertible;
        if (!IsConvertibleToDictionary(cx, value, &isConvertible)) {
          return false;
        }
        if (!isConvertible) {
          mUnion.DestroyConstrainDoubleRange();
          tryNext = true;
          return true;
        }

        if (!memberSlot.Init(cx, value,  "Member of DoubleOrConstrainDoubleRange", passedToJSImpl)) {
          return false;
        }
      }

    }
    return true;
  }

private:
  inline double&
  RawSetAsDouble()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eDouble;
    return mUnion.mValue.mDouble.SetValue();
  }

  inline binding_detail::FastConstrainDoubleRange&
  RawSetAsConstrainDoubleRange()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eConstrainDoubleRange;
    return mUnion.mValue.mConstrainDoubleRange.SetValue();
  }
};

class DoubleOrDoubleSequenceArgument
{
  DoubleOrDoubleSequence& mUnion;

  DoubleOrDoubleSequenceArgument(const DoubleOrDoubleSequenceArgument&) = delete;
  void operator=(const DoubleOrDoubleSequenceArgument&) = delete;
public:
  explicit inline DoubleOrDoubleSequenceArgument(const DoubleOrDoubleSequence& aUnion)
    : mUnion(const_cast<DoubleOrDoubleSequence&>(aUnion))
  {
  }

  inline bool
  TrySetToDouble(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      double& memberSlot = RawSetAsDouble();
      if (!ValueToPrimitive<double, eDefault>(cx, value, &memberSlot)) {
        return false;
      } else if (!mozilla::IsFinite(memberSlot)) {
        ThrowErrorMessage(cx, MSG_NOT_FINITE, "Member of DoubleOrDoubleSequence");
        return false;
      }
    }
    return true;
  }

  inline bool
  TrySetToDoubleSequence(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::AutoSequence<double>& memberSlot = RawSetAsDoubleSequence();
      JS::ForOfIterator iter(cx);
      if (!iter.init(value, JS::ForOfIterator::AllowNonIterable)) {
        return false;
      }
      if (!iter.valueIsIterable()) {
        mUnion.DestroyDoubleSequence();
        tryNext = true;
        return true;
      }
      binding_detail::AutoSequence<double> &arr = memberSlot;
      JS::Rooted<JS::Value> temp(cx);
      while (true) {
        bool done;
        if (!iter.next(&temp, &done)) {
          return false;
        }
        if (done) {
          break;
        }
        double* slotPtr = arr.AppendElement(mozilla::fallible);
        if (!slotPtr) {
          JS_ReportOutOfMemory(cx);
          return false;
        }
        double& slot = *slotPtr;
        if (!ValueToPrimitive<double, eDefault>(cx, temp, &slot)) {
          return false;
        } else if (!mozilla::IsFinite(slot)) {
          ThrowErrorMessage(cx, MSG_NOT_FINITE, "Element of member of DoubleOrDoubleSequence");
          return false;
        }
      }
    }
    return true;
  }

private:
  inline double&
  RawSetAsDouble()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eDouble;
    return mUnion.mValue.mDouble.SetValue();
  }

  inline binding_detail::AutoSequence<double>&
  RawSetAsDoubleSequence()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eDoubleSequence;
    return mUnion.mValue.mDoubleSequence.SetValue();
  }
};

class ElementCreationOptionsOrStringArgument
{
  ElementCreationOptionsOrString& mUnion;

  ElementCreationOptionsOrStringArgument(const ElementCreationOptionsOrStringArgument&) = delete;
  void operator=(const ElementCreationOptionsOrStringArgument&) = delete;
public:
  explicit inline ElementCreationOptionsOrStringArgument(const ElementCreationOptionsOrString& aUnion)
    : mUnion(const_cast<ElementCreationOptionsOrString&>(aUnion))
  {
  }

  inline bool
  TrySetToElementCreationOptions(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FastElementCreationOptions& memberSlot = RawSetAsElementCreationOptions();
      { // scope for isConvertible
        bool isConvertible;
        if (!IsConvertibleToDictionary(cx, value, &isConvertible)) {
          return false;
        }
        if (!isConvertible) {
          mUnion.DestroyElementCreationOptions();
          tryNext = true;
          return true;
        }

        if (!memberSlot.Init(cx, value,  "Member of ElementCreationOptionsOrString", passedToJSImpl)) {
          return false;
        }
      }

    }
    return true;
  }

  inline bool
  TrySetToString(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FakeString& memberSlot = RawSetAsString();
      if (!ConvertJSValueToString(cx, value, eStringify, eStringify, memberSlot)) {
        return false;
      }
    }
    return true;
  }

  inline void
  SetStringData(const nsDependentString::char_type* aData, nsDependentString::size_type aLength)
  {
    RawSetAsString().Rebind(aData, aLength);
  }

private:
  inline binding_detail::FastElementCreationOptions&
  RawSetAsElementCreationOptions()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eElementCreationOptions;
    return mUnion.mValue.mElementCreationOptions.SetValue();
  }

  inline binding_detail::FakeString&
  RawSetAsString()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eString;
    return mUnion.mValue.mString.SetValue();
  }
};

class ElementOrCSSPseudoElementArgument
{
  ElementOrCSSPseudoElement& mUnion;

  ElementOrCSSPseudoElementArgument(const ElementOrCSSPseudoElementArgument&) = delete;
  void operator=(const ElementOrCSSPseudoElementArgument&) = delete;
public:
  explicit inline ElementOrCSSPseudoElementArgument(const ElementOrCSSPseudoElement& aUnion)
    : mUnion(const_cast<ElementOrCSSPseudoElement&>(aUnion))
  {
  }

  inline bool
  TrySetToElement(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::Element>& memberSlot = RawSetAsElement();
      {
        nsresult rv = UnwrapObject<prototypes::id::Element, mozilla::dom::Element>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyElement();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToCSSPseudoElement(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::CSSPseudoElement>& memberSlot = RawSetAsCSSPseudoElement();
      {
        nsresult rv = UnwrapObject<prototypes::id::CSSPseudoElement, mozilla::dom::CSSPseudoElement>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyCSSPseudoElement();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

private:
  inline NonNull<mozilla::dom::Element>&
  RawSetAsElement()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eElement;
    return mUnion.mValue.mElement.SetValue();
  }

  inline NonNull<mozilla::dom::CSSPseudoElement>&
  RawSetAsCSSPseudoElement()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eCSSPseudoElement;
    return mUnion.mValue.mCSSPseudoElement.SetValue();
  }
};

class EventListenerOptionsOrBooleanArgument
{
  EventListenerOptionsOrBoolean& mUnion;

  EventListenerOptionsOrBooleanArgument(const EventListenerOptionsOrBooleanArgument&) = delete;
  void operator=(const EventListenerOptionsOrBooleanArgument&) = delete;
public:
  explicit inline EventListenerOptionsOrBooleanArgument(const EventListenerOptionsOrBoolean& aUnion)
    : mUnion(const_cast<EventListenerOptionsOrBoolean&>(aUnion))
  {
  }

  inline bool
  TrySetToEventListenerOptions(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FastEventListenerOptions& memberSlot = RawSetAsEventListenerOptions();
      { // scope for isConvertible
        bool isConvertible;
        if (!IsConvertibleToDictionary(cx, value, &isConvertible)) {
          return false;
        }
        if (!isConvertible) {
          mUnion.DestroyEventListenerOptions();
          tryNext = true;
          return true;
        }

        if (!memberSlot.Init(cx, value,  "Member of EventListenerOptionsOrBoolean", passedToJSImpl)) {
          return false;
        }
      }

    }
    return true;
  }

  inline bool
  TrySetToBoolean(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      bool& memberSlot = RawSetAsBoolean();
      if (!ValueToPrimitive<bool, eDefault>(cx, value, &memberSlot)) {
        return false;
      }
    }
    return true;
  }

private:
  inline binding_detail::FastEventListenerOptions&
  RawSetAsEventListenerOptions()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eEventListenerOptions;
    return mUnion.mValue.mEventListenerOptions.SetValue();
  }

  inline bool&
  RawSetAsBoolean()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eBoolean;
    return mUnion.mValue.mBoolean.SetValue();
  }
};

class EventOrStringArgument
{
  EventOrString& mUnion;

  EventOrStringArgument(const EventOrStringArgument&) = delete;
  void operator=(const EventOrStringArgument&) = delete;
public:
  explicit inline EventOrStringArgument(const EventOrString& aUnion)
    : mUnion(const_cast<EventOrString&>(aUnion))
  {
  }

  inline bool
  TrySetToEvent(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::Event>& memberSlot = RawSetAsEvent();
      {
        nsresult rv = UnwrapObject<prototypes::id::Event, mozilla::dom::Event>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyEvent();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToString(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FakeString& memberSlot = RawSetAsString();
      if (!ConvertJSValueToString(cx, value, eStringify, eStringify, memberSlot)) {
        return false;
      }
    }
    return true;
  }

  inline void
  SetStringData(const nsDependentString::char_type* aData, nsDependentString::size_type aLength)
  {
    RawSetAsString().Rebind(aData, aLength);
  }

private:
  inline NonNull<mozilla::dom::Event>&
  RawSetAsEvent()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eEvent;
    return mUnion.mValue.mEvent.SetValue();
  }

  inline binding_detail::FakeString&
  RawSetAsString()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eString;
    return mUnion.mValue.mString.SetValue();
  }
};

class ExternalOrWindowProxyArgument
{
  ExternalOrWindowProxy& mUnion;
  Maybe<RefPtr<nsPIDOMWindowOuter>> mWindowProxyHolder;

  ExternalOrWindowProxyArgument(const ExternalOrWindowProxyArgument&) = delete;
  void operator=(const ExternalOrWindowProxyArgument&) = delete;
public:
  explicit inline ExternalOrWindowProxyArgument(const ExternalOrWindowProxy& aUnion)
    : mUnion(const_cast<ExternalOrWindowProxy&>(aUnion))
  {
  }

  inline bool
  TrySetToExternal(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::External>& memberSlot = RawSetAsExternal();
      {
        nsresult rv = UnwrapObject<prototypes::id::External, mozilla::dom::External>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyExternal();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToWindowProxy(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      nsPIDOMWindowOuter*& memberSlot = RawSetAsWindowProxy();
      mWindowProxyHolder.emplace();
      JS::Rooted<JSObject*> source(cx, &value.toObject());
      if (NS_FAILED(UnwrapArg<nsPIDOMWindowOuter>(source, getter_AddRefs(mWindowProxyHolder.ref())))) {
        mWindowProxyHolder.reset();
        mUnion.DestroyWindowProxy();
        tryNext = true;
        return true;
      }
      MOZ_ASSERT(mWindowProxyHolder.ref());
      memberSlot = mWindowProxyHolder.ref();
    }
    return true;
  }

private:
  inline NonNull<mozilla::dom::External>&
  RawSetAsExternal()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eExternal;
    return mUnion.mValue.mExternal.SetValue();
  }

  inline nsPIDOMWindowOuter*&
  RawSetAsWindowProxy()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eWindowProxy;
    return mUnion.mValue.mWindowProxy.SetValue();
  }
};

class FileOrDirectoryArgument
{
  FileOrDirectory& mUnion;

  FileOrDirectoryArgument(const FileOrDirectoryArgument&) = delete;
  void operator=(const FileOrDirectoryArgument&) = delete;
public:
  explicit inline FileOrDirectoryArgument(const FileOrDirectory& aUnion)
    : mUnion(const_cast<FileOrDirectory&>(aUnion))
  {
  }

  inline bool
  TrySetToFile(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::File>& memberSlot = RawSetAsFile();
      {
        nsresult rv = UnwrapObject<prototypes::id::File, mozilla::dom::File>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyFile();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToDirectory(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::Directory>& memberSlot = RawSetAsDirectory();
      {
        nsresult rv = UnwrapObject<prototypes::id::Directory, mozilla::dom::Directory>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyDirectory();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

private:
  inline NonNull<mozilla::dom::File>&
  RawSetAsFile()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eFile;
    return mUnion.mValue.mFile.SetValue();
  }

  inline NonNull<mozilla::dom::Directory>&
  RawSetAsDirectory()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eDirectory;
    return mUnion.mValue.mDirectory.SetValue();
  }
};

class Float32ArrayOrUnrestrictedFloatSequenceArgument
{
  Float32ArrayOrUnrestrictedFloatSequence& mUnion;

  Float32ArrayOrUnrestrictedFloatSequenceArgument(const Float32ArrayOrUnrestrictedFloatSequenceArgument&) = delete;
  void operator=(const Float32ArrayOrUnrestrictedFloatSequenceArgument&) = delete;
public:
  explicit inline Float32ArrayOrUnrestrictedFloatSequenceArgument(const Float32ArrayOrUnrestrictedFloatSequence& aUnion)
    : mUnion(const_cast<Float32ArrayOrUnrestrictedFloatSequence&>(aUnion))
  {
  }

  inline bool
  TrySetToFloat32Array(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      RootedTypedArray<Float32Array>& memberSlot = RawSetAsFloat32Array(cx);
      if (!memberSlot.Init(&value.toObject())) {
        mUnion.DestroyFloat32Array();
        tryNext = true;
        return true;
      }
    }
    return true;
  }

  inline bool
  TrySetToUnrestrictedFloatSequence(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::AutoSequence<float>& memberSlot = RawSetAsUnrestrictedFloatSequence();
      JS::ForOfIterator iter(cx);
      if (!iter.init(value, JS::ForOfIterator::AllowNonIterable)) {
        return false;
      }
      if (!iter.valueIsIterable()) {
        mUnion.DestroyUnrestrictedFloatSequence();
        tryNext = true;
        return true;
      }
      binding_detail::AutoSequence<float> &arr = memberSlot;
      JS::Rooted<JS::Value> temp(cx);
      while (true) {
        bool done;
        if (!iter.next(&temp, &done)) {
          return false;
        }
        if (done) {
          break;
        }
        float* slotPtr = arr.AppendElement(mozilla::fallible);
        if (!slotPtr) {
          JS_ReportOutOfMemory(cx);
          return false;
        }
        float& slot = *slotPtr;
        if (!ValueToPrimitive<float, eDefault>(cx, temp, &slot)) {
          return false;
        }
      }
    }
    return true;
  }

private:
  inline RootedTypedArray<Float32Array>&
  RawSetAsFloat32Array(JSContext* cx)
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eFloat32Array;
    return mUnion.mValue.mFloat32Array.SetValue(cx);
  }

  inline binding_detail::AutoSequence<float>&
  RawSetAsUnrestrictedFloatSequence()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eUnrestrictedFloatSequence;
    return mUnion.mValue.mUnrestrictedFloatSequence.SetValue();
  }
};

class HTMLCanvasElementOrOffscreenCanvasArgument
{
  HTMLCanvasElementOrOffscreenCanvas& mUnion;

  HTMLCanvasElementOrOffscreenCanvasArgument(const HTMLCanvasElementOrOffscreenCanvasArgument&) = delete;
  void operator=(const HTMLCanvasElementOrOffscreenCanvasArgument&) = delete;
public:
  explicit inline HTMLCanvasElementOrOffscreenCanvasArgument(const HTMLCanvasElementOrOffscreenCanvas& aUnion)
    : mUnion(const_cast<HTMLCanvasElementOrOffscreenCanvas&>(aUnion))
  {
  }

  inline bool
  TrySetToHTMLCanvasElement(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::HTMLCanvasElement>& memberSlot = RawSetAsHTMLCanvasElement();
      {
        nsresult rv = UnwrapObject<prototypes::id::HTMLCanvasElement, mozilla::dom::HTMLCanvasElement>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyHTMLCanvasElement();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToOffscreenCanvas(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::OffscreenCanvas>& memberSlot = RawSetAsOffscreenCanvas();
      {
        nsresult rv = UnwrapObject<prototypes::id::OffscreenCanvas, mozilla::dom::OffscreenCanvas>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyOffscreenCanvas();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

private:
  inline NonNull<mozilla::dom::HTMLCanvasElement>&
  RawSetAsHTMLCanvasElement()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eHTMLCanvasElement;
    return mUnion.mValue.mHTMLCanvasElement.SetValue();
  }

  inline NonNull<mozilla::dom::OffscreenCanvas>&
  RawSetAsOffscreenCanvas()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eOffscreenCanvas;
    return mUnion.mValue.mOffscreenCanvas.SetValue();
  }
};

class HTMLElementOrLongArgument
{
  HTMLElementOrLong& mUnion;

  HTMLElementOrLongArgument(const HTMLElementOrLongArgument&) = delete;
  void operator=(const HTMLElementOrLongArgument&) = delete;
public:
  explicit inline HTMLElementOrLongArgument(const HTMLElementOrLong& aUnion)
    : mUnion(const_cast<HTMLElementOrLong&>(aUnion))
  {
  }

  inline bool
  TrySetToHTMLElement(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<nsGenericHTMLElement>& memberSlot = RawSetAsHTMLElement();
      {
        nsresult rv = UnwrapObject<prototypes::id::HTMLElement, nsGenericHTMLElement>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyHTMLElement();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToLong(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      int32_t& memberSlot = RawSetAsLong();
      if (!ValueToPrimitive<int32_t, eDefault>(cx, value, &memberSlot)) {
        return false;
      }
    }
    return true;
  }

private:
  inline NonNull<nsGenericHTMLElement>&
  RawSetAsHTMLElement()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eHTMLElement;
    return mUnion.mValue.mHTMLElement.SetValue();
  }

  inline int32_t&
  RawSetAsLong()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eLong;
    return mUnion.mValue.mLong.SetValue();
  }
};

class HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrCanvasRenderingContext2DOrImageBitmapOrArrayBufferViewOrArrayBufferArgument
{
  HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrCanvasRenderingContext2DOrImageBitmapOrArrayBufferViewOrArrayBuffer& mUnion;

  HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrCanvasRenderingContext2DOrImageBitmapOrArrayBufferViewOrArrayBufferArgument(const HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrCanvasRenderingContext2DOrImageBitmapOrArrayBufferViewOrArrayBufferArgument&) = delete;
  void operator=(const HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrCanvasRenderingContext2DOrImageBitmapOrArrayBufferViewOrArrayBufferArgument&) = delete;
public:
  explicit inline HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrCanvasRenderingContext2DOrImageBitmapOrArrayBufferViewOrArrayBufferArgument(const HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrCanvasRenderingContext2DOrImageBitmapOrArrayBufferViewOrArrayBuffer& aUnion)
    : mUnion(const_cast<HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrCanvasRenderingContext2DOrImageBitmapOrArrayBufferViewOrArrayBuffer&>(aUnion))
  {
  }

  inline bool
  TrySetToHTMLImageElement(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::HTMLImageElement>& memberSlot = RawSetAsHTMLImageElement();
      {
        nsresult rv = UnwrapObject<prototypes::id::HTMLImageElement, mozilla::dom::HTMLImageElement>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyHTMLImageElement();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToHTMLVideoElement(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::HTMLVideoElement>& memberSlot = RawSetAsHTMLVideoElement();
      {
        nsresult rv = UnwrapObject<prototypes::id::HTMLVideoElement, mozilla::dom::HTMLVideoElement>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyHTMLVideoElement();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToHTMLCanvasElement(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::HTMLCanvasElement>& memberSlot = RawSetAsHTMLCanvasElement();
      {
        nsresult rv = UnwrapObject<prototypes::id::HTMLCanvasElement, mozilla::dom::HTMLCanvasElement>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyHTMLCanvasElement();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToBlob(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::Blob>& memberSlot = RawSetAsBlob();
      {
        nsresult rv = UnwrapObject<prototypes::id::Blob, mozilla::dom::Blob>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyBlob();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToImageData(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::ImageData>& memberSlot = RawSetAsImageData();
      {
        nsresult rv = UnwrapObject<prototypes::id::ImageData, mozilla::dom::ImageData>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyImageData();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToCanvasRenderingContext2D(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::CanvasRenderingContext2D>& memberSlot = RawSetAsCanvasRenderingContext2D();
      {
        nsresult rv = UnwrapObject<prototypes::id::CanvasRenderingContext2D, mozilla::dom::CanvasRenderingContext2D>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyCanvasRenderingContext2D();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToImageBitmap(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::ImageBitmap>& memberSlot = RawSetAsImageBitmap();
      {
        nsresult rv = UnwrapObject<prototypes::id::ImageBitmap, mozilla::dom::ImageBitmap>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyImageBitmap();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToArrayBufferView(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      RootedTypedArray<ArrayBufferView>& memberSlot = RawSetAsArrayBufferView(cx);
      if (!memberSlot.Init(&value.toObject())) {
        mUnion.DestroyArrayBufferView();
        tryNext = true;
        return true;
      }
    }
    return true;
  }

  inline bool
  TrySetToArrayBuffer(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      RootedTypedArray<ArrayBuffer>& memberSlot = RawSetAsArrayBuffer(cx);
      if (!memberSlot.Init(&value.toObject())) {
        mUnion.DestroyArrayBuffer();
        tryNext = true;
        return true;
      }
    }
    return true;
  }

private:
  inline NonNull<mozilla::dom::HTMLImageElement>&
  RawSetAsHTMLImageElement()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eHTMLImageElement;
    return mUnion.mValue.mHTMLImageElement.SetValue();
  }

  inline NonNull<mozilla::dom::HTMLVideoElement>&
  RawSetAsHTMLVideoElement()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eHTMLVideoElement;
    return mUnion.mValue.mHTMLVideoElement.SetValue();
  }

  inline NonNull<mozilla::dom::HTMLCanvasElement>&
  RawSetAsHTMLCanvasElement()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eHTMLCanvasElement;
    return mUnion.mValue.mHTMLCanvasElement.SetValue();
  }

  inline NonNull<mozilla::dom::Blob>&
  RawSetAsBlob()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eBlob;
    return mUnion.mValue.mBlob.SetValue();
  }

  inline NonNull<mozilla::dom::ImageData>&
  RawSetAsImageData()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eImageData;
    return mUnion.mValue.mImageData.SetValue();
  }

  inline NonNull<mozilla::dom::CanvasRenderingContext2D>&
  RawSetAsCanvasRenderingContext2D()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eCanvasRenderingContext2D;
    return mUnion.mValue.mCanvasRenderingContext2D.SetValue();
  }

  inline NonNull<mozilla::dom::ImageBitmap>&
  RawSetAsImageBitmap()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eImageBitmap;
    return mUnion.mValue.mImageBitmap.SetValue();
  }

  inline RootedTypedArray<ArrayBufferView>&
  RawSetAsArrayBufferView(JSContext* cx)
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eArrayBufferView;
    return mUnion.mValue.mArrayBufferView.SetValue(cx);
  }

  inline RootedTypedArray<ArrayBuffer>&
  RawSetAsArrayBuffer(JSContext* cx)
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eArrayBuffer;
    return mUnion.mValue.mArrayBuffer.SetValue(cx);
  }
};

class HTMLImageElementOrSVGImageElementOrHTMLCanvasElementOrHTMLVideoElementOrImageBitmapArgument
{
  HTMLImageElementOrSVGImageElementOrHTMLCanvasElementOrHTMLVideoElementOrImageBitmap& mUnion;

  HTMLImageElementOrSVGImageElementOrHTMLCanvasElementOrHTMLVideoElementOrImageBitmapArgument(const HTMLImageElementOrSVGImageElementOrHTMLCanvasElementOrHTMLVideoElementOrImageBitmapArgument&) = delete;
  void operator=(const HTMLImageElementOrSVGImageElementOrHTMLCanvasElementOrHTMLVideoElementOrImageBitmapArgument&) = delete;
public:
  explicit inline HTMLImageElementOrSVGImageElementOrHTMLCanvasElementOrHTMLVideoElementOrImageBitmapArgument(const HTMLImageElementOrSVGImageElementOrHTMLCanvasElementOrHTMLVideoElementOrImageBitmap& aUnion)
    : mUnion(const_cast<HTMLImageElementOrSVGImageElementOrHTMLCanvasElementOrHTMLVideoElementOrImageBitmap&>(aUnion))
  {
  }

  inline bool
  TrySetToHTMLImageElement(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::HTMLImageElement>& memberSlot = RawSetAsHTMLImageElement();
      {
        nsresult rv = UnwrapObject<prototypes::id::HTMLImageElement, mozilla::dom::HTMLImageElement>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyHTMLImageElement();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToSVGImageElement(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::SVGImageElement>& memberSlot = RawSetAsSVGImageElement();
      {
        nsresult rv = UnwrapObject<prototypes::id::SVGImageElement, mozilla::dom::SVGImageElement>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroySVGImageElement();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToHTMLCanvasElement(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::HTMLCanvasElement>& memberSlot = RawSetAsHTMLCanvasElement();
      {
        nsresult rv = UnwrapObject<prototypes::id::HTMLCanvasElement, mozilla::dom::HTMLCanvasElement>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyHTMLCanvasElement();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToHTMLVideoElement(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::HTMLVideoElement>& memberSlot = RawSetAsHTMLVideoElement();
      {
        nsresult rv = UnwrapObject<prototypes::id::HTMLVideoElement, mozilla::dom::HTMLVideoElement>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyHTMLVideoElement();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToImageBitmap(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::ImageBitmap>& memberSlot = RawSetAsImageBitmap();
      {
        nsresult rv = UnwrapObject<prototypes::id::ImageBitmap, mozilla::dom::ImageBitmap>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyImageBitmap();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

private:
  inline NonNull<mozilla::dom::HTMLImageElement>&
  RawSetAsHTMLImageElement()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eHTMLImageElement;
    return mUnion.mValue.mHTMLImageElement.SetValue();
  }

  inline NonNull<mozilla::dom::SVGImageElement>&
  RawSetAsSVGImageElement()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eSVGImageElement;
    return mUnion.mValue.mSVGImageElement.SetValue();
  }

  inline NonNull<mozilla::dom::HTMLCanvasElement>&
  RawSetAsHTMLCanvasElement()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eHTMLCanvasElement;
    return mUnion.mValue.mHTMLCanvasElement.SetValue();
  }

  inline NonNull<mozilla::dom::HTMLVideoElement>&
  RawSetAsHTMLVideoElement()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eHTMLVideoElement;
    return mUnion.mValue.mHTMLVideoElement.SetValue();
  }

  inline NonNull<mozilla::dom::ImageBitmap>&
  RawSetAsImageBitmap()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eImageBitmap;
    return mUnion.mValue.mImageBitmap.SetValue();
  }
};

class HTMLOptionElementOrHTMLOptGroupElementArgument
{
  HTMLOptionElementOrHTMLOptGroupElement& mUnion;

  HTMLOptionElementOrHTMLOptGroupElementArgument(const HTMLOptionElementOrHTMLOptGroupElementArgument&) = delete;
  void operator=(const HTMLOptionElementOrHTMLOptGroupElementArgument&) = delete;
public:
  explicit inline HTMLOptionElementOrHTMLOptGroupElementArgument(const HTMLOptionElementOrHTMLOptGroupElement& aUnion)
    : mUnion(const_cast<HTMLOptionElementOrHTMLOptGroupElement&>(aUnion))
  {
  }

  inline bool
  TrySetToHTMLOptionElement(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::HTMLOptionElement>& memberSlot = RawSetAsHTMLOptionElement();
      {
        nsresult rv = UnwrapObject<prototypes::id::HTMLOptionElement, mozilla::dom::HTMLOptionElement>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyHTMLOptionElement();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToHTMLOptGroupElement(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::HTMLOptGroupElement>& memberSlot = RawSetAsHTMLOptGroupElement();
      {
        nsresult rv = UnwrapObject<prototypes::id::HTMLOptGroupElement, mozilla::dom::HTMLOptGroupElement>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyHTMLOptGroupElement();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

private:
  inline NonNull<mozilla::dom::HTMLOptionElement>&
  RawSetAsHTMLOptionElement()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eHTMLOptionElement;
    return mUnion.mValue.mHTMLOptionElement.SetValue();
  }

  inline NonNull<mozilla::dom::HTMLOptGroupElement>&
  RawSetAsHTMLOptGroupElement()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eHTMLOptGroupElement;
    return mUnion.mValue.mHTMLOptGroupElement.SetValue();
  }
};

class HeadersOrByteStringSequenceSequenceOrByteStringByteStringRecordArgument
{
  HeadersOrByteStringSequenceSequenceOrByteStringByteStringRecord& mUnion;

  HeadersOrByteStringSequenceSequenceOrByteStringByteStringRecordArgument(const HeadersOrByteStringSequenceSequenceOrByteStringByteStringRecordArgument&) = delete;
  void operator=(const HeadersOrByteStringSequenceSequenceOrByteStringByteStringRecordArgument&) = delete;
public:
  explicit inline HeadersOrByteStringSequenceSequenceOrByteStringByteStringRecordArgument(const HeadersOrByteStringSequenceSequenceOrByteStringByteStringRecord& aUnion)
    : mUnion(const_cast<HeadersOrByteStringSequenceSequenceOrByteStringByteStringRecord&>(aUnion))
  {
  }

  inline bool
  TrySetToHeaders(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::Headers>& memberSlot = RawSetAsHeaders();
      {
        nsresult rv = UnwrapObject<prototypes::id::Headers, mozilla::dom::Headers>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyHeaders();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToByteStringSequenceSequence(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::AutoSequence<Sequence<nsCString>>& memberSlot = RawSetAsByteStringSequenceSequence();
      JS::ForOfIterator iter(cx);
      if (!iter.init(value, JS::ForOfIterator::AllowNonIterable)) {
        return false;
      }
      if (!iter.valueIsIterable()) {
        mUnion.DestroyByteStringSequenceSequence();
        tryNext = true;
        return true;
      }
      binding_detail::AutoSequence<Sequence<nsCString>> &arr = memberSlot;
      JS::Rooted<JS::Value> temp(cx);
      while (true) {
        bool done;
        if (!iter.next(&temp, &done)) {
          return false;
        }
        if (done) {
          break;
        }
        Sequence<nsCString>* slotPtr = arr.AppendElement(mozilla::fallible);
        if (!slotPtr) {
          JS_ReportOutOfMemory(cx);
          return false;
        }
        Sequence<nsCString>& slot = *slotPtr;
        if (temp.isObject()) {
          JS::ForOfIterator iter1(cx);
          if (!iter1.init(temp, JS::ForOfIterator::AllowNonIterable)) {
            return false;
          }
          if (!iter1.valueIsIterable()) {
            ThrowErrorMessage(cx, MSG_NOT_SEQUENCE, "Element of member of HeadersOrByteStringSequenceSequenceOrByteStringByteStringRecord");
            return false;
          }
          Sequence<nsCString> &arr1 = slot;
          JS::Rooted<JS::Value> temp1(cx);
          while (true) {
            bool done1;
            if (!iter1.next(&temp1, &done1)) {
              return false;
            }
            if (done1) {
              break;
            }
            nsCString* slotPtr1 = arr1.AppendElement(mozilla::fallible);
            if (!slotPtr1) {
              JS_ReportOutOfMemory(cx);
              return false;
            }
            nsCString& slot1 = *slotPtr1;
            if (!ConvertJSValueToByteString(cx, temp1, false, slot1)) {
              return false;
            }
          }
        } else {
          ThrowErrorMessage(cx, MSG_NOT_SEQUENCE, "Element of member of HeadersOrByteStringSequenceSequenceOrByteStringByteStringRecord");
          return false;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToByteStringByteStringRecord(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      Record<nsCString, nsCString>& memberSlot = RawSetAsByteStringByteStringRecord();
      auto& recordEntries = memberSlot.Entries();

      JS::Rooted<JSObject*> recordObj(cx, &value.toObject());
      JS::AutoIdVector ids(cx);
      if (!js::GetPropertyKeys(cx, recordObj,
                               JSITER_OWNONLY | JSITER_HIDDEN | JSITER_SYMBOLS, &ids)) {
        return false;
      }
      if (!recordEntries.SetCapacity(ids.length(), mozilla::fallible)) {
        JS_ReportOutOfMemory(cx);
        return false;
      }
      JS::Rooted<JS::Value> propNameValue(cx);
      JS::Rooted<JS::Value> temp(cx);
      JS::Rooted<jsid> curId(cx);
      JS::Rooted<JS::Value> idVal(cx);
      // Use a hashset to keep track of ids seen, to avoid
      // introducing nasty O(N^2) behavior scanning for them all the
      // time.  Ideally we'd use a data structure with O(1) lookup
      // _and_ ordering for the MozMap, but we don't have one lying
      // around.
      nsTHashtable<nsCStringHashKey> idsSeen;
      for (size_t i = 0; i < ids.length(); ++i) {
        curId = ids[i];

        JS::Rooted<JS::PropertyDescriptor> desc(cx);
        if (!JS_GetOwnPropertyDescriptorById(cx, recordObj, curId,
                                             &desc)) {
          return false;
        }

        if (!desc.object() /* == undefined in spec terms */ ||
            !desc.enumerable()) {
          continue;
        }

        idVal = js::IdToValue(curId);
        nsCString propName;
        // This will just throw if idVal is a Symbol, like the spec says
        // to do.
        if (!ConvertJSValueToByteString(cx, idVal, propName)) {
          return false;
        }

        if (!JS_GetPropertyById(cx, recordObj, curId, &temp)) {
          return false;
        }

        Record<nsCString, nsCString>::EntryType* entry;
        if (idsSeen.Contains(propName)) {
          // Find the existing entry.
          auto idx = recordEntries.IndexOf(propName);
          MOZ_ASSERT(idx != recordEntries.NoIndex,
                     "Why is it not found?");
          // Now blow it away to make it look like it was just added
          // to the array, because it's not obvious that it's
          // safe to write to its already-initialized mValue via our
          // normal codegen conversions.  For example, the value
          // could be a union and this would change its type, but
          // codegen assumes we won't do that.
          entry = recordEntries.ReconstructElementAt(idx);
        } else {
          // Safe to do an infallible append here, because we did a
          // SetCapacity above to the right capacity.
          entry = recordEntries.AppendElement();
          idsSeen.PutEntry(propName);
        }
        entry->mKey = propName;
        nsCString& slot = entry->mValue;
        if (!ConvertJSValueToByteString(cx, temp, false, slot)) {
          return false;
        }
      }
    }
    return true;
  }

private:
  inline NonNull<mozilla::dom::Headers>&
  RawSetAsHeaders()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eHeaders;
    return mUnion.mValue.mHeaders.SetValue();
  }

  inline binding_detail::AutoSequence<Sequence<nsCString>>&
  RawSetAsByteStringSequenceSequence()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eByteStringSequenceSequence;
    return mUnion.mValue.mByteStringSequenceSequence.SetValue();
  }

  inline Record<nsCString, nsCString>&
  RawSetAsByteStringByteStringRecord()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eByteStringByteStringRecord;
    return mUnion.mValue.mByteStringByteStringRecord.SetValue();
  }
};

class IDBObjectStoreOrIDBIndexArgument
{
  IDBObjectStoreOrIDBIndex& mUnion;

  IDBObjectStoreOrIDBIndexArgument(const IDBObjectStoreOrIDBIndexArgument&) = delete;
  void operator=(const IDBObjectStoreOrIDBIndexArgument&) = delete;
public:
  explicit inline IDBObjectStoreOrIDBIndexArgument(const IDBObjectStoreOrIDBIndex& aUnion)
    : mUnion(const_cast<IDBObjectStoreOrIDBIndex&>(aUnion))
  {
  }

  inline bool
  TrySetToIDBObjectStore(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::IDBObjectStore>& memberSlot = RawSetAsIDBObjectStore();
      {
        nsresult rv = UnwrapObject<prototypes::id::IDBObjectStore, mozilla::dom::IDBObjectStore>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyIDBObjectStore();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToIDBIndex(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::IDBIndex>& memberSlot = RawSetAsIDBIndex();
      {
        nsresult rv = UnwrapObject<prototypes::id::IDBIndex, mozilla::dom::IDBIndex>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyIDBIndex();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

private:
  inline NonNull<mozilla::dom::IDBObjectStore>&
  RawSetAsIDBObjectStore()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eIDBObjectStore;
    return mUnion.mValue.mIDBObjectStore.SetValue();
  }

  inline NonNull<mozilla::dom::IDBIndex>&
  RawSetAsIDBIndex()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eIDBIndex;
    return mUnion.mValue.mIDBIndex.SetValue();
  }
};

class IDBObjectStoreOrIDBIndexOrIDBCursorArgument
{
  IDBObjectStoreOrIDBIndexOrIDBCursor& mUnion;

  IDBObjectStoreOrIDBIndexOrIDBCursorArgument(const IDBObjectStoreOrIDBIndexOrIDBCursorArgument&) = delete;
  void operator=(const IDBObjectStoreOrIDBIndexOrIDBCursorArgument&) = delete;
public:
  explicit inline IDBObjectStoreOrIDBIndexOrIDBCursorArgument(const IDBObjectStoreOrIDBIndexOrIDBCursor& aUnion)
    : mUnion(const_cast<IDBObjectStoreOrIDBIndexOrIDBCursor&>(aUnion))
  {
  }

  inline bool
  TrySetToIDBObjectStore(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::IDBObjectStore>& memberSlot = RawSetAsIDBObjectStore();
      {
        nsresult rv = UnwrapObject<prototypes::id::IDBObjectStore, mozilla::dom::IDBObjectStore>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyIDBObjectStore();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToIDBIndex(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::IDBIndex>& memberSlot = RawSetAsIDBIndex();
      {
        nsresult rv = UnwrapObject<prototypes::id::IDBIndex, mozilla::dom::IDBIndex>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyIDBIndex();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToIDBCursor(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::IDBCursor>& memberSlot = RawSetAsIDBCursor();
      {
        nsresult rv = UnwrapObject<prototypes::id::IDBCursor, mozilla::dom::IDBCursor>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyIDBCursor();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

private:
  inline NonNull<mozilla::dom::IDBObjectStore>&
  RawSetAsIDBObjectStore()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eIDBObjectStore;
    return mUnion.mValue.mIDBObjectStore.SetValue();
  }

  inline NonNull<mozilla::dom::IDBIndex>&
  RawSetAsIDBIndex()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eIDBIndex;
    return mUnion.mValue.mIDBIndex.SetValue();
  }

  inline NonNull<mozilla::dom::IDBCursor>&
  RawSetAsIDBCursor()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eIDBCursor;
    return mUnion.mValue.mIDBCursor.SetValue();
  }
};

class Int32ArrayOrLongSequenceArgument
{
  Int32ArrayOrLongSequence& mUnion;

  Int32ArrayOrLongSequenceArgument(const Int32ArrayOrLongSequenceArgument&) = delete;
  void operator=(const Int32ArrayOrLongSequenceArgument&) = delete;
public:
  explicit inline Int32ArrayOrLongSequenceArgument(const Int32ArrayOrLongSequence& aUnion)
    : mUnion(const_cast<Int32ArrayOrLongSequence&>(aUnion))
  {
  }

  inline bool
  TrySetToInt32Array(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      RootedTypedArray<Int32Array>& memberSlot = RawSetAsInt32Array(cx);
      if (!memberSlot.Init(&value.toObject())) {
        mUnion.DestroyInt32Array();
        tryNext = true;
        return true;
      }
    }
    return true;
  }

  inline bool
  TrySetToLongSequence(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::AutoSequence<int32_t>& memberSlot = RawSetAsLongSequence();
      JS::ForOfIterator iter(cx);
      if (!iter.init(value, JS::ForOfIterator::AllowNonIterable)) {
        return false;
      }
      if (!iter.valueIsIterable()) {
        mUnion.DestroyLongSequence();
        tryNext = true;
        return true;
      }
      binding_detail::AutoSequence<int32_t> &arr = memberSlot;
      JS::Rooted<JS::Value> temp(cx);
      while (true) {
        bool done;
        if (!iter.next(&temp, &done)) {
          return false;
        }
        if (done) {
          break;
        }
        int32_t* slotPtr = arr.AppendElement(mozilla::fallible);
        if (!slotPtr) {
          JS_ReportOutOfMemory(cx);
          return false;
        }
        int32_t& slot = *slotPtr;
        if (!ValueToPrimitive<int32_t, eDefault>(cx, temp, &slot)) {
          return false;
        }
      }
    }
    return true;
  }

private:
  inline RootedTypedArray<Int32Array>&
  RawSetAsInt32Array(JSContext* cx)
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eInt32Array;
    return mUnion.mValue.mInt32Array.SetValue(cx);
  }

  inline binding_detail::AutoSequence<int32_t>&
  RawSetAsLongSequence()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eLongSequence;
    return mUnion.mValue.mLongSequence.SetValue();
  }
};

class LongOrConstrainLongRangeArgument
{
  LongOrConstrainLongRange& mUnion;

  LongOrConstrainLongRangeArgument(const LongOrConstrainLongRangeArgument&) = delete;
  void operator=(const LongOrConstrainLongRangeArgument&) = delete;
public:
  explicit inline LongOrConstrainLongRangeArgument(const LongOrConstrainLongRange& aUnion)
    : mUnion(const_cast<LongOrConstrainLongRange&>(aUnion))
  {
  }

  inline bool
  TrySetToLong(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      int32_t& memberSlot = RawSetAsLong();
      if (!ValueToPrimitive<int32_t, eDefault>(cx, value, &memberSlot)) {
        return false;
      }
    }
    return true;
  }

  inline bool
  TrySetToConstrainLongRange(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FastConstrainLongRange& memberSlot = RawSetAsConstrainLongRange();
      { // scope for isConvertible
        bool isConvertible;
        if (!IsConvertibleToDictionary(cx, value, &isConvertible)) {
          return false;
        }
        if (!isConvertible) {
          mUnion.DestroyConstrainLongRange();
          tryNext = true;
          return true;
        }

        if (!memberSlot.Init(cx, value,  "Member of LongOrConstrainLongRange", passedToJSImpl)) {
          return false;
        }
      }

    }
    return true;
  }

private:
  inline int32_t&
  RawSetAsLong()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eLong;
    return mUnion.mValue.mLong.SetValue();
  }

  inline binding_detail::FastConstrainLongRange&
  RawSetAsConstrainLongRange()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eConstrainLongRange;
    return mUnion.mValue.mConstrainLongRange.SetValue();
  }
};

class MozInputMethodRequiredKeyboardEventDictOrLongArgument
{
  MozInputMethodRequiredKeyboardEventDictOrLong& mUnion;

  MozInputMethodRequiredKeyboardEventDictOrLongArgument(const MozInputMethodRequiredKeyboardEventDictOrLongArgument&) = delete;
  void operator=(const MozInputMethodRequiredKeyboardEventDictOrLongArgument&) = delete;
public:
  explicit inline MozInputMethodRequiredKeyboardEventDictOrLongArgument(const MozInputMethodRequiredKeyboardEventDictOrLong& aUnion)
    : mUnion(const_cast<MozInputMethodRequiredKeyboardEventDictOrLong&>(aUnion))
  {
  }

  inline bool
  TrySetToMozInputMethodRequiredKeyboardEventDict(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FastMozInputMethodRequiredKeyboardEventDict& memberSlot = RawSetAsMozInputMethodRequiredKeyboardEventDict();
      { // scope for isConvertible
        bool isConvertible;
        if (!IsConvertibleToDictionary(cx, value, &isConvertible)) {
          return false;
        }
        if (!isConvertible) {
          mUnion.DestroyMozInputMethodRequiredKeyboardEventDict();
          tryNext = true;
          return true;
        }

        if (!memberSlot.Init(cx, value,  "Member of MozInputMethodRequiredKeyboardEventDictOrLong", passedToJSImpl)) {
          return false;
        }
      }

    }
    return true;
  }

  inline bool
  TrySetToLong(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      int32_t& memberSlot = RawSetAsLong();
      if (!ValueToPrimitive<int32_t, eDefault>(cx, value, &memberSlot)) {
        return false;
      }
    }
    return true;
  }

private:
  inline binding_detail::FastMozInputMethodRequiredKeyboardEventDict&
  RawSetAsMozInputMethodRequiredKeyboardEventDict()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eMozInputMethodRequiredKeyboardEventDict;
    return mUnion.mValue.mMozInputMethodRequiredKeyboardEventDict.SetValue();
  }

  inline int32_t&
  RawSetAsLong()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eLong;
    return mUnion.mValue.mLong.SetValue();
  }
};

class NodeOrHTMLCollectionArgument
{
  NodeOrHTMLCollection& mUnion;

  NodeOrHTMLCollectionArgument(const NodeOrHTMLCollectionArgument&) = delete;
  void operator=(const NodeOrHTMLCollectionArgument&) = delete;
public:
  explicit inline NodeOrHTMLCollectionArgument(const NodeOrHTMLCollection& aUnion)
    : mUnion(const_cast<NodeOrHTMLCollection&>(aUnion))
  {
  }

  inline bool
  TrySetToNode(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<nsINode>& memberSlot = RawSetAsNode();
      {
        nsresult rv = UnwrapObject<prototypes::id::Node, nsINode>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyNode();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToHTMLCollection(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<nsIHTMLCollection>& memberSlot = RawSetAsHTMLCollection();
      {
        nsresult rv = UnwrapObject<prototypes::id::HTMLCollection, nsIHTMLCollection>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyHTMLCollection();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

private:
  inline NonNull<nsINode>&
  RawSetAsNode()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eNode;
    return mUnion.mValue.mNode.SetValue();
  }

  inline NonNull<nsIHTMLCollection>&
  RawSetAsHTMLCollection()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eHTMLCollection;
    return mUnion.mValue.mHTMLCollection.SetValue();
  }
};

class NodeOrStringArgument
{
  NodeOrString& mUnion;

  NodeOrStringArgument(const NodeOrStringArgument&) = delete;
  void operator=(const NodeOrStringArgument&) = delete;
public:
  explicit inline NodeOrStringArgument(const NodeOrString& aUnion)
    : mUnion(const_cast<NodeOrString&>(aUnion))
  {
  }

  inline bool
  TrySetToNode(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<nsINode>& memberSlot = RawSetAsNode();
      {
        nsresult rv = UnwrapObject<prototypes::id::Node, nsINode>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyNode();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToString(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FakeString& memberSlot = RawSetAsString();
      if (!ConvertJSValueToString(cx, value, eStringify, eStringify, memberSlot)) {
        return false;
      }
    }
    return true;
  }

  inline void
  SetStringData(const nsDependentString::char_type* aData, nsDependentString::size_type aLength)
  {
    RawSetAsString().Rebind(aData, aLength);
  }

private:
  inline NonNull<nsINode>&
  RawSetAsNode()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eNode;
    return mUnion.mValue.mNode.SetValue();
  }

  inline binding_detail::FakeString&
  RawSetAsString()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eString;
    return mUnion.mValue.mString.SetValue();
  }
};

class ObjectOrStringArgument
{
  ObjectOrString& mUnion;

  ObjectOrStringArgument(const ObjectOrStringArgument&) = delete;
  void operator=(const ObjectOrStringArgument&) = delete;
public:
  explicit inline ObjectOrStringArgument(const ObjectOrString& aUnion)
    : mUnion(const_cast<ObjectOrString&>(aUnion))
  {
  }

  inline bool
  SetToObject(JSContext* cx, JSObject* obj, bool passedToJSImpl = false)
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mValue.mObject.SetValue(cx, obj);
    mUnion.mType = mUnion.eObject;
    if (passedToJSImpl && !CallerSubsumes(obj)) {
      ThrowErrorMessage(cx, MSG_PERMISSION_DENIED_TO_PASS_ARG, "%s");
      return false;
    }
    return true;
  }

  inline bool
  TrySetToString(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FakeString& memberSlot = RawSetAsString();
      if (!ConvertJSValueToString(cx, value, eStringify, eStringify, memberSlot)) {
        return false;
      }
    }
    return true;
  }

  inline void
  SetStringData(const nsDependentString::char_type* aData, nsDependentString::size_type aLength)
  {
    RawSetAsString().Rebind(aData, aLength);
  }

private:
  inline binding_detail::FakeString&
  RawSetAsString()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eString;
    return mUnion.mValue.mString.SetValue();
  }
};

class RadioNodeListOrElementArgument
{
  RadioNodeListOrElement& mUnion;

  RadioNodeListOrElementArgument(const RadioNodeListOrElementArgument&) = delete;
  void operator=(const RadioNodeListOrElementArgument&) = delete;
public:
  explicit inline RadioNodeListOrElementArgument(const RadioNodeListOrElement& aUnion)
    : mUnion(const_cast<RadioNodeListOrElement&>(aUnion))
  {
  }

  inline bool
  TrySetToRadioNodeList(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::RadioNodeList>& memberSlot = RawSetAsRadioNodeList();
      {
        nsresult rv = UnwrapObject<prototypes::id::RadioNodeList, mozilla::dom::RadioNodeList>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyRadioNodeList();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToElement(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::Element>& memberSlot = RawSetAsElement();
      {
        nsresult rv = UnwrapObject<prototypes::id::Element, mozilla::dom::Element>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyElement();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

private:
  inline NonNull<mozilla::dom::RadioNodeList>&
  RawSetAsRadioNodeList()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eRadioNodeList;
    return mUnion.mValue.mRadioNodeList.SetValue();
  }

  inline NonNull<mozilla::dom::Element>&
  RawSetAsElement()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eElement;
    return mUnion.mValue.mElement.SetValue();
  }
};

class RequestOrUSVStringArgument
{
  RequestOrUSVString& mUnion;

  RequestOrUSVStringArgument(const RequestOrUSVStringArgument&) = delete;
  void operator=(const RequestOrUSVStringArgument&) = delete;
public:
  explicit inline RequestOrUSVStringArgument(const RequestOrUSVString& aUnion)
    : mUnion(const_cast<RequestOrUSVString&>(aUnion))
  {
  }

  inline bool
  TrySetToRequest(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::Request>& memberSlot = RawSetAsRequest();
      {
        nsresult rv = UnwrapObject<prototypes::id::Request, mozilla::dom::Request>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyRequest();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToUSVString(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FakeString& memberSlot = RawSetAsUSVString();
      if (!ConvertJSValueToString(cx, value, eStringify, eStringify, memberSlot)) {
        return false;
      }
      NormalizeUSVString(memberSlot);
    }
    return true;
  }

  inline void
  SetStringData(const nsDependentString::char_type* aData, nsDependentString::size_type aLength)
  {
    RawSetAsUSVString().Rebind(aData, aLength);
  }

private:
  inline NonNull<mozilla::dom::Request>&
  RawSetAsRequest()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eRequest;
    return mUnion.mValue.mRequest.SetValue();
  }

  inline binding_detail::FakeString&
  RawSetAsUSVString()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eUSVString;
    return mUnion.mValue.mUSVString.SetValue();
  }
};

class ServiceWorkerOrMessagePortArgument
{
  ServiceWorkerOrMessagePort& mUnion;

  ServiceWorkerOrMessagePortArgument(const ServiceWorkerOrMessagePortArgument&) = delete;
  void operator=(const ServiceWorkerOrMessagePortArgument&) = delete;
public:
  explicit inline ServiceWorkerOrMessagePortArgument(const ServiceWorkerOrMessagePort& aUnion)
    : mUnion(const_cast<ServiceWorkerOrMessagePort&>(aUnion))
  {
  }

  inline bool
  TrySetToServiceWorker(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::workers::ServiceWorker>& memberSlot = RawSetAsServiceWorker();
      {
        nsresult rv = UnwrapObject<prototypes::id::ServiceWorker, mozilla::dom::workers::ServiceWorker>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyServiceWorker();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToMessagePort(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::MessagePort>& memberSlot = RawSetAsMessagePort();
      {
        nsresult rv = UnwrapObject<prototypes::id::MessagePort, mozilla::dom::MessagePort>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyMessagePort();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

private:
  inline NonNull<mozilla::dom::workers::ServiceWorker>&
  RawSetAsServiceWorker()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eServiceWorker;
    return mUnion.mValue.mServiceWorker.SetValue();
  }

  inline NonNull<mozilla::dom::MessagePort>&
  RawSetAsMessagePort()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eMessagePort;
    return mUnion.mValue.mMessagePort.SetValue();
  }
};

class StringOrArrayBufferOrArrayBufferViewArgument
{
  StringOrArrayBufferOrArrayBufferView& mUnion;

  StringOrArrayBufferOrArrayBufferViewArgument(const StringOrArrayBufferOrArrayBufferViewArgument&) = delete;
  void operator=(const StringOrArrayBufferOrArrayBufferViewArgument&) = delete;
public:
  explicit inline StringOrArrayBufferOrArrayBufferViewArgument(const StringOrArrayBufferOrArrayBufferView& aUnion)
    : mUnion(const_cast<StringOrArrayBufferOrArrayBufferView&>(aUnion))
  {
  }

  inline bool
  TrySetToString(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FakeString& memberSlot = RawSetAsString();
      if (!ConvertJSValueToString(cx, value, eStringify, eStringify, memberSlot)) {
        return false;
      }
    }
    return true;
  }

  inline void
  SetStringData(const nsDependentString::char_type* aData, nsDependentString::size_type aLength)
  {
    RawSetAsString().Rebind(aData, aLength);
  }

  inline bool
  TrySetToArrayBuffer(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      RootedTypedArray<ArrayBuffer>& memberSlot = RawSetAsArrayBuffer(cx);
      if (!memberSlot.Init(&value.toObject())) {
        mUnion.DestroyArrayBuffer();
        tryNext = true;
        return true;
      }
    }
    return true;
  }

  inline bool
  TrySetToArrayBufferView(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      RootedTypedArray<ArrayBufferView>& memberSlot = RawSetAsArrayBufferView(cx);
      if (!memberSlot.Init(&value.toObject())) {
        mUnion.DestroyArrayBufferView();
        tryNext = true;
        return true;
      }
    }
    return true;
  }

private:
  inline binding_detail::FakeString&
  RawSetAsString()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eString;
    return mUnion.mValue.mString.SetValue();
  }

  inline RootedTypedArray<ArrayBuffer>&
  RawSetAsArrayBuffer(JSContext* cx)
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eArrayBuffer;
    return mUnion.mValue.mArrayBuffer.SetValue(cx);
  }

  inline RootedTypedArray<ArrayBufferView>&
  RawSetAsArrayBufferView(JSContext* cx)
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eArrayBufferView;
    return mUnion.mValue.mArrayBufferView.SetValue(cx);
  }
};

class StringOrArrayBufferOrArrayBufferViewOrBlobArgument
{
  StringOrArrayBufferOrArrayBufferViewOrBlob& mUnion;

  StringOrArrayBufferOrArrayBufferViewOrBlobArgument(const StringOrArrayBufferOrArrayBufferViewOrBlobArgument&) = delete;
  void operator=(const StringOrArrayBufferOrArrayBufferViewOrBlobArgument&) = delete;
public:
  explicit inline StringOrArrayBufferOrArrayBufferViewOrBlobArgument(const StringOrArrayBufferOrArrayBufferViewOrBlob& aUnion)
    : mUnion(const_cast<StringOrArrayBufferOrArrayBufferViewOrBlob&>(aUnion))
  {
  }

  inline bool
  TrySetToString(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FakeString& memberSlot = RawSetAsString();
      if (!ConvertJSValueToString(cx, value, eStringify, eStringify, memberSlot)) {
        return false;
      }
    }
    return true;
  }

  inline void
  SetStringData(const nsDependentString::char_type* aData, nsDependentString::size_type aLength)
  {
    RawSetAsString().Rebind(aData, aLength);
  }

  inline bool
  TrySetToArrayBuffer(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      RootedTypedArray<ArrayBuffer>& memberSlot = RawSetAsArrayBuffer(cx);
      if (!memberSlot.Init(&value.toObject())) {
        mUnion.DestroyArrayBuffer();
        tryNext = true;
        return true;
      }
    }
    return true;
  }

  inline bool
  TrySetToArrayBufferView(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      RootedTypedArray<ArrayBufferView>& memberSlot = RawSetAsArrayBufferView(cx);
      if (!memberSlot.Init(&value.toObject())) {
        mUnion.DestroyArrayBufferView();
        tryNext = true;
        return true;
      }
    }
    return true;
  }

  inline bool
  TrySetToBlob(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::Blob>& memberSlot = RawSetAsBlob();
      {
        nsresult rv = UnwrapObject<prototypes::id::Blob, mozilla::dom::Blob>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyBlob();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

private:
  inline binding_detail::FakeString&
  RawSetAsString()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eString;
    return mUnion.mValue.mString.SetValue();
  }

  inline RootedTypedArray<ArrayBuffer>&
  RawSetAsArrayBuffer(JSContext* cx)
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eArrayBuffer;
    return mUnion.mValue.mArrayBuffer.SetValue(cx);
  }

  inline RootedTypedArray<ArrayBufferView>&
  RawSetAsArrayBufferView(JSContext* cx)
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eArrayBufferView;
    return mUnion.mValue.mArrayBufferView.SetValue(cx);
  }

  inline NonNull<mozilla::dom::Blob>&
  RawSetAsBlob()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eBlob;
    return mUnion.mValue.mBlob.SetValue();
  }
};

class StringOrBlobOrArrayBufferOrArrayBufferViewArgument
{
  StringOrBlobOrArrayBufferOrArrayBufferView& mUnion;

  StringOrBlobOrArrayBufferOrArrayBufferViewArgument(const StringOrBlobOrArrayBufferOrArrayBufferViewArgument&) = delete;
  void operator=(const StringOrBlobOrArrayBufferOrArrayBufferViewArgument&) = delete;
public:
  explicit inline StringOrBlobOrArrayBufferOrArrayBufferViewArgument(const StringOrBlobOrArrayBufferOrArrayBufferView& aUnion)
    : mUnion(const_cast<StringOrBlobOrArrayBufferOrArrayBufferView&>(aUnion))
  {
  }

  inline bool
  TrySetToString(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FakeString& memberSlot = RawSetAsString();
      if (!ConvertJSValueToString(cx, value, eStringify, eStringify, memberSlot)) {
        return false;
      }
    }
    return true;
  }

  inline void
  SetStringData(const nsDependentString::char_type* aData, nsDependentString::size_type aLength)
  {
    RawSetAsString().Rebind(aData, aLength);
  }

  inline bool
  TrySetToBlob(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::Blob>& memberSlot = RawSetAsBlob();
      {
        nsresult rv = UnwrapObject<prototypes::id::Blob, mozilla::dom::Blob>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyBlob();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToArrayBuffer(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      RootedTypedArray<ArrayBuffer>& memberSlot = RawSetAsArrayBuffer(cx);
      if (!memberSlot.Init(&value.toObject())) {
        mUnion.DestroyArrayBuffer();
        tryNext = true;
        return true;
      }
    }
    return true;
  }

  inline bool
  TrySetToArrayBufferView(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      RootedTypedArray<ArrayBufferView>& memberSlot = RawSetAsArrayBufferView(cx);
      if (!memberSlot.Init(&value.toObject())) {
        mUnion.DestroyArrayBufferView();
        tryNext = true;
        return true;
      }
    }
    return true;
  }

private:
  inline binding_detail::FakeString&
  RawSetAsString()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eString;
    return mUnion.mValue.mString.SetValue();
  }

  inline NonNull<mozilla::dom::Blob>&
  RawSetAsBlob()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eBlob;
    return mUnion.mValue.mBlob.SetValue();
  }

  inline RootedTypedArray<ArrayBuffer>&
  RawSetAsArrayBuffer(JSContext* cx)
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eArrayBuffer;
    return mUnion.mValue.mArrayBuffer.SetValue(cx);
  }

  inline RootedTypedArray<ArrayBufferView>&
  RawSetAsArrayBufferView(JSContext* cx)
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eArrayBufferView;
    return mUnion.mValue.mArrayBufferView.SetValue(cx);
  }
};

class StringOrCanvasGradientOrCanvasPatternArgument
{
  StringOrCanvasGradientOrCanvasPattern& mUnion;

  StringOrCanvasGradientOrCanvasPatternArgument(const StringOrCanvasGradientOrCanvasPatternArgument&) = delete;
  void operator=(const StringOrCanvasGradientOrCanvasPatternArgument&) = delete;
public:
  explicit inline StringOrCanvasGradientOrCanvasPatternArgument(const StringOrCanvasGradientOrCanvasPattern& aUnion)
    : mUnion(const_cast<StringOrCanvasGradientOrCanvasPattern&>(aUnion))
  {
  }

  inline bool
  TrySetToString(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FakeString& memberSlot = RawSetAsString();
      if (!ConvertJSValueToString(cx, value, eStringify, eStringify, memberSlot)) {
        return false;
      }
    }
    return true;
  }

  inline void
  SetStringData(const nsDependentString::char_type* aData, nsDependentString::size_type aLength)
  {
    RawSetAsString().Rebind(aData, aLength);
  }

  inline bool
  TrySetToCanvasGradient(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::CanvasGradient>& memberSlot = RawSetAsCanvasGradient();
      {
        nsresult rv = UnwrapObject<prototypes::id::CanvasGradient, mozilla::dom::CanvasGradient>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyCanvasGradient();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToCanvasPattern(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::CanvasPattern>& memberSlot = RawSetAsCanvasPattern();
      {
        nsresult rv = UnwrapObject<prototypes::id::CanvasPattern, mozilla::dom::CanvasPattern>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyCanvasPattern();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

private:
  inline binding_detail::FakeString&
  RawSetAsString()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eString;
    return mUnion.mValue.mString.SetValue();
  }

  inline NonNull<mozilla::dom::CanvasGradient>&
  RawSetAsCanvasGradient()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eCanvasGradient;
    return mUnion.mValue.mCanvasGradient.SetValue();
  }

  inline NonNull<mozilla::dom::CanvasPattern>&
  RawSetAsCanvasPattern()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eCanvasPattern;
    return mUnion.mValue.mCanvasPattern.SetValue();
  }
};

class StringOrInstallTriggerDataArgument
{
  StringOrInstallTriggerData& mUnion;

  StringOrInstallTriggerDataArgument(const StringOrInstallTriggerDataArgument&) = delete;
  void operator=(const StringOrInstallTriggerDataArgument&) = delete;
public:
  explicit inline StringOrInstallTriggerDataArgument(const StringOrInstallTriggerData& aUnion)
    : mUnion(const_cast<StringOrInstallTriggerData&>(aUnion))
  {
  }

  inline bool
  TrySetToString(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FakeString& memberSlot = RawSetAsString();
      if (!ConvertJSValueToString(cx, value, eStringify, eStringify, memberSlot)) {
        return false;
      }
    }
    return true;
  }

  inline void
  SetStringData(const nsDependentString::char_type* aData, nsDependentString::size_type aLength)
  {
    RawSetAsString().Rebind(aData, aLength);
  }

  inline bool
  TrySetToInstallTriggerData(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FastInstallTriggerData& memberSlot = RawSetAsInstallTriggerData();
      { // scope for isConvertible
        bool isConvertible;
        if (!IsConvertibleToDictionary(cx, value, &isConvertible)) {
          return false;
        }
        if (!isConvertible) {
          mUnion.DestroyInstallTriggerData();
          tryNext = true;
          return true;
        }

        if (!memberSlot.Init(cx, value,  "Member of StringOrInstallTriggerData", passedToJSImpl)) {
          return false;
        }
      }

    }
    return true;
  }

private:
  inline binding_detail::FakeString&
  RawSetAsString()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eString;
    return mUnion.mValue.mString.SetValue();
  }

  inline binding_detail::FastInstallTriggerData&
  RawSetAsInstallTriggerData()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eInstallTriggerData;
    return mUnion.mValue.mInstallTriggerData.SetValue();
  }
};

class StringOrStringSequenceArgument
{
  StringOrStringSequence& mUnion;

  StringOrStringSequenceArgument(const StringOrStringSequenceArgument&) = delete;
  void operator=(const StringOrStringSequenceArgument&) = delete;
public:
  explicit inline StringOrStringSequenceArgument(const StringOrStringSequence& aUnion)
    : mUnion(const_cast<StringOrStringSequence&>(aUnion))
  {
  }

  inline bool
  TrySetToString(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FakeString& memberSlot = RawSetAsString();
      if (!ConvertJSValueToString(cx, value, eStringify, eStringify, memberSlot)) {
        return false;
      }
    }
    return true;
  }

  inline void
  SetStringData(const nsDependentString::char_type* aData, nsDependentString::size_type aLength)
  {
    RawSetAsString().Rebind(aData, aLength);
  }

  inline bool
  TrySetToStringSequence(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::AutoSequence<nsString>& memberSlot = RawSetAsStringSequence();
      JS::ForOfIterator iter(cx);
      if (!iter.init(value, JS::ForOfIterator::AllowNonIterable)) {
        return false;
      }
      if (!iter.valueIsIterable()) {
        mUnion.DestroyStringSequence();
        tryNext = true;
        return true;
      }
      binding_detail::AutoSequence<nsString> &arr = memberSlot;
      JS::Rooted<JS::Value> temp(cx);
      while (true) {
        bool done;
        if (!iter.next(&temp, &done)) {
          return false;
        }
        if (done) {
          break;
        }
        nsString* slotPtr = arr.AppendElement(mozilla::fallible);
        if (!slotPtr) {
          JS_ReportOutOfMemory(cx);
          return false;
        }
        nsString& slot = *slotPtr;
        if (!ConvertJSValueToString(cx, temp, eStringify, eStringify, slot)) {
          return false;
        }
      }
    }
    return true;
  }

private:
  inline binding_detail::FakeString&
  RawSetAsString()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eString;
    return mUnion.mValue.mString.SetValue();
  }

  inline binding_detail::AutoSequence<nsString>&
  RawSetAsStringSequence()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eStringSequence;
    return mUnion.mValue.mStringSequence.SetValue();
  }
};

class StringOrStringSequenceOrConstrainDOMStringParametersArgument
{
  StringOrStringSequenceOrConstrainDOMStringParameters& mUnion;

  StringOrStringSequenceOrConstrainDOMStringParametersArgument(const StringOrStringSequenceOrConstrainDOMStringParametersArgument&) = delete;
  void operator=(const StringOrStringSequenceOrConstrainDOMStringParametersArgument&) = delete;
public:
  explicit inline StringOrStringSequenceOrConstrainDOMStringParametersArgument(const StringOrStringSequenceOrConstrainDOMStringParameters& aUnion)
    : mUnion(const_cast<StringOrStringSequenceOrConstrainDOMStringParameters&>(aUnion))
  {
  }

  inline bool
  TrySetToString(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FakeString& memberSlot = RawSetAsString();
      if (!ConvertJSValueToString(cx, value, eStringify, eStringify, memberSlot)) {
        return false;
      }
    }
    return true;
  }

  inline void
  SetStringData(const nsDependentString::char_type* aData, nsDependentString::size_type aLength)
  {
    RawSetAsString().Rebind(aData, aLength);
  }

  inline bool
  TrySetToStringSequence(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::AutoSequence<nsString>& memberSlot = RawSetAsStringSequence();
      JS::ForOfIterator iter(cx);
      if (!iter.init(value, JS::ForOfIterator::AllowNonIterable)) {
        return false;
      }
      if (!iter.valueIsIterable()) {
        mUnion.DestroyStringSequence();
        tryNext = true;
        return true;
      }
      binding_detail::AutoSequence<nsString> &arr = memberSlot;
      JS::Rooted<JS::Value> temp(cx);
      while (true) {
        bool done;
        if (!iter.next(&temp, &done)) {
          return false;
        }
        if (done) {
          break;
        }
        nsString* slotPtr = arr.AppendElement(mozilla::fallible);
        if (!slotPtr) {
          JS_ReportOutOfMemory(cx);
          return false;
        }
        nsString& slot = *slotPtr;
        if (!ConvertJSValueToString(cx, temp, eStringify, eStringify, slot)) {
          return false;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToConstrainDOMStringParameters(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FastConstrainDOMStringParameters& memberSlot = RawSetAsConstrainDOMStringParameters();
      { // scope for isConvertible
        bool isConvertible;
        if (!IsConvertibleToDictionary(cx, value, &isConvertible)) {
          return false;
        }
        if (!isConvertible) {
          mUnion.DestroyConstrainDOMStringParameters();
          tryNext = true;
          return true;
        }

        if (!memberSlot.Init(cx, value,  "Member of StringOrStringSequenceOrConstrainDOMStringParameters", passedToJSImpl)) {
          return false;
        }
      }

    }
    return true;
  }

private:
  inline binding_detail::FakeString&
  RawSetAsString()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eString;
    return mUnion.mValue.mString.SetValue();
  }

  inline binding_detail::AutoSequence<nsString>&
  RawSetAsStringSequence()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eStringSequence;
    return mUnion.mValue.mStringSequence.SetValue();
  }

  inline binding_detail::FastConstrainDOMStringParameters&
  RawSetAsConstrainDOMStringParameters()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eConstrainDOMStringParameters;
    return mUnion.mValue.mConstrainDOMStringParameters.SetValue();
  }
};

class TextOrElementOrDocumentArgument
{
  TextOrElementOrDocument& mUnion;

  TextOrElementOrDocumentArgument(const TextOrElementOrDocumentArgument&) = delete;
  void operator=(const TextOrElementOrDocumentArgument&) = delete;
public:
  explicit inline TextOrElementOrDocumentArgument(const TextOrElementOrDocument& aUnion)
    : mUnion(const_cast<TextOrElementOrDocument&>(aUnion))
  {
  }

  inline bool
  TrySetToText(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::Text>& memberSlot = RawSetAsText();
      {
        nsresult rv = UnwrapObject<prototypes::id::Text, mozilla::dom::Text>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyText();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToElement(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::Element>& memberSlot = RawSetAsElement();
      {
        nsresult rv = UnwrapObject<prototypes::id::Element, mozilla::dom::Element>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyElement();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToDocument(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<nsIDocument>& memberSlot = RawSetAsDocument();
      {
        nsresult rv = UnwrapObject<prototypes::id::Document, nsIDocument>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyDocument();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

private:
  inline NonNull<mozilla::dom::Text>&
  RawSetAsText()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eText;
    return mUnion.mValue.mText.SetValue();
  }

  inline NonNull<mozilla::dom::Element>&
  RawSetAsElement()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eElement;
    return mUnion.mValue.mElement.SetValue();
  }

  inline NonNull<nsIDocument>&
  RawSetAsDocument()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eDocument;
    return mUnion.mValue.mDocument.SetValue();
  }
};

class USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVStringArgument
{
  USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString& mUnion;

  USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVStringArgument(const USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVStringArgument&) = delete;
  void operator=(const USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVStringArgument&) = delete;
public:
  explicit inline USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVStringArgument(const USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString& aUnion)
    : mUnion(const_cast<USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString&>(aUnion))
  {
  }

  inline bool
  TrySetToUSVStringSequenceSequence(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::AutoSequence<Sequence<nsString>>& memberSlot = RawSetAsUSVStringSequenceSequence();
      JS::ForOfIterator iter(cx);
      if (!iter.init(value, JS::ForOfIterator::AllowNonIterable)) {
        return false;
      }
      if (!iter.valueIsIterable()) {
        mUnion.DestroyUSVStringSequenceSequence();
        tryNext = true;
        return true;
      }
      binding_detail::AutoSequence<Sequence<nsString>> &arr = memberSlot;
      JS::Rooted<JS::Value> temp(cx);
      while (true) {
        bool done;
        if (!iter.next(&temp, &done)) {
          return false;
        }
        if (done) {
          break;
        }
        Sequence<nsString>* slotPtr = arr.AppendElement(mozilla::fallible);
        if (!slotPtr) {
          JS_ReportOutOfMemory(cx);
          return false;
        }
        Sequence<nsString>& slot = *slotPtr;
        if (temp.isObject()) {
          JS::ForOfIterator iter1(cx);
          if (!iter1.init(temp, JS::ForOfIterator::AllowNonIterable)) {
            return false;
          }
          if (!iter1.valueIsIterable()) {
            ThrowErrorMessage(cx, MSG_NOT_SEQUENCE, "Element of member of USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString");
            return false;
          }
          Sequence<nsString> &arr1 = slot;
          JS::Rooted<JS::Value> temp1(cx);
          while (true) {
            bool done1;
            if (!iter1.next(&temp1, &done1)) {
              return false;
            }
            if (done1) {
              break;
            }
            nsString* slotPtr1 = arr1.AppendElement(mozilla::fallible);
            if (!slotPtr1) {
              JS_ReportOutOfMemory(cx);
              return false;
            }
            nsString& slot1 = *slotPtr1;
            if (!ConvertJSValueToString(cx, temp1, eStringify, eStringify, slot1)) {
              return false;
            }
            NormalizeUSVString(slot1);
          }
        } else {
          ThrowErrorMessage(cx, MSG_NOT_SEQUENCE, "Element of member of USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString");
          return false;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToUSVStringUSVStringRecord(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      Record<nsString, nsString>& memberSlot = RawSetAsUSVStringUSVStringRecord();
      auto& recordEntries = memberSlot.Entries();

      JS::Rooted<JSObject*> recordObj(cx, &value.toObject());
      JS::AutoIdVector ids(cx);
      if (!js::GetPropertyKeys(cx, recordObj,
                               JSITER_OWNONLY | JSITER_HIDDEN | JSITER_SYMBOLS, &ids)) {
        return false;
      }
      if (!recordEntries.SetCapacity(ids.length(), mozilla::fallible)) {
        JS_ReportOutOfMemory(cx);
        return false;
      }
      JS::Rooted<JS::Value> propNameValue(cx);
      JS::Rooted<JS::Value> temp(cx);
      JS::Rooted<jsid> curId(cx);
      JS::Rooted<JS::Value> idVal(cx);
      // Use a hashset to keep track of ids seen, to avoid
      // introducing nasty O(N^2) behavior scanning for them all the
      // time.  Ideally we'd use a data structure with O(1) lookup
      // _and_ ordering for the MozMap, but we don't have one lying
      // around.
      nsTHashtable<nsStringHashKey> idsSeen;
      for (size_t i = 0; i < ids.length(); ++i) {
        curId = ids[i];

        JS::Rooted<JS::PropertyDescriptor> desc(cx);
        if (!JS_GetOwnPropertyDescriptorById(cx, recordObj, curId,
                                             &desc)) {
          return false;
        }

        if (!desc.object() /* == undefined in spec terms */ ||
            !desc.enumerable()) {
          continue;
        }

        idVal = js::IdToValue(curId);
        nsString propName;
        // This will just throw if idVal is a Symbol, like the spec says
        // to do.
        if (!ConvertJSValueToUSVString(cx, idVal, propName)) {
          return false;
        }

        if (!JS_GetPropertyById(cx, recordObj, curId, &temp)) {
          return false;
        }

        Record<nsString, nsString>::EntryType* entry;
        if (idsSeen.Contains(propName)) {
          // Find the existing entry.
          auto idx = recordEntries.IndexOf(propName);
          MOZ_ASSERT(idx != recordEntries.NoIndex,
                     "Why is it not found?");
          // Now blow it away to make it look like it was just added
          // to the array, because it's not obvious that it's
          // safe to write to its already-initialized mValue via our
          // normal codegen conversions.  For example, the value
          // could be a union and this would change its type, but
          // codegen assumes we won't do that.
          entry = recordEntries.ReconstructElementAt(idx);
        } else {
          // Safe to do an infallible append here, because we did a
          // SetCapacity above to the right capacity.
          entry = recordEntries.AppendElement();
          idsSeen.PutEntry(propName);
        }
        entry->mKey = propName;
        nsString& slot = entry->mValue;
        if (!ConvertJSValueToString(cx, temp, eStringify, eStringify, slot)) {
          return false;
        }
        NormalizeUSVString(slot);
      }
    }
    return true;
  }

  inline bool
  TrySetToUSVString(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FakeString& memberSlot = RawSetAsUSVString();
      if (!ConvertJSValueToString(cx, value, eStringify, eStringify, memberSlot)) {
        return false;
      }
      NormalizeUSVString(memberSlot);
    }
    return true;
  }

  inline void
  SetStringData(const nsDependentString::char_type* aData, nsDependentString::size_type aLength)
  {
    RawSetAsUSVString().Rebind(aData, aLength);
  }

private:
  inline binding_detail::AutoSequence<Sequence<nsString>>&
  RawSetAsUSVStringSequenceSequence()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eUSVStringSequenceSequence;
    return mUnion.mValue.mUSVStringSequenceSequence.SetValue();
  }

  inline Record<nsString, nsString>&
  RawSetAsUSVStringUSVStringRecord()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eUSVStringUSVStringRecord;
    return mUnion.mValue.mUSVStringUSVStringRecord.SetValue();
  }

  inline binding_detail::FakeString&
  RawSetAsUSVString()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eUSVString;
    return mUnion.mValue.mUSVString.SetValue();
  }
};

class Uint32ArrayOrUnsignedLongSequenceArgument
{
  Uint32ArrayOrUnsignedLongSequence& mUnion;

  Uint32ArrayOrUnsignedLongSequenceArgument(const Uint32ArrayOrUnsignedLongSequenceArgument&) = delete;
  void operator=(const Uint32ArrayOrUnsignedLongSequenceArgument&) = delete;
public:
  explicit inline Uint32ArrayOrUnsignedLongSequenceArgument(const Uint32ArrayOrUnsignedLongSequence& aUnion)
    : mUnion(const_cast<Uint32ArrayOrUnsignedLongSequence&>(aUnion))
  {
  }

  inline bool
  TrySetToUint32Array(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      RootedTypedArray<Uint32Array>& memberSlot = RawSetAsUint32Array(cx);
      if (!memberSlot.Init(&value.toObject())) {
        mUnion.DestroyUint32Array();
        tryNext = true;
        return true;
      }
    }
    return true;
  }

  inline bool
  TrySetToUnsignedLongSequence(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::AutoSequence<uint32_t>& memberSlot = RawSetAsUnsignedLongSequence();
      JS::ForOfIterator iter(cx);
      if (!iter.init(value, JS::ForOfIterator::AllowNonIterable)) {
        return false;
      }
      if (!iter.valueIsIterable()) {
        mUnion.DestroyUnsignedLongSequence();
        tryNext = true;
        return true;
      }
      binding_detail::AutoSequence<uint32_t> &arr = memberSlot;
      JS::Rooted<JS::Value> temp(cx);
      while (true) {
        bool done;
        if (!iter.next(&temp, &done)) {
          return false;
        }
        if (done) {
          break;
        }
        uint32_t* slotPtr = arr.AppendElement(mozilla::fallible);
        if (!slotPtr) {
          JS_ReportOutOfMemory(cx);
          return false;
        }
        uint32_t& slot = *slotPtr;
        if (!ValueToPrimitive<uint32_t, eDefault>(cx, temp, &slot)) {
          return false;
        }
      }
    }
    return true;
  }

private:
  inline RootedTypedArray<Uint32Array>&
  RawSetAsUint32Array(JSContext* cx)
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eUint32Array;
    return mUnion.mValue.mUint32Array.SetValue(cx);
  }

  inline binding_detail::AutoSequence<uint32_t>&
  RawSetAsUnsignedLongSequence()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eUnsignedLongSequence;
    return mUnion.mValue.mUnsignedLongSequence.SetValue();
  }
};

class UnrestrictedDoubleOrKeyframeAnimationOptionsArgument
{
  UnrestrictedDoubleOrKeyframeAnimationOptions& mUnion;

  UnrestrictedDoubleOrKeyframeAnimationOptionsArgument(const UnrestrictedDoubleOrKeyframeAnimationOptionsArgument&) = delete;
  void operator=(const UnrestrictedDoubleOrKeyframeAnimationOptionsArgument&) = delete;
public:
  explicit inline UnrestrictedDoubleOrKeyframeAnimationOptionsArgument(const UnrestrictedDoubleOrKeyframeAnimationOptions& aUnion)
    : mUnion(const_cast<UnrestrictedDoubleOrKeyframeAnimationOptions&>(aUnion))
  {
  }

  inline bool
  TrySetToUnrestrictedDouble(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      double& memberSlot = RawSetAsUnrestrictedDouble();
      if (!ValueToPrimitive<double, eDefault>(cx, value, &memberSlot)) {
        return false;
      }
    }
    return true;
  }

  inline bool
  TrySetToKeyframeAnimationOptions(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FastKeyframeAnimationOptions& memberSlot = RawSetAsKeyframeAnimationOptions();
      { // scope for isConvertible
        bool isConvertible;
        if (!IsConvertibleToDictionary(cx, value, &isConvertible)) {
          return false;
        }
        if (!isConvertible) {
          mUnion.DestroyKeyframeAnimationOptions();
          tryNext = true;
          return true;
        }

        if (!memberSlot.Init(cx, value,  "Member of UnrestrictedDoubleOrKeyframeAnimationOptions", passedToJSImpl)) {
          return false;
        }
      }

    }
    return true;
  }

private:
  inline double&
  RawSetAsUnrestrictedDouble()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eUnrestrictedDouble;
    return mUnion.mValue.mUnrestrictedDouble.SetValue();
  }

  inline binding_detail::FastKeyframeAnimationOptions&
  RawSetAsKeyframeAnimationOptions()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eKeyframeAnimationOptions;
    return mUnion.mValue.mKeyframeAnimationOptions.SetValue();
  }
};

class UnrestrictedDoubleOrKeyframeEffectOptionsArgument
{
  UnrestrictedDoubleOrKeyframeEffectOptions& mUnion;

  UnrestrictedDoubleOrKeyframeEffectOptionsArgument(const UnrestrictedDoubleOrKeyframeEffectOptionsArgument&) = delete;
  void operator=(const UnrestrictedDoubleOrKeyframeEffectOptionsArgument&) = delete;
public:
  explicit inline UnrestrictedDoubleOrKeyframeEffectOptionsArgument(const UnrestrictedDoubleOrKeyframeEffectOptions& aUnion)
    : mUnion(const_cast<UnrestrictedDoubleOrKeyframeEffectOptions&>(aUnion))
  {
  }

  inline bool
  TrySetToUnrestrictedDouble(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      double& memberSlot = RawSetAsUnrestrictedDouble();
      if (!ValueToPrimitive<double, eDefault>(cx, value, &memberSlot)) {
        return false;
      }
    }
    return true;
  }

  inline bool
  TrySetToKeyframeEffectOptions(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FastKeyframeEffectOptions& memberSlot = RawSetAsKeyframeEffectOptions();
      { // scope for isConvertible
        bool isConvertible;
        if (!IsConvertibleToDictionary(cx, value, &isConvertible)) {
          return false;
        }
        if (!isConvertible) {
          mUnion.DestroyKeyframeEffectOptions();
          tryNext = true;
          return true;
        }

        if (!memberSlot.Init(cx, value,  "Member of UnrestrictedDoubleOrKeyframeEffectOptions", passedToJSImpl)) {
          return false;
        }
      }

    }
    return true;
  }

private:
  inline double&
  RawSetAsUnrestrictedDouble()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eUnrestrictedDouble;
    return mUnion.mValue.mUnrestrictedDouble.SetValue();
  }

  inline binding_detail::FastKeyframeEffectOptions&
  RawSetAsKeyframeEffectOptions()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eKeyframeEffectOptions;
    return mUnion.mValue.mKeyframeEffectOptions.SetValue();
  }
};

class UnrestrictedDoubleOrStringArgument
{
  UnrestrictedDoubleOrString& mUnion;

  UnrestrictedDoubleOrStringArgument(const UnrestrictedDoubleOrStringArgument&) = delete;
  void operator=(const UnrestrictedDoubleOrStringArgument&) = delete;
public:
  explicit inline UnrestrictedDoubleOrStringArgument(const UnrestrictedDoubleOrString& aUnion)
    : mUnion(const_cast<UnrestrictedDoubleOrString&>(aUnion))
  {
  }

  inline bool
  TrySetToUnrestrictedDouble(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      double& memberSlot = RawSetAsUnrestrictedDouble();
      if (!ValueToPrimitive<double, eDefault>(cx, value, &memberSlot)) {
        return false;
      }
    }
    return true;
  }

  inline bool
  TrySetToString(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FakeString& memberSlot = RawSetAsString();
      if (!ConvertJSValueToString(cx, value, eStringify, eStringify, memberSlot)) {
        return false;
      }
    }
    return true;
  }

  inline void
  SetStringData(const nsDependentString::char_type* aData, nsDependentString::size_type aLength)
  {
    RawSetAsString().Rebind(aData, aLength);
  }

private:
  inline double&
  RawSetAsUnrestrictedDouble()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eUnrestrictedDouble;
    return mUnion.mValue.mUnrestrictedDouble.SetValue();
  }

  inline binding_detail::FakeString&
  RawSetAsString()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eString;
    return mUnion.mValue.mString.SetValue();
  }
};

class UnsignedLongLongOrStringArgument
{
  UnsignedLongLongOrString& mUnion;

  UnsignedLongLongOrStringArgument(const UnsignedLongLongOrStringArgument&) = delete;
  void operator=(const UnsignedLongLongOrStringArgument&) = delete;
public:
  explicit inline UnsignedLongLongOrStringArgument(const UnsignedLongLongOrString& aUnion)
    : mUnion(const_cast<UnsignedLongLongOrString&>(aUnion))
  {
  }

  inline bool
  TrySetToUnsignedLongLong(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      uint64_t& memberSlot = RawSetAsUnsignedLongLong();
      if (!ValueToPrimitive<uint64_t, eDefault>(cx, value, &memberSlot)) {
        return false;
      }
    }
    return true;
  }

  inline bool
  TrySetToString(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      binding_detail::FakeString& memberSlot = RawSetAsString();
      if (!ConvertJSValueToString(cx, value, eStringify, eStringify, memberSlot)) {
        return false;
      }
    }
    return true;
  }

  inline void
  SetStringData(const nsDependentString::char_type* aData, nsDependentString::size_type aLength)
  {
    RawSetAsString().Rebind(aData, aLength);
  }

private:
  inline uint64_t&
  RawSetAsUnsignedLongLong()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eUnsignedLongLong;
    return mUnion.mValue.mUnsignedLongLong.SetValue();
  }

  inline binding_detail::FakeString&
  RawSetAsString()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eString;
    return mUnion.mValue.mString.SetValue();
  }
};

class VideoTrackOrAudioTrackOrTextTrackArgument
{
  VideoTrackOrAudioTrackOrTextTrack& mUnion;

  VideoTrackOrAudioTrackOrTextTrackArgument(const VideoTrackOrAudioTrackOrTextTrackArgument&) = delete;
  void operator=(const VideoTrackOrAudioTrackOrTextTrackArgument&) = delete;
public:
  explicit inline VideoTrackOrAudioTrackOrTextTrackArgument(const VideoTrackOrAudioTrackOrTextTrack& aUnion)
    : mUnion(const_cast<VideoTrackOrAudioTrackOrTextTrack&>(aUnion))
  {
  }

  inline bool
  TrySetToVideoTrack(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::VideoTrack>& memberSlot = RawSetAsVideoTrack();
      {
        nsresult rv = UnwrapObject<prototypes::id::VideoTrack, mozilla::dom::VideoTrack>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyVideoTrack();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToAudioTrack(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::AudioTrack>& memberSlot = RawSetAsAudioTrack();
      {
        nsresult rv = UnwrapObject<prototypes::id::AudioTrack, mozilla::dom::AudioTrack>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyAudioTrack();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToTextTrack(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::TextTrack>& memberSlot = RawSetAsTextTrack();
      {
        nsresult rv = UnwrapObject<prototypes::id::TextTrack, mozilla::dom::TextTrack>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyTextTrack();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

private:
  inline NonNull<mozilla::dom::VideoTrack>&
  RawSetAsVideoTrack()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eVideoTrack;
    return mUnion.mValue.mVideoTrack.SetValue();
  }

  inline NonNull<mozilla::dom::AudioTrack>&
  RawSetAsAudioTrack()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eAudioTrack;
    return mUnion.mValue.mAudioTrack.SetValue();
  }

  inline NonNull<mozilla::dom::TextTrack>&
  RawSetAsTextTrack()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eTextTrack;
    return mUnion.mValue.mTextTrack.SetValue();
  }
};

class WindowOrMessagePortArgument
{
  WindowOrMessagePort& mUnion;

  WindowOrMessagePortArgument(const WindowOrMessagePortArgument&) = delete;
  void operator=(const WindowOrMessagePortArgument&) = delete;
public:
  explicit inline WindowOrMessagePortArgument(const WindowOrMessagePort& aUnion)
    : mUnion(const_cast<WindowOrMessagePort&>(aUnion))
  {
  }

  inline bool
  TrySetToWindow(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<nsGlobalWindow>& memberSlot = RawSetAsWindow();
      {
        nsresult rv = UnwrapObject<prototypes::id::Window, nsGlobalWindow>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyWindow();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

  inline bool
  TrySetToMessagePort(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::MessagePort>& memberSlot = RawSetAsMessagePort();
      {
        nsresult rv = UnwrapObject<prototypes::id::MessagePort, mozilla::dom::MessagePort>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyMessagePort();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

private:
  inline NonNull<nsGlobalWindow>&
  RawSetAsWindow()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eWindow;
    return mUnion.mValue.mWindow.SetValue();
  }

  inline NonNull<mozilla::dom::MessagePort>&
  RawSetAsMessagePort()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eMessagePort;
    return mUnion.mValue.mMessagePort.SetValue();
  }
};

class WindowProxyOrMessagePortArgument
{
  WindowProxyOrMessagePort& mUnion;
  Maybe<RefPtr<nsPIDOMWindowOuter>> mWindowProxyHolder;

  WindowProxyOrMessagePortArgument(const WindowProxyOrMessagePortArgument&) = delete;
  void operator=(const WindowProxyOrMessagePortArgument&) = delete;
public:
  explicit inline WindowProxyOrMessagePortArgument(const WindowProxyOrMessagePort& aUnion)
    : mUnion(const_cast<WindowProxyOrMessagePort&>(aUnion))
  {
  }

  inline bool
  TrySetToWindowProxy(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      nsPIDOMWindowOuter*& memberSlot = RawSetAsWindowProxy();
      mWindowProxyHolder.emplace();
      JS::Rooted<JSObject*> source(cx, &value.toObject());
      if (NS_FAILED(UnwrapArg<nsPIDOMWindowOuter>(source, getter_AddRefs(mWindowProxyHolder.ref())))) {
        mWindowProxyHolder.reset();
        mUnion.DestroyWindowProxy();
        tryNext = true;
        return true;
      }
      MOZ_ASSERT(mWindowProxyHolder.ref());
      memberSlot = mWindowProxyHolder.ref();
    }
    return true;
  }

  inline bool
  TrySetToMessagePort(JSContext* cx, JS::MutableHandle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false)
  {
    tryNext = false;
    { // scope for memberSlot
      NonNull<mozilla::dom::MessagePort>& memberSlot = RawSetAsMessagePort();
      {
        nsresult rv = UnwrapObject<prototypes::id::MessagePort, mozilla::dom::MessagePort>(value, memberSlot);
        if (NS_FAILED(rv)) {
          mUnion.DestroyMessagePort();
          tryNext = true;
          return true;
        }
      }
    }
    return true;
  }

private:
  inline nsPIDOMWindowOuter*&
  RawSetAsWindowProxy()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eWindowProxy;
    return mUnion.mValue.mWindowProxy.SetValue();
  }

  inline NonNull<mozilla::dom::MessagePort>&
  RawSetAsMessagePort()
  {
    MOZ_ASSERT(mUnion.mType == mUnion.eUninitialized);
    mUnion.mType = mUnion.eMessagePort;
    return mUnion.mValue.mMessagePort.SetValue();
  }
};


} // namespace dom
} // namespace mozilla


#endif // mozilla_dom_UnionConversions_h
