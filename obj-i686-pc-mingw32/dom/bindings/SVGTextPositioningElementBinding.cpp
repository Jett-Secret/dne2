/* THIS FILE IS AUTOGENERATED FROM SVGTextPositioningElement.webidl BY Codegen.py - DO NOT EDIT */

#include "DOMSVGAnimatedLengthList.h"
#include "DOMSVGAnimatedNumberList.h"
#include "SVGTextContentElementBinding.h"
#include "SVGTextPositioningElementBinding.h"
#include "WrapperFactory.h"
#include "mozilla/OwningNonNull.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/DOMJSClass.h"
#include "mozilla/dom/NonRefcountedDOMObject.h"
#include "mozilla/dom/SVGTextPositioningElement.h"
#include "mozilla/dom/XrayExpandoClass.h"

namespace mozilla {
namespace dom {

namespace SVGTextPositioningElementBinding {

static_assert(IsRefcounted<NativeType>::value == IsRefcounted<SVGTextContentElementBinding::NativeType>::value,
              "Can't inherit from an interface with a different ownership model.");

static bool
get_x(JSContext* cx, JS::Handle<JSObject*> obj, mozilla::dom::SVGTextPositioningElement* self, JSJitGetterCallArgs args)
{
  auto result(StrongOrRawPtr<mozilla::DOMSVGAnimatedLengthList>(self->X()));
  MOZ_ASSERT(!JS_IsExceptionPending(cx));
  if (!GetOrCreateDOMReflector(cx, result, args.rval())) {
    MOZ_ASSERT(true || JS_IsExceptionPending(cx));
    return false;
  }
  return true;
}

static const JSJitInfo x_getterinfo = {
  { (JSJitGetterOp)get_x },
  { prototypes::id::SVGTextPositioningElement },
  { PrototypeTraits<prototypes::id::SVGTextPositioningElement>::Depth },
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
get_y(JSContext* cx, JS::Handle<JSObject*> obj, mozilla::dom::SVGTextPositioningElement* self, JSJitGetterCallArgs args)
{
  auto result(StrongOrRawPtr<mozilla::DOMSVGAnimatedLengthList>(self->Y()));
  MOZ_ASSERT(!JS_IsExceptionPending(cx));
  if (!GetOrCreateDOMReflector(cx, result, args.rval())) {
    MOZ_ASSERT(true || JS_IsExceptionPending(cx));
    return false;
  }
  return true;
}

static const JSJitInfo y_getterinfo = {
  { (JSJitGetterOp)get_y },
  { prototypes::id::SVGTextPositioningElement },
  { PrototypeTraits<prototypes::id::SVGTextPositioningElement>::Depth },
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
get_dx(JSContext* cx, JS::Handle<JSObject*> obj, mozilla::dom::SVGTextPositioningElement* self, JSJitGetterCallArgs args)
{
  auto result(StrongOrRawPtr<mozilla::DOMSVGAnimatedLengthList>(self->Dx()));
  MOZ_ASSERT(!JS_IsExceptionPending(cx));
  if (!GetOrCreateDOMReflector(cx, result, args.rval())) {
    MOZ_ASSERT(true || JS_IsExceptionPending(cx));
    return false;
  }
  return true;
}

static const JSJitInfo dx_getterinfo = {
  { (JSJitGetterOp)get_dx },
  { prototypes::id::SVGTextPositioningElement },
  { PrototypeTraits<prototypes::id::SVGTextPositioningElement>::Depth },
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
get_dy(JSContext* cx, JS::Handle<JSObject*> obj, mozilla::dom::SVGTextPositioningElement* self, JSJitGetterCallArgs args)
{
  auto result(StrongOrRawPtr<mozilla::DOMSVGAnimatedLengthList>(self->Dy()));
  MOZ_ASSERT(!JS_IsExceptionPending(cx));
  if (!GetOrCreateDOMReflector(cx, result, args.rval())) {
    MOZ_ASSERT(true || JS_IsExceptionPending(cx));
    return false;
  }
  return true;
}

static const JSJitInfo dy_getterinfo = {
  { (JSJitGetterOp)get_dy },
  { prototypes::id::SVGTextPositioningElement },
  { PrototypeTraits<prototypes::id::SVGTextPositioningElement>::Depth },
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
get_rotate(JSContext* cx, JS::Handle<JSObject*> obj, mozilla::dom::SVGTextPositioningElement* self, JSJitGetterCallArgs args)
{
  auto result(StrongOrRawPtr<mozilla::DOMSVGAnimatedNumberList>(self->Rotate()));
  MOZ_ASSERT(!JS_IsExceptionPending(cx));
  if (!GetOrCreateDOMReflector(cx, result, args.rval())) {
    MOZ_ASSERT(true || JS_IsExceptionPending(cx));
    return false;
  }
  return true;
}

static const JSJitInfo rotate_getterinfo = {
  { (JSJitGetterOp)get_rotate },
  { prototypes::id::SVGTextPositioningElement },
  { PrototypeTraits<prototypes::id::SVGTextPositioningElement>::Depth },
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

static const JSPropertySpec sAttributes_specs[] = {
  { "x", JSPROP_SHARED | JSPROP_ENUMERATE, { { { { GenericBindingGetter, &x_getterinfo } }, JSNATIVE_WRAPPER(nullptr) } } },
  { "y", JSPROP_SHARED | JSPROP_ENUMERATE, { { { { GenericBindingGetter, &y_getterinfo } }, JSNATIVE_WRAPPER(nullptr) } } },
  { "dx", JSPROP_SHARED | JSPROP_ENUMERATE, { { { { GenericBindingGetter, &dx_getterinfo } }, JSNATIVE_WRAPPER(nullptr) } } },
  { "dy", JSPROP_SHARED | JSPROP_ENUMERATE, { { { { GenericBindingGetter, &dy_getterinfo } }, JSNATIVE_WRAPPER(nullptr) } } },
  { "rotate", JSPROP_SHARED | JSPROP_ENUMERATE, { { { { GenericBindingGetter, &rotate_getterinfo } }, JSNATIVE_WRAPPER(nullptr) } } },
  JS_PS_END
};


// Can't be const because the pref-enabled boolean needs to be writable
static Prefable<const JSPropertySpec> sAttributes[] = {
  { nullptr, &sAttributes_specs[0] },
  { nullptr, nullptr }
};

static jsid sAttributes_ids[6];


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
  prototypes::id::SVGTextPositioningElement,
  PrototypeTraits<prototypes::id::SVGTextPositioningElement>::Depth,
  sNativePropertyHooks,
  "function SVGTextPositioningElement() {\n    [native code]\n}",
  SVGTextContentElementBinding::GetConstructorObject
};

static const DOMIfaceAndProtoJSClass sPrototypeClass = {
  {
    "SVGTextPositioningElementPrototype",
    JSCLASS_IS_DOMIFACEANDPROTOJSCLASS | JSCLASS_HAS_RESERVED_SLOTS(DOM_INTERFACE_PROTO_SLOTS_BASE),
    JS_NULL_CLASS_OPS,
    JS_NULL_CLASS_SPEC,
    JS_NULL_CLASS_EXT,
    JS_NULL_OBJECT_OPS
  },
  eInterfacePrototype,
  false,
  prototypes::id::SVGTextPositioningElement,
  PrototypeTraits<prototypes::id::SVGTextPositioningElement>::Depth,
  sNativePropertyHooks,
  "[object SVGTextPositioningElementPrototype]",
  SVGTextContentElementBinding::GetProtoObject
};

JSObject*
DefineDOMInterface(JSContext* aCx, JS::Handle<JSObject*> aGlobal, JS::Handle<jsid> id, bool aDefineOnGlobal)
{
  return GetConstructorObjectHandle(aCx, aDefineOnGlobal);
}

const NativePropertyHooks sNativePropertyHooks[] = { {
  nullptr,
  nullptr,
  nullptr,
  { sNativeProperties.Upcast(), nullptr },
  prototypes::id::SVGTextPositioningElement,
  constructors::id::SVGTextPositioningElement,
  SVGTextContentElementBinding::sNativePropertyHooks,
  &DefaultXrayExpandoObjectClass
} };

void
CreateInterfaceObjects(JSContext* aCx, JS::Handle<JSObject*> aGlobal, ProtoAndIfaceCache& aProtoAndIfaceCache, bool aDefineOnGlobal)
{
  JS::Handle<JSObject*> parentProto(SVGTextContentElementBinding::GetProtoObjectHandle(aCx));
  if (!parentProto) {
    return;
  }

  JS::Handle<JSObject*> constructorProto(SVGTextContentElementBinding::GetConstructorObjectHandle(aCx));
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

  JS::Heap<JSObject*>* protoCache = &aProtoAndIfaceCache.EntrySlotOrCreate(prototypes::id::SVGTextPositioningElement);
  JS::Heap<JSObject*>* interfaceCache = &aProtoAndIfaceCache.EntrySlotOrCreate(constructors::id::SVGTextPositioningElement);
  dom::CreateInterfaceObjects(aCx, aGlobal, parentProto,
                              &sPrototypeClass.mBase, protoCache,
                              constructorProto, &sInterfaceObjectClass.mBase, 0, nullptr,
                              interfaceCache,
                              sNativeProperties.Upcast(),
                              nullptr,
                              "SVGTextPositioningElement", aDefineOnGlobal,
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
  if (!protoAndIfaceCache.EntrySlotIfExists(prototypes::id::SVGTextPositioningElement)) {
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

  const JS::Heap<JSObject*>& entrySlot = protoAndIfaceCache.EntrySlotMustExist(prototypes::id::SVGTextPositioningElement);
  MOZ_ASSERT_IF(entrySlot, !JS::ObjectIsMarkedGray(entrySlot));
  return JS::Handle<JSObject*>::fromMarkedLocation(entrySlot.address());
}

JSObject*
GetProtoObject(JSContext* aCx)
{
  return GetProtoObjectHandle(aCx);
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
  if (!protoAndIfaceCache.EntrySlotIfExists(constructors::id::SVGTextPositioningElement)) {
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

  const JS::Heap<JSObject*>& entrySlot = protoAndIfaceCache.EntrySlotMustExist(constructors::id::SVGTextPositioningElement);
  MOZ_ASSERT_IF(entrySlot, !JS::ObjectIsMarkedGray(entrySlot));
  return JS::Handle<JSObject*>::fromMarkedLocation(entrySlot.address());
}

JSObject*
GetConstructorObject(JSContext* aCx)
{
  return GetConstructorObjectHandle(aCx);
}

} // namespace SVGTextPositioningElementBinding



} // namespace dom
} // namespace mozilla
