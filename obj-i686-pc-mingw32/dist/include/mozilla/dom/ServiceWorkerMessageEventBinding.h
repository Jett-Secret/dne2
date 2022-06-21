/* THIS FILE IS AUTOGENERATED FROM ServiceWorkerMessageEvent.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_ServiceWorkerMessageEventBinding_h
#define mozilla_dom_ServiceWorkerMessageEventBinding_h

#include "EventBinding.h"
#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/FakeString.h"
#include "mozilla/dom/MessagePort.h"
#include "mozilla/dom/Nullable.h"
#include "mozilla/dom/UnionMember.h"

namespace mozilla {
namespace dom {

class MessagePort;
struct NativePropertyHooks;
class OwningServiceWorkerOrMessagePort;
class ProtoAndIfaceCache;
class ServiceWorkerMessageEvent;
struct ServiceWorkerMessageEventAtoms;
struct ServiceWorkerMessageEventInitAtoms;
class ServiceWorkerOrMessagePort;

namespace workers {

class ServiceWorker;

} // namespace workers

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

void
ImplCycleCollectionTraverse(nsCycleCollectionTraversalCallback& aCallback, OwningServiceWorkerOrMessagePort& aUnion, const char* aName, uint32_t aFlags = 0);


void
ImplCycleCollectionUnlink(OwningServiceWorkerOrMessagePort& aUnion);


class ServiceWorkerOrMessagePort
{
  friend class ServiceWorkerOrMessagePortArgument;
  enum Type
  {
    eUninitialized,
    eServiceWorker,
    eMessagePort
  };

  union Value
  {
    UnionMember<NonNull<mozilla::dom::workers::ServiceWorker> > mServiceWorker;
    UnionMember<NonNull<mozilla::dom::MessagePort> > mMessagePort;

  };

  Type mType;
  Value mValue;

  ServiceWorkerOrMessagePort(const ServiceWorkerOrMessagePort&) = delete;
  void operator=(const ServiceWorkerOrMessagePort&) = delete;
public:
  explicit inline ServiceWorkerOrMessagePort()
    : mType(eUninitialized)
  {
  }

  inline ~ServiceWorkerOrMessagePort()
  {
    Uninit();
  }

  inline NonNull<mozilla::dom::workers::ServiceWorker>&
  RawSetAsServiceWorker()
  {
    if (mType == eServiceWorker) {
      return mValue.mServiceWorker.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eServiceWorker;
    return mValue.mServiceWorker.SetValue();
  }

  inline NonNull<mozilla::dom::workers::ServiceWorker>&
  SetAsServiceWorker()
  {
    if (mType == eServiceWorker) {
      return mValue.mServiceWorker.Value();
    }
    Uninit();
    mType = eServiceWorker;
    return mValue.mServiceWorker.SetValue();
  }

  inline bool
  IsServiceWorker() const
  {
    return mType == eServiceWorker;
  }

  inline NonNull<mozilla::dom::workers::ServiceWorker>&
  GetAsServiceWorker()
  {
    MOZ_ASSERT(IsServiceWorker(), "Wrong type!");
    return mValue.mServiceWorker.Value();
  }

  inline mozilla::dom::workers::ServiceWorker&
  GetAsServiceWorker() const
  {
    MOZ_ASSERT(IsServiceWorker(), "Wrong type!");
    return mValue.mServiceWorker.Value();
  }

  inline NonNull<mozilla::dom::MessagePort>&
  RawSetAsMessagePort()
  {
    if (mType == eMessagePort) {
      return mValue.mMessagePort.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eMessagePort;
    return mValue.mMessagePort.SetValue();
  }

  inline NonNull<mozilla::dom::MessagePort>&
  SetAsMessagePort()
  {
    if (mType == eMessagePort) {
      return mValue.mMessagePort.Value();
    }
    Uninit();
    mType = eMessagePort;
    return mValue.mMessagePort.SetValue();
  }

  inline bool
  IsMessagePort() const
  {
    return mType == eMessagePort;
  }

  inline NonNull<mozilla::dom::MessagePort>&
  GetAsMessagePort()
  {
    MOZ_ASSERT(IsMessagePort(), "Wrong type!");
    return mValue.mMessagePort.Value();
  }

  inline mozilla::dom::MessagePort&
  GetAsMessagePort() const
  {
    MOZ_ASSERT(IsMessagePort(), "Wrong type!");
    return mValue.mMessagePort.Value();
  }

  inline void
  Uninit()
  {
    switch (mType) {
      case eUninitialized: {
        break;
      }
      case eServiceWorker: {
        DestroyServiceWorker();
        break;
      }
      case eMessagePort: {
        DestroyMessagePort();
        break;
      }
    }
  }

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

private:
  inline void
  DestroyServiceWorker()
  {
    MOZ_ASSERT(IsServiceWorker(), "Wrong type!");
    mValue.mServiceWorker.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyMessagePort()
  {
    MOZ_ASSERT(IsMessagePort(), "Wrong type!");
    mValue.mMessagePort.Destroy();
    mType = eUninitialized;
  }
};


class OwningServiceWorkerOrMessagePort : public AllOwningUnionBase
{
  friend void ImplCycleCollectionUnlink(OwningServiceWorkerOrMessagePort& aUnion);
  enum Type
  {
    eUninitialized,
    eServiceWorker,
    eMessagePort
  };

  union Value
  {
    UnionMember<OwningNonNull<mozilla::dom::workers::ServiceWorker> > mServiceWorker;
    UnionMember<OwningNonNull<mozilla::dom::MessagePort> > mMessagePort;

  };

  Type mType;
  Value mValue;

public:
  explicit inline OwningServiceWorkerOrMessagePort()
    : mType(eUninitialized)
  {
  }

  explicit inline OwningServiceWorkerOrMessagePort(const OwningServiceWorkerOrMessagePort& aOther)
    : mType(eUninitialized)
  {
    *this = aOther;
  }

  inline ~OwningServiceWorkerOrMessagePort()
  {
    Uninit();
  }

  OwningNonNull<mozilla::dom::workers::ServiceWorker>&
  RawSetAsServiceWorker();

  OwningNonNull<mozilla::dom::workers::ServiceWorker>&
  SetAsServiceWorker();

  bool
  TrySetToServiceWorker(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsServiceWorker() const
  {
    return mType == eServiceWorker;
  }

  inline OwningNonNull<mozilla::dom::workers::ServiceWorker>&
  GetAsServiceWorker()
  {
    MOZ_ASSERT(IsServiceWorker(), "Wrong type!");
    return mValue.mServiceWorker.Value();
  }

  inline OwningNonNull<mozilla::dom::workers::ServiceWorker> const &
  GetAsServiceWorker() const
  {
    MOZ_ASSERT(IsServiceWorker(), "Wrong type!");
    return mValue.mServiceWorker.Value();
  }

  OwningNonNull<mozilla::dom::MessagePort>&
  RawSetAsMessagePort();

  OwningNonNull<mozilla::dom::MessagePort>&
  SetAsMessagePort();

  bool
  TrySetToMessagePort(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsMessagePort() const
  {
    return mType == eMessagePort;
  }

  inline OwningNonNull<mozilla::dom::MessagePort>&
  GetAsMessagePort()
  {
    MOZ_ASSERT(IsMessagePort(), "Wrong type!");
    return mValue.mMessagePort.Value();
  }

  inline OwningNonNull<mozilla::dom::MessagePort> const &
  GetAsMessagePort() const
  {
    MOZ_ASSERT(IsMessagePort(), "Wrong type!");
    return mValue.mMessagePort.Value();
  }

  void
  Uninit();

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceUnion(JSTracer* trc);

  void
  operator=(const OwningServiceWorkerOrMessagePort& aOther);

private:
  void
  DestroyServiceWorker();

  void
  DestroyMessagePort();
};


struct ServiceWorkerMessageEventInit : public EventInit
{
  MOZ_INIT_OUTSIDE_CTOR JS::Value mData;
  MOZ_INIT_OUTSIDE_CTOR nsString mLastEventId;
  MOZ_INIT_OUTSIDE_CTOR nsString mOrigin;
  MOZ_INIT_OUTSIDE_CTOR Sequence<OwningNonNull<mozilla::dom::MessagePort>> mPorts;
  MOZ_INIT_OUTSIDE_CTOR Nullable<OwningServiceWorkerOrMessagePort > mSource;

  ServiceWorkerMessageEventInit();

  explicit inline ServiceWorkerMessageEventInit(const FastDictionaryInitializer& )
    : EventInit(FastDictionaryInitializer()),
      mData(JS::UndefinedValue())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  ServiceWorkerMessageEventInit(const ServiceWorkerMessageEventInit&) = delete;
  void operator=(const ServiceWorkerMessageEventInit&) = delete;

  static bool
  InitIds(JSContext* cx, ServiceWorkerMessageEventInitAtoms* atomsCache);

public:
  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value", bool passedToJSImpl = false);

  bool
  ToObjectInternal(JSContext* cx, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);
};

namespace binding_detail {
struct FastServiceWorkerMessageEventInit : public ServiceWorkerMessageEventInit
{
  inline FastServiceWorkerMessageEventInit()
    : ServiceWorkerMessageEventInit(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


namespace ServiceWorkerMessageEventBinding {

  typedef mozilla::dom::ServiceWorkerMessageEvent NativeType;

  bool
  ConstructorEnabled(JSContext* aCx, JS::Handle<JSObject*> aObj);

  JSObject*
  DefineDOMInterface(JSContext* aCx, JS::Handle<JSObject*> aGlobal, JS::Handle<jsid> id, bool aDefineOnGlobal);

  const JSClass*
  GetJSClass();

  bool
  Wrap(JSContext* aCx, mozilla::dom::ServiceWorkerMessageEvent* aObject, nsWrapperCache* aCache, JS::Handle<JSObject*> aGivenProto, JS::MutableHandle<JSObject*> aReflector);

  template <class T>
  inline JSObject* Wrap(JSContext* aCx, T* aObject, JS::Handle<JSObject*> aGivenProto)
  {
    JS::Rooted<JSObject*> reflector(aCx);
    return Wrap(aCx, aObject, aObject, aGivenProto, &reflector) ? reflector.get() : nullptr;
  }

  // We declare this as an array so that retrieving a pointer to this
  // binding's property hooks only requires compile/link-time resolvable
  // address arithmetic.  Declaring it as a pointer instead would require
  // doing a run-time load to fetch a pointer to this binding's property
  // hooks.  And then structures which embedded a pointer to this structure
  // would require a run-time load for proper initialization, which would
  // then induce static constructors.  Lots of static constructors.
  extern const NativePropertyHooks sNativePropertyHooks[];

  void
  CreateInterfaceObjects(JSContext* aCx, JS::Handle<JSObject*> aGlobal, ProtoAndIfaceCache& aProtoAndIfaceCache, bool aDefineOnGlobal);

  JS::Handle<JSObject*>
  GetProtoObjectHandle(JSContext* aCx);

  JS::Handle<JSObject*>
  GetConstructorObjectHandle(JSContext* aCx, bool aDefineOnGlobal = true);

  JSObject*
  GetConstructorObject(JSContext* aCx);

} // namespace ServiceWorkerMessageEventBinding



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_ServiceWorkerMessageEventBinding_h