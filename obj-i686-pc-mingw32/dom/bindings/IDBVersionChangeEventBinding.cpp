/* THIS FILE IS AUTOGENERATED FROM IDBVersionChangeEvent.webidl BY Codegen.py - DO NOT EDIT */

#include "AtomList.h"
#include "EventBinding.h"
#include "IDBEvents.h"
#include "IDBVersionChangeEventBinding.h"
#include "WrapperFactory.h"
#include "mozilla/OwningNonNull.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/DOMJSClass.h"
#include "mozilla/dom/NonRefcountedDOMObject.h"
#include "mozilla/dom/Nullable.h"
#include "mozilla/dom/PrimitiveConversions.h"
#include "mozilla/dom/ScriptSettings.h"
#include "mozilla/dom/SimpleGlobalObject.h"
#include "mozilla/dom/XrayExpandoClass.h"

namespace mozilla {
namespace dom {


IDBVersionChangeEventInit::IDBVersionChangeEventInit()
  : EventInit(FastDictionaryInitializer())
{
  // Safe to pass a null context if we pass a null value
  Init(nullptr, JS::NullHandleValue);
}



bool
IDBVersionChangeEventInit::InitIds(JSContext* cx, IDBVersionChangeEventInitAtoms* atomsCache)
{
  MOZ_ASSERT(!*reinterpret_cast<jsid**>(atomsCache));

  // Initialize these in reverse order so that any failure leaves the first one
  // uninitialized.
  if (!atomsCache->oldVersion_id.init(cx, "oldVersion") ||
      !atomsCache->newVersion_id.init(cx, "newVersion")) {
    return false;
  }
  return true;
}

bool
IDBVersionChangeEventInit::Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription, bool passedToJSImpl)
{
  // Passing a null JSContext is OK only if we're initing from null,
  // Since in that case we will not have to do any property gets
  MOZ_ASSERT_IF(!cx, val.isNull());
  IDBVersionChangeEventInitAtoms* atomsCache = nullptr;
  if (cx) {
    atomsCache = GetAtomCache<IDBVersionChangeEventInitAtoms>(cx);
    if (!*reinterpret_cast<jsid**>(atomsCache) && !InitIds(cx, atomsCache)) {
      return false;
    }
  }

  // Per spec, we init the parent's members first
  if (!EventInit::Init(cx, val)) {
    return false;
  }

  bool isNull = val.isNullOrUndefined();
  // We only need these if !isNull, in which case we have |cx|.
  Maybe<JS::Rooted<JSObject *> > object;
  Maybe<JS::Rooted<JS::Value> > temp;
  if (!isNull) {
    MOZ_ASSERT(cx);
    object.emplace(cx, &val.toObject());
    temp.emplace(cx);
  }
  if (!isNull) {
    if (!JS_GetPropertyById(cx, *object, atomsCache->newVersion_id, temp.ptr())) {
      return false;
    }
  }
  if (!(!isNull && !temp->isUndefined()) || temp.ref().isNullOrUndefined()) {
    mNewVersion.SetNull();
  } else if (!ValueToPrimitive<uint64_t, eDefault>(cx, temp.ref(), &mNewVersion.SetValue())) {
    return false;
  }
  mIsAnyMemberPresent = true;

  if (!isNull) {
    if (!JS_GetPropertyById(cx, *object, atomsCache->oldVersion_id, temp.ptr())) {
      return false;
    }
  }
  if (!isNull && !temp->isUndefined()) {
    if (!ValueToPrimitive<uint64_t, eDefault>(cx, temp.ref(), &mOldVersion)) {
      return false;
    }
  } else {
    mOldVersion = 0ULL;
  }
  mIsAnyMemberPresent = true;
  return true;
}

bool
IDBVersionChangeEventInit::Init(const nsAString& aJSON)
{
  AutoJSAPI jsapi;
  JSObject* cleanGlobal = SimpleGlobalObject::Create(SimpleGlobalObject::GlobalType::BindingDetail);
  if (!cleanGlobal) {
    return false;
  }
  if (!jsapi.Init(cleanGlobal)) {
    return false;
  }
  JSContext* cx = jsapi.cx();
  JS::Rooted<JS::Value> json(cx);
  bool ok = ParseJSON(cx, aJSON, &json);
  NS_ENSURE_TRUE(ok, false);
  return Init(cx, json);
}

bool
IDBVersionChangeEventInit::ToObjectInternal(JSContext* cx, JS::MutableHandle<JS::Value> rval) const
{
  IDBVersionChangeEventInitAtoms* atomsCache = GetAtomCache<IDBVersionChangeEventInitAtoms>(cx);
  if (!*reinterpret_cast<jsid**>(atomsCache) && !InitIds(cx, atomsCache)) {
    return false;
  }

  // Per spec, we define the parent's members first
  if (!EventInit::ToObjectInternal(cx, rval)) {
    return false;
  }
  JS::Rooted<JSObject*> obj(cx, &rval.toObject());

  do {
    // block for our 'break' successCode and scope for 'temp' and 'currentValue'
    JS::Rooted<JS::Value> temp(cx);
    Nullable<uint64_t> const & currentValue = mNewVersion;
    if (currentValue.IsNull()) {
      temp.setNull();
      if (!JS_DefinePropertyById(cx, obj, atomsCache->newVersion_id, temp, JSPROP_ENUMERATE)) {
        return false;
      }
      break;
    }
    temp.set(JS_NumberValue(double(currentValue.Value())));
    if (!JS_DefinePropertyById(cx, obj, atomsCache->newVersion_id, temp, JSPROP_ENUMERATE)) {
      return false;
    }
    break;
  } while(0);

  do {
    // block for our 'break' successCode and scope for 'temp' and 'currentValue'
    JS::Rooted<JS::Value> temp(cx);
    uint64_t const & currentValue = mOldVersion;
    temp.set(JS_NumberValue(double(currentValue)));
    if (!JS_DefinePropertyById(cx, obj, atomsCache->oldVersion_id, temp, JSPROP_ENUMERATE)) {
      return false;
    }
    break;
  } while(0);

  return true;
}

bool
IDBVersionChangeEventInit::ToJSON(nsAString& aJSON) const
{
  AutoJSAPI jsapi;
  jsapi.Init();
  JSContext *cx = jsapi.cx();
  // It's safe to use UnprivilegedJunkScopeOrWorkerGlobal here
  // because we'll only be creating objects, in ways that have no
  // side-effects, followed by a call to JS::ToJSONMaybeSafely,
  // which likewise guarantees no side-effects for the sorts of
  // things we will pass it.
  JSAutoCompartment ac(cx, binding_detail::UnprivilegedJunkScopeOrWorkerGlobal());
  JS::Rooted<JS::Value> val(cx);
  if (!ToObjectInternal(cx, &val)) {
    return false;
  }
  JS::Rooted<JSObject*> obj(cx, &val.toObject());
  return StringifyToJSON(cx, obj, aJSON);
}

void
IDBVersionChangeEventInit::TraceDictionary(JSTracer* trc)
{
  EventInit::TraceDictionary(trc);
}

void
IDBVersionChangeEventInit::operator=(const IDBVersionChangeEventInit& aOther)
{
  EventInit::operator=(aOther);
  mNewVersion = aOther.mNewVersion;
  mOldVersion = aOther.mOldVersion;
}

namespace binding_detail {
} // namespace binding_detail


namespace IDBVersionChangeEventBinding {

static_assert(IsRefcounted<NativeType>::value == IsRefcounted<EventBinding::NativeType>::value,
              "Can't inherit from an interface with a different ownership model.");

static bool
get_oldVersion(JSContext* cx, JS::Handle<JSObject*> obj, mozilla::dom::IDBVersionChangeEvent* self, JSJitGetterCallArgs args)
{
  uint64_t result(self->OldVersion());
  MOZ_ASSERT(!JS_IsExceptionPending(cx));
  args.rval().set(JS_NumberValue(double(result)));
  return true;
}

static const JSJitInfo oldVersion_getterinfo = {
  { (JSJitGetterOp)get_oldVersion },
  { prototypes::id::IDBVersionChangeEvent },
  { PrototypeTraits<prototypes::id::IDBVersionChangeEvent>::Depth },
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

static bool
get_newVersion(JSContext* cx, JS::Handle<JSObject*> obj, mozilla::dom::IDBVersionChangeEvent* self, JSJitGetterCallArgs args)
{
  Nullable<uint64_t> result(self->GetNewVersion());
  MOZ_ASSERT(!JS_IsExceptionPending(cx));
  if (result.IsNull()) {
    args.rval().setNull();
    return true;
  }
  args.rval().set(JS_NumberValue(double(result.Value())));
  return true;
}

static const JSJitInfo newVersion_getterinfo = {
  { (JSJitGetterOp)get_newVersion },
  { prototypes::id::IDBVersionChangeEvent },
  { PrototypeTraits<prototypes::id::IDBVersionChangeEvent>::Depth },
  JSJitInfo::Getter,
  JSJitInfo::AliasEverything, /* aliasSet.  Not relevant for setters. */
  JSVAL_TYPE_UNKNOWN,  /* returnType.  Not relevant for setters. */
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

static bool
get_isTrusted(JSContext* cx, JS::Handle<JSObject*> obj, mozilla::dom::IDBVersionChangeEvent* self, JSJitGetterCallArgs args)
{
  bool result(self->IsTrusted());
  MOZ_ASSERT(!JS_IsExceptionPending(cx));
  args.rval().setBoolean(result);
  return true;
}

static const JSJitInfo isTrusted_getterinfo = {
  { (JSJitGetterOp)get_isTrusted },
  { prototypes::id::IDBVersionChangeEvent },
  { PrototypeTraits<prototypes::id::IDBVersionChangeEvent>::Depth },
  JSJitInfo::Getter,
  JSJitInfo::AliasDOMSets, /* aliasSet.  Not relevant for setters. */
  JSVAL_TYPE_BOOLEAN,  /* returnType.  Not relevant for setters. */
  true,  /* isInfallible. False in setters. */
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
  mozilla::dom::IDBVersionChangeEvent* self = UnwrapPossiblyNotInitializedDOMObject<mozilla::dom::IDBVersionChangeEvent>(obj);
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
  mozilla::dom::IDBVersionChangeEvent* self = UnwrapPossiblyNotInitializedDOMObject<mozilla::dom::IDBVersionChangeEvent>(obj);
  if (self) {
    ClearWrapper(self, self);
    AddForDeferredFinalization<mozilla::dom::IDBVersionChangeEvent>(self);
  }
}

static void
_objectMoved(JSObject* obj, const JSObject* old)
{
  mozilla::dom::IDBVersionChangeEvent* self = UnwrapPossiblyNotInitializedDOMObject<mozilla::dom::IDBVersionChangeEvent>(obj);
  if (self) {
    UpdateWrapper(self, self, obj, old);
  }
}

static const JSPropertySpec sAttributes_specs[] = {
  { "oldVersion", JSPROP_SHARED | JSPROP_ENUMERATE, { { { { GenericBindingGetter, &oldVersion_getterinfo } }, JSNATIVE_WRAPPER(nullptr) } } },
  { "newVersion", JSPROP_SHARED | JSPROP_ENUMERATE, { { { { GenericBindingGetter, &newVersion_getterinfo } }, JSNATIVE_WRAPPER(nullptr) } } },
  JS_PS_END
};


// Can't be const because the pref-enabled boolean needs to be writable
static Prefable<const JSPropertySpec> sAttributes[] = {
  { nullptr, &sAttributes_specs[0] },
  { nullptr, nullptr }
};

static jsid sAttributes_ids[3];

static const JSPropertySpec sUnforgeableAttributes_specs[] = {
  { "isTrusted", JSPROP_SHARED | JSPROP_ENUMERATE | JSPROP_PERMANENT, { { { { GenericBindingGetter, &isTrusted_getterinfo } }, JSNATIVE_WRAPPER(nullptr) } } },
  JS_PS_END
};


// Can't be const because the pref-enabled boolean needs to be writable
static Prefable<const JSPropertySpec> sUnforgeableAttributes[] = {
  { nullptr, &sUnforgeableAttributes_specs[0] },
  { nullptr, nullptr }
};

static jsid sUnforgeableAttributes_ids[2];


static const NativePropertiesN<2> sNativeProperties = {
  -1,
  false, 0,
  false, 0,
  false, 0,
  true,  0 /* sAttributes */,
  false, 0,
  true,  1 /* sUnforgeableAttributes */,
  false, 0,
  {
    { sAttributes, sAttributes_ids, sAttributes_specs },
    { sUnforgeableAttributes, sUnforgeableAttributes_ids, sUnforgeableAttributes_specs }
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
    return ThrowConstructorWithoutNew(cx, "IDBVersionChangeEvent");
  }

  GlobalObject global(cx, obj);
  if (global.Failed()) {
    return false;
  }

  JS::Rooted<JSObject*> desiredProto(cx);
  if (!GetDesiredProto(cx, args, &desiredProto)) {
    return false;
  }

  if (MOZ_UNLIKELY(args.length() < 1)) {
    return ThrowErrorMessage(cx, MSG_MISSING_ARGUMENTS, "IDBVersionChangeEvent");
  }
  bool objIsXray = xpc::WrapperFactory::IsXrayWrapper(obj);
  binding_detail::FakeString arg0;
  if (!ConvertJSValueToString(cx, args[0], eStringify, eStringify, arg0)) {
    return false;
  }
  binding_detail::FastIDBVersionChangeEventInit arg1;
  if (!arg1.Init(cx, (args.hasDefined(1)) ? args[1] : JS::NullHandleValue,  "Argument 2 of IDBVersionChangeEvent.constructor", false)) {
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
  auto result(StrongOrRawPtr<mozilla::dom::IDBVersionChangeEvent>(mozilla::dom::IDBVersionChangeEvent::Constructor(global, NonNullHelper(Constify(arg0)), Constify(arg1), rv)));
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
  prototypes::id::IDBVersionChangeEvent,
  PrototypeTraits<prototypes::id::IDBVersionChangeEvent>::Depth,
  sNativePropertyHooks,
  "function IDBVersionChangeEvent() {\n    [native code]\n}",
  EventBinding::GetConstructorObject
};

static const DOMIfaceAndProtoJSClass sPrototypeClass = {
  {
    "IDBVersionChangeEventPrototype",
    JSCLASS_IS_DOMIFACEANDPROTOJSCLASS | JSCLASS_HAS_RESERVED_SLOTS(DOM_INTERFACE_PROTO_SLOTS_BASE + 1 /* slot for the JSObject holding the unforgeable properties */),
    JS_NULL_CLASS_OPS,
    JS_NULL_CLASS_SPEC,
    JS_NULL_CLASS_EXT,
    JS_NULL_OBJECT_OPS
  },
  eInterfacePrototype,
  false,
  prototypes::id::IDBVersionChangeEvent,
  PrototypeTraits<prototypes::id::IDBVersionChangeEvent>::Depth,
  sNativePropertyHooks,
  "[object IDBVersionChangeEventPrototype]",
  EventBinding::GetProtoObject
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
  { "IDBVersionChangeEvent",
    JSCLASS_IS_DOMJSCLASS | JSCLASS_FOREGROUND_FINALIZE | JSCLASS_HAS_RESERVED_SLOTS(1) | JSCLASS_SKIP_NURSERY_FINALIZE,
    &sClassOps,
    JS_NULL_CLASS_SPEC,
    &sClassExtension,
    JS_NULL_OBJECT_OPS
  },
  { prototypes::id::Event, prototypes::id::IDBVersionChangeEvent, prototypes::id::_ID_Count, prototypes::id::_ID_Count, prototypes::id::_ID_Count, prototypes::id::_ID_Count, prototypes::id::_ID_Count, prototypes::id::_ID_Count },
  IsBaseOf<nsISupports, mozilla::dom::IDBVersionChangeEvent >::value,
  sNativePropertyHooks,
  FindAssociatedGlobalForNative<mozilla::dom::IDBVersionChangeEvent>::Get,
  GetProtoObjectHandle,
  GetCCParticipant<mozilla::dom::IDBVersionChangeEvent>::Get()
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
Wrap(JSContext* aCx, mozilla::dom::IDBVersionChangeEvent* aObject, nsWrapperCache* aCache, JS::Handle<JSObject*> aGivenProto, JS::MutableHandle<JSObject*> aReflector)
{
  MOZ_ASSERT(static_cast<mozilla::dom::IDBVersionChangeEvent*>(aObject) ==
             reinterpret_cast<mozilla::dom::IDBVersionChangeEvent*>(aObject),
             "Multiple inheritance for mozilla::dom::IDBVersionChangeEvent is broken.");
  MOZ_ASSERT(static_cast<mozilla::dom::Event*>(aObject) ==
             reinterpret_cast<mozilla::dom::Event*>(aObject),
             "Multiple inheritance for mozilla::dom::Event is broken.");
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

  BindingJSObjectCreator<mozilla::dom::IDBVersionChangeEvent> creator(aCx);
  creator.CreateObject(aCx, sClass.ToJSClass(), proto, aObject, aReflector);
  if (!aReflector) {
    return false;
  }

  aCache->SetWrapper(aReflector);

  // Important: do unforgeable property setup after we have handed
  // over ownership of the C++ object to obj as needed, so that if
  // we fail and it ends up GCed it won't have problems in the
  // finalizer trying to drop its ownership of the C++ object.
  JS::Rooted<JSObject*> unforgeableHolder(aCx,
    &js::GetReservedSlot(canonicalProto, DOM_INTERFACE_PROTO_SLOTS_BASE).toObject());
  if (!JS_InitializePropertiesFromCompatibleNativeObject(aCx, aReflector, unforgeableHolder)) {
    aCache->ReleaseWrapper(aObject);
    aCache->ClearWrapper();
    return false;
  }
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
  prototypes::id::IDBVersionChangeEvent,
  constructors::id::IDBVersionChangeEvent,
  EventBinding::sNativePropertyHooks,
  &DefaultXrayExpandoObjectClass
} };

void
CreateInterfaceObjects(JSContext* aCx, JS::Handle<JSObject*> aGlobal, ProtoAndIfaceCache& aProtoAndIfaceCache, bool aDefineOnGlobal)
{
  JS::Handle<JSObject*> parentProto(EventBinding::GetProtoObjectHandle(aCx));
  if (!parentProto) {
    return;
  }

  JS::Handle<JSObject*> constructorProto(EventBinding::GetConstructorObjectHandle(aCx));
  if (!constructorProto) {
    return;
  }

  static bool sIdsInited = false;
  if (!sIdsInited && NS_IsMainThread()) {
    if (!InitIds(aCx, sAttributes, sAttributes_ids)) {
      return;
    }
    if (!InitIds(aCx, sUnforgeableAttributes, sUnforgeableAttributes_ids)) {
      return;
    }
    sIdsInited = true;
  }

  JS::Heap<JSObject*>* protoCache = &aProtoAndIfaceCache.EntrySlotOrCreate(prototypes::id::IDBVersionChangeEvent);
  JS::Heap<JSObject*>* interfaceCache = &aProtoAndIfaceCache.EntrySlotOrCreate(constructors::id::IDBVersionChangeEvent);
  dom::CreateInterfaceObjects(aCx, aGlobal, parentProto,
                              &sPrototypeClass.mBase, protoCache,
                              constructorProto, &sInterfaceObjectClass.mBase, 1, nullptr,
                              interfaceCache,
                              sNativeProperties.Upcast(),
                              nullptr,
                              "IDBVersionChangeEvent", aDefineOnGlobal,
                              nullptr,
                              false);

  JS::Rooted<JSObject*> unforgeableHolder(aCx);
  {
    JS::Rooted<JSObject*> holderProto(aCx, *protoCache);
    unforgeableHolder = JS_NewObjectWithoutMetadata(aCx, sClass.ToJSClass(), holderProto);
    if (!unforgeableHolder) {
      *protoCache = nullptr;
      if (interfaceCache) {
        *interfaceCache = nullptr;
      }
      return;
    }
  }

  if (!DefineUnforgeableAttributes(aCx, unforgeableHolder, sUnforgeableAttributes)) {
    *protoCache = nullptr;
    if (interfaceCache) {
      *interfaceCache = nullptr;
    }
    return;
  }

  if (*protoCache) {
    js::SetReservedSlot(*protoCache, DOM_INTERFACE_PROTO_SLOTS_BASE,
                        JS::ObjectValue(*unforgeableHolder));
  }
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
  if (!protoAndIfaceCache.EntrySlotIfExists(prototypes::id::IDBVersionChangeEvent)) {
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

  const JS::Heap<JSObject*>& entrySlot = protoAndIfaceCache.EntrySlotMustExist(prototypes::id::IDBVersionChangeEvent);
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
  if (!protoAndIfaceCache.EntrySlotIfExists(constructors::id::IDBVersionChangeEvent)) {
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

  const JS::Heap<JSObject*>& entrySlot = protoAndIfaceCache.EntrySlotMustExist(constructors::id::IDBVersionChangeEvent);
  MOZ_ASSERT_IF(entrySlot, !JS::ObjectIsMarkedGray(entrySlot));
  return JS::Handle<JSObject*>::fromMarkedLocation(entrySlot.address());
}

JSObject*
GetConstructorObject(JSContext* aCx)
{
  return GetConstructorObjectHandle(aCx);
}

} // namespace IDBVersionChangeEventBinding



} // namespace dom
} // namespace mozilla