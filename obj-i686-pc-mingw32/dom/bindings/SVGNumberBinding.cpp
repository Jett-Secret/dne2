/* THIS FILE IS AUTOGENERATED FROM SVGNumber.webidl BY Codegen.py - DO NOT EDIT */

#include "DOMSVGNumber.h"
#include "SVGNumberBinding.h"
#include "WrapperFactory.h"
#include "mozilla/FloatingPoint.h"
#include "mozilla/OwningNonNull.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/DOMJSClass.h"
#include "mozilla/dom/NonRefcountedDOMObject.h"
#include "mozilla/dom/PrimitiveConversions.h"
#include "mozilla/dom/XrayExpandoClass.h"

namespace mozilla {
namespace dom {

namespace SVGNumberBinding {

static bool
get_value(JSContext* cx, JS::Handle<JSObject*> obj, mozilla::DOMSVGNumber* self, JSJitGetterCallArgs args)
{
  float result(self->Value());
  MOZ_ASSERT(!JS_IsExceptionPending(cx));
  args.rval().set(JS_NumberValue(double(result)));
  return true;
}

static bool
set_value(JSContext* cx, JS::Handle<JSObject*> obj, mozilla::DOMSVGNumber* self, JSJitSetterCallArgs args)
{
  float arg0;
  if (!ValueToPrimitive<float, eDefault>(cx, args[0], &arg0)) {
    return false;
  } else if (!mozilla::IsFinite(arg0)) {
    ThrowErrorMessage(cx, MSG_NOT_FINITE, "Value being assigned to SVGNumber.value");
    return false;
  }
  binding_detail::FastErrorResult rv;
  self->SetValue(arg0, rv);
  if (MOZ_UNLIKELY(rv.MaybeSetPendingException(cx))) {
    return false;
  }
  MOZ_ASSERT(!JS_IsExceptionPending(cx));

  return true;
}

static const JSJitInfo value_getterinfo = {
  { (JSJitGetterOp)get_value },
  { prototypes::id::SVGNumber },
  { PrototypeTraits<prototypes::id::SVGNumber>::Depth },
  JSJitInfo::Getter,
  JSJitInfo::AliasEverything, /* aliasSet.  Not relevant for setters. */
  JSVAL_TYPE_DOUBLE,  /* returnType.  Not relevant for setters. */
  true,  /* isInfallible. False in setters. */
  false,  /* isMovable.  Not relevant for setters. */
  false, /* isEliminatable.  Not relevant for setters. */
  false, /* isAlwaysInSlot.  Only relevant for getters. */
  false, /* isLazilyCachedInSlot.  Only relevant for getters. */
  false,  /* isTypedMethod.  Only relevant for methods. */
  0   /* Reserved slot index, if we're stored in a slot, else 0. */
};
static_assert(0 <= JSJitInfo::maxSlotIndex, "We won't fit");
static_assert(0 < 1, "There is no slot for us");
static const JSJitInfo value_setterinfo = {
  { (JSJitGetterOp)set_value },
  { prototypes::id::SVGNumber },
  { PrototypeTraits<prototypes::id::SVGNumber>::Depth },
  JSJitInfo::Setter,
  JSJitInfo::AliasEverything, /* aliasSet.  Not relevant for setters. */
  JSVAL_TYPE_UNDEFINED,  /* returnType.  Not relevant for setters. */
  false,  /* isInfallible. False in setters. */
  false,  /* isMovable.  Not relevant for setters. */
  false, /* isEliminatable.  Not relevant for setters. */
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
  mozilla::DOMSVGNumber* self = UnwrapPossiblyNotInitializedDOMObject<mozilla::DOMSVGNumber>(obj);
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
  mozilla::DOMSVGNumber* self = UnwrapPossiblyNotInitializedDOMObject<mozilla::DOMSVGNumber>(obj);
  if (self) {
    ClearWrapper(self, self);
    AddForDeferredFinalization<mozilla::DOMSVGNumber>(self);
  }
}

static void
_objectMoved(JSObject* obj, const JSObject* old)
{
  mozilla::DOMSVGNumber* self = UnwrapPossiblyNotInitializedDOMObject<mozilla::DOMSVGNumber>(obj);
  if (self) {
    UpdateWrapper(self, self, obj, old);
  }
}

static const JSPropertySpec sAttributes_specs[] = {
  { "value", JSPROP_SHARED | JSPROP_ENUMERATE, { { { { GenericBindingGetter, &value_getterinfo } }, { { GenericBindingSetter, &value_setterinfo } } } } },
  JS_PS_END
};


// Can't be const because the pref-enabled boolean needs to be writable
static Prefable<const JSPropertySpec> sAttributes[] = {
  { nullptr, &sAttributes_specs[0] },
  { nullptr, nullptr }
};

static jsid sAttributes_ids[2];


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

static bool
_constructor(JSContext* cx, unsigned argc, JS::Value* vp)
{
  JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
  JS::Rooted<JSObject*> obj(cx, &args.callee());
  if (!args.isConstructing()) {
    // XXXbz wish I could get the name from the callee instead of
    // Adding more relocations
    return ThrowConstructorWithoutNew(cx, "SVGNumber");
  }

  GlobalObject global(cx, obj);
  if (global.Failed()) {
    return false;
  }

  JS::Rooted<JSObject*> desiredProto(cx);
  if (!GetDesiredProto(cx, args, &desiredProto)) {
    return false;
  }

  unsigned argcount = std::min(args.length(), 1u);
  switch (argcount) {
    case 0: {
      bool objIsXray = xpc::WrapperFactory::IsXrayWrapper(obj);
      Maybe<JSAutoCompartment> ac;
      if (objIsXray) {
        obj = js::CheckedUnwrap(obj);
        if (!obj) {
          return false;
        }
        ac.emplace(cx, obj);
        if (!JS_WrapObject(cx, &desiredProto)) {
          return false;
        }
      }
      binding_detail::FastErrorResult rv;
      auto result(StrongOrRawPtr<mozilla::DOMSVGNumber>(mozilla::DOMSVGNumber::Constructor(global, rv)));
      if (MOZ_UNLIKELY(rv.MaybeSetPendingException(cx))) {
        return false;
      }
      MOZ_ASSERT(!JS_IsExceptionPending(cx));
      static_assert(!IsPointer<decltype(result)>::value,
                    "NewObject implies that we need to keep the object alive with a strong reference.");
      if (!GetOrCreateDOMReflector(cx, result, args.rval(), desiredProto)) {
        MOZ_ASSERT(true || JS_IsExceptionPending(cx));
        return false;
      }
      return true;
      break;
    }
    case 1: {
      bool objIsXray = xpc::WrapperFactory::IsXrayWrapper(obj);
      float arg0;
      if (!ValueToPrimitive<float, eDefault>(cx, args[0], &arg0)) {
        return false;
      } else if (!mozilla::IsFinite(arg0)) {
        ThrowErrorMessage(cx, MSG_NOT_FINITE, "Argument 1 of SVGNumber.constructor");
        return false;
      }
      Maybe<JSAutoCompartment> ac;
      if (objIsXray) {
        obj = js::CheckedUnwrap(obj);
        if (!obj) {
          return false;
        }
        ac.emplace(cx, obj);
        if (!JS_WrapObject(cx, &desiredProto)) {
          return false;
        }
      }
      binding_detail::FastErrorResult rv;
      auto result(StrongOrRawPtr<mozilla::DOMSVGNumber>(mozilla::DOMSVGNumber::Constructor(global, arg0, rv)));
      if (MOZ_UNLIKELY(rv.MaybeSetPendingException(cx))) {
        return false;
      }
      MOZ_ASSERT(!JS_IsExceptionPending(cx));
      static_assert(!IsPointer<decltype(result)>::value,
                    "NewObject implies that we need to keep the object alive with a strong reference.");
      if (!GetOrCreateDOMReflector(cx, result, args.rval(), desiredProto)) {
        MOZ_ASSERT(true || JS_IsExceptionPending(cx));
        return false;
      }
      return true;
      break;
    }
    default: {
      return ThrowErrorMessage(cx, MSG_MISSING_ARGUMENTS, "SVGNumber");
      break;
    }
  }
  MOZ_CRASH("We have an always-returning default case");
  return false;
}

static const js::ClassOps sInterfaceObjectClassOps = {
    nullptr,               /* addProperty */
    nullptr,               /* delProperty */
    nullptr,               /* getProperty */
    nullptr,               /* setProperty */
    nullptr,               /* enumerate */
    nullptr,               /* resolve */
    nullptr,               /* mayResolve */
    nullptr,               /* finalize */
    _constructor, /* call */
    nullptr,               /* hasInstance */
    _constructor, /* construct */
    nullptr,               /* trace */
};

static const DOMIfaceAndProtoJSClass sInterfaceObjectClass = {
  {
    "Function",
    JSCLASS_IS_DOMIFACEANDPROTOJSCLASS | JSCLASS_HAS_RESERVED_SLOTS(DOM_INTERFACE_SLOTS_BASE),
    &sInterfaceObjectClassOps,
    JS_NULL_CLASS_SPEC,
    JS_NULL_CLASS_EXT,
    &sInterfaceObjectClassObjectOps
  },
  eInterface,
  true,
  prototypes::id::SVGNumber,
  PrototypeTraits<prototypes::id::SVGNumber>::Depth,
  sNativePropertyHooks,
  "function SVGNumber() {\n    [native code]\n}",
  JS::GetRealmFunctionPrototype
};

static const DOMIfaceAndProtoJSClass sPrototypeClass = {
  {
    "SVGNumberPrototype",
    JSCLASS_IS_DOMIFACEANDPROTOJSCLASS | JSCLASS_HAS_RESERVED_SLOTS(DOM_INTERFACE_PROTO_SLOTS_BASE),
    JS_NULL_CLASS_OPS,
    JS_NULL_CLASS_SPEC,
    JS_NULL_CLASS_EXT,
    JS_NULL_OBJECT_OPS
  },
  eInterfacePrototype,
  false,
  prototypes::id::SVGNumber,
  PrototypeTraits<prototypes::id::SVGNumber>::Depth,
  sNativePropertyHooks,
  "[object SVGNumberPrototype]",
  JS::GetRealmObjectPrototype
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
  { "SVGNumber",
    JSCLASS_IS_DOMJSCLASS | JSCLASS_FOREGROUND_FINALIZE | JSCLASS_HAS_RESERVED_SLOTS(1),
    &sClassOps,
    JS_NULL_CLASS_SPEC,
    &sClassExtension,
    JS_NULL_OBJECT_OPS
  },
  { prototypes::id::SVGNumber, prototypes::id::_ID_Count, prototypes::id::_ID_Count, prototypes::id::_ID_Count, prototypes::id::_ID_Count, prototypes::id::_ID_Count, prototypes::id::_ID_Count, prototypes::id::_ID_Count },
  IsBaseOf<nsISupports, mozilla::DOMSVGNumber >::value,
  sNativePropertyHooks,
  FindAssociatedGlobalForNative<mozilla::DOMSVGNumber>::Get,
  GetProtoObjectHandle,
  GetCCParticipant<mozilla::DOMSVGNumber>::Get()
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
Wrap(JSContext* aCx, mozilla::DOMSVGNumber* aObject, nsWrapperCache* aCache, JS::Handle<JSObject*> aGivenProto, JS::MutableHandle<JSObject*> aReflector)
{
  MOZ_ASSERT(static_cast<mozilla::DOMSVGNumber*>(aObject) ==
             reinterpret_cast<mozilla::DOMSVGNumber*>(aObject),
             "Multiple inheritance for mozilla::DOMSVGNumber is broken.");
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

  BindingJSObjectCreator<mozilla::DOMSVGNumber> creator(aCx);
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
  prototypes::id::SVGNumber,
  constructors::id::SVGNumber,
  nullptr,
  &DefaultXrayExpandoObjectClass
} };

void
CreateInterfaceObjects(JSContext* aCx, JS::Handle<JSObject*> aGlobal, ProtoAndIfaceCache& aProtoAndIfaceCache, bool aDefineOnGlobal)
{
  JS::Rooted<JSObject*> parentProto(aCx, JS::GetRealmObjectPrototype(aCx));
  if (!parentProto) {
    return;
  }

  JS::Rooted<JSObject*> constructorProto(aCx, JS::GetRealmFunctionPrototype(aCx));
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

  JS::Heap<JSObject*>* protoCache = &aProtoAndIfaceCache.EntrySlotOrCreate(prototypes::id::SVGNumber);
  JS::Heap<JSObject*>* interfaceCache = &aProtoAndIfaceCache.EntrySlotOrCreate(constructors::id::SVGNumber);
  dom::CreateInterfaceObjects(aCx, aGlobal, parentProto,
                              &sPrototypeClass.mBase, protoCache,
                              constructorProto, &sInterfaceObjectClass.mBase, 0, nullptr,
                              interfaceCache,
                              sNativeProperties.Upcast(),
                              nullptr,
                              "SVGNumber", aDefineOnGlobal,
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
  if (!protoAndIfaceCache.EntrySlotIfExists(prototypes::id::SVGNumber)) {
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

  const JS::Heap<JSObject*>& entrySlot = protoAndIfaceCache.EntrySlotMustExist(prototypes::id::SVGNumber);
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
  if (!protoAndIfaceCache.EntrySlotIfExists(constructors::id::SVGNumber)) {
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

  const JS::Heap<JSObject*>& entrySlot = protoAndIfaceCache.EntrySlotMustExist(constructors::id::SVGNumber);
  MOZ_ASSERT_IF(entrySlot, !JS::ObjectIsMarkedGray(entrySlot));
  return JS::Handle<JSObject*>::fromMarkedLocation(entrySlot.address());
}

JSObject*
GetConstructorObject(JSContext* aCx)
{
  return GetConstructorObjectHandle(aCx);
}

} // namespace SVGNumberBinding



} // namespace dom
} // namespace mozilla
