/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl\nsIDOMEvent.idl
 */

#ifndef __gen_nsIDOMEvent_h__
#define __gen_nsIDOMEvent_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMEventTarget; /* forward declaration */

#ifdef ERROR
#undef ERROR
#endif
#include "mozilla/EventForwards.h"
class nsPresContext;
class nsInvalidateRequestList;
namespace IPC {
class Message;
}
class PickleIterator;
namespace mozilla {
namespace dom {
class Event;
class EventTarget;
} // namespace dom
} // namespace mozilla

/* starting interface:    nsIDOMEvent */
#define NS_IDOMEVENT_IID_STR "f58daacf-4d1a-4002-8fd7-06b614dfbcf6"

#define NS_IDOMEVENT_IID \
  {0xf58daacf, 0x4d1a, 0x4002, \
    { 0x8f, 0xd7, 0x06, 0xb6, 0x14, 0xdf, 0xbc, 0xf6 }}

class NS_NO_VTABLE nsIDOMEvent : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMEVENT_IID)

  enum {
    NONE = 0U,
    CAPTURING_PHASE = 1U,
    AT_TARGET = 2U,
    BUBBLING_PHASE = 3U
  };

  /* readonly attribute DOMString type; */
  NS_IMETHOD GetType(nsAString & aType) = 0;

  /* readonly attribute nsIDOMEventTarget target; */
  NS_IMETHOD GetTarget(nsIDOMEventTarget * *aTarget) = 0;

  /* readonly attribute nsIDOMEventTarget currentTarget; */
  NS_IMETHOD GetCurrentTarget(nsIDOMEventTarget * *aCurrentTarget) = 0;

  /* readonly attribute unsigned short eventPhase; */
  NS_IMETHOD GetEventPhase(uint16_t *aEventPhase) = 0;

  /* readonly attribute boolean bubbles; */
  NS_IMETHOD GetBubbles(bool *aBubbles) = 0;

  /* readonly attribute boolean cancelable; */
  NS_IMETHOD GetCancelable(bool *aCancelable) = 0;

  /* readonly attribute DOMTimeStamp timeStamp; */
  NS_IMETHOD GetTimeStamp(DOMTimeStamp *aTimeStamp) = 0;

  /* void stopPropagation (); */
  NS_IMETHOD StopPropagation(void) = 0;

  /* void preventDefault (); */
  NS_IMETHOD PreventDefault(void) = 0;

  /* [nostdcall,notxpcom] void initEvent (in DOMString eventTypeArg, in boolean canBubbleArg, in boolean cancelableArg); */
  virtual void InitEvent(const nsAString & eventTypeArg, bool canBubbleArg, bool cancelableArg) = 0;

  /* readonly attribute boolean defaultPrevented; */
  NS_IMETHOD GetDefaultPrevented(bool *aDefaultPrevented) = 0;

  /* void stopImmediatePropagation (); */
  NS_IMETHOD StopImmediatePropagation(void) = 0;

  enum {
    ALT_MASK = 1,
    CONTROL_MASK = 2,
    SHIFT_MASK = 4,
    META_MASK = 8
  };

  /* readonly attribute nsIDOMEventTarget originalTarget; */
  NS_IMETHOD GetOriginalTarget(nsIDOMEventTarget * *aOriginalTarget) = 0;

  /* readonly attribute nsIDOMEventTarget explicitOriginalTarget; */
  NS_IMETHOD GetExplicitOriginalTarget(nsIDOMEventTarget * *aExplicitOriginalTarget) = 0;

  /* boolean getPreventDefault (); */
  NS_IMETHOD GetPreventDefault(bool *_retval) = 0;

  /* readonly attribute boolean isTrusted; */
  NS_IMETHOD GetIsTrusted(bool *aIsTrusted) = 0;

  /* attribute boolean cancelBubble; */
  NS_IMETHOD GetCancelBubble(bool *aCancelBubble) = 0;
  NS_IMETHOD SetCancelBubble(bool aCancelBubble) = 0;

  /* [noscript] void duplicatePrivateData (); */
  NS_IMETHOD DuplicatePrivateData(void) = 0;

  /* [noscript] void setTarget (in nsIDOMEventTarget aTarget); */
  NS_IMETHOD SetTarget(nsIDOMEventTarget *aTarget) = 0;

  /* [notxpcom] boolean IsDispatchStopped (); */
  NS_IMETHOD_(bool) IsDispatchStopped(void) = 0;

  /* [notxpcom] WidgetEvent WidgetEventPtr (); */
  NS_IMETHOD_(mozilla::WidgetEvent *) WidgetEventPtr(void) = 0;

  /* [noscript,notxpcom] void SetTrusted (in boolean aTrusted); */
  NS_IMETHOD_(void) SetTrusted(bool aTrusted) = 0;

  /* [notxpcom] void Serialize (in IPCMessagePtr aMsg, in boolean aSerializeInterfaceType); */
  NS_IMETHOD_(void) Serialize(IPC::Message *aMsg, bool aSerializeInterfaceType) = 0;

  /* [notxpcom] boolean Deserialize (in ConstIPCMessagePtr aMsg, in PickleIterator aIter); */
  NS_IMETHOD_(bool) Deserialize(const IPC::Message *aMsg, PickleIterator *aIter) = 0;

  /* [noscript,notxpcom] void SetOwner (in EventTargetPtr aOwner); */
  NS_IMETHOD_(void) SetOwner(mozilla::dom::EventTarget *aOwner) = 0;

  /* [notxpcom] DOMEventPtr InternalDOMEvent (); */
  NS_IMETHOD_(mozilla::dom::Event *) InternalDOMEvent(void) = 0;

  /* [noscript] void stopCrossProcessForwarding (); */
  NS_IMETHOD StopCrossProcessForwarding(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMEvent, NS_IDOMEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMEVENT \
  NS_IMETHOD GetType(nsAString & aType) override; \
  NS_IMETHOD GetTarget(nsIDOMEventTarget * *aTarget) override; \
  NS_IMETHOD GetCurrentTarget(nsIDOMEventTarget * *aCurrentTarget) override; \
  NS_IMETHOD GetEventPhase(uint16_t *aEventPhase) override; \
  NS_IMETHOD GetBubbles(bool *aBubbles) override; \
  NS_IMETHOD GetCancelable(bool *aCancelable) override; \
  NS_IMETHOD GetTimeStamp(DOMTimeStamp *aTimeStamp) override; \
  NS_IMETHOD StopPropagation(void) override; \
  NS_IMETHOD PreventDefault(void) override; \
  virtual void InitEvent(const nsAString & eventTypeArg, bool canBubbleArg, bool cancelableArg) override; \
  NS_IMETHOD GetDefaultPrevented(bool *aDefaultPrevented) override; \
  NS_IMETHOD StopImmediatePropagation(void) override; \
  NS_IMETHOD GetOriginalTarget(nsIDOMEventTarget * *aOriginalTarget) override; \
  NS_IMETHOD GetExplicitOriginalTarget(nsIDOMEventTarget * *aExplicitOriginalTarget) override; \
  NS_IMETHOD GetPreventDefault(bool *_retval) override; \
  NS_IMETHOD GetIsTrusted(bool *aIsTrusted) override; \
  NS_IMETHOD GetCancelBubble(bool *aCancelBubble) override; \
  NS_IMETHOD SetCancelBubble(bool aCancelBubble) override; \
  NS_IMETHOD DuplicatePrivateData(void) override; \
  NS_IMETHOD SetTarget(nsIDOMEventTarget *aTarget) override; \
  NS_IMETHOD_(bool) IsDispatchStopped(void) override; \
  NS_IMETHOD_(mozilla::WidgetEvent *) WidgetEventPtr(void) override; \
  NS_IMETHOD_(void) SetTrusted(bool aTrusted) override; \
  NS_IMETHOD_(void) Serialize(IPC::Message *aMsg, bool aSerializeInterfaceType) override; \
  NS_IMETHOD_(bool) Deserialize(const IPC::Message *aMsg, PickleIterator *aIter) override; \
  NS_IMETHOD_(void) SetOwner(mozilla::dom::EventTarget *aOwner) override; \
  NS_IMETHOD_(mozilla::dom::Event *) InternalDOMEvent(void) override; \
  NS_IMETHOD StopCrossProcessForwarding(void) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIDOMEVENT \
  NS_METHOD GetType(nsAString & aType); \
  NS_METHOD GetTarget(nsIDOMEventTarget * *aTarget); \
  NS_METHOD GetCurrentTarget(nsIDOMEventTarget * *aCurrentTarget); \
  NS_METHOD GetEventPhase(uint16_t *aEventPhase); \
  NS_METHOD GetBubbles(bool *aBubbles); \
  NS_METHOD GetCancelable(bool *aCancelable); \
  NS_METHOD GetTimeStamp(DOMTimeStamp *aTimeStamp); \
  NS_METHOD StopPropagation(void); \
  NS_METHOD PreventDefault(void); \
  void InitEvent(const nsAString & eventTypeArg, bool canBubbleArg, bool cancelableArg); \
  NS_METHOD GetDefaultPrevented(bool *aDefaultPrevented); \
  NS_METHOD StopImmediatePropagation(void); \
  NS_METHOD GetOriginalTarget(nsIDOMEventTarget * *aOriginalTarget); \
  NS_METHOD GetExplicitOriginalTarget(nsIDOMEventTarget * *aExplicitOriginalTarget); \
  NS_METHOD GetPreventDefault(bool *_retval); \
  NS_METHOD GetIsTrusted(bool *aIsTrusted); \
  NS_METHOD GetCancelBubble(bool *aCancelBubble); \
  NS_METHOD SetCancelBubble(bool aCancelBubble); \
  NS_METHOD DuplicatePrivateData(void); \
  NS_METHOD SetTarget(nsIDOMEventTarget *aTarget); \
  NS_METHOD_(bool) IsDispatchStopped(void); \
  NS_METHOD_(mozilla::WidgetEvent *) WidgetEventPtr(void); \
  NS_METHOD_(void) SetTrusted(bool aTrusted); \
  NS_METHOD_(void) Serialize(IPC::Message *aMsg, bool aSerializeInterfaceType); \
  NS_METHOD_(bool) Deserialize(const IPC::Message *aMsg, PickleIterator *aIter); \
  NS_METHOD_(void) SetOwner(mozilla::dom::EventTarget *aOwner); \
  NS_METHOD_(mozilla::dom::Event *) InternalDOMEvent(void); \
  NS_METHOD StopCrossProcessForwarding(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMEVENT(_to) \
  NS_IMETHOD GetType(nsAString & aType) override { return _to GetType(aType); } \
  NS_IMETHOD GetTarget(nsIDOMEventTarget * *aTarget) override { return _to GetTarget(aTarget); } \
  NS_IMETHOD GetCurrentTarget(nsIDOMEventTarget * *aCurrentTarget) override { return _to GetCurrentTarget(aCurrentTarget); } \
  NS_IMETHOD GetEventPhase(uint16_t *aEventPhase) override { return _to GetEventPhase(aEventPhase); } \
  NS_IMETHOD GetBubbles(bool *aBubbles) override { return _to GetBubbles(aBubbles); } \
  NS_IMETHOD GetCancelable(bool *aCancelable) override { return _to GetCancelable(aCancelable); } \
  NS_IMETHOD GetTimeStamp(DOMTimeStamp *aTimeStamp) override { return _to GetTimeStamp(aTimeStamp); } \
  NS_IMETHOD StopPropagation(void) override { return _to StopPropagation(); } \
  NS_IMETHOD PreventDefault(void) override { return _to PreventDefault(); } \
  virtual void InitEvent(const nsAString & eventTypeArg, bool canBubbleArg, bool cancelableArg) override { return _to InitEvent(eventTypeArg, canBubbleArg, cancelableArg); } \
  NS_IMETHOD GetDefaultPrevented(bool *aDefaultPrevented) override { return _to GetDefaultPrevented(aDefaultPrevented); } \
  NS_IMETHOD StopImmediatePropagation(void) override { return _to StopImmediatePropagation(); } \
  NS_IMETHOD GetOriginalTarget(nsIDOMEventTarget * *aOriginalTarget) override { return _to GetOriginalTarget(aOriginalTarget); } \
  NS_IMETHOD GetExplicitOriginalTarget(nsIDOMEventTarget * *aExplicitOriginalTarget) override { return _to GetExplicitOriginalTarget(aExplicitOriginalTarget); } \
  NS_IMETHOD GetPreventDefault(bool *_retval) override { return _to GetPreventDefault(_retval); } \
  NS_IMETHOD GetIsTrusted(bool *aIsTrusted) override { return _to GetIsTrusted(aIsTrusted); } \
  NS_IMETHOD GetCancelBubble(bool *aCancelBubble) override { return _to GetCancelBubble(aCancelBubble); } \
  NS_IMETHOD SetCancelBubble(bool aCancelBubble) override { return _to SetCancelBubble(aCancelBubble); } \
  NS_IMETHOD DuplicatePrivateData(void) override { return _to DuplicatePrivateData(); } \
  NS_IMETHOD SetTarget(nsIDOMEventTarget *aTarget) override { return _to SetTarget(aTarget); } \
  NS_IMETHOD_(bool) IsDispatchStopped(void) override { return _to IsDispatchStopped(); } \
  NS_IMETHOD_(mozilla::WidgetEvent *) WidgetEventPtr(void) override { return _to WidgetEventPtr(); } \
  NS_IMETHOD_(void) SetTrusted(bool aTrusted) override { return _to SetTrusted(aTrusted); } \
  NS_IMETHOD_(void) Serialize(IPC::Message *aMsg, bool aSerializeInterfaceType) override { return _to Serialize(aMsg, aSerializeInterfaceType); } \
  NS_IMETHOD_(bool) Deserialize(const IPC::Message *aMsg, PickleIterator *aIter) override { return _to Deserialize(aMsg, aIter); } \
  NS_IMETHOD_(void) SetOwner(mozilla::dom::EventTarget *aOwner) override { return _to SetOwner(aOwner); } \
  NS_IMETHOD_(mozilla::dom::Event *) InternalDOMEvent(void) override { return _to InternalDOMEvent(); } \
  NS_IMETHOD StopCrossProcessForwarding(void) override { return _to StopCrossProcessForwarding(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMEVENT(_to) \
  NS_IMETHOD GetType(nsAString & aType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_IMETHOD GetTarget(nsIDOMEventTarget * *aTarget) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTarget(aTarget); } \
  NS_IMETHOD GetCurrentTarget(nsIDOMEventTarget * *aCurrentTarget) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCurrentTarget(aCurrentTarget); } \
  NS_IMETHOD GetEventPhase(uint16_t *aEventPhase) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEventPhase(aEventPhase); } \
  NS_IMETHOD GetBubbles(bool *aBubbles) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBubbles(aBubbles); } \
  NS_IMETHOD GetCancelable(bool *aCancelable) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCancelable(aCancelable); } \
  NS_IMETHOD GetTimeStamp(DOMTimeStamp *aTimeStamp) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTimeStamp(aTimeStamp); } \
  NS_IMETHOD StopPropagation(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->StopPropagation(); } \
  NS_IMETHOD PreventDefault(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->PreventDefault(); } \
  virtual void InitEvent(const nsAString & eventTypeArg, bool canBubbleArg, bool cancelableArg) override; \
  NS_IMETHOD GetDefaultPrevented(bool *aDefaultPrevented) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultPrevented(aDefaultPrevented); } \
  NS_IMETHOD StopImmediatePropagation(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->StopImmediatePropagation(); } \
  NS_IMETHOD GetOriginalTarget(nsIDOMEventTarget * *aOriginalTarget) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOriginalTarget(aOriginalTarget); } \
  NS_IMETHOD GetExplicitOriginalTarget(nsIDOMEventTarget * *aExplicitOriginalTarget) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExplicitOriginalTarget(aExplicitOriginalTarget); } \
  NS_IMETHOD GetPreventDefault(bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPreventDefault(_retval); } \
  NS_IMETHOD GetIsTrusted(bool *aIsTrusted) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsTrusted(aIsTrusted); } \
  NS_IMETHOD GetCancelBubble(bool *aCancelBubble) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCancelBubble(aCancelBubble); } \
  NS_IMETHOD SetCancelBubble(bool aCancelBubble) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCancelBubble(aCancelBubble); } \
  NS_IMETHOD DuplicatePrivateData(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->DuplicatePrivateData(); } \
  NS_IMETHOD SetTarget(nsIDOMEventTarget *aTarget) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTarget(aTarget); } \
  NS_IMETHOD_(bool) IsDispatchStopped(void) override; \
  NS_IMETHOD_(mozilla::WidgetEvent *) WidgetEventPtr(void) override; \
  NS_IMETHOD_(void) SetTrusted(bool aTrusted) override; \
  NS_IMETHOD_(void) Serialize(IPC::Message *aMsg, bool aSerializeInterfaceType) override; \
  NS_IMETHOD_(bool) Deserialize(const IPC::Message *aMsg, PickleIterator *aIter) override; \
  NS_IMETHOD_(void) SetOwner(mozilla::dom::EventTarget *aOwner) override; \
  NS_IMETHOD_(mozilla::dom::Event *) InternalDOMEvent(void) override; \
  NS_IMETHOD StopCrossProcessForwarding(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->StopCrossProcessForwarding(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMEvent : public nsIDOMEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMEVENT

  nsDOMEvent();

private:
  ~nsDOMEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMEvent, nsIDOMEvent)

nsDOMEvent::nsDOMEvent()
{
  /* member initializers and constructor code */
}

nsDOMEvent::~nsDOMEvent()
{
  /* destructor code */
}

/* readonly attribute DOMString type; */
NS_IMETHODIMP nsDOMEvent::GetType(nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMEventTarget target; */
NS_IMETHODIMP nsDOMEvent::GetTarget(nsIDOMEventTarget * *aTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMEventTarget currentTarget; */
NS_IMETHODIMP nsDOMEvent::GetCurrentTarget(nsIDOMEventTarget * *aCurrentTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned short eventPhase; */
NS_IMETHODIMP nsDOMEvent::GetEventPhase(uint16_t *aEventPhase)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean bubbles; */
NS_IMETHODIMP nsDOMEvent::GetBubbles(bool *aBubbles)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean cancelable; */
NS_IMETHODIMP nsDOMEvent::GetCancelable(bool *aCancelable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMTimeStamp timeStamp; */
NS_IMETHODIMP nsDOMEvent::GetTimeStamp(DOMTimeStamp *aTimeStamp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void stopPropagation (); */
NS_IMETHODIMP nsDOMEvent::StopPropagation()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void preventDefault (); */
NS_IMETHODIMP nsDOMEvent::PreventDefault()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [nostdcall,notxpcom] void initEvent (in DOMString eventTypeArg, in boolean canBubbleArg, in boolean cancelableArg); */
void nsDOMEvent::InitEvent(const nsAString & eventTypeArg, bool canBubbleArg, bool cancelableArg)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean defaultPrevented; */
NS_IMETHODIMP nsDOMEvent::GetDefaultPrevented(bool *aDefaultPrevented)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void stopImmediatePropagation (); */
NS_IMETHODIMP nsDOMEvent::StopImmediatePropagation()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMEventTarget originalTarget; */
NS_IMETHODIMP nsDOMEvent::GetOriginalTarget(nsIDOMEventTarget * *aOriginalTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMEventTarget explicitOriginalTarget; */
NS_IMETHODIMP nsDOMEvent::GetExplicitOriginalTarget(nsIDOMEventTarget * *aExplicitOriginalTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean getPreventDefault (); */
NS_IMETHODIMP nsDOMEvent::GetPreventDefault(bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isTrusted; */
NS_IMETHODIMP nsDOMEvent::GetIsTrusted(bool *aIsTrusted)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean cancelBubble; */
NS_IMETHODIMP nsDOMEvent::GetCancelBubble(bool *aCancelBubble)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMEvent::SetCancelBubble(bool aCancelBubble)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void duplicatePrivateData (); */
NS_IMETHODIMP nsDOMEvent::DuplicatePrivateData()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void setTarget (in nsIDOMEventTarget aTarget); */
NS_IMETHODIMP nsDOMEvent::SetTarget(nsIDOMEventTarget *aTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [notxpcom] boolean IsDispatchStopped (); */
NS_IMETHODIMP_(bool) nsDOMEvent::IsDispatchStopped()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [notxpcom] WidgetEvent WidgetEventPtr (); */
NS_IMETHODIMP_(mozilla::WidgetEvent *) nsDOMEvent::WidgetEventPtr()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] void SetTrusted (in boolean aTrusted); */
NS_IMETHODIMP_(void) nsDOMEvent::SetTrusted(bool aTrusted)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [notxpcom] void Serialize (in IPCMessagePtr aMsg, in boolean aSerializeInterfaceType); */
NS_IMETHODIMP_(void) nsDOMEvent::Serialize(IPC::Message *aMsg, bool aSerializeInterfaceType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [notxpcom] boolean Deserialize (in ConstIPCMessagePtr aMsg, in PickleIterator aIter); */
NS_IMETHODIMP_(bool) nsDOMEvent::Deserialize(const IPC::Message *aMsg, PickleIterator *aIter)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] void SetOwner (in EventTargetPtr aOwner); */
NS_IMETHODIMP_(void) nsDOMEvent::SetOwner(mozilla::dom::EventTarget *aOwner)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [notxpcom] DOMEventPtr InternalDOMEvent (); */
NS_IMETHODIMP_(mozilla::dom::Event *) nsDOMEvent::InternalDOMEvent()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void stopCrossProcessForwarding (); */
NS_IMETHODIMP nsDOMEvent::StopCrossProcessForwarding()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMEvent_h__ */
