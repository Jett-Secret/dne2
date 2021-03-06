/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl\nsIDocShellLoadInfo.idl
 */

#ifndef __gen_nsIDocShellLoadInfo_h__
#define __gen_nsIDocShellLoadInfo_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsIInputStream; /* forward declaration */

class nsISHEntry; /* forward declaration */

class nsIDocShell; /* forward declaration */

class nsIPrincipal; /* forward declaration */

typedef int32_t  nsDocShellInfoLoadType;

typedef uint32_t  nsDocShellInfoReferrerPolicy;


/* starting interface:    nsIDocShellLoadInfo */
#define NS_IDOCSHELLLOADINFO_IID_STR "e7570e5a-f1d6-452d-b4f8-b35fdc63aa03"

#define NS_IDOCSHELLLOADINFO_IID \
  {0xe7570e5a, 0xf1d6, 0x452d, \
    { 0xb4, 0xf8, 0xb3, 0x5f, 0xdc, 0x63, 0xaa, 0x03 }}

class NS_NO_VTABLE nsIDocShellLoadInfo : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOCSHELLLOADINFO_IID)

  /* attribute nsIURI referrer; */
  NS_IMETHOD GetReferrer(nsIURI * *aReferrer) = 0;
  NS_IMETHOD SetReferrer(nsIURI *aReferrer) = 0;

  /* attribute nsIURI originalURI; */
  NS_IMETHOD GetOriginalURI(nsIURI * *aOriginalURI) = 0;
  NS_IMETHOD SetOriginalURI(nsIURI *aOriginalURI) = 0;

  /* attribute boolean loadReplace; */
  NS_IMETHOD GetLoadReplace(bool *aLoadReplace) = 0;
  NS_IMETHOD SetLoadReplace(bool aLoadReplace) = 0;

  /* attribute nsIPrincipal triggeringPrincipal; */
  NS_IMETHOD GetTriggeringPrincipal(nsIPrincipal * *aTriggeringPrincipal) = 0;
  NS_IMETHOD SetTriggeringPrincipal(nsIPrincipal *aTriggeringPrincipal) = 0;

  /* attribute boolean inheritPrincipal; */
  NS_IMETHOD GetInheritPrincipal(bool *aInheritPrincipal) = 0;
  NS_IMETHOD SetInheritPrincipal(bool aInheritPrincipal) = 0;

  /* attribute boolean principalIsExplicit; */
  NS_IMETHOD GetPrincipalIsExplicit(bool *aPrincipalIsExplicit) = 0;
  NS_IMETHOD SetPrincipalIsExplicit(bool aPrincipalIsExplicit) = 0;

  /* attribute boolean forceAllowDataURI; */
  NS_IMETHOD GetForceAllowDataURI(bool *aForceAllowDataURI) = 0;
  NS_IMETHOD SetForceAllowDataURI(bool aForceAllowDataURI) = 0;

  enum {
    loadNormal = 0,
    loadNormalReplace = 1,
    loadHistory = 2,
    loadReloadNormal = 3,
    loadReloadBypassCache = 4,
    loadReloadBypassProxy = 5,
    loadReloadBypassProxyAndCache = 6,
    loadLink = 7,
    loadRefresh = 8,
    loadReloadCharsetChange = 9,
    loadBypassHistory = 10,
    loadStopContent = 11,
    loadStopContentAndReplace = 12,
    loadNormalExternal = 13,
    loadNormalBypassCache = 14,
    loadNormalBypassProxy = 15,
    loadNormalBypassProxyAndCache = 16,
    loadPushState = 17,
    loadReplaceBypassCache = 18,
    loadReloadMixedContent = 19,
    loadNormalAllowMixedContent = 20
  };

  /* attribute nsDocShellInfoLoadType loadType; */
  NS_IMETHOD GetLoadType(nsDocShellInfoLoadType *aLoadType) = 0;
  NS_IMETHOD SetLoadType(nsDocShellInfoLoadType aLoadType) = 0;

  /* attribute nsISHEntry SHEntry; */
  NS_IMETHOD GetSHEntry(nsISHEntry * *aSHEntry) = 0;
  NS_IMETHOD SetSHEntry(nsISHEntry *aSHEntry) = 0;

  /* attribute wstring target; */
  NS_IMETHOD GetTarget(char16_t * *aTarget) = 0;
  NS_IMETHOD SetTarget(const char16_t * aTarget) = 0;

  /* attribute nsIInputStream postDataStream; */
  NS_IMETHOD GetPostDataStream(nsIInputStream * *aPostDataStream) = 0;
  NS_IMETHOD SetPostDataStream(nsIInputStream *aPostDataStream) = 0;

  /* attribute nsIInputStream headersStream; */
  NS_IMETHOD GetHeadersStream(nsIInputStream * *aHeadersStream) = 0;
  NS_IMETHOD SetHeadersStream(nsIInputStream *aHeadersStream) = 0;

  /* attribute boolean sendReferrer; */
  NS_IMETHOD GetSendReferrer(bool *aSendReferrer) = 0;
  NS_IMETHOD SetSendReferrer(bool aSendReferrer) = 0;

  /* attribute nsDocShellInfoReferrerPolicy referrerPolicy; */
  NS_IMETHOD GetReferrerPolicy(nsDocShellInfoReferrerPolicy *aReferrerPolicy) = 0;
  NS_IMETHOD SetReferrerPolicy(nsDocShellInfoReferrerPolicy aReferrerPolicy) = 0;

  /* readonly attribute boolean isSrcdocLoad; */
  NS_IMETHOD GetIsSrcdocLoad(bool *aIsSrcdocLoad) = 0;

  /* attribute AString srcdocData; */
  NS_IMETHOD GetSrcdocData(nsAString & aSrcdocData) = 0;
  NS_IMETHOD SetSrcdocData(const nsAString & aSrcdocData) = 0;

  /* attribute nsIDocShell sourceDocShell; */
  NS_IMETHOD GetSourceDocShell(nsIDocShell * *aSourceDocShell) = 0;
  NS_IMETHOD SetSourceDocShell(nsIDocShell *aSourceDocShell) = 0;

  /* attribute nsIURI baseURI; */
  NS_IMETHOD GetBaseURI(nsIURI * *aBaseURI) = 0;
  NS_IMETHOD SetBaseURI(nsIURI *aBaseURI) = 0;

  /* attribute boolean isFromProcessingFrameAttributes; */
  NS_IMETHOD GetIsFromProcessingFrameAttributes(bool *aIsFromProcessingFrameAttributes) = 0;
  NS_IMETHOD SetIsFromProcessingFrameAttributes(bool aIsFromProcessingFrameAttributes) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDocShellLoadInfo, NS_IDOCSHELLLOADINFO_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOCSHELLLOADINFO \
  NS_IMETHOD GetReferrer(nsIURI * *aReferrer) override; \
  NS_IMETHOD SetReferrer(nsIURI *aReferrer) override; \
  NS_IMETHOD GetOriginalURI(nsIURI * *aOriginalURI) override; \
  NS_IMETHOD SetOriginalURI(nsIURI *aOriginalURI) override; \
  NS_IMETHOD GetLoadReplace(bool *aLoadReplace) override; \
  NS_IMETHOD SetLoadReplace(bool aLoadReplace) override; \
  NS_IMETHOD GetTriggeringPrincipal(nsIPrincipal * *aTriggeringPrincipal) override; \
  NS_IMETHOD SetTriggeringPrincipal(nsIPrincipal *aTriggeringPrincipal) override; \
  NS_IMETHOD GetInheritPrincipal(bool *aInheritPrincipal) override; \
  NS_IMETHOD SetInheritPrincipal(bool aInheritPrincipal) override; \
  NS_IMETHOD GetPrincipalIsExplicit(bool *aPrincipalIsExplicit) override; \
  NS_IMETHOD SetPrincipalIsExplicit(bool aPrincipalIsExplicit) override; \
  NS_IMETHOD GetForceAllowDataURI(bool *aForceAllowDataURI) override; \
  NS_IMETHOD SetForceAllowDataURI(bool aForceAllowDataURI) override; \
  NS_IMETHOD GetLoadType(nsDocShellInfoLoadType *aLoadType) override; \
  NS_IMETHOD SetLoadType(nsDocShellInfoLoadType aLoadType) override; \
  NS_IMETHOD GetSHEntry(nsISHEntry * *aSHEntry) override; \
  NS_IMETHOD SetSHEntry(nsISHEntry *aSHEntry) override; \
  NS_IMETHOD GetTarget(char16_t * *aTarget) override; \
  NS_IMETHOD SetTarget(const char16_t * aTarget) override; \
  NS_IMETHOD GetPostDataStream(nsIInputStream * *aPostDataStream) override; \
  NS_IMETHOD SetPostDataStream(nsIInputStream *aPostDataStream) override; \
  NS_IMETHOD GetHeadersStream(nsIInputStream * *aHeadersStream) override; \
  NS_IMETHOD SetHeadersStream(nsIInputStream *aHeadersStream) override; \
  NS_IMETHOD GetSendReferrer(bool *aSendReferrer) override; \
  NS_IMETHOD SetSendReferrer(bool aSendReferrer) override; \
  NS_IMETHOD GetReferrerPolicy(nsDocShellInfoReferrerPolicy *aReferrerPolicy) override; \
  NS_IMETHOD SetReferrerPolicy(nsDocShellInfoReferrerPolicy aReferrerPolicy) override; \
  NS_IMETHOD GetIsSrcdocLoad(bool *aIsSrcdocLoad) override; \
  NS_IMETHOD GetSrcdocData(nsAString & aSrcdocData) override; \
  NS_IMETHOD SetSrcdocData(const nsAString & aSrcdocData) override; \
  NS_IMETHOD GetSourceDocShell(nsIDocShell * *aSourceDocShell) override; \
  NS_IMETHOD SetSourceDocShell(nsIDocShell *aSourceDocShell) override; \
  NS_IMETHOD GetBaseURI(nsIURI * *aBaseURI) override; \
  NS_IMETHOD SetBaseURI(nsIURI *aBaseURI) override; \
  NS_IMETHOD GetIsFromProcessingFrameAttributes(bool *aIsFromProcessingFrameAttributes) override; \
  NS_IMETHOD SetIsFromProcessingFrameAttributes(bool aIsFromProcessingFrameAttributes) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIDOCSHELLLOADINFO \
  NS_METHOD GetReferrer(nsIURI * *aReferrer); \
  NS_METHOD SetReferrer(nsIURI *aReferrer); \
  NS_METHOD GetOriginalURI(nsIURI * *aOriginalURI); \
  NS_METHOD SetOriginalURI(nsIURI *aOriginalURI); \
  NS_METHOD GetLoadReplace(bool *aLoadReplace); \
  NS_METHOD SetLoadReplace(bool aLoadReplace); \
  NS_METHOD GetTriggeringPrincipal(nsIPrincipal * *aTriggeringPrincipal); \
  NS_METHOD SetTriggeringPrincipal(nsIPrincipal *aTriggeringPrincipal); \
  NS_METHOD GetInheritPrincipal(bool *aInheritPrincipal); \
  NS_METHOD SetInheritPrincipal(bool aInheritPrincipal); \
  NS_METHOD GetPrincipalIsExplicit(bool *aPrincipalIsExplicit); \
  NS_METHOD SetPrincipalIsExplicit(bool aPrincipalIsExplicit); \
  NS_METHOD GetForceAllowDataURI(bool *aForceAllowDataURI); \
  NS_METHOD SetForceAllowDataURI(bool aForceAllowDataURI); \
  NS_METHOD GetLoadType(nsDocShellInfoLoadType *aLoadType); \
  NS_METHOD SetLoadType(nsDocShellInfoLoadType aLoadType); \
  NS_METHOD GetSHEntry(nsISHEntry * *aSHEntry); \
  NS_METHOD SetSHEntry(nsISHEntry *aSHEntry); \
  NS_METHOD GetTarget(char16_t * *aTarget); \
  NS_METHOD SetTarget(const char16_t * aTarget); \
  NS_METHOD GetPostDataStream(nsIInputStream * *aPostDataStream); \
  NS_METHOD SetPostDataStream(nsIInputStream *aPostDataStream); \
  NS_METHOD GetHeadersStream(nsIInputStream * *aHeadersStream); \
  NS_METHOD SetHeadersStream(nsIInputStream *aHeadersStream); \
  NS_METHOD GetSendReferrer(bool *aSendReferrer); \
  NS_METHOD SetSendReferrer(bool aSendReferrer); \
  NS_METHOD GetReferrerPolicy(nsDocShellInfoReferrerPolicy *aReferrerPolicy); \
  NS_METHOD SetReferrerPolicy(nsDocShellInfoReferrerPolicy aReferrerPolicy); \
  NS_METHOD GetIsSrcdocLoad(bool *aIsSrcdocLoad); \
  NS_METHOD GetSrcdocData(nsAString & aSrcdocData); \
  NS_METHOD SetSrcdocData(const nsAString & aSrcdocData); \
  NS_METHOD GetSourceDocShell(nsIDocShell * *aSourceDocShell); \
  NS_METHOD SetSourceDocShell(nsIDocShell *aSourceDocShell); \
  NS_METHOD GetBaseURI(nsIURI * *aBaseURI); \
  NS_METHOD SetBaseURI(nsIURI *aBaseURI); \
  NS_METHOD GetIsFromProcessingFrameAttributes(bool *aIsFromProcessingFrameAttributes); \
  NS_METHOD SetIsFromProcessingFrameAttributes(bool aIsFromProcessingFrameAttributes); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOCSHELLLOADINFO(_to) \
  NS_IMETHOD GetReferrer(nsIURI * *aReferrer) override { return _to GetReferrer(aReferrer); } \
  NS_IMETHOD SetReferrer(nsIURI *aReferrer) override { return _to SetReferrer(aReferrer); } \
  NS_IMETHOD GetOriginalURI(nsIURI * *aOriginalURI) override { return _to GetOriginalURI(aOriginalURI); } \
  NS_IMETHOD SetOriginalURI(nsIURI *aOriginalURI) override { return _to SetOriginalURI(aOriginalURI); } \
  NS_IMETHOD GetLoadReplace(bool *aLoadReplace) override { return _to GetLoadReplace(aLoadReplace); } \
  NS_IMETHOD SetLoadReplace(bool aLoadReplace) override { return _to SetLoadReplace(aLoadReplace); } \
  NS_IMETHOD GetTriggeringPrincipal(nsIPrincipal * *aTriggeringPrincipal) override { return _to GetTriggeringPrincipal(aTriggeringPrincipal); } \
  NS_IMETHOD SetTriggeringPrincipal(nsIPrincipal *aTriggeringPrincipal) override { return _to SetTriggeringPrincipal(aTriggeringPrincipal); } \
  NS_IMETHOD GetInheritPrincipal(bool *aInheritPrincipal) override { return _to GetInheritPrincipal(aInheritPrincipal); } \
  NS_IMETHOD SetInheritPrincipal(bool aInheritPrincipal) override { return _to SetInheritPrincipal(aInheritPrincipal); } \
  NS_IMETHOD GetPrincipalIsExplicit(bool *aPrincipalIsExplicit) override { return _to GetPrincipalIsExplicit(aPrincipalIsExplicit); } \
  NS_IMETHOD SetPrincipalIsExplicit(bool aPrincipalIsExplicit) override { return _to SetPrincipalIsExplicit(aPrincipalIsExplicit); } \
  NS_IMETHOD GetForceAllowDataURI(bool *aForceAllowDataURI) override { return _to GetForceAllowDataURI(aForceAllowDataURI); } \
  NS_IMETHOD SetForceAllowDataURI(bool aForceAllowDataURI) override { return _to SetForceAllowDataURI(aForceAllowDataURI); } \
  NS_IMETHOD GetLoadType(nsDocShellInfoLoadType *aLoadType) override { return _to GetLoadType(aLoadType); } \
  NS_IMETHOD SetLoadType(nsDocShellInfoLoadType aLoadType) override { return _to SetLoadType(aLoadType); } \
  NS_IMETHOD GetSHEntry(nsISHEntry * *aSHEntry) override { return _to GetSHEntry(aSHEntry); } \
  NS_IMETHOD SetSHEntry(nsISHEntry *aSHEntry) override { return _to SetSHEntry(aSHEntry); } \
  NS_IMETHOD GetTarget(char16_t * *aTarget) override { return _to GetTarget(aTarget); } \
  NS_IMETHOD SetTarget(const char16_t * aTarget) override { return _to SetTarget(aTarget); } \
  NS_IMETHOD GetPostDataStream(nsIInputStream * *aPostDataStream) override { return _to GetPostDataStream(aPostDataStream); } \
  NS_IMETHOD SetPostDataStream(nsIInputStream *aPostDataStream) override { return _to SetPostDataStream(aPostDataStream); } \
  NS_IMETHOD GetHeadersStream(nsIInputStream * *aHeadersStream) override { return _to GetHeadersStream(aHeadersStream); } \
  NS_IMETHOD SetHeadersStream(nsIInputStream *aHeadersStream) override { return _to SetHeadersStream(aHeadersStream); } \
  NS_IMETHOD GetSendReferrer(bool *aSendReferrer) override { return _to GetSendReferrer(aSendReferrer); } \
  NS_IMETHOD SetSendReferrer(bool aSendReferrer) override { return _to SetSendReferrer(aSendReferrer); } \
  NS_IMETHOD GetReferrerPolicy(nsDocShellInfoReferrerPolicy *aReferrerPolicy) override { return _to GetReferrerPolicy(aReferrerPolicy); } \
  NS_IMETHOD SetReferrerPolicy(nsDocShellInfoReferrerPolicy aReferrerPolicy) override { return _to SetReferrerPolicy(aReferrerPolicy); } \
  NS_IMETHOD GetIsSrcdocLoad(bool *aIsSrcdocLoad) override { return _to GetIsSrcdocLoad(aIsSrcdocLoad); } \
  NS_IMETHOD GetSrcdocData(nsAString & aSrcdocData) override { return _to GetSrcdocData(aSrcdocData); } \
  NS_IMETHOD SetSrcdocData(const nsAString & aSrcdocData) override { return _to SetSrcdocData(aSrcdocData); } \
  NS_IMETHOD GetSourceDocShell(nsIDocShell * *aSourceDocShell) override { return _to GetSourceDocShell(aSourceDocShell); } \
  NS_IMETHOD SetSourceDocShell(nsIDocShell *aSourceDocShell) override { return _to SetSourceDocShell(aSourceDocShell); } \
  NS_IMETHOD GetBaseURI(nsIURI * *aBaseURI) override { return _to GetBaseURI(aBaseURI); } \
  NS_IMETHOD SetBaseURI(nsIURI *aBaseURI) override { return _to SetBaseURI(aBaseURI); } \
  NS_IMETHOD GetIsFromProcessingFrameAttributes(bool *aIsFromProcessingFrameAttributes) override { return _to GetIsFromProcessingFrameAttributes(aIsFromProcessingFrameAttributes); } \
  NS_IMETHOD SetIsFromProcessingFrameAttributes(bool aIsFromProcessingFrameAttributes) override { return _to SetIsFromProcessingFrameAttributes(aIsFromProcessingFrameAttributes); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOCSHELLLOADINFO(_to) \
  NS_IMETHOD GetReferrer(nsIURI * *aReferrer) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReferrer(aReferrer); } \
  NS_IMETHOD SetReferrer(nsIURI *aReferrer) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetReferrer(aReferrer); } \
  NS_IMETHOD GetOriginalURI(nsIURI * *aOriginalURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOriginalURI(aOriginalURI); } \
  NS_IMETHOD SetOriginalURI(nsIURI *aOriginalURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOriginalURI(aOriginalURI); } \
  NS_IMETHOD GetLoadReplace(bool *aLoadReplace) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLoadReplace(aLoadReplace); } \
  NS_IMETHOD SetLoadReplace(bool aLoadReplace) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLoadReplace(aLoadReplace); } \
  NS_IMETHOD GetTriggeringPrincipal(nsIPrincipal * *aTriggeringPrincipal) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTriggeringPrincipal(aTriggeringPrincipal); } \
  NS_IMETHOD SetTriggeringPrincipal(nsIPrincipal *aTriggeringPrincipal) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTriggeringPrincipal(aTriggeringPrincipal); } \
  NS_IMETHOD GetInheritPrincipal(bool *aInheritPrincipal) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInheritPrincipal(aInheritPrincipal); } \
  NS_IMETHOD SetInheritPrincipal(bool aInheritPrincipal) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetInheritPrincipal(aInheritPrincipal); } \
  NS_IMETHOD GetPrincipalIsExplicit(bool *aPrincipalIsExplicit) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrincipalIsExplicit(aPrincipalIsExplicit); } \
  NS_IMETHOD SetPrincipalIsExplicit(bool aPrincipalIsExplicit) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPrincipalIsExplicit(aPrincipalIsExplicit); } \
  NS_IMETHOD GetForceAllowDataURI(bool *aForceAllowDataURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetForceAllowDataURI(aForceAllowDataURI); } \
  NS_IMETHOD SetForceAllowDataURI(bool aForceAllowDataURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetForceAllowDataURI(aForceAllowDataURI); } \
  NS_IMETHOD GetLoadType(nsDocShellInfoLoadType *aLoadType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLoadType(aLoadType); } \
  NS_IMETHOD SetLoadType(nsDocShellInfoLoadType aLoadType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLoadType(aLoadType); } \
  NS_IMETHOD GetSHEntry(nsISHEntry * *aSHEntry) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSHEntry(aSHEntry); } \
  NS_IMETHOD SetSHEntry(nsISHEntry *aSHEntry) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSHEntry(aSHEntry); } \
  NS_IMETHOD GetTarget(char16_t * *aTarget) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTarget(aTarget); } \
  NS_IMETHOD SetTarget(const char16_t * aTarget) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTarget(aTarget); } \
  NS_IMETHOD GetPostDataStream(nsIInputStream * *aPostDataStream) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPostDataStream(aPostDataStream); } \
  NS_IMETHOD SetPostDataStream(nsIInputStream *aPostDataStream) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPostDataStream(aPostDataStream); } \
  NS_IMETHOD GetHeadersStream(nsIInputStream * *aHeadersStream) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHeadersStream(aHeadersStream); } \
  NS_IMETHOD SetHeadersStream(nsIInputStream *aHeadersStream) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHeadersStream(aHeadersStream); } \
  NS_IMETHOD GetSendReferrer(bool *aSendReferrer) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSendReferrer(aSendReferrer); } \
  NS_IMETHOD SetSendReferrer(bool aSendReferrer) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSendReferrer(aSendReferrer); } \
  NS_IMETHOD GetReferrerPolicy(nsDocShellInfoReferrerPolicy *aReferrerPolicy) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReferrerPolicy(aReferrerPolicy); } \
  NS_IMETHOD SetReferrerPolicy(nsDocShellInfoReferrerPolicy aReferrerPolicy) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetReferrerPolicy(aReferrerPolicy); } \
  NS_IMETHOD GetIsSrcdocLoad(bool *aIsSrcdocLoad) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsSrcdocLoad(aIsSrcdocLoad); } \
  NS_IMETHOD GetSrcdocData(nsAString & aSrcdocData) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSrcdocData(aSrcdocData); } \
  NS_IMETHOD SetSrcdocData(const nsAString & aSrcdocData) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSrcdocData(aSrcdocData); } \
  NS_IMETHOD GetSourceDocShell(nsIDocShell * *aSourceDocShell) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSourceDocShell(aSourceDocShell); } \
  NS_IMETHOD SetSourceDocShell(nsIDocShell *aSourceDocShell) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSourceDocShell(aSourceDocShell); } \
  NS_IMETHOD GetBaseURI(nsIURI * *aBaseURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBaseURI(aBaseURI); } \
  NS_IMETHOD SetBaseURI(nsIURI *aBaseURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBaseURI(aBaseURI); } \
  NS_IMETHOD GetIsFromProcessingFrameAttributes(bool *aIsFromProcessingFrameAttributes) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsFromProcessingFrameAttributes(aIsFromProcessingFrameAttributes); } \
  NS_IMETHOD SetIsFromProcessingFrameAttributes(bool aIsFromProcessingFrameAttributes) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIsFromProcessingFrameAttributes(aIsFromProcessingFrameAttributes); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDocShellLoadInfo : public nsIDocShellLoadInfo
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOCSHELLLOADINFO

  nsDocShellLoadInfo();

