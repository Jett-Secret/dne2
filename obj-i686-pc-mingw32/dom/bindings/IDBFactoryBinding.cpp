/* THIS FILE IS AUTOGENERATED FROM IDBFactory.webidl BY Codegen.py - DO NOT EDIT */

#include "AtomList.h"
#include "IDBFactoryBinding.h"
#include "IDBRequest.h"
#include "WrapperFactory.h"
#include "mozilla/OwningNonNull.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/DOMJSClass.h"
#include "mozilla/dom/IDBFactory.h"
#include "mozilla/dom/NonRefcountedDOMObject.h"
#include "mozilla/dom/PrimitiveConversions.h"
#include "mozilla/dom/ScriptSettings.h"
#include "mozilla/dom/SimpleGlobalObject.h"
#include "mozilla/dom/XrayExpandoClass.h"
#include "nsContentUtils.h"
#include "nsIPrincipal.h"

namespace mozilla {
namespace dom {


IDBOpenDBOptions::IDBOpenDBOptions()
{
  // Safe to pass a null context if we pass a null value
  Init(nullptr, JS::NullHandleValue);
}



bool
IDBOpenDBOptions::InitIds(JSContext* cx, IDBOpenDBOptionsAtoms* atomsCache)
{
  MOZ_ASSERT(!*reinterpret_cast<jsid**>(atomsCache));

  // Initialize these in reverse order so that any failure leaves the first one
  // uninitialized.
  if (!atomsCache->version_id.init(cx, "version") ||
      !atomsCache->storage_id.init(cx, "storage")) {
    return false;
  }
  return true;
}

bool
IDBOpenDBOptions::Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription, bool passedToJSImpl)
{
  // Passing a null JSContext is OK only if we're initing from null,
  // Since in that case we will not have to do any property gets
  MOZ_ASSERT_IF(!cx, val.isNull());
  IDBOpenDBOptionsAtoms* atomsCache = nullptr;
  if (cx) {
    atomsCache = GetAtomCache<IDBOpenDBOptionsAtoms>(cx);
    if (!*reinterpret_cast<jsid**>(atomsCache) && !InitIds(cx, atomsCache)) {
      return false;
    }
  }

  { // scope for isConvertible
    bool isConvertible;
    if (!IsConvertibleToDictionary(cx, val, &isConvertible)) {
      return false;
    }
    if (!isConvertible) {
      return ThrowErrorMessage(cx, MSG_NOT_DICTIONARY, sourceDescription);
    }
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
    if (!JS_GetPropertyById(cx, *object, atomsCache->storage_id, temp.ptr())) {
      return false;
    }
  }
  if (!isNull && !temp->isUndefined()) {
    mStorage.Construct();
    {
      int index;
      if (!FindEnumStringIndex<true>(cx, temp.ref(), StorageTypeValues::strings, "StorageType", "'storage' member of IDBOpenDBOptions", &index)) {
        return false;
      }
      MOZ_ASSERT(index >= 0);
      (mStorage.Value()) = static_cast<StorageType>(index);
    }
    mIsAnyMemberPresent = true;
  }

  if (!isNull) {
    if (!JS_GetPropertyById(cx, *object, atomsCache->version_id, temp.ptr())) {
      return false;
    }
  }
  if (!isNull && !temp->isUndefined()) {
    mVersion.Construct();
    if (!ValueToPrimitive<uint64_t, eEnforceRange>(cx, temp.ref(), &(mVersion.Value()))) {
      return false;
    }
    mIsAnyMemberPresent = true;
  }
  return true;
}

bool
IDBOpenDBOptions::Init(const nsAString& aJSON)
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
IDBOpenDBOptions::ToObjectInternal(JSContext* cx, JS::MutableHandle<JS::Value> rval) const
{
  IDBOpenDBOptionsAtoms* atomsCache = GetAtomCache<IDBOpenDBOptionsAtoms>(cx);
  if (!*reinterpret_cast<jsid**>(atomsCache) && !InitIds(cx, atomsCache)) {
    return false;
  }

  JS::Rooted<JSObject*> obj(cx, JS_NewPlainObject(cx));
  if (!obj) {
    return false;
  }
  rval.set(JS::ObjectValue(*obj));

  if (mStorage.WasPassed()) {
    do {
      // block for our 'break' successCode and scope for 'temp' and 'currentValue'
      JS::Rooted<JS::Value> temp(cx);
      StorageType const & currentValue = mStorage.InternalValue();
      if (!ToJSValue(cx, currentValue, &temp)) {
        return false;
      }
      if (!JS_DefinePropertyById(cx, obj, atomsCache->storage_id, temp, JSPROP_ENUMERATE)) {
        return false;
      }
      break;
    } while(0);
  }

  if (mVersion.WasPassed()) {
    do {
      // block for our 'break' successCode and scope for 'temp' and 'currentValue'
      JS::Rooted<JS::Value> temp(cx);
      uint64_t const & currentValue = mVersion.InternalValue();
      temp.set(JS_NumberValue(double(currentValue)));
      if (!JS_DefinePropertyById(cx, obj, atomsCache->version_id, temp, JSPROP_ENUMERATE)) {
        return false;
      }
      break;
    } while(0);
  }

  return true;
}

bool
IDBOpenDBOptions::ToJSON(nsAString& aJSON) const
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
IDBOpenDBOptions::TraceDictionary(JSTracer* trc)
{
}

void
IDBOpenDBOptions::operator=(const IDBOpenDBOptions& aOther)
{
  mStorage.Reset();
  if (aOther.mStorage.WasPassed()) {
    mStorage.Construct(aOther.mStorage.Value());
  }
  mVersion.Reset();
  if (aOther.mVersion.WasPassed()) {
    mVersion.Construct(aOther.mVersion.Value());
  }
}

namespace binding_detail {
} // namespace binding_detail


namespace IDBFactoryBinding {

static bool
open(JSContext* cx, JS::Handle<JSObject*> obj, mozilla::dom::IDBFactory* self, const JSJitMethodCallArgs& args)
{
  unsigned argcount = std::min(args.length(), 2u);
  switch (argcount) {
    case 1: {
      binding_detail::FakeString arg0;
      if (!ConvertJSValueToString(cx, args[0], eStringify, eStringify, arg0)) {
        return false;
      }
      binding_detail::FastIDBOpenDBOptions arg1;
      if (!arg1.Init(cx, (args.hasDefined(1)) ? args[1] : JS::NullHandleValue,  "Argument 2 of IDBFactory.open", false)) {
        return false;
      }
      binding_detail::FastErrorResult rv;
      auto result(StrongOrRawPtr<mozilla::dom::IDBOpenDBRequest>(self->Open(cx, NonNullHelper(Constify(arg0)), Constify(arg1), rv)));
      if (MOZ_UNLIKELY(rv.MaybeSetPendingException(cx))) {
        return false;
      }
      MOZ_ASSERT(!JS_IsExceptionPending(cx));
      if (!GetOrCreateDOMReflector(cx, result, args.rval())) {
        MOZ_ASSERT(true || JS_IsExceptionPending(cx));
        return false;
      }
      return true;
      break;
    }
    case 2: {
      binding_detail::FakeString arg0;
      if (!ConvertJSValueToString(cx, args[0], eStringify, eStringify, arg0)) {
        return false;
      }
      if (args[1].isNullOrUndefined()) {
        binding_detail::FastIDBOpenDBOptions arg1;
        if (!arg1.Init(cx, args[1],  "Argument 2 of IDBFactory.open", false)) {
          return false;
        }
        binding_detail::FastErrorResult rv;
        auto result(StrongOrRawPtr<mozilla::dom::IDBOpenDBRequest>(self->Open(cx, NonNullHelper(Constify(arg0)), Constify(arg1), rv)));
        if (MOZ_UNLIKELY(rv.MaybeSetPendingException(cx))) {
          return false;
        }
        MOZ_ASSERT(!JS_IsExceptionPending(cx));
        if (!GetOrCreateDOMReflector(cx, result, args.rval())) {
          MOZ_ASSERT(true || JS_IsExceptionPending(cx));
          return false;
        }
        return true;
      }
      if (args[1].isObject()) {
        do {
          binding_detail::FastIDBOpenDBOptions arg1;
          { // scope for isConvertible
            bool isConvertible;
            if (!IsObjectValueConvertibleToDictionary(cx, args[1], &isConvertible)) {
              return false;
            }
            if (!isConvertible) {
              break;
            }

            if (!arg1.Init(cx, args[1],  "Argument 2 of IDBFactory.open", false)) {
              return false;
            }
          }

          binding_detail::FastErrorResult rv;
          auto result(StrongOrRawPtr<mozilla::dom::IDBOpenDBRequest>(self->Open(cx, NonNullHelper(Constify(arg0)), Constify(arg1), rv)));
          if (MOZ_UNLIKELY(rv.MaybeSetPendingException(cx))) {
            return false;
          }
          MOZ_ASSERT(!JS_IsExceptionPending(cx));
          if (!GetOrCreateDOMReflector(cx, result, args.rval())) {
            MOZ_ASSERT(true || JS_IsExceptionPending(cx));
            return false;
          }
          return true;
        } while (0);
      }
      uint64_t arg1;
      if (!ValueToPrimitive<uint64_t, eEnforceRange>(cx, args[1], &arg1)) {
        return false;
      }
      binding_detail::FastErrorResult rv;
      auto result(StrongOrRawPtr<mozilla::dom::IDBOpenDBRequest>(self->Open(cx, NonNullHelper(Constify(arg0)), arg1, rv)));
      if (MOZ_UNLIKELY(rv.MaybeSetPendingException(cx))) {
        return false;
      }
      MOZ_ASSERT(!JS_IsExceptionPending(cx));
      if (!GetOrCreateDOMReflector(cx, result, args.rval())) {
        MOZ_ASSERT(true || JS_IsExceptionPending(cx));
        return false;
      }
      return true;
      break;
    }
    default: {
      return ThrowErrorMessage(cx, MSG_MISSING_ARGUMENTS, "IDBFactory.open");
      break;
    }
  }
  MOZ_CRASH("We have an always-returning default case");
  return false;
}

static const JSJitInfo open_methodinfo = {
  { (JSJitGetterOp)open },
  { prototypes::id::IDBFactory },
  { PrototypeTraits<prototypes::id::IDBFactory>::Depth },
  JSJitInfo::Method,
  JSJitInfo::AliasEverything, /* aliasSet.  Not relevant for setters. */
  JSVAL_TYPE_OBJECT,  /* returnType.  Not relevant for setters. */
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
deleteDatabase(JSContext* cx, JS::Handle<JSObject*> obj, mozilla::dom::IDBFactory* self, const JSJitMethodCallArgs& args)
{
  if (MOZ_UNLIKELY(args.length() < 1)) {
    return ThrowErrorMessage(cx, MSG_MISSING_ARGUMENTS, "IDBFactory.deleteDatabase");
  }
  binding_detail::FakeString arg0;
  if (!ConvertJSValueToString(cx, args[0], eStringify, eStringify, arg0)) {
    return false;
  }
  binding_detail::FastIDBOpenDBOptions arg1;
  if (!arg1.Init(cx, (args.hasDefined(1)) ? args[1] : JS::NullHandleValue,  "Argument 2 of IDBFactory.deleteDatabase", false)) {
    return false;
  }
  binding_detail::FastErrorResult rv;
  auto result(StrongOrRawPtr<mozilla::dom::IDBOpenDBRequest>(self->DeleteDatabase(cx, NonNullHelper(Constify(arg0)), Constify(arg1), rv)));
  if (MOZ_UNLIKELY(rv.MaybeSetPendingException(cx))) {
    return false;
  }
  MOZ_ASSERT(!JS_IsExceptionPending(cx));
  if (!GetOrCreateDOMReflector(cx, result, args.rval())) {
    MOZ_ASSERT(true || JS_IsExceptionPending(cx));
    return false;
  }
  return true;
}

static const JSJitInfo deleteDatabase_methodinfo = {
  { (JSJitGetterOp)deleteDatabase },
  { prototypes::id::IDBFactory },
  { PrototypeTraits<prototypes::id::IDBFactory>::Depth },
  JSJitInfo::Method,
  JSJitInfo::AliasEverything, /* aliasSet.  Not relevant for setters. */
  JSVAL_TYPE_OBJECT,  /* returnType.  Not relevant for setters. */
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
cmp(JSContext* cx, JS::Handle<JSObject*> obj, mozilla::dom::IDBFactory* self, const JSJitMethodCallArgs& args)
{
  if (MOZ_UNLIKELY(args.length() < 2)) {
    return ThrowErrorMessage(cx, MSG_MISSING_ARGUMENTS, "IDBFactory.cmp");
  }
  JS::Rooted<JS::Value> arg0(cx);
  arg0 = args[0];
  JS::Rooted<JS::Value> arg1(cx);
  arg1 = args[1];
  binding_detail::FastErrorResult rv;
  int16_t result(self->Cmp(cx, arg0, arg1, rv));
  if (MOZ_UNLIKELY(rv.MaybeSetPendingException(cx))) {
    return false;
  }
  MOZ_ASSERT(!JS_IsExceptionPending(cx));
  args.rval().setInt32(int32_t(result));
  return true;
}

static const JSJitInfo cmp_methodinfo = {
  { (JSJitGetterOp)cmp },
  { prototypes::id::IDBFactory },
  { PrototypeTraits<prototypes::id::IDBFactory>::Depth },
  JSJitInfo::Method,
  JSJitInfo::AliasEverything, /* aliasSet.  Not relevant for setters. */
  JSVAL_TYPE_INT32,  /* returnType.  Not relevant for setters. */
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
openForPrincipal(JSContext* cx, JS::Handle<JSObject*> obj, mozilla::dom::IDBFactory* self, const JSJitMethodCallArgs& args)
{
  unsigned argcount = std::min(args.length(), 3u);
  switch (argcount) {
    case 2: {
      nsIPrincipal* arg0;
      RefPtr<nsIPrincipal> arg0_holder;
      if (args[0].isObject()) {
        JS::Rooted<JSObject*> source(cx, &args[0].toObject());
        if (NS_FAILED(UnwrapArg<nsIPrincipal>(source, getter_AddRefs(arg0_holder)))) {
          ThrowErrorMessage(cx, MSG_DOES_NOT_IMPLEMENT_INTERFACE, "Argument 1 of IDBFactory.openForPrincipal", "Principal");
          return false;
        }
        MOZ_ASSERT(arg0_holder);
        arg0 = arg0_holder;
      } else {
        ThrowErrorMessage(cx, MSG_NOT_OBJECT, "Argument 1 of IDBFactory.openForPrincipal");
        return false;
      }
      binding_detail::FakeString arg1;
      if (!ConvertJSValueToString(cx, args[1], eStringify, eStringify, arg1)) {
        return false;
      }
      binding_detail::FastIDBOpenDBOptions arg2;
      if (!arg2.Init(cx, (args.hasDefined(2)) ? args[2] : JS::NullHandleValue,  "Argument 3 of IDBFactory.openForPrincipal", false)) {
        return false;
      }
      binding_detail::FastErrorResult rv;
      auto result(StrongOrRawPtr<mozilla::dom::IDBOpenDBRequest>(self->OpenForPrincipal(cx, NonNullHelper(arg0), NonNullHelper(Constify(arg1)), Constify(arg2), rv)));
      if (MOZ_UNLIKELY(rv.MaybeSetPendingException(cx))) {
        return false;
      }
      MOZ_ASSERT(!JS_IsExceptionPending(cx));
      if (!GetOrCreateDOMReflector(cx, result, args.rval())) {
        MOZ_ASSERT(true || JS_IsExceptionPending(cx));
        return false;
      }
      return true;
      break;
    }
    case 3: {
      nsIPrincipal* arg0;
      RefPtr<nsIPrincipal> arg0_holder;
      if (args[0].isObject()) {
        JS::Rooted<JSObject*> source(cx, &args[0].toObject());
        if (NS_FAILED(UnwrapArg<nsIPrincipal>(source, getter_AddRefs(arg0_holder)))) {
          ThrowErrorMessage(cx, MSG_DOES_NOT_IMPLEMENT_INTERFACE, "Argument 1 of IDBFactory.openForPrincipal", "Principal");
          return false;
        }
        MOZ_ASSERT(arg0_holder);
        arg0 = arg0_holder;
      } else {
        ThrowErrorMessage(cx, MSG_NOT_OBJECT, "Argument 1 of IDBFactory.openForPrincipal");
        return false;
      }
      binding_detail::FakeString arg1;
      if (!ConvertJSValueToString(cx, args[1], eStringify, eStringify, arg1)) {
        return false;
      }
      if (args[2].isNullOrUndefined()) {
        binding_detail::FastIDBOpenDBOptions arg2;
        if (!arg2.Init(cx, args[2],  "Argument 3 of IDBFactory.openForPrincipal", false)) {
          return false;
        }
        binding_detail::FastErrorResult rv;
        auto result(StrongOrRawPtr<mozilla::dom::IDBOpenDBRequest>(self->OpenForPrincipal(cx, NonNullHelper(arg0), NonNullHelper(Constify(arg1)), Constify(arg2), rv)));
        if (MOZ_UNLIKELY(rv.MaybeSetPendingException(cx))) {
          return false;
        }
        MOZ_ASSERT(!JS_IsExceptionPending(cx));
        if (!GetOrCreateDOMReflector(cx, result, args.rval())) {
          MOZ_ASSERT(true || JS_IsExceptionPending(cx));
          return false;
        }
        return true;
      }
      if (args[2].isObject()) {
        do {
          binding_detail::FastIDBOpenDBOptions arg2;
          { // scope for isConvertible
            bool isConvertible;
            if (!IsObjectValueConvertibleToDictionary(cx, args[2], &isConvertible)) {
              return false;
            }
            if (!isConvertible) {
              break;
            }

            if (!arg2.Init(cx, args[2],  "Argument 3 of IDBFactory.openForPrincipal", false)) {
              return false;
            }
          }

          binding_detail::FastErrorResult rv;
          auto result(StrongOrRawPtr<mozilla::dom::IDBOpenDBRequest>(self->OpenForPrincipal(cx, NonNullHelper(arg0), NonNullHelper(Constify(arg1)), Constify(arg2), rv)));
          if (MOZ_UNLIKELY(rv.MaybeSetPendingException(cx))) {
            return false;
          }
          MOZ_ASSERT(!JS_IsExceptionPending(cx));
          if (!GetOrCreateDOMReflector(cx, result, args.rval())) {
            MOZ_ASSERT(true || JS_IsExceptionPending(cx));
            return false;
          }
          return true;
        } while (0);
      }
      uint64_t arg2;
      if (!ValueToPrimitive<uint64_t, eEnforceRange>(cx, args[2], &arg2)) {
        return false;
      }
      binding_detail::FastErrorResult rv;
      auto result(StrongOrRawPtr<mozilla::dom::IDBOpenDBRequest>(self->OpenForPrincipal(cx, NonNullHelper(arg0), NonNullHelper(Constify(arg1)), arg2, rv)));
      if (MOZ_UNLIKELY(rv.MaybeSetPendingException(cx))) {
        return false;
      }
      MOZ_ASSERT(!JS_IsExceptionPending(cx));
      if (!GetOrCreateDOMReflector(cx, result, args.rval())) {
        MOZ_ASSERT(true || JS_IsExceptionPending(cx));
        return false;
      }
      return true;
      break;
    }
    default: {
      return ThrowErrorMessage(cx, MSG_MISSING_ARGUMENTS, "IDBFactory.openForPrincipal");
      break;
    }
  }
  MOZ_CRASH("We have an always-returning default case");
  return false;
}

static const JSJitInfo openForPrincipal_methodinfo = {
  { (JSJitGetterOp)openForPrincipal },
  { prototypes::id::IDBFactory },
  { PrototypeTraits<prototypes::id::IDBFactory>::Depth },
  JSJitInfo::Method,
  JSJitInfo::AliasEverything, /* aliasSet.  Not relevant for setters. */
  JSVAL_TYPE_OBJECT,  /* returnType.  Not relevant for setters. */
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
deleteForPrincipal(JSContext* cx, JS::Handle<JSObject*> obj, mozilla::dom::IDBFactory* self, const JSJitMethodCallArgs& args)
{
  if (MOZ_UNLIKELY(args.length() < 2)) {
    return ThrowErrorMessage(cx, MSG_MISSING_ARGUMENTS, "IDBFactory.deleteForPrincipal");
  }
  nsIPrincipal* arg0;
  RefPtr<nsIPrincipal> arg0_holder;
  if (args[0].isObject()) {
    JS::Rooted<JSObject*> source(cx, &args[0].toObject());
    if (NS_FAILED(UnwrapArg<nsIPrincipal>(source, getter_AddRefs(arg0_holder)))) {
      ThrowErrorMessage(cx, MSG_DOES_NOT_IMPLEMENT_INTERFACE, "Argument 1 of IDBFactory.deleteForPrincipal", "Principal");
      return false;
    }
    MOZ_ASSERT(arg0_holder);
    arg0 = arg0_holder;
  } else {
    ThrowErrorMessage(cx, MSG_NOT_OBJECT, "Argument 1 of IDBFactory.deleteForPrincipal");
    return false;
  }
  binding_detail::FakeString arg1;
  if (!ConvertJSValueToString(cx, args[1], eStringify, eStringify, arg1)) {
    return false;
  }
  binding_detail::FastIDBOpenDBOptions arg2;
  if (!arg2.Init(cx, (args.hasDefined(2)) ? args[2] : JS::NullHandleValue,  "Argument 3 of IDBFactory.deleteForPrincipal", false)) {
    return false;
  }
  binding_detail::FastErrorResult rv;
  auto result(StrongOrRawPtr<mozilla::dom::IDBOpenDBRequest>(self->DeleteForPrincipal(cx, NonNullHelper(arg0), NonNullHelper(Constify(arg1)), Constify(arg2), rv)));
  if (MOZ_UNLIKELY(rv.MaybeSetPendingException(cx))) {
    return false;
  }
  MOZ_ASSERT(!JS_IsExceptionPending(cx));
  if (!GetOrCreateDOMReflector(cx, result, args.rval())) {
    MOZ_ASSERT(true || JS_IsExceptionPending(cx));
    return false;
  }
  return true;
}

static const JSJitInfo deleteForPrincipal_methodinfo = {
  { (JSJitGetterOp)deleteForPrincipal },
  { prototypes::id::IDBFactory },
  { PrototypeTraits<prototypes::id::IDBFactory>::Depth },
  JSJitInfo::Method,
  JSJitInfo::AliasEverything, /* aliasSet.  Not relevant for setters. */
  JSVAL_TYPE_OBJECT,  /* returnType.  Not relevant for setters. */
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
  mozilla::dom::IDBFactory* self = UnwrapPossiblyNotInitializedDOMObject<mozilla::dom::IDBFactory>(obj);
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
  mozilla::dom::IDBFactory* self = UnwrapPossiblyNotInitializedDOMObject<mozilla::dom::IDBFactory>(obj);
  if (self) {
    ClearWrapper(self, self);
    AddForDeferredFinalization<mozilla::dom::IDBFactory>(self);
  }
}

static void
_objectMoved(JSObject* obj, const JSObject* old)
{
  mozilla::dom::IDBFactory* self = UnwrapPossiblyNotInitializedDOMObject<mozilla::dom::IDBFactory>(obj);
  if (self) {
    UpdateWrapper(self, self, obj, old);
  }
}

static const JSFunctionSpec sMethods_specs[] = {
  JS_FNSPEC("open", GenericBindingMethod, reinterpret_cast<const JSJitInfo*>(&open_methodinfo), 1, JSPROP_ENUMERATE, nullptr),
  JS_FNSPEC("deleteDatabase", GenericBindingMethod, reinterpret_cast<const JSJitInfo*>(&deleteDatabase_methodinfo), 1, JSPROP_ENUMERATE, nullptr),
  JS_FNSPEC("cmp", GenericBindingMethod, reinterpret_cast<const JSJitInfo*>(&cmp_methodinfo), 2, JSPROP_ENUMERATE, nullptr),
  JS_FS_END
};


// Can't be const because the pref-enabled boolean needs to be writable
static Prefable<const JSFunctionSpec> sMethods[] = {
  { nullptr, &sMethods_specs[0] },
  { nullptr, nullptr }
};

static jsid sMethods_ids[4];

static const JSFunctionSpec sChromeMethods_specs[] = {
  JS_FNSPEC("openForPrincipal", GenericBindingMethod, reinterpret_cast<const JSJitInfo*>(&openForPrincipal_methodinfo), 2, JSPROP_ENUMERATE, nullptr),
  JS_FNSPEC("deleteForPrincipal", GenericBindingMethod, reinterpret_cast<const JSJitInfo*>(&deleteForPrincipal_methodinfo), 2, JSPROP_ENUMERATE, nullptr),
  JS_FS_END
};


// Can't be const because the pref-enabled boolean needs to be writable
static Prefable<const JSFunctionSpec> sChromeMethods[] = {
  { nullptr, &sChromeMethods_specs[0] },
  { nullptr, nullptr }
};

static jsid sChromeMethods_ids[3];


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

static const NativePropertiesN<1> sChromeOnlyNativeProperties = {
  -1,
  false, 0,
  false, 0,
  true,  0 /* sChromeMethods */,
  false, 0,
  false, 0,
  false, 0,
  false, 0,
  {
    { sChromeMethods, sChromeMethods_ids, sChromeMethods_specs }
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
  prototypes::id::IDBFactory,
  PrototypeTraits<prototypes::id::IDBFactory>::Depth,
  sNativePropertyHooks,
  "function IDBFactory() {\n    [native code]\n}",
  JS::GetRealmFunctionPrototype
};

static const DOMIfaceAndProtoJSClass sPrototypeClass = {
  {
    "IDBFactoryPrototype",
    JSCLASS_IS_DOMIFACEANDPROTOJSCLASS | JSCLASS_HAS_RESERVED_SLOTS(DOM_INTERFACE_PROTO_SLOTS_BASE),
    JS_NULL_CLASS_OPS,
    JS_NULL_CLASS_SPEC,
    JS_NULL_CLASS_EXT,
    JS_NULL_OBJECT_OPS
  },
  eInterfacePrototype,
  false,
  prototypes::id::IDBFactory,
  PrototypeTraits<prototypes::id::IDBFactory>::Depth,
  sNativePropertyHooks,
  "[object IDBFactoryPrototype]",
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
  { "IDBFactory",
    JSCLASS_IS_DOMJSCLASS | JSCLASS_FOREGROUND_FINALIZE | JSCLASS_HAS_RESERVED_SLOTS(1),
    &sClassOps,
    JS_NULL_CLASS_SPEC,
    &sClassExtension,
    JS_NULL_OBJECT_OPS
  },
  { prototypes::id::IDBFactory, prototypes::id::_ID_Count, prototypes::id::_ID_Count, prototypes::id::_ID_Count, prototypes::id::_ID_Count, prototypes::id::_ID_Count, prototypes::id::_ID_Count, prototypes::id::_ID_Count },
  IsBaseOf<nsISupports, mozilla::dom::IDBFactory >::value,
  sNativePropertyHooks,
  FindAssociatedGlobalForNative<mozilla::dom::IDBFactory>::Get,
  GetProtoObjectHandle,
  GetCCParticipant<mozilla::dom::IDBFactory>::Get()
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
Wrap(JSContext* aCx, mozilla::dom::IDBFactory* aObject, nsWrapperCache* aCache, JS::Handle<JSObject*> aGivenProto, JS::MutableHandle<JSObject*> aReflector)
{
  MOZ_ASSERT(static_cast<mozilla::dom::IDBFactory*>(aObject) ==
             reinterpret_cast<mozilla::dom::IDBFactory*>(aObject),
             "Multiple inheritance for mozilla::dom::IDBFactory is broken.");
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

  BindingJSObjectCreator<mozilla::dom::IDBFactory> creator(aCx);
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
  { sNativeProperties.Upcast(), sChromeOnlyNativeProperties.Upcast() },
  prototypes::id::IDBFactory,
  constructors::id::IDBFactory,
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
    if (!InitIds(aCx, sChromeMethods, sChromeMethods_ids)) {
      return;
    }
    if (!InitIds(aCx, sMethods, sMethods_ids)) {
      return;
    }
    sIdsInited = true;
  }

  JS::Heap<JSObject*>* protoCache = &aProtoAndIfaceCache.EntrySlotOrCreate(prototypes::id::IDBFactory);
  JS::Heap<JSObject*>* interfaceCache = &aProtoAndIfaceCache.EntrySlotOrCreate(constructors::id::IDBFactory);
  dom::CreateInterfaceObjects(aCx, aGlobal, parentProto,
                              &sPrototypeClass.mBase, protoCache,
                              constructorProto, &sInterfaceObjectClass.mBase, 0, nullptr,
                              interfaceCache,
                              sNativeProperties.Upcast(),
                              nsContentUtils::ThreadsafeIsCallerChrome() ? sChromeOnlyNativeProperties.Upcast() : nullptr,
                              "IDBFactory", aDefineOnGlobal,
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
  if (!protoAndIfaceCache.EntrySlotIfExists(prototypes::id::IDBFactory)) {
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

  const JS::Heap<JSObject*>& entrySlot = protoAndIfaceCache.EntrySlotMustExist(prototypes::id::IDBFactory);
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
  if (!protoAndIfaceCache.EntrySlotIfExists(constructors::id::IDBFactory)) {
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

  const JS::Heap<JSObject*>& entrySlot = protoAndIfaceCache.EntrySlotMustExist(constructors::id::IDBFactory);
  MOZ_ASSERT_IF(entrySlot, !JS::ObjectIsMarkedGray(entrySlot));
  return JS::Handle<JSObject*>::fromMarkedLocation(entrySlot.address());
}

JSObject*
GetConstructorObject(JSContext* aCx)
{
  return GetConstructorObjectHandle(aCx);
}

} // namespace IDBFactoryBinding



} // namespace dom
} // namespace mozilla
