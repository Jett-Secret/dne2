#include "mozilla/dom/Directory.h"
#include "mozilla/dom/File.h"
#include "mozilla/dom/HTMLOptGroupElement.h"
#include "mozilla/dom/HTMLOptionElement.h"
#include "mozilla/dom/PrimitiveConversions.h"
#include "mozilla/dom/UnionTypes.h"
#include "nsGenericHTMLElement.h"
#include "nsINode.h"

namespace mozilla {
namespace dom {
void
ImplCycleCollectionTraverse(nsCycleCollectionTraversalCallback& aCallback, OwningFileOrDirectory& aUnion, const char* aName, uint32_t aFlags)
{
  if (aUnion.IsFile()) {
    ImplCycleCollectionTraverse(aCallback, aUnion.GetAsFile(), "mFile", aFlags);
  } else if (aUnion.IsDirectory()) {
    ImplCycleCollectionTraverse(aCallback, aUnion.GetAsDirectory(), "mDirectory", aFlags);
  }
}

void
ImplCycleCollectionTraverse(nsCycleCollectionTraversalCallback& aCallback, OwningHTMLElementOrLong& aUnion, const char* aName, uint32_t aFlags)
{
  if (aUnion.IsHTMLElement()) {
    ImplCycleCollectionTraverse(aCallback, aUnion.GetAsHTMLElement(), "mHTMLElement", aFlags);
  }
}

void
ImplCycleCollectionTraverse(nsCycleCollectionTraversalCallback& aCallback, OwningHTMLOptionElementOrHTMLOptGroupElement& aUnion, const char* aName, uint32_t aFlags)
{
  if (aUnion.IsHTMLOptionElement()) {
    ImplCycleCollectionTraverse(aCallback, aUnion.GetAsHTMLOptionElement(), "mHTMLOptionElement", aFlags);
  } else if (aUnion.IsHTMLOptGroupElement()) {
    ImplCycleCollectionTraverse(aCallback, aUnion.GetAsHTMLOptGroupElement(), "mHTMLOptGroupElement", aFlags);
  }
}

void
ImplCycleCollectionTraverse(nsCycleCollectionTraversalCallback& aCallback, OwningNodeOrString& aUnion, const char* aName, uint32_t aFlags)
{
  if (aUnion.IsNode()) {
    ImplCycleCollectionTraverse(aCallback, aUnion.GetAsNode(), "mNode", aFlags);
  }
}

void
ImplCycleCollectionUnlink(OwningFileOrDirectory& aUnion)
{
  aUnion.Uninit();
}

void
ImplCycleCollectionUnlink(OwningHTMLElementOrLong& aUnion)
{
  aUnion.Uninit();
}

void
ImplCycleCollectionUnlink(OwningHTMLOptionElementOrHTMLOptGroupElement& aUnion)
{
  aUnion.Uninit();
}

void
ImplCycleCollectionUnlink(OwningNodeOrString& aUnion)
{
  aUnion.Uninit();
}

bool
ArrayBufferViewOrArrayBuffer::ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const
{
  switch (mType) {
    case eUninitialized: {
      return false;
      break;
    }
    case eArrayBufferView: {
      rval.setObject(*mValue.mArrayBufferView.Value().Obj());
      if (!MaybeWrapNonDOMObjectValue(cx, rval)) {
        return false;
      }
      return true;
      break;
    }
    case eArrayBuffer: {
      rval.setObject(*mValue.mArrayBuffer.Value().Obj());
      if (!MaybeWrapNonDOMObjectValue(cx, rval)) {
        return false;
      }
      return true;
      break;
    }
    default: {
      return false;
      break;
    }
  }

  return false;
}

bool
FileOrDirectory::ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const
{
  switch (mType) {
    case eUninitialized: {
      return false;
      break;
    }
    case eFile: {
      if (!GetOrCreateDOMReflector(cx, mValue.mFile.Value(), rval)) {
        MOZ_ASSERT(true || JS_IsExceptionPending(cx));
        return false;
      }
      return true;
      break;
    }
    case eDirectory: {
      if (!GetOrCreateDOMReflector(cx, mValue.mDirectory.Value(), rval)) {
        MOZ_ASSERT(true || JS_IsExceptionPending(cx));
        return false;
      }
      return true;
      break;
    }
    default: {
      return false;
      break;
    }
  }

  return false;
}

bool
HTMLElementOrLong::ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const
{
  switch (mType) {
    case eUninitialized: {
      return false;
      break;
    }
    case eHTMLElement: {
      if (!GetOrCreateDOMReflector(cx, mValue.mHTMLElement.Value(), rval)) {
        MOZ_ASSERT(true || JS_IsExceptionPending(cx));
        return false;
      }
      return true;
      break;
    }
    case eLong: {
      rval.setInt32(int32_t(mValue.mLong.Value()));
      return true;
      break;
    }
    default: {
      return false;
      break;
    }
  }

  return false;
}

bool
HTMLOptionElementOrHTMLOptGroupElement::ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const
{
  switch (mType) {
    case eUninitialized: {
      return false;
      break;
    }
    case eHTMLOptionElement: {
      if (!GetOrCreateDOMReflector(cx, mValue.mHTMLOptionElement.Value(), rval)) {
        MOZ_ASSERT(true || JS_IsExceptionPending(cx));
        return false;
      }
      return true;
      break;
    }
    case eHTMLOptGroupElement: {
      if (!GetOrCreateDOMReflector(cx, mValue.mHTMLOptGroupElement.Value(), rval)) {
        MOZ_ASSERT(true || JS_IsExceptionPending(cx));
        return false;
      }
      return true;
      break;
    }
    default: {
      return false;
      break;
    }
  }

  return false;
}

bool
NodeOrString::ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const
{
  switch (mType) {
    case eUninitialized: {
      return false;
      break;
    }
    case eNode: {
      if (!GetOrCreateDOMReflector(cx, mValue.mNode.Value(), rval)) {
        MOZ_ASSERT(true || JS_IsExceptionPending(cx));
        return false;
      }
      return true;
      break;
    }
    case eString: {
      if (!xpc::NonVoidStringToJsval(cx, mValue.mString.Value(), rval)) {
        return false;
      }
      return true;
      break;
    }
    default: {
      return false;
      break;
    }
  }

  return false;
}

bool
StringOrStringSequence::ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const
{
  switch (mType) {
    case eUninitialized: {
      return false;
      break;
    }
    case eString: {
      if (!xpc::NonVoidStringToJsval(cx, mValue.mString.Value(), rval)) {
        return false;
      }
      return true;
      break;
    }
    case eStringSequence: {

      uint32_t length = mValue.mStringSequence.Value().Length();
      JS::Rooted<JSObject*> returnArray(cx, JS_NewArrayObject(cx, length));
      if (!returnArray) {
        return false;
      }
      // Scope for 'tmp'
      {
        JS::Rooted<JS::Value> tmp(cx);
        for (uint32_t sequenceIdx0 = 0; sequenceIdx0 < length; ++sequenceIdx0) {
          // Control block to let us common up the JS_DefineElement calls when there
          // are different ways to succeed at wrapping the object.
          do {
            if (!xpc::NonVoidStringToJsval(cx, mValue.mStringSequence.Value()[sequenceIdx0], &tmp)) {
              return false;
            }
            break;
          } while (0);
          if (!JS_DefineElement(cx, returnArray, sequenceIdx0, tmp,
                                JSPROP_ENUMERATE)) {
            return false;
          }
        }
      }
      rval.setObject(*returnArray);
      return true;
      break;
    }
    default: {
      return false;
      break;
    }
  }

  return false;
}

bool
UnrestrictedDoubleOrString::ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const
{
  switch (mType) {
    case eUninitialized: {
      return false;
      break;
    }
    case eUnrestrictedDouble: {
      rval.set(JS_NumberValue(double(mValue.mUnrestrictedDouble.Value())));
      return true;
      break;
    }
    case eString: {
      if (!xpc::NonVoidStringToJsval(cx, mValue.mString.Value(), rval)) {
        return false;
      }
      return true;
      break;
    }
    default: {
      return false;
      break;
    }
  }

  return false;
}

ArrayBufferView&
OwningArrayBufferViewOrArrayBuffer::RawSetAsArrayBufferView()
{
  if (mType == eArrayBufferView) {
    return mValue.mArrayBufferView.Value();
  }
  MOZ_ASSERT(mType == eUninitialized);
  mType = eArrayBufferView;
  return mValue.mArrayBufferView.SetValue();
}

ArrayBufferView&
OwningArrayBufferViewOrArrayBuffer::SetAsArrayBufferView()
{
  if (mType == eArrayBufferView) {
    return mValue.mArrayBufferView.Value();
  }
  Uninit();
  mType = eArrayBufferView;
  return mValue.mArrayBufferView.SetValue();
}

bool
OwningArrayBufferViewOrArrayBuffer::TrySetToArrayBufferView(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl)
{
  tryNext = false;
  { // scope for memberSlot
    ArrayBufferView& memberSlot = RawSetAsArrayBufferView();
    if (!memberSlot.Init(&value.toObject())) {
      DestroyArrayBufferView();
      tryNext = true;
      return true;
    }
  }
  return true;
}

void
OwningArrayBufferViewOrArrayBuffer::DestroyArrayBufferView()
{
  MOZ_ASSERT(IsArrayBufferView(), "Wrong type!");
  mValue.mArrayBufferView.Destroy();
  mType = eUninitialized;
}




ArrayBuffer&
OwningArrayBufferViewOrArrayBuffer::RawSetAsArrayBuffer()
{
  if (mType == eArrayBuffer) {
    return mValue.mArrayBuffer.Value();
  }
  MOZ_ASSERT(mType == eUninitialized);
  mType = eArrayBuffer;
  return mValue.mArrayBuffer.SetValue();
}

ArrayBuffer&
OwningArrayBufferViewOrArrayBuffer::SetAsArrayBuffer()
{
  if (mType == eArrayBuffer) {
    return mValue.mArrayBuffer.Value();
  }
  Uninit();
  mType = eArrayBuffer;
  return mValue.mArrayBuffer.SetValue();
}

bool
OwningArrayBufferViewOrArrayBuffer::TrySetToArrayBuffer(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl)
{
  tryNext = false;
  { // scope for memberSlot
    ArrayBuffer& memberSlot = RawSetAsArrayBuffer();
    if (!memberSlot.Init(&value.toObject())) {
      DestroyArrayBuffer();
      tryNext = true;
      return true;
    }
  }
  return true;
}

void
OwningArrayBufferViewOrArrayBuffer::DestroyArrayBuffer()
{
  MOZ_ASSERT(IsArrayBuffer(), "Wrong type!");
  mValue.mArrayBuffer.Destroy();
  mType = eUninitialized;
}




void
OwningArrayBufferViewOrArrayBuffer::Uninit()
{
  switch (mType) {
    case eUninitialized: {
      break;
    }
    case eArrayBufferView: {
      DestroyArrayBufferView();
      break;
    }
    case eArrayBuffer: {
      DestroyArrayBuffer();
      break;
    }
  }
}

bool
OwningArrayBufferViewOrArrayBuffer::ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const
{
  switch (mType) {
    case eUninitialized: {
      return false;
      break;
    }
    case eArrayBufferView: {
      rval.setObject(*mValue.mArrayBufferView.Value().Obj());
      if (!MaybeWrapNonDOMObjectValue(cx, rval)) {
        return false;
      }
      return true;
      break;
    }
    case eArrayBuffer: {
      rval.setObject(*mValue.mArrayBuffer.Value().Obj());
      if (!MaybeWrapNonDOMObjectValue(cx, rval)) {
        return false;
      }
      return true;
      break;
    }
    default: {
      return false;
      break;
    }
  }

  return false;
}

void
OwningArrayBufferViewOrArrayBuffer::TraceUnion(JSTracer* trc)
{
  switch (mType) {
    case eArrayBufferView: {
      mValue.mArrayBufferView.Value().TraceSelf(trc);
      break;
    }
    case eArrayBuffer: {
      mValue.mArrayBuffer.Value().TraceSelf(trc);
      break;
    }
    default: {
      break;
    }
  }
}

OwningNonNull<mozilla::dom::File>&
OwningFileOrDirectory::RawSetAsFile()
{
  if (mType == eFile) {
    return mValue.mFile.Value();
  }
  MOZ_ASSERT(mType == eUninitialized);
  mType = eFile;
  return mValue.mFile.SetValue();
}

OwningNonNull<mozilla::dom::File>&
OwningFileOrDirectory::SetAsFile()
{
  if (mType == eFile) {
    return mValue.mFile.Value();
  }
  Uninit();
  mType = eFile;
  return mValue.mFile.SetValue();
}

bool
OwningFileOrDirectory::TrySetToFile(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl)
{
  tryNext = false;
  { // scope for memberSlot
    OwningNonNull<mozilla::dom::File>& memberSlot = RawSetAsFile();
    static_assert(IsRefcounted<mozilla::dom::File>::value, "We can only store refcounted classes.");{
      nsresult rv = UnwrapObject<prototypes::id::File, mozilla::dom::File>(value, memberSlot);
      if (NS_FAILED(rv)) {
        DestroyFile();
        tryNext = true;
        return true;
      }
    }
  }
  return true;
}

void
OwningFileOrDirectory::DestroyFile()
{
  MOZ_ASSERT(IsFile(), "Wrong type!");
  mValue.mFile.Destroy();
  mType = eUninitialized;
}




OwningNonNull<mozilla::dom::Directory>&
OwningFileOrDirectory::RawSetAsDirectory()
{
  if (mType == eDirectory) {
    return mValue.mDirectory.Value();
  }
  MOZ_ASSERT(mType == eUninitialized);
  mType = eDirectory;
  return mValue.mDirectory.SetValue();
}

OwningNonNull<mozilla::dom::Directory>&
OwningFileOrDirectory::SetAsDirectory()
{
  if (mType == eDirectory) {
    return mValue.mDirectory.Value();
  }
  Uninit();
  mType = eDirectory;
  return mValue.mDirectory.SetValue();
}

bool
OwningFileOrDirectory::TrySetToDirectory(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl)
{
  tryNext = false;
  { // scope for memberSlot
    OwningNonNull<mozilla::dom::Directory>& memberSlot = RawSetAsDirectory();
    static_assert(IsRefcounted<mozilla::dom::Directory>::value, "We can only store refcounted classes.");{
      nsresult rv = UnwrapObject<prototypes::id::Directory, mozilla::dom::Directory>(value, memberSlot);
      if (NS_FAILED(rv)) {
        DestroyDirectory();
        tryNext = true;
        return true;
      }
    }
  }
  return true;
}

void
OwningFileOrDirectory::DestroyDirectory()
{
  MOZ_ASSERT(IsDirectory(), "Wrong type!");
  mValue.mDirectory.Destroy();
  mType = eUninitialized;
}




void
OwningFileOrDirectory::Uninit()
{
  switch (mType) {
    case eUninitialized: {
      break;
    }
    case eFile: {
      DestroyFile();
      break;
    }
    case eDirectory: {
      DestroyDirectory();
      break;
    }
  }
}

bool
OwningFileOrDirectory::ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const
{
  switch (mType) {
    case eUninitialized: {
      return false;
      break;
    }
    case eFile: {
      if (!GetOrCreateDOMReflector(cx, mValue.mFile.Value(), rval)) {
        MOZ_ASSERT(true || JS_IsExceptionPending(cx));
        return false;
      }
      return true;
      break;
    }
    case eDirectory: {
      if (!GetOrCreateDOMReflector(cx, mValue.mDirectory.Value(), rval)) {
        MOZ_ASSERT(true || JS_IsExceptionPending(cx));
        return false;
      }
      return true;
      break;
    }
    default: {
      return false;
      break;
    }
  }

  return false;
}

void
OwningFileOrDirectory::TraceUnion(JSTracer* trc)
{
}

void
OwningFileOrDirectory::operator=(const OwningFileOrDirectory& aOther)
{
  switch (aOther.mType) {
    case eUninitialized: {
      MOZ_ASSERT(mType == eUninitialized,
                 "We need to destroy ourselves?");
      break;
    }
    case eFile: {
      SetAsFile() = aOther.GetAsFile();
      break;
    }
    case eDirectory: {
      SetAsDirectory() = aOther.GetAsDirectory();
      break;
    }
  }
}

OwningNonNull<nsGenericHTMLElement>&
OwningHTMLElementOrLong::RawSetAsHTMLElement()
{
  if (mType == eHTMLElement) {
    return mValue.mHTMLElement.Value();
  }
  MOZ_ASSERT(mType == eUninitialized);
  mType = eHTMLElement;
  return mValue.mHTMLElement.SetValue();
}

OwningNonNull<nsGenericHTMLElement>&
OwningHTMLElementOrLong::SetAsHTMLElement()
{
  if (mType == eHTMLElement) {
    return mValue.mHTMLElement.Value();
  }
  Uninit();
  mType = eHTMLElement;
  return mValue.mHTMLElement.SetValue();
}

bool
OwningHTMLElementOrLong::TrySetToHTMLElement(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl)
{
  tryNext = false;
  { // scope for memberSlot
    OwningNonNull<nsGenericHTMLElement>& memberSlot = RawSetAsHTMLElement();
    static_assert(IsRefcounted<nsGenericHTMLElement>::value, "We can only store refcounted classes.");{
      nsresult rv = UnwrapObject<prototypes::id::HTMLElement, nsGenericHTMLElement>(value, memberSlot);
      if (NS_FAILED(rv)) {
        DestroyHTMLElement();
        tryNext = true;
        return true;
      }
    }
  }
  return true;
}

void
OwningHTMLElementOrLong::DestroyHTMLElement()
{
  MOZ_ASSERT(IsHTMLElement(), "Wrong type!");
  mValue.mHTMLElement.Destroy();
  mType = eUninitialized;
}




int32_t&
OwningHTMLElementOrLong::RawSetAsLong()
{
  if (mType == eLong) {
    return mValue.mLong.Value();
  }
  MOZ_ASSERT(mType == eUninitialized);
  mType = eLong;
  return mValue.mLong.SetValue();
}

int32_t&
OwningHTMLElementOrLong::SetAsLong()
{
  if (mType == eLong) {
    return mValue.mLong.Value();
  }
  Uninit();
  mType = eLong;
  return mValue.mLong.SetValue();
}

bool
OwningHTMLElementOrLong::TrySetToLong(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl)
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

void
OwningHTMLElementOrLong::DestroyLong()
{
  MOZ_ASSERT(IsLong(), "Wrong type!");
  mValue.mLong.Destroy();
  mType = eUninitialized;
}




void
OwningHTMLElementOrLong::Uninit()
{
  switch (mType) {
    case eUninitialized: {
      break;
    }
    case eHTMLElement: {
      DestroyHTMLElement();
      break;
    }
    case eLong: {
      DestroyLong();
      break;
    }
  }
}

bool
OwningHTMLElementOrLong::ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const
{
  switch (mType) {
    case eUninitialized: {
      return false;
      break;
    }
    case eHTMLElement: {
      if (!GetOrCreateDOMReflector(cx, mValue.mHTMLElement.Value(), rval)) {
        MOZ_ASSERT(true || JS_IsExceptionPending(cx));
        return false;
      }
      return true;
      break;
    }
    case eLong: {
      rval.setInt32(int32_t(mValue.mLong.Value()));
      return true;
      break;
    }
    default: {
      return false;
      break;
    }
  }

  return false;
}

void
OwningHTMLElementOrLong::TraceUnion(JSTracer* trc)
{
}

void
OwningHTMLElementOrLong::operator=(const OwningHTMLElementOrLong& aOther)
{
  switch (aOther.mType) {
    case eUninitialized: {
      MOZ_ASSERT(mType == eUninitialized,
                 "We need to destroy ourselves?");
      break;
    }
    case eHTMLElement: {
      SetAsHTMLElement() = aOther.GetAsHTMLElement();
      break;
    }
    case eLong: {
      SetAsLong() = aOther.GetAsLong();
      break;
    }
  }
}

OwningNonNull<mozilla::dom::HTMLOptionElement>&
OwningHTMLOptionElementOrHTMLOptGroupElement::RawSetAsHTMLOptionElement()
{
  if (mType == eHTMLOptionElement) {
    return mValue.mHTMLOptionElement.Value();
  }
  MOZ_ASSERT(mType == eUninitialized);
  mType = eHTMLOptionElement;
  return mValue.mHTMLOptionElement.SetValue();
}

OwningNonNull<mozilla::dom::HTMLOptionElement>&
OwningHTMLOptionElementOrHTMLOptGroupElement::SetAsHTMLOptionElement()
{
  if (mType == eHTMLOptionElement) {
    return mValue.mHTMLOptionElement.Value();
  }
  Uninit();
  mType = eHTMLOptionElement;
  return mValue.mHTMLOptionElement.SetValue();
}

bool
OwningHTMLOptionElementOrHTMLOptGroupElement::TrySetToHTMLOptionElement(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl)
{
  tryNext = false;
  { // scope for memberSlot
    OwningNonNull<mozilla::dom::HTMLOptionElement>& memberSlot = RawSetAsHTMLOptionElement();
    static_assert(IsRefcounted<mozilla::dom::HTMLOptionElement>::value, "We can only store refcounted classes.");{
      nsresult rv = UnwrapObject<prototypes::id::HTMLOptionElement, mozilla::dom::HTMLOptionElement>(value, memberSlot);
      if (NS_FAILED(rv)) {
        DestroyHTMLOptionElement();
        tryNext = true;
        return true;
      }
    }
  }
  return true;
}

void
OwningHTMLOptionElementOrHTMLOptGroupElement::DestroyHTMLOptionElement()
{
  MOZ_ASSERT(IsHTMLOptionElement(), "Wrong type!");
  mValue.mHTMLOptionElement.Destroy();
  mType = eUninitialized;
}




OwningNonNull<mozilla::dom::HTMLOptGroupElement>&
OwningHTMLOptionElementOrHTMLOptGroupElement::RawSetAsHTMLOptGroupElement()
{
  if (mType == eHTMLOptGroupElement) {
    return mValue.mHTMLOptGroupElement.Value();
  }
  MOZ_ASSERT(mType == eUninitialized);
  mType = eHTMLOptGroupElement;
  return mValue.mHTMLOptGroupElement.SetValue();
}

OwningNonNull<mozilla::dom::HTMLOptGroupElement>&
OwningHTMLOptionElementOrHTMLOptGroupElement::SetAsHTMLOptGroupElement()
{
  if (mType == eHTMLOptGroupElement) {
    return mValue.mHTMLOptGroupElement.Value();
  }
  Uninit();
  mType = eHTMLOptGroupElement;
  return mValue.mHTMLOptGroupElement.SetValue();
}

bool
OwningHTMLOptionElementOrHTMLOptGroupElement::TrySetToHTMLOptGroupElement(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl)
{
  tryNext = false;
  { // scope for memberSlot
    OwningNonNull<mozilla::dom::HTMLOptGroupElement>& memberSlot = RawSetAsHTMLOptGroupElement();
    static_assert(IsRefcounted<mozilla::dom::HTMLOptGroupElement>::value, "We can only store refcounted classes.");{
      nsresult rv = UnwrapObject<prototypes::id::HTMLOptGroupElement, mozilla::dom::HTMLOptGroupElement>(value, memberSlot);
      if (NS_FAILED(rv)) {
        DestroyHTMLOptGroupElement();
        tryNext = true;
        return true;
      }
    }
  }
  return true;
}

void
OwningHTMLOptionElementOrHTMLOptGroupElement::DestroyHTMLOptGroupElement()
{
  MOZ_ASSERT(IsHTMLOptGroupElement(), "Wrong type!");
  mValue.mHTMLOptGroupElement.Destroy();
  mType = eUninitialized;
}




void
OwningHTMLOptionElementOrHTMLOptGroupElement::Uninit()
{
  switch (mType) {
    case eUninitialized: {
      break;
    }
    case eHTMLOptionElement: {
      DestroyHTMLOptionElement();
      break;
    }
    case eHTMLOptGroupElement: {
      DestroyHTMLOptGroupElement();
      break;
    }
  }
}

bool
OwningHTMLOptionElementOrHTMLOptGroupElement::ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const
{
  switch (mType) {
    case eUninitialized: {
      return false;
      break;
    }
    case eHTMLOptionElement: {
      if (!GetOrCreateDOMReflector(cx, mValue.mHTMLOptionElement.Value(), rval)) {
        MOZ_ASSERT(true || JS_IsExceptionPending(cx));
        return false;
      }
      return true;
      break;
    }
    case eHTMLOptGroupElement: {
      if (!GetOrCreateDOMReflector(cx, mValue.mHTMLOptGroupElement.Value(), rval)) {
        MOZ_ASSERT(true || JS_IsExceptionPending(cx));
        return false;
      }
      return true;
      break;
    }
    default: {
      return false;
      break;
    }
  }

  return false;
}

void
OwningHTMLOptionElementOrHTMLOptGroupElement::TraceUnion(JSTracer* trc)
{
}

void
OwningHTMLOptionElementOrHTMLOptGroupElement::operator=(const OwningHTMLOptionElementOrHTMLOptGroupElement& aOther)
{
  switch (aOther.mType) {
    case eUninitialized: {
      MOZ_ASSERT(mType == eUninitialized,
                 "We need to destroy ourselves?");
      break;
    }
    case eHTMLOptionElement: {
      SetAsHTMLOptionElement() = aOther.GetAsHTMLOptionElement();
      break;
    }
    case eHTMLOptGroupElement: {
      SetAsHTMLOptGroupElement() = aOther.GetAsHTMLOptGroupElement();
      break;
    }
  }
}

OwningNonNull<nsINode>&
OwningNodeOrString::RawSetAsNode()
{
  if (mType == eNode) {
    return mValue.mNode.Value();
  }
  MOZ_ASSERT(mType == eUninitialized);
  mType = eNode;
  return mValue.mNode.SetValue();
}

OwningNonNull<nsINode>&
OwningNodeOrString::SetAsNode()
{
  if (mType == eNode) {
    return mValue.mNode.Value();
  }
  Uninit();
  mType = eNode;
  return mValue.mNode.SetValue();
}

bool
OwningNodeOrString::TrySetToNode(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl)
{
  tryNext = false;
  { // scope for memberSlot
    OwningNonNull<nsINode>& memberSlot = RawSetAsNode();
    static_assert(IsRefcounted<nsINode>::value, "We can only store refcounted classes.");{
      nsresult rv = UnwrapObject<prototypes::id::Node, nsINode>(value, memberSlot);
      if (NS_FAILED(rv)) {
        DestroyNode();
        tryNext = true;
        return true;
      }
    }
  }
  return true;
}

void
OwningNodeOrString::DestroyNode()
{
  MOZ_ASSERT(IsNode(), "Wrong type!");
  mValue.mNode.Destroy();
  mType = eUninitialized;
}




nsString&
OwningNodeOrString::RawSetAsString()
{
  if (mType == eString) {
    return mValue.mString.Value();
  }
  MOZ_ASSERT(mType == eUninitialized);
  mType = eString;
  return mValue.mString.SetValue();
}

nsString&
OwningNodeOrString::SetAsString()
{
  if (mType == eString) {
    return mValue.mString.Value();
  }
  Uninit();
  mType = eString;
  return mValue.mString.SetValue();
}

bool
OwningNodeOrString::TrySetToString(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl)
{
  tryNext = false;
  { // scope for memberSlot
    nsString& memberSlot = RawSetAsString();
    if (!ConvertJSValueToString(cx, value, eStringify, eStringify, memberSlot)) {
      return false;
    }
  }
  return true;
}


void
OwningNodeOrString::DestroyString()
{
  MOZ_ASSERT(IsString(), "Wrong type!");
  mValue.mString.Destroy();
  mType = eUninitialized;
}




void
OwningNodeOrString::Uninit()
{
  switch (mType) {
    case eUninitialized: {
      break;
    }
    case eNode: {
      DestroyNode();
      break;
    }
    case eString: {
      DestroyString();
      break;
    }
  }
}

bool
OwningNodeOrString::ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const
{
  switch (mType) {
    case eUninitialized: {
      return false;
      break;
    }
    case eNode: {
      if (!GetOrCreateDOMReflector(cx, mValue.mNode.Value(), rval)) {
        MOZ_ASSERT(true || JS_IsExceptionPending(cx));
        return false;
      }
      return true;
      break;
    }
    case eString: {
      if (!xpc::NonVoidStringToJsval(cx, mValue.mString.Value(), rval)) {
        return false;
      }
      return true;
      break;
    }
    default: {
      return false;
      break;
    }
  }

  return false;
}

void
OwningNodeOrString::TraceUnion(JSTracer* trc)
{
}

void
OwningNodeOrString::operator=(const OwningNodeOrString& aOther)
{
  switch (aOther.mType) {
    case eUninitialized: {
      MOZ_ASSERT(mType == eUninitialized,
                 "We need to destroy ourselves?");
      break;
    }
    case eNode: {
      SetAsNode() = aOther.GetAsNode();
      break;
    }
    case eString: {
      SetAsString() = aOther.GetAsString();
      break;
    }
  }
}

nsString&
OwningStringOrStringSequence::RawSetAsString()
{
  if (mType == eString) {
    return mValue.mString.Value();
  }
  MOZ_ASSERT(mType == eUninitialized);
  mType = eString;
  return mValue.mString.SetValue();
}

nsString&
OwningStringOrStringSequence::SetAsString()
{
  if (mType == eString) {
    return mValue.mString.Value();
  }
  Uninit();
  mType = eString;
  return mValue.mString.SetValue();
}

bool
OwningStringOrStringSequence::TrySetToString(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl)
{
  tryNext = false;
  { // scope for memberSlot
    nsString& memberSlot = RawSetAsString();
    if (!ConvertJSValueToString(cx, value, eStringify, eStringify, memberSlot)) {
      return false;
    }
  }
  return true;
}


void
OwningStringOrStringSequence::DestroyString()
{
  MOZ_ASSERT(IsString(), "Wrong type!");
  mValue.mString.Destroy();
  mType = eUninitialized;
}




Sequence<nsString>&
OwningStringOrStringSequence::RawSetAsStringSequence()
{
  if (mType == eStringSequence) {
    return mValue.mStringSequence.Value();
  }
  MOZ_ASSERT(mType == eUninitialized);
  mType = eStringSequence;
  return mValue.mStringSequence.SetValue();
}

Sequence<nsString>&
OwningStringOrStringSequence::SetAsStringSequence()
{
  if (mType == eStringSequence) {
    return mValue.mStringSequence.Value();
  }
  Uninit();
  mType = eStringSequence;
  return mValue.mStringSequence.SetValue();
}

bool
OwningStringOrStringSequence::TrySetToStringSequence(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl)
{
  tryNext = false;
  { // scope for memberSlot
    Sequence<nsString>& memberSlot = RawSetAsStringSequence();
    JS::ForOfIterator iter(cx);
    if (!iter.init(value, JS::ForOfIterator::AllowNonIterable)) {
      return false;
    }
    if (!iter.valueIsIterable()) {
      DestroyStringSequence();
      tryNext = true;
      return true;
    }
    Sequence<nsString> &arr = memberSlot;
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

void
OwningStringOrStringSequence::DestroyStringSequence()
{
  MOZ_ASSERT(IsStringSequence(), "Wrong type!");
  mValue.mStringSequence.Destroy();
  mType = eUninitialized;
}




void
OwningStringOrStringSequence::Uninit()
{
  switch (mType) {
    case eUninitialized: {
      break;
    }
    case eString: {
      DestroyString();
      break;
    }
    case eStringSequence: {
      DestroyStringSequence();
      break;
    }
  }
}

bool
OwningStringOrStringSequence::ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const
{
  switch (mType) {
    case eUninitialized: {
      return false;
      break;
    }
    case eString: {
      if (!xpc::NonVoidStringToJsval(cx, mValue.mString.Value(), rval)) {
        return false;
      }
      return true;
      break;
    }
    case eStringSequence: {

      uint32_t length = mValue.mStringSequence.Value().Length();
      JS::Rooted<JSObject*> returnArray(cx, JS_NewArrayObject(cx, length));
      if (!returnArray) {
        return false;
      }
      // Scope for 'tmp'
      {
        JS::Rooted<JS::Value> tmp(cx);
        for (uint32_t sequenceIdx0 = 0; sequenceIdx0 < length; ++sequenceIdx0) {
          // Control block to let us common up the JS_DefineElement calls when there
          // are different ways to succeed at wrapping the object.
          do {
            if (!xpc::NonVoidStringToJsval(cx, mValue.mStringSequence.Value()[sequenceIdx0], &tmp)) {
              return false;
            }
            break;
          } while (0);
          if (!JS_DefineElement(cx, returnArray, sequenceIdx0, tmp,
                                JSPROP_ENUMERATE)) {
            return false;
          }
        }
      }
      rval.setObject(*returnArray);
      return true;
      break;
    }
    default: {
      return false;
      break;
    }
  }

  return false;
}

void
OwningStringOrStringSequence::TraceUnion(JSTracer* trc)
{
}

void
OwningStringOrStringSequence::operator=(const OwningStringOrStringSequence& aOther)
{
  switch (aOther.mType) {
    case eUninitialized: {
      MOZ_ASSERT(mType == eUninitialized,
                 "We need to destroy ourselves?");
      break;
    }
    case eString: {
      SetAsString() = aOther.GetAsString();
      break;
    }
    case eStringSequence: {
      SetAsStringSequence() = aOther.GetAsStringSequence();
      break;
    }
  }
}

double&
OwningUnrestrictedDoubleOrString::RawSetAsUnrestrictedDouble()
{
  if (mType == eUnrestrictedDouble) {
    return mValue.mUnrestrictedDouble.Value();
  }
  MOZ_ASSERT(mType == eUninitialized);
  mType = eUnrestrictedDouble;
  return mValue.mUnrestrictedDouble.SetValue();
}

double&
OwningUnrestrictedDoubleOrString::SetAsUnrestrictedDouble()
{
  if (mType == eUnrestrictedDouble) {
    return mValue.mUnrestrictedDouble.Value();
  }
  Uninit();
  mType = eUnrestrictedDouble;
  return mValue.mUnrestrictedDouble.SetValue();
}

bool
OwningUnrestrictedDoubleOrString::TrySetToUnrestrictedDouble(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl)
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

void
OwningUnrestrictedDoubleOrString::DestroyUnrestrictedDouble()
{
  MOZ_ASSERT(IsUnrestrictedDouble(), "Wrong type!");
  mValue.mUnrestrictedDouble.Destroy();
  mType = eUninitialized;
}




nsString&
OwningUnrestrictedDoubleOrString::RawSetAsString()
{
  if (mType == eString) {
    return mValue.mString.Value();
  }
  MOZ_ASSERT(mType == eUninitialized);
  mType = eString;
  return mValue.mString.SetValue();
}

nsString&
OwningUnrestrictedDoubleOrString::SetAsString()
{
  if (mType == eString) {
    return mValue.mString.Value();
  }
  Uninit();
  mType = eString;
  return mValue.mString.SetValue();
}

bool
OwningUnrestrictedDoubleOrString::TrySetToString(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl)
{
  tryNext = false;
  { // scope for memberSlot
    nsString& memberSlot = RawSetAsString();
    if (!ConvertJSValueToString(cx, value, eStringify, eStringify, memberSlot)) {
      return false;
    }
  }
  return true;
}


void
OwningUnrestrictedDoubleOrString::DestroyString()
{
  MOZ_ASSERT(IsString(), "Wrong type!");
  mValue.mString.Destroy();
  mType = eUninitialized;
}




void
OwningUnrestrictedDoubleOrString::Uninit()
{
  switch (mType) {
    case eUninitialized: {
      break;
    }
    case eUnrestrictedDouble: {
      DestroyUnrestrictedDouble();
      break;
    }
    case eString: {
      DestroyString();
      break;
    }
  }
}

bool
OwningUnrestrictedDoubleOrString::ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const
{
  switch (mType) {
    case eUninitialized: {
      return false;
      break;
    }
    case eUnrestrictedDouble: {
      rval.set(JS_NumberValue(double(mValue.mUnrestrictedDouble.Value())));
      return true;
      break;
    }
    case eString: {
      if (!xpc::NonVoidStringToJsval(cx, mValue.mString.Value(), rval)) {
        return false;
      }
      return true;
      break;
    }
    default: {
      return false;
      break;
    }
  }

  return false;
}

void
OwningUnrestrictedDoubleOrString::TraceUnion(JSTracer* trc)
{
}

void
OwningUnrestrictedDoubleOrString::operator=(const OwningUnrestrictedDoubleOrString& aOther)
{
  switch (aOther.mType) {
    case eUninitialized: {
      MOZ_ASSERT(mType == eUninitialized,
                 "We need to destroy ourselves?");
      break;
    }
    case eUnrestrictedDouble: {
      SetAsUnrestrictedDouble() = aOther.GetAsUnrestrictedDouble();
      break;
    }
    case eString: {
      SetAsString() = aOther.GetAsString();
      break;
    }
  }
}
} // namespace dom
} // namespace mozilla