private:
  ~nsDocShellLoadInfo();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDocShellLoadInfo, nsIDocShellLoadInfo)

nsDocShellLoadInfo::nsDocShellLoadInfo()
{
  /* member initializers and constructor code */
}

nsDocShellLoadInfo::~nsDocShellLoadInfo()
{
  /* destructor code */
}

/* attribute nsIURI referrer; */
NS_IMETHODIMP nsDocShellLoadInfo::GetReferrer(nsIURI * *aReferrer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShellLoadInfo::SetReferrer(nsIURI *aReferrer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIURI originalURI; */
NS_IMETHODIMP nsDocShellLoadInfo::GetOriginalURI(nsIURI * *aOriginalURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShellLoadInfo::SetOriginalURI(nsIURI *aOriginalURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean loadReplace; */
NS_IMETHODIMP nsDocShellLoadInfo::GetLoadReplace(bool *aLoadReplace)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShellLoadInfo::SetLoadReplace(bool aLoadReplace)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIPrincipal triggeringPrincipal; */
NS_IMETHODIMP nsDocShellLoadInfo::GetTriggeringPrincipal(nsIPrincipal * *aTriggeringPrincipal)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShellLoadInfo::SetTriggeringPrincipal(nsIPrincipal *aTriggeringPrincipal)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean inheritPrincipal; */
NS_IMETHODIMP nsDocShellLoadInfo::GetInheritPrincipal(bool *aInheritPrincipal)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShellLoadInfo::SetInheritPrincipal(bool aInheritPrincipal)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean principalIsExplicit; */
NS_IMETHODIMP nsDocShellLoadInfo::GetPrincipalIsExplicit(bool *aPrincipalIsExplicit)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShellLoadInfo::SetPrincipalIsExplicit(bool aPrincipalIsExplicit)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean forceAllowDataURI; */
NS_IMETHODIMP nsDocShellLoadInfo::GetForceAllowDataURI(bool *aForceAllowDataURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShellLoadInfo::SetForceAllowDataURI(bool aForceAllowDataURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsDocShellInfoLoadType loadType; */
NS_IMETHODIMP nsDocShellLoadInfo::GetLoadType(nsDocShellInfoLoadType *aLoadType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShellLoadInfo::SetLoadType(nsDocShellInfoLoadType aLoadType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISHEntry SHEntry; */
NS_IMETHODIMP nsDocShellLoadInfo::GetSHEntry(nsISHEntry * *aSHEntry)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShellLoadInfo::SetSHEntry(nsISHEntry *aSHEntry)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute wstring target; */
NS_IMETHODIMP nsDocShellLoadInfo::GetTarget(char16_t * *aTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShellLoadInfo::SetTarget(const char16_t * aTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIInputStream postDataStream; */
NS_IMETHODIMP nsDocShellLoadInfo::GetPostDataStream(nsIInputStream * *aPostDataStream)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShellLoadInfo::SetPostDataStream(nsIInputStream *aPostDataStream)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIInputStream headersStream; */
NS_IMETHODIMP nsDocShellLoadInfo::GetHeadersStream(nsIInputStream * *aHeadersStream)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShellLoadInfo::SetHeadersStream(nsIInputStream *aHeadersStream)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean sendReferrer; */
NS_IMETHODIMP nsDocShellLoadInfo::GetSendReferrer(bool *aSendReferrer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShellLoadInfo::SetSendReferrer(bool aSendReferrer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsDocShellInfoReferrerPolicy referrerPolicy; */
NS_IMETHODIMP nsDocShellLoadInfo::GetReferrerPolicy(nsDocShellInfoReferrerPolicy *aReferrerPolicy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShellLoadInfo::SetReferrerPolicy(nsDocShellInfoReferrerPolicy aReferrerPolicy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isSrcdocLoad; */
NS_IMETHODIMP nsDocShellLoadInfo::GetIsSrcdocLoad(bool *aIsSrcdocLoad)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AString srcdocData; */
NS_IMETHODIMP nsDocShellLoadInfo::GetSrcdocData(nsAString & aSrcdocData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShellLoadInfo::SetSrcdocData(const nsAString & aSrcdocData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDocShell sourceDocShell; */
NS_IMETHODIMP nsDocShellLoadInfo::GetSourceDocShell(nsIDocShell * *aSourceDocShell)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShellLoadInfo::SetSourceDocShell(nsIDocShell *aSourceDocShell)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIURI baseURI; */
NS_IMETHODIMP nsDocShellLoadInfo::GetBaseURI(nsIURI * *aBaseURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShellLoadInfo::SetBaseURI(nsIURI *aBaseURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean isFromProcessingFrameAttributes; */
NS_IMETHODIMP nsDocShellLoadInfo::GetIsFromProcessingFrameAttributes(bool *aIsFromProcessingFrameAttributes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShellLoadInfo::SetIsFromProcessingFrameAttributes(bool aIsFromProcessingFrameAttributes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDocShellLoadInfo_h__ */
