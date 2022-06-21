/* THIS FILE IS AUTOGENERATED FROM SVGFEDistantLightElement.webidl BY Codegen.py - DO NOT EDIT */

#include "SVGElementBinding.h"
#include "SVGFEDistantLightElementBinding.h"
#include "WrapperFactory.h"
#include "mozilla/OwningNonNull.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/DOMJSClass.h"
#include "mozilla/dom/NonRefcountedDOMObject.h"
#include "mozilla/dom/SVGAnimatedNumber.h"
#include "mozilla/dom/SVGFEDistantLightElement.h"
#include "mozilla/dom/XrayExpandoClass.h"

namespace mozilla {
namespace dom {

namespace SVGFEDistantLightElementBinding {

static_assert(IsRefcounted<NativeType>::value == IsRefcounted<SVGElementBinding::NativeType>::value,
              "Can't inherit from an interface with a different ownership model.");

static bool
get_azimuth(JSContext* cx, JS::Handle<JSObject*> obj, mozilla::dom::SVGFEDistantLightElement* self, JSJitGetterCallArgs args)
{
  auto result(StrongOrRawPtr<mozilla::dom::SVGAnimatedNumber>(self->Azimuth()));
  MOZ_ASSERT(!JS_IsExceptionPending(cx));
  if (!GetOrCreateDOMReflector(cx, result, args.rval())) {
    MOZ_ASSERT(true || JS_IsExceptionPending(cx));
    return false;
  }
  return true;
}

static const JSJitInfo azimuth_getterinfo = {
  { (JSJitGetterOp)get_azimuth },
  { prototypes::id::SVGFEDistantLightElement },
  { PrototypeTraits<prototypes::id::SVGFEDistantLightElement>::Depth },
  JSJitInfo::Getter,
  JSJitInfo::AliasNone, /* aliasSet.  Not relevant for setters. */
  JSVAL_TYPE_OBJECT,  /* returnType.  Not relevant for setters. */
  false,  /* isInfallible. False in setters. */
  true,  /* isMovable.  Not relevant for setters. */
  true, /* isEliminatable.  Not relevant for setters. */
  false, /* isAlwaysInSlot.  Only relevant for getters. */
  false, /* isLazilyCachedInSlot.  Only relevant for getters. */
  false,  /* isTypedMethod.  Only relevant for methods. */
  0   /* Reserved slot index, if we're stored in a slot, else 0. */
};
static_assert(0 <= JSJitInfo::maxSlotIndex, "We won't fit");
static_assert(0 < 1, "There is no slot for us");

static bool
get_elevation(JSContext* cx, JS::Handle<JSObject*> obj, mozilla::dom::SVGFEDistantLightElement* self, JSJitGetterCallArgs args)
{
  auto result(StrongOrRawPtr<mozilla::dom::SVGAnimatedNumber>(self->Elevation()));
  MOZ_ASSERT(!JS_IsExceptionPending(cx));
  if (!GetOrCreateDOMReflector(cx, result, args.rval())) {
    MOZ_ASSERT(true || JS_IsExceptionPending(cx));
    return false;
  }
  return true;
}

static const JSJitInfo elevation_getterinfo = {
  { (JSJitGetterOp)get_elevation },
  { prototypes::id::SVGFEDistantLightElement },
  { PrototypeTraits<prototypes::id::SVGFEDistantLightElement>::Depth },
  JSJitInfo::Getter,
  JSJitInfo::AliasNone, /* aliasSet.  Not relevant for setters. */
  JSVAL_TYPE_OBJECT,  /* returnType.  Not relevant for setters. */
  false,  /* isInfallible. False in setters. */
  true,  /* isMovable.  Not relevant for setters. */
  true, /* isEliminatable.  Not relevant for setters. */
  false, /* isAlwaysInSlot.  Only relevant for getters. */
  false, /* isLazilyCachedInSlot.  Only relevant for getters. */
  false,  /* isTypedMethod.  Only relevant for methods. */
  0   /* Reserved slot index, if we're stored in a slot, else 0. */
};
static_assert(0 <= JSJitInfo::maxSlotIndex, "We won't fit");
static_assert(0 < 1, "There is no slot for us");

static bool
_addProperty(JSContext* cx, JS::Handle<JSObject*> obj, JS::Handle<jsid> id, JS::Handle<JS::Value> val)
{
  mozilla::dom::SVGFEDistantLightElement* self = UnwrapPossiblyNotInitializedDOMObject<mozilla::dom::SVGFEDistantLightElement>(obj);
  // We don't want to preserve if we don't have a wrapper, and we
  // obviously can't preserve if we're not initialized.
  if (self && self->GetWrapperPreserveColor()) {
    PreserveWrapper(self);
  }
  return true;
}

static void
_finalize(js::FreeOp* fop, JSObject* obj)
{
  mozilla::dom::SVGFEDistantLightElement* self = UnwrapPossiblyNotInitializedDOMObject<mozilla::dom::SVGFEDistantLightElement>(obj);
  if (self) {
    ClearWrapper(self, self);
    AddForDeferredFinalization<mozilla::dom::SVGFEDistantLightElement>(self);
  }
}

static void
_objectMoved(JSObject* obj, const JSObject* old)
{
  mozilla::dom::SVGFEDistantLightElement* self = UnwrapPossiblyNotInitializedDOMObject<mozilla::dom::SVGFEDistantLightElement>(obj);
  if (self) {
    UpdateWrapper(self, self, obj, old);
  }
}

static const JSPropertySpec sAttributes_specs[] = {
  { "azimuth", JSPROP_SHARED | JSPROP_ENUMERATE, { { { { GenericBindingGetter, &azimuth_getterinfo } }, JSNATIVE_WRAPPER(nullptr) } } },
  { "elevation", JSPROP_SHARED | JSPROP_ENUMERATE, { { { { GenericBindingGetter, &elevation_getterinfo } }, JSNATIVE_WRAPPER(nullptr) } } },
  JS_PS_END
};


// Can't be const because the pref-enabled boolean needs to be writable
static Prefable<const JSPropertySpec> sAttributes[] = {
  { nullptr, &sAttributes_specs[0] },
  { nullptr, nullptr }
};

static jsid sAttributes_ids[3];


static const NativePropertiesN<1> sNativeProperties = {
  -1,
  false, 0,
  false, 0,
  false, 0,
  true,  0 /* sAttributes */,
  false, 0,
  false, 0,
  false, 0,
  {
    { sAttributes, sAttributes_ids, sAttributes_specs }
  }
};

static const DOMIfaceAndProtoJSClass sInterfaceObjectClass = {
  {
    "Function",
    JSCLASS_IS_DOMIFACEANDPROTOJSCLASS | JSCLASS_HAS_RESERVED_SLOTS(DOM_INTERFACE_SLOTS_BASE),
    &sBoringInterfaceObjectClassClassOps,
    JS_NULL_CLASS_SPEC,
    JS_NULL_CLASS_EXT,
    &sInterfaceObjectClassObjectOps
  },
  eInterface,
  true,
  prototypes::id::SVGFEDistantLightElement,
  PrototypeTraits<prototypes::id::SVGFEDistantLightElement>::Depth,
  sNativePropertyHooks,
  "function SVGFEDistantLightElement() {\n    [native code]\n}",
  SVGElementBinding::GetConstructorObject
};

static const DOMIfaceAndProtoJSClass sPrototypeClass = {
  {
    "SVGFEDistantLightElementPrototype",
    JSCLASS_IS_DOMIFACEANDPROTOJSCLASS | JSCLASS_HAS_RESERVED_SLOTS(DOM_INTERFACE_PROTO_SLOTS_BASE),
    JS_NULL_CLASS_OPS,
    JS_NULL_CLASS_SPEC,
    JS_NULL_CLASS_EXT,
    JS_NULL_OBJECT_OPS
  },
  eInterfacePrototype,
  false,
  prototypes::id::SVGFEDistantLightElement,
  PrototypeTraits<prototypes::id::SVGFEDistantLightElement>::Depth,
  sNativePropertyHooks,
  "[object SVGFEDistantLightElementPrototype]",
  SVGElementBinding::GetProtoObject
};

JSObject*
DefineDOMInterface(JSContext* aCx, JS::Handle<JSObject*> aGlobal, JS::Handle<jsid> id, bool aDefineOnGlobal)
{
  return GetConstructorObjectHandle(aCx, aDefineOnGlobal);
}

static const js::ClassOps sClassOps = {
  _addProperty, /* addProperty */
  nullptr,               /* delProperty */
  nullptr,               /* getProperty */
  nullptr,               /* setProperty */
  nullptr, /* enumerate */
  nullptr, /* resolve */
  nullptr, /* mayResolve */
  _finalize, /* finalize */
  nullptr, /* call */
  nullptr,               /* hasInstance */
  nullptr,               /* construct */
  nullptr, /* trace */
};

static const js::ClassExtension sClassExtension = {
  nullptr, /* weakmapKeyDelegateOp */
  _objectMoved /* objectMovedOp */
};

static const DOMJSClass sClass = {
  { "SVGFEDistantLightElement",
    JSCLASS_IS_DOMJSCLASS | JSCLASS_FOREGROUND_FINALIZE | JSCLASS_HAS_RESERVED_SLOTS(1),
    &sClassOps,
    JS_NULL_CLASS_SPEC,
    &sClassExtension,
    JS_NULL_OBJECT_OPS
  },
  { prototypes::id::EventTarget, prototypes::id::Node, prototypes::id::Element, prototypes::id::SVGElement, prototypes::id::SVGFEDistantLightElement, prototypes::id::_ID_Count, prototypes::id::_ID_Count, prototypes::id::_ID_Count },
  IsBaseOf<nsISupports, mozilla::dom::SVGFEDistantLightElement >::value,
  sNativePropertyHooks,
  FindAssociatedGlobalForNative<mozilla::dom::SVGFEDistantLightElement>::Get,
  GetProtoObjectHandle,
  GetCCParticipant<mozilla::dom::SVGFEDistantLightElement>::Get()
};
static_assert(1 == DOM_INSTANCE_RESERVED_SLOTS,
              "Must have the right minimal number of reserved slots.");
static_assert(1 >= 1,
              "Must have enough reserved slots.");

const JSClass*
GetJSClass()
{
  return sClass.ToJSClass();
}

bool
Wrap(JSContext* aCx, mozilla::dom::SVGFEDistantLightElement* aObject, nsWrapperCache* aCache, JS::Handle<JSObject*> aGivenProto, JS::MutableHandle<JSObject*> aReflector)
{
  MOZ_ASSERT(static_cast<mozilla::dom::SVGFEDistantLightElement*>(aObject) ==
             reinterpret_cast<mozilla::dom::SVGFEDistantLightElement*>(aObject),
             "Multiple inheritance for mozilla::dom::SVGFEDistantLightElement is broken.");
  MOZ_ASSERT(static_cast<nsSVGElement*>(aObject) ==
             reinterpret_cast<nsSVGElement*>(aObject),
             "Multiple inheritance for nsSVGElement is broken.");
  MOZ_ASSERT(static_cast<mozilla::dom::Element*>(aObject) ==
             reinterpret_cast<mozilla::dom::Element*>(aObject),
             "Multiple inheritance for mozilla::dom::Element is broken.");
  MOZ_ASSERT(static_cast<nsINode*>(aObject) ==
             reinterpret_cast<nsINode*>(aObject),
             "Multiple inheritance for nsINode is broken.");
  MOZ_ASSERT(static_cast<mozilla::dom::EventTarget*>(aObject) ==
             reinterpret_cast<mozilla::dom::EventTarget*>(aObject),
             "Multiple inheritance for mozilla::dom::EventTarget is broken.");
  MOZ_ASSERT(ToSupportsIsCorrect(aObject));
  MOZ_ASSERT(!aCache->GetWrapper(),
             "You should probably not be using Wrap() directly; use "
             "GetOrCreateDOMReflector instead");

  MOZ_ASSERT(ToSupportsIsOnPrimaryInheritanceChain(aObject, aCache),
             "nsISupports must be on our primary inheritance chain");

  JS::Rooted<JSObject*> global(aCx, FindAssociatedGlobal(aCx, aObject->GetParentObject()));
  if (!global) {
    return false;
  }
  MOZ_ASSERT(JS_IsGlobalObject(global));
  MOZ_ASSERT(!JS::ObjectIsMarkedGray(global));

  // That might have ended up wrapping us already, due to the wonders
  // of XBL.  Check for that, and bail out as needed.
  aReflector.set(aCache->GetWrapper());
  if (aReflector) {
#ifdef DEBUG
    binding_detail::AssertReflectorHasGivenProto(aCx, aReflector, aGivenProto);
#endif // DEBUG
    return true;
  }

  JSAutoCompartment ac(aCx, global);
  JS::Handle<JSObject*> canonicalProto = GetProtoObjectHandle(aCx);
  if (!canonicalProto) {
    return false;
  }
  JS::Rooted<JSObject*> proto(aCx);
  if (aGivenProto) {
    proto = aGivenProto;
    // Unfortunately, while aGivenProto was in the compartment of aCx
    // coming in, we changed compartments to that of "parent" so may need
    // to wrap the proto here.
    if (js::GetContextCompartment(aCx) != js::GetObjectCompartment(proto)) {
      if (!JS_WrapObject(aCx, &proto)) {
        return false;
      }
    }
  } else {
    proto = canonicalProto;
  }

  BindingJSObjectCreator<mozilla::dom::SVGFEDistantLightElement> creator(aCx);
  creator.CreateObject(aCx, sClass.ToJSClass(), proto, aObject, aReflector);
  if (!aReflector) {
    return false;
  }

  aCache->SetWrapper(aReflector);
  creator.InitializationSucceeded();

  MOZ_ASSERT(aCache->GetWrapperPreserveColor() &&
             aCache->GetWrapperPreserveColor() == aReflector);
  // If proto != canonicalProto, we have to preserve our wrapper;
  // otherwise we won't be able to properly recreate it later, since
  // we won't know what proto to use.  Note that we don't check
  // aGivenProto here, since it's entirely possible (and even
  // somewhat common) to have a non-null aGivenProto which is the
  // same as canonicalProto.
  if (proto != canonicalProto) {
    PreserveWrapper(aObject);
  }

  return true;
}

const NativePropertyHooks sNativePropertyHooks[] = { {
  nullptr,
  nullptr,
  nullptr,
  { sNativeProperties.Upcast(), nullptr },
  prototypes::id::SVGFEDistantLightElement,
  constructors::id::SVGFEDistantLightElement,
  SVGElementBinding::sNativePropertyHooks,
  &DefaultXrayExpandoObjectClass
} };

void
CreateInterfaceObjects(JSContext* aCx, JS::Handle<JSObject*> aGlobal, ProtoAndIfaceCache& aProtoAndIfaceCache, bool aDefineOnGlobal)
{
  JS::Handle<JSObject*> parentProto(SVGElementBinding::GetProtoObjectHandle(aCx));
  if (!parentProto) {
    return;
  }

  JS::Handle<JSObject*> constructorProto(SVGElementBinding::GetConstructorObjectHandle(aCx));
  if (!constructorProto) {
    return;
  }

  static bool sIdsInited = false;
  if (!sIdsInited && NS_IsMainThread()) {
    if (!InitIds(aCx, sAttributes, sAttributes_ids)) {
      return;
    }
    sIdsInited = true;
  }

  JS::Heap<JSObject*>* protoCache = &aProtoAndIfaceCache.EntrySlotOrCreate(prototypes::id::SVGFEDistantLightElement);
  JS::Heap<JSObject*>* interfaceCache = &aProtoAndIfaceCache.EntrySlotOrCreate(constructors::id::SVGFEDistantLightElement);
  dom::CreateInterfaceObjects(aCx, aGlobal, parentProto,
                              &sPrototypeClass.mBase, protoCache,
                              constructorProto, &sInterfaceObjectClass.mBase, 0, nullptr,
                              interfaceCache,
                              sNativeProperties.Upcast(),
                              nullptr,
                              "SVGFEDistantLightElement", aDefineOnGlobal,
                              nullptr,
                              false);
}

JS::Handle<JSObject*>
GetProtoObjectHandle(JSContext* aCx)
{
  /* Get the interface prototype object for this class.  This will create the
     object as needed. */
  bool aDefineOnGlobal = true;

  /* Make sure our global is sane.  Hopefully we can remove this sometime */
  JSObject* global = JS::CurrentGlobalOrNull(aCx);
  if (!(js::GetObjectClass(global)->flags & JSCLASS_DOM_GLOBAL)) {
    return nullptr;
  }

  /* Check to see whether the interface objects are already installed */
  ProtoAndIfaceCache& protoAndIfaceCache = *GetProtoAndIfaceCache(global);
  if (!protoAndIfaceCache.EntrySlotIfExists(prototypes::id::SVGFEDistantLightElement)) {
    JS::Rooted<JSObject*> rootedGlobal(aCx, global);
    CreateInterfaceObjects(aCx, rootedGlobal, protoAndIfaceCache, aDefineOnGlobal);
  }

  /*
   * The object might _still_ be null, but that's OK.
   *
   * Calling fromMarkedLocation() is safe because protoAndIfaceCache is
   * traced by TraceProtoAndIfaceCache() and its contents are never
   * changed after they have been set.
   *
   * Calling address() avoids the read read barrier that does gray
   * unmarking, but it's not possible for the object to be gray here.
   */

  const JS::Heap<JSObject*>& entrySlot = protoAndIfaceCache.EntrySlotMustExist(prototypes::id::SVGFEDistantLightElement);
  MOZ_ASSERT_IF(entrySlot, !JS::ObjectIsMarkedGray(entrySlot));
  return JS::Handle<JSObject*>::fromMarkedLocation(entrySlot.address());
}

JS::Handle<JSObject*>
GetConstructorObjectHandle(JSContext* aCx, bool aDefineOnGlobal)
{
  /* Get the interface object for this class.  This will create the object as
     needed. */

  /* Make sure our global is sane.  Hopefully we can remove this sometime */
  JSObject* global = JS::CurrentGlobalOrNull(aCx);
  if (!(js::GetObjectClass(global)->flags & JSCLASS_DOM_GLOBAL)) {
    return nullptr;
  }

  /* Check to see whether the interface objects are already installed */
  ProtoAndIfaceCache& protoAndIfaceCache = *GetProtoAndIfaceCache(global);
  if (!protoAndIfaceCache.EntrySlotIfExists(constructors::id::SVGFEDistantLightElement)) {
    JS::Rooted<JSObject*> rootedGlobal(aCx, global);
    CreateInterfaceObjects(aCx, rootedGlobal, protoAndIfaceCache, aDefineOnGlobal);
  }

  /*
   * The object might _still_ be null, but that's OK.
   *
   * Calling fromMarkedLocation() is safe because protoAndIfaceCache is
   * traced by TraceProtoAndIfaceCache() and its contents are never
   * changed after they have been set.
   *
   * Calling address() avoids the read read barrier that does gray
   * unmarking, but it's not possible for the object to be gray here.
   */

  const JS::Heap<JSObject*>& entrySlot = protoAndIfaceCache.EntrySlotMustExist(constructors::id::SVGFEDistantLightElement);
  MOZ_ASSERT_IF(entrySlot, !JS::ObjectIsMarkedGray(entrySlot));
  return JS::Handle<JSObject*>::fromMarkedLocation(entrySlot.address());
}

JSObject*
GetConstructorObject(JSContext* aCx)
{
  return GetConstructorObjectHandle(aCx);
}

} // namespace SVGFEDistantLightElementBinding



} // namespace dom
} // namespace mozilla