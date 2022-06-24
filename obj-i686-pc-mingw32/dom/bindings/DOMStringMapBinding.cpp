/* THIS FILE IS AUTOGENERATED FROM DOMStringMap.webidl BY Codegen.py - DO NOT EDIT */

#include "DOMStringMapBinding.h"
#include "WrapperFactory.h"
#include "mozilla/OwningNonNull.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/CustomElementRegistry.h"
#include "mozilla/dom/DOMJSClass.h"
#include "mozilla/dom/DOMJSProxyHandler.h"
#include "mozilla/dom/DocGroup.h"
#include "mozilla/dom/NonRefcountedDOMObject.h"
#include "mozilla/dom/XrayExpandoClass.h"
#include "nsDOMStringMap.h"
#include "nsISupports.h"
#include "xpcjsid.h"

namespace mozilla {
namespace dom {

namespace DOMStringMapBinding {

static void
_objectMoved(JSObject* obj, const JSObject* old)
{
  nsDOMStringMap* self = UnwrapPossiblyNotInitializedDOMObject<nsDOMStringMap>(obj);
  if (self) {
    UpdateWrapper(self, self, obj, old);
  }
}

static const JSFunctionSpec sMethods_specs[] = {
  JS_FNSPEC("QueryInterface", QueryInterface, nullptr, 1, 0, nullptr),
  JS_FS_END
};

static PrefableDisablers sMethods_disablers0 = {
  true, false, 0, &WantsQueryInterface<nsDOMStringMap>::Enabled
};

// Can't be const because the pref-enabled boolean needs to be writable
static Prefable<const JSFunctionSpec> sMethods[] = {
  { &sMethods_disablers0, &sMethods_specs[0] },
  { nullptr, nullptr }
};

static jsid sMethods_ids[2];


static const NativePropertiesN<1> sNativeProperties = {
  -1,
  false, 0,
  false, 0,
  true,  0 /* sMethods */,
  false, 0,
  false, 0,
  false, 0,
  false, 0,
  {
    { sMethods, sMethods_ids, sMethods_specs }
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
  prototypes::id::DOMStringMap,
  PrototypeTraits<prototypes::id::DOMStringMap>::Depth,
  sNativePropertyHooks,
  "function DOMStringMap() {\n    [native code]\n}",
  JS::GetRealmFunctionPrototype
};

static const DOMIfaceAndProtoJSClass sPrototypeClass = {
  {
    "DOMStringMapPrototype",
    JSCLASS_IS_DOMIFACEANDPROTOJSCLASS | JSCLASS_HAS_RESERVED_SLOTS(DOM_INTERFACE_PROTO_SLOTS_BASE),
    JS_NULL_CLASS_OPS,
    JS_NULL_CLASS_SPEC,
    JS_NULL_CLASS_EXT,
    JS_NULL_OBJECT_OPS
  },
  eInterfacePrototype,
  false,
  prototypes::id::DOMStringMap,
  PrototypeTraits<prototypes::id::DOMStringMap>::Depth,
  sNativePropertyHooks,
  "[object DOMStringMapPrototype]",
  JS::GetRealmObjectPrototype
};

JSObject*
DefineDOMInterface(JSContext* aCx, JS::Handle<JSObject*> aGlobal, JS::Handle<jsid> id, bool aDefineOnGlobal)
{
  return GetConstructorObjectHandle(aCx, aDefineOnGlobal);
}

static_assert(IsBaseOf<nsISupports, nsDOMStringMap >::value,
                  "We don't support non-nsISupports native classes for "
                  "proxy-based bindings yet");


class DOMProxyHandler : public ShadowingDOMProxyHandler
{
public:
  explicit constexpr DOMProxyHandler()
  {
  }

  virtual bool
  getOwnPropDescriptor(JSContext* cx, JS::Handle<JSObject*> proxy, JS::Handle<jsid> id, bool ignoreNamedProps, JS::MutableHandle<JS::PropertyDescriptor> desc) const override;

  virtual bool
  defineProperty(JSContext* cx, JS::Handle<JSObject*> proxy, JS::Handle<jsid> id, JS::Handle<JS::PropertyDescriptor> desc, JS::ObjectOpResult& opresult, bool* defined) const override;

  using mozilla::dom::DOMProxyHandler::defineProperty;

  virtual bool
  ownPropNames(JSContext* cx, JS::Handle<JSObject*> proxy, unsigned flags, JS::AutoIdVector& props) const override;

  virtual bool
  hasOwn(JSContext* cx, JS::Handle<JSObject*> proxy, JS::Handle<jsid> id, bool* bp) const override;

  virtual bool
  get(JSContext* cx, JS::Handle<JSObject*> proxy, JS::Handle<JS::Value> receiver, JS::Handle<jsid> id, JS::MutableHandle<JS::Value> vp) const override;

  virtual const char*
  className(JSContext* cx, JS::Handle<JSObject*> proxy) const override;

  virtual bool
  finalizeInBackground(const JS::Value& priv) const override;

  virtual void
  finalize(JSFreeOp* fop, JSObject* proxy) const override;

  static const DOMProxyHandler*
  getInstance();

  virtual bool
  delete_(JSContext* cx, JS::Handle<JSObject*> proxy, JS::Handle<jsid> id, JS::ObjectOpResult& opresult) const override;

  virtual bool
  setCustom(JSContext* cx, JS::Handle<JSObject*> proxy, JS::Handle<jsid> id, JS::Handle<JS::Value> v, bool* done) const override;
};

MOZ_ALWAYS_INLINE bool
IsProxy(JSObject* obj)
{
  return js::IsProxy(obj) && js::GetProxyHandler(obj) == DOMProxyHandler::getInstance();
}

MOZ_ALWAYS_INLINE nsDOMStringMap*
UnwrapProxy(JSObject* obj)
{
  MOZ_ASSERT(js::IsProxy(obj));
  if (js::GetProxyHandler(obj) != DOMProxyHandler::getInstance()) {
    MOZ_ASSERT(xpc::WrapperFactory::IsXrayWrapper(obj));
    obj = js::UncheckedUnwrap(obj);
  }
  MOZ_ASSERT(IsProxy(obj));
  return static_cast<nsDOMStringMap*>(js::GetProxyPrivate(obj).toPrivate());
}

bool
DOMProxyHandler::getOwnPropDescriptor(JSContext* cx, JS::Handle<JSObject*> proxy, JS::Handle<jsid> id, bool ignoreNamedProps, JS::MutableHandle<JS::PropertyDescriptor> desc) const
{
  bool isXray = xpc::WrapperFactory::IsXrayWrapper(proxy);
  JS::Rooted<JSObject*> expando(cx);
  if (!isXray && (expando = GetExpandoObject(proxy))) {
    if (!JS_GetOwnPropertyDescriptorById(cx, expando, id, desc)) {
      return false;
    }
    if (desc.object()) {
      // Pretend the property lives on the wrapper.
      desc.object().set(proxy);
      return true;
    }
  }

  bool callNamedGetter = false;
  if (!ignoreNamedProps) {
    if (!isXray) {
      callNamedGetter = true;
    } else {
      bool hasOnProto;
      if (!HasPropertyOnPrototype(cx, proxy, id, &hasOnProto)) {
        return false;
      }
      callNamedGetter = !hasOnProto;
    }
  }
  if (callNamedGetter) {
    binding_detail::FakeString name;
    bool isSymbol;
    if (!ConvertIdToString(cx, id, name, isSymbol)) {
      return false;
    }
    if (!isSymbol) {
      nsDOMStringMap* self = UnwrapProxy(proxy);
      bool found = false;
      DOMString result;
      self->NamedGetter(NonNullHelper(Constify(name)), found, result);
      MOZ_ASSERT(!JS_IsExceptionPending(cx));

      if (found) {
        if (!xpc::NonVoidStringToJsval(cx, result, desc.value())) {
          return false;
        }
        FillPropertyDescriptor(desc, proxy, false, true);
        return true;
      }
    }
  }

  desc.object().set(nullptr);
  return true;
}

bool
DOMProxyHandler::defineProperty(JSContext* cx, JS::Handle<JSObject*> proxy, JS::Handle<jsid> id, JS::Handle<JS::PropertyDescriptor> desc, JS::ObjectOpResult& opresult, bool* defined) const
{
  *defined = true;
  binding_detail::FakeString name;
  bool isSymbol;
  if (!ConvertIdToString(cx, id, name, isSymbol)) {
    return false;
  }
  if (!isSymbol) {
    nsDOMStringMap* self = UnwrapProxy(proxy);
    JS::Rooted<JS::Value> rootedValue(cx, desc.value());
    binding_detail::FakeString value;
    if (!ConvertJSValueToString(cx, desc.value(), eStringify, eStringify, value)) {
      return false;
    }
      Maybe<AutoCEReaction> ceReaction;
      DocGroup* docGroup = self->GetDocGroup();
      if (docGroup) {
        ceReaction.emplace(docGroup->CustomElementReactionsStack(), cx);
    }
    binding_detail::FastErrorResult rv;
    self->NamedSetter(NonNullHelper(Constify(name)), NonNullHelper(Constify(value)), rv);
    if (MOZ_UNLIKELY(rv.MaybeSetPendingException(cx))) {
      return false;
    }
    MOZ_ASSERT(!JS_IsExceptionPending(cx));
  }

  return opresult.succeed();
}


bool
DOMProxyHandler::ownPropNames(JSContext* cx, JS::Handle<JSObject*> proxy, unsigned flags, JS::AutoIdVector& props) const
{
  bool isXray = xpc::WrapperFactory::IsXrayWrapper(proxy);

  nsTArray<nsString> names;
  UnwrapProxy(proxy)->GetSupportedNames(names);
  if (!AppendNamedPropertyIds(cx, proxy, names, !isXray, props)) {
    return false;
  }

  JS::Rooted<JSObject*> expando(cx);
  if (!isXray && (expando = DOMProxyHandler::GetExpandoObject(proxy)) &&
      !js::GetPropertyKeys(cx, expando, flags, &props)) {
    return false;
  }

  return true;
}

bool
DOMProxyHandler::hasOwn(JSContext* cx, JS::Handle<JSObject*> proxy, JS::Handle<jsid> id, bool* bp) const
{
  MOZ_ASSERT(!xpc::WrapperFactory::IsXrayWrapper(proxy),
            "Should not have a XrayWrapper here");


  JS::Rooted<JSObject*> expando(cx, GetExpandoObject(proxy));
  if (expando) {
    bool b = true;
    bool ok = JS_HasPropertyById(cx, expando, id, &b);
    *bp = !!b;
    if (!ok || *bp) {
      return ok;
    }
  }

  bool found = false;
  binding_detail::FakeString name;
  bool isSymbol;
  if (!ConvertIdToString(cx, id, name, isSymbol)) {
    return false;
  }
  if (!isSymbol) {
    nsDOMStringMap* self = UnwrapProxy(proxy);
    DOMString result;
    self->NamedGetter(NonNullHelper(Constify(name)), found, result);
    MOZ_ASSERT(!JS_IsExceptionPending(cx));
    (void)result;
  }

  *bp = found;

  return true;
}

bool
DOMProxyHandler::get(JSContext* cx, JS::Handle<JSObject*> proxy, JS::Handle<JS::Value> receiver, JS::Handle<jsid> id, JS::MutableHandle<JS::Value> vp) const
{
  MOZ_ASSERT(!xpc::WrapperFactory::IsXrayWrapper(proxy),
              "Should not have a XrayWrapper here");

  { // Scope for expando
    JS::Rooted<JSObject*> expando(cx, DOMProxyHandler::GetExpandoObject(proxy));
    if (expando) {
      bool hasProp;
      if (!JS_HasPropertyById(cx, expando, id, &hasProp)) {
        return false;
      }

      if (hasProp) {
        // Forward the get to the expando object, but our receiver is whatever our
        // receiver is.
        return JS_ForwardGetPropertyTo(cx, expando, id, receiver, vp);
      }
    }
  }

  binding_detail::FakeString name;
  bool isSymbol;
  if (!ConvertIdToString(cx, id, name, isSymbol)) {
    return false;
  }
  if (!isSymbol) {
    nsDOMStringMap* self = UnwrapProxy(proxy);
    bool found = false;
    DOMString result;
    self->NamedGetter(NonNullHelper(Constify(name)), found, result);
    MOZ_ASSERT(!JS_IsExceptionPending(cx));

    if (found) {
      if (!xpc::NonVoidStringToJsval(cx, result, vp)) {
        return false;
      }
      return true;
    }
  }

  bool foundOnPrototype;
  if (!GetPropertyOnPrototype(cx, proxy, receiver, id, &foundOnPrototype, vp)) {
    return false;
  }

  if (foundOnPrototype) {
    return true;
  }

  vp.setUndefined();
  return true;
}

const char*
DOMProxyHandler::className(JSContext* cx, JS::Handle<JSObject*> proxy) const
{
  return "DOMStringMap";
}

bool
DOMProxyHandler::finalizeInBackground(const JS::Value& priv) const
{
  return false;
}

void
DOMProxyHandler::finalize(JSFreeOp* fop, JSObject* proxy) const
{
  nsDOMStringMap* self = UnwrapPossiblyNotInitializedDOMObject<nsDOMStringMap>(proxy);
  if (self) {
    ClearWrapper(self, self);
    self->mExpandoAndGeneration.expando = JS::UndefinedValue();
    AddForDeferredFinalization<nsDOMStringMap>(self);
  }
}

const DOMProxyHandler*
DOMProxyHandler::getInstance()
{
  static const DOMProxyHandler instance;
  return &instance;
}

bool
DOMProxyHandler::delete_(JSContext* cx, JS::Handle<JSObject*> proxy, JS::Handle<jsid> id, JS::ObjectOpResult& opresult) const
{
  MOZ_ASSERT(!xpc::WrapperFactory::IsXrayWrapper(proxy),
            "Should not have a XrayWrapper here");

  // Try named delete only if the named property visibility
  // algorithm says the property is visible.
  bool tryNamedDelete = true;
  { // Scope for expando
    JS::Rooted<JSObject*> expando(cx, DOMProxyHandler::GetExpandoObject(proxy));
    if (expando) {
      bool hasProp;
      if (!JS_HasPropertyById(cx, expando, id, &hasProp)) {
        return false;
      }
      tryNamedDelete = !hasProp;
    }
  }
  if (tryNamedDelete) {
    bool found = false;
    bool deleteSucceeded;
    binding_detail::FakeString name;
    bool isSymbol;
    if (!ConvertIdToString(cx, id, name, isSymbol)) {
      return false;
    }
    if (!isSymbol) {
      nsDOMStringMap* self = UnwrapProxy(proxy);
        Maybe<AutoCEReaction> ceReaction;
        DocGroup* docGroup = self->GetDocGroup();
        if (docGroup) {
          ceReaction.emplace(docGroup->CustomElementReactionsStack(), cx);
      }
      self->NamedDeleter(NonNullHelper(Constify(name)), found);
      MOZ_ASSERT(!JS_IsExceptionPending(cx));
    }
    deleteSucceeded = true;
    if (found) {
      return deleteSucceeded ? opresult.succeed() : opresult.failCantDelete();
    }
  }

  return dom::DOMProxyHandler::delete_(cx, proxy, id, opresult);
}

bool
DOMProxyHandler::setCustom(JSContext* cx, JS::Handle<JSObject*> proxy, JS::Handle<jsid> id, JS::Handle<JS::Value> v, bool* done) const
{
  MOZ_ASSERT(!xpc::WrapperFactory::IsXrayWrapper(proxy),
             "Should not have a XrayWrapper here");
  binding_detail::FakeString name;
  bool isSymbol;
  if (!ConvertIdToString(cx, id, name, isSymbol)) {
    return false;
  }
  if (!isSymbol) {
    nsDOMStringMap* self = UnwrapProxy(proxy);
    JS::Rooted<JS::Value> rootedValue(cx, v);
    binding_detail::FakeString value;
    if (!ConvertJSValueToString(cx, v, eStringify, eStringify, value)) {
      return false;
    }
      Maybe<AutoCEReaction> ceReaction;
      DocGroup* docGroup = self->GetDocGroup();
      if (docGroup) {
        ceReaction.emplace(docGroup->CustomElementReactionsStack(), cx);
    }
    binding_detail::FastErrorResult rv;
    self->NamedSetter(NonNullHelper(Constify(name)), NonNullHelper(Constify(value)), rv);
    if (MOZ_UNLIKELY(rv.MaybeSetPendingException(cx))) {
      return false;
    }
    MOZ_ASSERT(!JS_IsExceptionPending(cx));
  }
  *done = true;
  return true;
}

static const js::ClassExtension sClassExtension = PROXY_MAKE_EXT(
    _objectMoved
);

static const DOMJSClass sClass = {
  PROXY_CLASS_WITH_EXT("DOMStringMap",
                       JSCLASS_IS_DOMJSCLASS,
                       &sClassExtension),
  { prototypes::id::DOMStringMap, prototypes::id::_ID_Count, prototypes::id::_ID_Count, prototypes::id::_ID_Count, prototypes::id::_ID_Count, prototypes::id::_ID_Count, prototypes::id::_ID_Count, prototypes::id::_ID_Count },
  IsBaseOf<nsISupports, nsDOMStringMap >::value,
  sNativePropertyHooks,
  FindAssociatedGlobalForNative<nsDOMStringMap>::Get,
  GetProtoObjectHandle,
  GetCCParticipant<nsDOMStringMap>::Get()
};

bool
Wrap(JSContext* aCx, nsDOMStringMap* aObject, nsWrapperCache* aCache, JS::Handle<JSObject*> aGivenProto, JS::MutableHandle<JSObject*> aReflector)
{
  MOZ_ASSERT(static_cast<nsDOMStringMap*>(aObject) ==
             reinterpret_cast<nsDOMStringMap*>(aObject),
             "Multiple inheritance for nsDOMStringMap is broken.");
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

  BindingJSObjectCreator<nsDOMStringMap> creator(aCx);
  creator.CreateProxyObject(aCx, &sClass.mBase, DOMProxyHandler::getInstance(),
                            proto, aObject, aReflector);
  if (!aReflector) {
    return false;
  }

  js::SetProxyExtra(aReflector, JSPROXYSLOT_EXPANDO,
                    JS::PrivateValue(&aObject->mExpandoAndGeneration));


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
    // For DOM proxies, the only reliable way to preserve the wrapper
    // is to force creation of the expando object.
    JS::Rooted<JSObject*> unused(aCx,
      DOMProxyHandler::EnsureExpandoObject(aCx, aReflector));
  }

  return true;
}

static bool
ResolveOwnProperty(JSContext* cx, JS::Handle<JSObject*> wrapper, JS::Handle<JSObject*> obj, JS::Handle<jsid> id, JS::MutableHandle<JS::PropertyDescriptor> desc)
{
  return js::GetProxyHandler(obj)->getOwnPropertyDescriptor(cx, wrapper, id, desc);
}

static bool
EnumerateOwnProperties(JSContext* cx, JS::Handle<JSObject*> wrapper, JS::Handle<JSObject*> obj, JS::AutoIdVector& props)
{
  return js::GetProxyHandler(obj)->ownPropertyKeys(cx, wrapper, props);
}

static bool
DeleteNamedProperty(JSContext* cx, JS::Handle<JSObject*> xray, JS::Handle<JSObject*> proxy, JS::Handle<jsid> id, JS::ObjectOpResult& opresult)
{
  MOZ_ASSERT(xpc::WrapperFactory::IsXrayWrapper(xray));
  MOZ_ASSERT(js::IsProxy(proxy));
  MOZ_ASSERT(!xpc::WrapperFactory::IsXrayWrapper(proxy));
  JSAutoCompartment ac(cx, proxy);
  bool deleteSucceeded;
  bool found = false;
  binding_detail::FakeString name;
  bool isSymbol;
  if (!ConvertIdToString(cx, id, name, isSymbol)) {
    return false;
  }
  if (!isSymbol) {
    nsDOMStringMap* self = UnwrapProxy(proxy);
      Maybe<AutoCEReaction> ceReaction;
      DocGroup* docGroup = self->GetDocGroup();
      if (docGroup) {
        ceReaction.emplace(docGroup->CustomElementReactionsStack(), cx);
    }
    self->NamedDeleter(NonNullHelper(Constify(name)), found);
    MOZ_ASSERT(!JS_IsExceptionPending(cx));
  }
  deleteSucceeded = true;
  if (!found || deleteSucceeded) {
    return opresult.succeed();
  }
  return opresult.failCantDelete();
}

const NativePropertyHooks sNativePropertyHooks[] = { {
  ResolveOwnProperty,
  EnumerateOwnProperties,
  DeleteNamedProperty,
  { sNativeProperties.Upcast(), nullptr },
  prototypes::id::DOMStringMap,
  constructors::id::DOMStringMap,
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
    if (!InitIds(aCx, sMethods, sMethods_ids)) {
      return;
    }
    sIdsInited = true;
  }

  JS::Heap<JSObject*>* protoCache = &aProtoAndIfaceCache.EntrySlotOrCreate(prototypes::id::DOMStringMap);
  JS::Heap<JSObject*>* interfaceCache = &aProtoAndIfaceCache.EntrySlotOrCreate(constructors::id::DOMStringMap);
  dom::CreateInterfaceObjects(aCx, aGlobal, parentProto,
                              &sPrototypeClass.mBase, protoCache,
                              constructorProto, &sInterfaceObjectClass.mBase, 0, nullptr,
                              interfaceCache,
                              sNativeProperties.Upcast(),
                              nullptr,
                              "DOMStringMap", aDefineOnGlobal,
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
  if (!protoAndIfaceCache.EntrySlotIfExists(prototypes::id::DOMStringMap)) {
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

  const JS::Heap<JSObject*>& entrySlot = protoAndIfaceCache.EntrySlotMustExist(prototypes::id::DOMStringMap);
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
  if (!protoAndIfaceCache.EntrySlotIfExists(constructors::id::DOMStringMap)) {
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

  const JS::Heap<JSObject*>& entrySlot = protoAndIfaceCache.EntrySlotMustExist(constructors::id::DOMStringMap);
  MOZ_ASSERT_IF(entrySlot, !JS::ObjectIsMarkedGray(entrySlot));
  return JS::Handle<JSObject*>::fromMarkedLocation(entrySlot.address());
}

JSObject*
GetConstructorObject(JSContext* aCx)
{
  return GetConstructorObjectHandle(aCx);
}

} // namespace DOMStringMapBinding



} // namespace dom
} // namespace mozilla
