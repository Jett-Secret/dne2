/* THIS FILE IS AUTOGENERATED FROM PermissionStatus.webidl BY Codegen.py - DO NOT EDIT */

#include "EventHandlerBinding.h"
#include "EventTargetBinding.h"
#include "PermissionStatusBinding.h"
#include "WrapperFactory.h"
#include "jsapi.h"
#include "mozilla/OwningNonNull.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/DOMJSClass.h"
#include "mozilla/dom/NonRefcountedDOMObject.h"
#include "mozilla/dom/Nullable.h"
#include "mozilla/dom/PermissionStatus.h"
#include "mozilla/dom/XrayExpandoClass.h"

namespace mozilla {
namespace dom {

namespace PermissionStateValues {
extern const EnumEntry strings[4] = {
  {"granted", 7},
  {"denied", 6},
  {"prompt", 6},
  { nullptr, 0 }
};
} // namespace PermissionStateValues

bool
ToJSValue(JSContext* aCx, PermissionState aArgument, JS::MutableHandle<JS::Value> aValue)
{
  MOZ_ASSERT(uint32_t(aArgument) < ArrayLength(PermissionStateValues::strings));
  JSString* resultStr =
    JS_NewStringCopyN(aCx, PermissionStateValues::strings[uint32_t(aArgument)].value,
                      PermissionStateValues::strings[uint32_t(aArgument)].length);
  if (!resultStr) {
    return false;
  }
  aValue.setString(resultStr);
  return true;
}


namespace PermissionStatusBinding {

static_assert(IsRefcounted<NativeType>::value == IsRefcounted<EventTargetBinding::NativeType>::value,
              "Can't inherit from an interface with a different ownership model.");

static bool
get_state(JSContext* cx, JS::Handle<JSObject*> obj, mozilla::dom::PermissionStatus* self, JSJitGetterCallArgs args)
{
  PermissionState result(self->State());
  MOZ_ASSERT(!JS_IsExceptionPending(cx));
  if (!ToJSValue(cx, result, args.rval())) {
    return false;
  }
  return true;
}

static const JSJitInfo state_getterinfo = {
  { (JSJitGetterOp)get_state },
  { prototypes::id::PermissionStatus },
  { PrototypeTraits<prototypes::id::PermissionStatus>::Depth },
  JSJitInfo::Getter,
  JSJitInfo::AliasEverything, /* aliasSet.  Not relevant for setters. */
  JSVAL_TYPE_STRING,  /* returnType.  Not relevant for setters. */
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
get_onchange(JSContext* cx, JS::Handle<JSObject*> obj, mozilla::dom::PermissionStatus* self, JSJitGetterCallArgs args)
{
  RefPtr<EventHandlerNonNull> result(self->GetOnchange());
  MOZ_ASSERT(!JS_IsExceptionPending(cx));
  if (result) {
    args.rval().setObject(*GetCallbackFromCallbackObject(result));
    if (!MaybeWrapObjectOrNullValue(cx, args.rval())) {
      return false;
    }
    return true;
  } else {
    args.rval().setNull();
    return true;
  }
}

static bool
set_onchange(JSContext* cx, JS::Handle<JSObject*> obj, mozilla::dom::PermissionStatus* self, JSJitSetterCallArgs args)
{
  RootedCallback<RefPtr<binding_detail::FastEventHandlerNonNull>> arg0(cx);
  if (args[0].isObject()) {
      { // Scope for tempRoot
        JS::Rooted<JSObject*> tempRoot(cx, &args[0].toObject());
        arg0 = new binding_detail::FastEventHandlerNonNull(cx, tempRoot, mozilla::dom::GetIncumbentGlobal());
      }
  } else {
    arg0 = nullptr;
  }
  self->SetOnchange(Constify(arg0));
  MOZ_ASSERT(!JS_IsExceptionPending(cx));

  return true;
}

static const JSJitInfo onchange_getterinfo = {
  { (JSJitGetterOp)get_onchange },
  { prototypes::id::PermissionStatus },
  { PrototypeTraits<prototypes::id::PermissionStatus>::Depth },
  JSJitInfo::Getter,
  JSJitInfo::AliasEverything, /* aliasSet.  Not relevant for setters. */
  JSVAL_TYPE_UNKNOWN,  /* returnType.  Not relevant for setters. */
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
static const JSJitInfo onchange_setterinfo = {
  { (JSJitGetterOp)set_onchange },
  { prototypes::id::PermissionStatus },
  { PrototypeTraits<prototypes::id::PermissionStatus>::Depth },
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
  mozilla::dom::PermissionStatus* self = UnwrapPossiblyNotInitializedDOMObject<mozilla::dom::PermissionStatus>(obj);
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
  mozilla::dom::PermissionStatus* self = UnwrapPossiblyNotInitializedDOMObject<mozilla::dom::PermissionStatus>(obj);
  if (self) {
    ClearWrapper(self, self);
    AddForDeferredFinalization<mozilla::dom::PermissionStatus>(self);
  }
}

static void
_objectMoved(JSObject* obj, const JSObject* old)
{
  mozilla::dom::PermissionStatus* self = UnwrapPossiblyNotInitializedDOMObject<mozilla::dom::PermissionStatus>(obj);
  if (self) {
    UpdateWrapper(self, self, obj, old);
  }
}

static const JSPropertySpec sAttributes_specs[] = {
  { "state", JSPROP_SHARED | JSPROP_ENUMERATE, { { { { GenericBindingGetter, &state_getterinfo } }, JSNATIVE_WRAPPER(nullptr) } } },
  { "onchange", JSPROP_SHARED | JSPROP_ENUMERATE, { { { { GenericBindingGetter, &onchange_getterinfo } }, { { GenericBindingSetter, &onchange_setterinfo } } } } },
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
  prototypes::id::PermissionStatus,
  PrototypeTraits<prototypes::id::PermissionStatus>::Depth,
  sNativePropertyHooks,
  "function PermissionStatus() {\n    [native code]\n}",
  EventTargetBinding::GetConstructorObject
};

static const DOMIfaceAndProtoJSClass sPrototypeClass = {
  {
    "PermissionStatusPrototype",
    JSCLASS_IS_DOMIFACEANDPROTOJSCLASS | JSCLASS_HAS_RESERVED_SLOTS(DOM_INTERFACE_PROTO_SLOTS_BASE),
    JS_NULL_CLASS_OPS,
    JS_NULL_CLASS_SPEC,
    JS_NULL_CLASS_EXT,
    JS_NULL_OBJECT_OPS
  },
  eInterfacePrototype,
  false,
  prototypes::id::PermissionStatus,
  PrototypeTraits<prototypes::id::PermissionStatus>::Depth,
  sNativePropertyHooks,
  "[object PermissionStatusPrototype]",
  EventTargetBinding::GetProtoObject
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
  { "PermissionStatus",
    JSCLASS_IS_DOMJSCLASS | JSCLASS_FOREGROUND_FINALIZE | JSCLASS_HAS_RESERVED_SLOTS(1),
    &sClassOps,
    JS_NULL_CLASS_SPEC,
    &sClassExtension,
    JS_NULL_OBJECT_OPS
  },
  { prototypes::id::EventTarget, prototypes::id::PermissionStatus, prototypes::id::_ID_Count, prototypes::id::_ID_Count, prototypes::id::_ID_Count, prototypes::id::_ID_Count, prototypes::id::_ID_Count, prototypes::id::_ID_Count },
  IsBaseOf<nsISupports, mozilla::dom::PermissionStatus >::value,
  sNativePropertyHooks,
  FindAssociatedGlobalForNative<mozilla::dom::PermissionStatus>::Get,
  GetProtoObjectHandle,
  GetCCParticipant<mozilla::dom::PermissionStatus>::Get()
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
Wrap(JSContext* aCx, mozilla::dom::PermissionStatus* aObject, nsWrapperCache* aCache, JS::Handle<JSObject*> aGivenProto, JS::MutableHandle<JSObject*> aReflector)
{
  MOZ_ASSERT(static_cast<mozilla::dom::PermissionStatus*>(aObject) ==
             reinterpret_cast<mozilla::dom::PermissionStatus*>(aObject),
             "Multiple inheritance for mozilla::dom::PermissionStatus is broken.");
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

  BindingJSObjectCreator<mozilla::dom::PermissionStatus> creator(aCx);
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
  prototypes::id::PermissionStatus,
  constructors::id::PermissionStatus,
  EventTargetBinding::sNativePropertyHooks,
  &DefaultXrayExpandoObjectClass
} };

void
CreateInterfaceObjects(JSContext* aCx, JS::Handle<JSObject*> aGlobal, ProtoAndIfaceCache& aProtoAndIfaceCache, bool aDefineOnGlobal)
{
  JS::Handle<JSObject*> parentProto(EventTargetBinding::GetProtoObjectHandle(aCx));
  if (!parentProto) {
    return;
  }

  JS::Handle<JSObject*> constructorProto(EventTargetBinding::GetConstructorObjectHandle(aCx));
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

  JS::Heap<JSObject*>* protoCache = &aProtoAndIfaceCache.EntrySlotOrCreate(prototypes::id::PermissionStatus);
  JS::Heap<JSObject*>* interfaceCache = &aProtoAndIfaceCache.EntrySlotOrCreate(constructors::id::PermissionStatus);
  dom::CreateInterfaceObjects(aCx, aGlobal, parentProto,
                              &sPrototypeClass.mBase, protoCache,
                              constructorProto, &sInterfaceObjectClass.mBase, 0, nullptr,
                              interfaceCache,
                              sNativeProperties.Upcast(),
                              nullptr,
                              "PermissionStatus", aDefineOnGlobal,
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
  if (!protoAndIfaceCache.EntrySlotIfExists(prototypes::id::PermissionStatus)) {
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

  const JS::Heap<JSObject*>& entrySlot = protoAndIfaceCache.EntrySlotMustExist(prototypes::id::PermissionStatus);
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
  if (!protoAndIfaceCache.EntrySlotIfExists(constructors::id::PermissionStatus)) {
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

  const JS::Heap<JSObject*>& entrySlot = protoAndIfaceCache.EntrySlotMustExist(constructors::id::PermissionStatus);
  MOZ_ASSERT_IF(entrySlot, !JS::ObjectIsMarkedGray(entrySlot));
  return JS::Handle<JSObject*>::fromMarkedLocation(entrySlot.address());
}

JSObject*
GetConstructorObject(JSContext* aCx)
{
  return GetConstructorObjectHandle(aCx);
}

} // namespace PermissionStatusBinding



} // namespace dom
} // namespace mozilla
