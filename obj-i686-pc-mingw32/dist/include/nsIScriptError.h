/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl\nsIScriptError.idl
 */

#ifndef __gen_nsIScriptError_h__
#define __gen_nsIScriptError_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIArray_h__
#include "nsIArray.h"
#endif

#ifndef __gen_nsIConsoleMessage_h__
#include "nsIConsoleMessage.h"
#endif

#include "js/Value.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
#include "nsStringGlue.h" // for nsDependentCString

/* starting interface:    nsIScriptErrorNote */
#define NS_ISCRIPTERRORNOTE_IID_STR "e8933fc9-c302-4e12-a55b-4f88611d9c6c"

#define NS_ISCRIPTERRORNOTE_IID \
  {0xe8933fc9, 0xc302, 0x4e12, \
    { 0xa5, 0x5b, 0x4f, 0x88, 0x61, 0x1d, 0x9c, 0x6c }}

class NS_NO_VTABLE nsIScriptErrorNote : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISCRIPTERRORNOTE_IID)

  /* readonly attribute AString errorMessage; */
  NS_IMETHOD GetErrorMessage(nsAString & aErrorMessage) = 0;

  /* readonly attribute AString sourceName; */
  NS_IMETHOD GetSourceName(nsAString & aSourceName) = 0;

  /* readonly attribute uint32_t lineNumber; */
  NS_IMETHOD GetLineNumber(uint32_t *aLineNumber) = 0;

  /* readonly attribute uint32_t columnNumber; */
  NS_IMETHOD GetColumnNumber(uint32_t *aColumnNumber) = 0;

  /* AUTF8String toString (); */
  NS_IMETHOD ToString(nsACString & _retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIScriptErrorNote, NS_ISCRIPTERRORNOTE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISCRIPTERRORNOTE \
  NS_IMETHOD GetErrorMessage(nsAString & aErrorMessage) override; \
  NS_IMETHOD GetSourceName(nsAString & aSourceName) override; \
  NS_IMETHOD GetLineNumber(uint32_t *aLineNumber) override; \
  NS_IMETHOD GetColumnNumber(uint32_t *aColumnNumber) override; \
  NS_IMETHOD ToString(nsACString & _retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSISCRIPTERRORNOTE \
  NS_METHOD GetErrorMessage(nsAString & aErrorMessage); \
  NS_METHOD GetSourceName(nsAString & aSourceName); \
  NS_METHOD GetLineNumber(uint32_t *aLineNumber); \
  NS_METHOD GetColumnNumber(uint32_t *aColumnNumber); \
  NS_METHOD ToString(nsACString & _retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISCRIPTERRORNOTE(_to) \
  NS_IMETHOD GetErrorMessage(nsAString & aErrorMessage) override { return _to GetErrorMessage(aErrorMessage); } \
  NS_IMETHOD GetSourceName(nsAString & aSourceName) override { return _to GetSourceName(aSourceName); } \
  NS_IMETHOD GetLineNumber(uint32_t *aLineNumber) override { return _to GetLineNumber(aLineNumber); } \
  NS_IMETHOD GetColumnNumber(uint32_t *aColumnNumber) override { return _to GetColumnNumber(aColumnNumber); } \
  NS_IMETHOD ToString(nsACString & _retval) override { return _to ToString(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISCRIPTERRORNOTE(_to) \
  NS_IMETHOD GetErrorMessage(nsAString & aErrorMessage) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetErrorMessage(aErrorMessage); } \
  NS_IMETHOD GetSourceName(nsAString & aSourceName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSourceName(aSourceName); } \
  NS_IMETHOD GetLineNumber(uint32_t *aLineNumber) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLineNumber(aLineNumber); } \
  NS_IMETHOD GetColumnNumber(uint32_t *aColumnNumber) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetColumnNumber(aColumnNumber); } \
  NS_IMETHOD ToString(nsACString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ToString(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsScriptErrorNote : public nsIScriptErrorNote
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISCRIPTERRORNOTE

  nsScriptErrorNote();

private:
  ~nsScriptErrorNote();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsScriptErrorNote, nsIScriptErrorNote)

nsScriptErrorNote::nsScriptErrorNote()
{
  /* member initializers and constructor code */
}

nsScriptErrorNote::~nsScriptErrorNote()
{
  /* destructor code */
}

/* readonly attribute AString errorMessage; */
NS_IMETHODIMP nsScriptErrorNote::GetErrorMessage(nsAString & aErrorMessage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString sourceName; */
NS_IMETHODIMP nsScriptErrorNote::GetSourceName(nsAString & aSourceName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute uint32_t lineNumber; */
NS_IMETHODIMP nsScriptErrorNote::GetLineNumber(uint32_t *aLineNumber)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute uint32_t columnNumber; */
NS_IMETHODIMP nsScriptErrorNote::GetColumnNumber(uint32_t *aColumnNumber)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AUTF8String toString (); */
NS_IMETHODIMP nsScriptErrorNote::ToString(nsACString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIScriptError */
#define NS_ISCRIPTERROR_IID_STR "63eb4d3e-7d99-4150-b4f3-11314f9d82a9"

#define NS_ISCRIPTERROR_IID \
  {0x63eb4d3e, 0x7d99, 0x4150, \
    { 0xb4, 0xf3, 0x11, 0x31, 0x4f, 0x9d, 0x82, 0xa9 }}

class nsIScriptError : public nsIConsoleMessage {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISCRIPTERROR_IID)

  enum {
    errorFlag = 0U,
    warningFlag = 1U,
    exceptionFlag = 2U,
    strictFlag = 4U,
    infoFlag = 8U
  };

  /* readonly attribute AString errorMessage; */
  NS_IMETHOD GetErrorMessage(nsAString & aErrorMessage) = 0;

  /* readonly attribute AString sourceName; */
  NS_IMETHOD GetSourceName(nsAString & aSourceName) = 0;

  /* readonly attribute AString sourceLine; */
  NS_IMETHOD GetSourceLine(nsAString & aSourceLine) = 0;

  /* readonly attribute uint32_t lineNumber; */
  NS_IMETHOD GetLineNumber(uint32_t *aLineNumber) = 0;

  /* readonly attribute uint32_t columnNumber; */
  NS_IMETHOD GetColumnNumber(uint32_t *aColumnNumber) = 0;

  /* readonly attribute uint32_t flags; */
  NS_IMETHOD GetFlags(uint32_t *aFlags) = 0;

  /* readonly attribute string category; */
  NS_IMETHOD GetCategory(char * *aCategory) = 0;

  /* readonly attribute unsigned long long outerWindowID; */
  NS_IMETHOD GetOuterWindowID(uint64_t *aOuterWindowID) = 0;

  /* readonly attribute unsigned long long innerWindowID; */
  NS_IMETHOD GetInnerWindowID(uint64_t *aInnerWindowID) = 0;

  /* readonly attribute boolean isFromPrivateWindow; */
  NS_IMETHOD GetIsFromPrivateWindow(bool *aIsFromPrivateWindow) = 0;

  /* attribute jsval stack; */
  NS_IMETHOD GetStack(JS::MutableHandleValue aStack) = 0;
  NS_IMETHOD SetStack(JS::HandleValue aStack) = 0;

  /* attribute AString errorMessageName; */
  NS_IMETHOD GetErrorMessageName(nsAString & aErrorMessageName) = 0;
  NS_IMETHOD SetErrorMessageName(const nsAString & aErrorMessageName) = 0;

  /* readonly attribute nsIArray notes; */
  NS_IMETHOD GetNotes(nsIArray * *aNotes) = 0;

  /* void init (in AString message, in AString sourceName, in AString sourceLine, in uint32_t lineNumber, in uint32_t columnNumber, in uint32_t flags, in string category); */
  NS_IMETHOD Init(const nsAString & message, const nsAString & sourceName, const nsAString & sourceLine, uint32_t lineNumber, uint32_t columnNumber, uint32_t flags, const char * category) = 0;

  /* void initWithWindowID (in AString message, in AString sourceName, in AString sourceLine, in uint32_t lineNumber, in uint32_t columnNumber, in uint32_t flags, in ACString category, in unsigned long long innerWindowID); */
  NS_IMETHOD InitWithWindowID(const nsAString & message, const nsAString & sourceName, const nsAString & sourceLine, uint32_t lineNumber, uint32_t columnNumber, uint32_t flags, const nsACString & category, uint64_t innerWindowID) = 0;

     // This overload allows passing a literal string for category.
    template<uint32_t N>
    nsresult InitWithWindowID(const nsAString& message,
                              const nsAString& sourceName,
                              const nsAString& sourceLine,
                              uint32_t lineNumber,
                              uint32_t columnNumber,
                              uint32_t flags,
                              const char (&c)[N],
                              uint64_t aInnerWindowID)
    {
        nsDependentCString category(c, N - 1);
        return InitWithWindowID(message, sourceName, sourceLine, lineNumber,
                                columnNumber, flags, category, aInnerWindowID);
    }
};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIScriptError, NS_ISCRIPTERROR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISCRIPTERROR \
  NS_IMETHOD GetErrorMessage(nsAString & aErrorMessage) override; \
  NS_IMETHOD GetSourceName(nsAString & aSourceName) override; \
  NS_IMETHOD GetSourceLine(nsAString & aSourceLine) override; \
  NS_IMETHOD GetLineNumber(uint32_t *aLineNumber) override; \
  NS_IMETHOD GetColumnNumber(uint32_t *aColumnNumber) override; \
  NS_IMETHOD GetFlags(uint32_t *aFlags) override; \
  NS_IMETHOD GetCategory(char * *aCategory) override; \
  NS_IMETHOD GetOuterWindowID(uint64_t *aOuterWindowID) override; \
  NS_IMETHOD GetInnerWindowID(uint64_t *aInnerWindowID) override; \
  NS_IMETHOD GetIsFromPrivateWindow(bool *aIsFromPrivateWindow) override; \
  NS_IMETHOD GetStack(JS::MutableHandleValue aStack) override; \
  NS_IMETHOD SetStack(JS::HandleValue aStack) override; \
  NS_IMETHOD GetErrorMessageName(nsAString & aErrorMessageName) override; \
  NS_IMETHOD SetErrorMessageName(const nsAString & aErrorMessageName) override; \
  NS_IMETHOD GetNotes(nsIArray * *aNotes) override; \
  NS_IMETHOD Init(const nsAString & message, const nsAString & sourceName, const nsAString & sourceLine, uint32_t lineNumber, uint32_t columnNumber, uint32_t flags, const char * category) override; \
  NS_IMETHOD InitWithWindowID(const nsAString & message, const nsAString & sourceName, const nsAString & sourceLine, uint32_t lineNumber, uint32_t columnNumber, uint32_t flags, const nsACString & category, uint64_t innerWindowID) override; \

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSISCRIPTERROR \
  NS_METHOD GetErrorMessage(nsAString & aErrorMessage); \
  NS_METHOD GetSourceName(nsAString & aSourceName); \
  NS_METHOD GetSourceLine(nsAString & aSourceLine); \
  NS_METHOD GetLineNumber(uint32_t *aLineNumber); \
  NS_METHOD GetColumnNumber(uint32_t *aColumnNumber); \
  NS_METHOD GetFlags(uint32_t *aFlags); \
  NS_METHOD GetCategory(char * *aCategory); \
  NS_METHOD GetOuterWindowID(uint64_t *aOuterWindowID); \
  NS_METHOD GetInnerWindowID(uint64_t *aInnerWindowID); \
  NS_METHOD GetIsFromPrivateWindow(bool *aIsFromPrivateWindow); \
  NS_METHOD GetStack(JS::MutableHandleValue aStack); \
  NS_METHOD SetStack(JS::HandleValue aStack); \
  NS_METHOD GetErrorMessageName(nsAString & aErrorMessageName); \
  NS_METHOD SetErrorMessageName(const nsAString & aErrorMessageName); \
  NS_METHOD GetNotes(nsIArray * *aNotes); \
  NS_METHOD Init(const nsAString & message, const nsAString & sourceName, const nsAString & sourceLine, uint32_t lineNumber, uint32_t columnNumber, uint32_t flags, const char * category); \
  NS_METHOD InitWithWindowID(const nsAString & message, const nsAString & sourceName, const nsAString & sourceLine, uint32_t lineNumber, uint32_t columnNumber, uint32_t flags, const nsACString & category, uint64_t innerWindowID); \

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISCRIPTERROR(_to) \
  NS_IMETHOD GetErrorMessage(nsAString & aErrorMessage) override { return _to GetErrorMessage(aErrorMessage); } \
  NS_IMETHOD GetSourceName(nsAString & aSourceName) override { return _to GetSourceName(aSourceName); } \
  NS_IMETHOD GetSourceLine(nsAString & aSourceLine) override { return _to GetSourceLine(aSourceLine); } \
  NS_IMETHOD GetLineNumber(uint32_t *aLineNumber) override { return _to GetLineNumber(aLineNumber); } \
  NS_IMETHOD GetColumnNumber(uint32_t *aColumnNumber) override { return _to GetColumnNumber(aColumnNumber); } \
  NS_IMETHOD GetFlags(uint32_t *aFlags) override { return _to GetFlags(aFlags); } \
  NS_IMETHOD GetCategory(char * *aCategory) override { return _to GetCategory(aCategory); } \
  NS_IMETHOD GetOuterWindowID(uint64_t *aOuterWindowID) override { return _to GetOuterWindowID(aOuterWindowID); } \
  NS_IMETHOD GetInnerWindowID(uint64_t *aInnerWindowID) override { return _to GetInnerWindowID(aInnerWindowID); } \
  NS_IMETHOD GetIsFromPrivateWindow(bool *aIsFromPrivateWindow) override { return _to GetIsFromPrivateWindow(aIsFromPrivateWindow); } \
  NS_IMETHOD GetStack(JS::MutableHandleValue aStack) override { return _to GetStack(aStack); } \
  NS_IMETHOD SetStack(JS::HandleValue aStack) override { return _to SetStack(aStack); } \
  NS_IMETHOD GetErrorMessageName(nsAString & aErrorMessageName) override { return _to GetErrorMessageName(aErrorMessageName); } \
  NS_IMETHOD SetErrorMessageName(const nsAString & aErrorMessageName) override { return _to SetErrorMessageName(aErrorMessageName); } \
  NS_IMETHOD GetNotes(nsIArray * *aNotes) override { return _to GetNotes(aNotes); } \
  NS_IMETHOD Init(const nsAString & message, const nsAString & sourceName, const nsAString & sourceLine, uint32_t lineNumber, uint32_t columnNumber, uint32_t flags, const char * category) override { return _to Init(message, sourceName, sourceLine, lineNumber, columnNumber, flags, category); } \
  NS_IMETHOD InitWithWindowID(const nsAString & message, const nsAString & sourceName, const nsAString & sourceLine, uint32_t lineNumber, uint32_t columnNumber, uint32_t flags, const nsACString & category, uint64_t innerWindowID) override { return _to InitWithWindowID(message, sourceName, sourceLine, lineNumber, columnNumber, flags, category, innerWindowID); } \

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISCRIPTERROR(_to) \
  NS_IMETHOD GetErrorMessage(nsAString & aErrorMessage) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetErrorMessage(aErrorMessage); } \
  NS_IMETHOD GetSourceName(nsAString & aSourceName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSourceName(aSourceName); } \
  NS_IMETHOD GetSourceLine(nsAString & aSourceLine) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSourceLine(aSourceLine); } \
  NS_IMETHOD GetLineNumber(uint32_t *aLineNumber) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLineNumber(aLineNumber); } \
  NS_IMETHOD GetColumnNumber(uint32_t *aColumnNumber) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetColumnNumber(aColumnNumber); } \
  NS_IMETHOD GetFlags(uint32_t *aFlags) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFlags(aFlags); } \
  NS_IMETHOD GetCategory(char * *aCategory) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCategory(aCategory); } \
  NS_IMETHOD GetOuterWindowID(uint64_t *aOuterWindowID) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOuterWindowID(aOuterWindowID); } \
  NS_IMETHOD GetInnerWindowID(uint64_t *aInnerWindowID) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInnerWindowID(aInnerWindowID); } \
  NS_IMETHOD GetIsFromPrivateWindow(bool *aIsFromPrivateWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsFromPrivateWindow(aIsFromPrivateWindow); } \
  NS_IMETHOD GetStack(JS::MutableHandleValue aStack) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStack(aStack); } \
  NS_IMETHOD SetStack(JS::HandleValue aStack) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetStack(aStack); } \
  NS_IMETHOD GetErrorMessageName(nsAString & aErrorMessageName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetErrorMessageName(aErrorMessageName); } \
  NS_IMETHOD SetErrorMessageName(const nsAString & aErrorMessageName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetErrorMessageName(aErrorMessageName); } \
  NS_IMETHOD GetNotes(nsIArray * *aNotes) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNotes(aNotes); } \
  NS_IMETHOD Init(const nsAString & message, const nsAString & sourceName, const nsAString & sourceLine, uint32_t lineNumber, uint32_t columnNumber, uint32_t flags, const char * category) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(message, sourceName, sourceLine, lineNumber, columnNumber, flags, category); } \
  NS_IMETHOD InitWithWindowID(const nsAString & message, const nsAString & sourceName, const nsAString & sourceLine, uint32_t lineNumber, uint32_t columnNumber, uint32_t flags, const nsACString & category, uint64_t innerWindowID) override { return !_to ? NS_ERROR_NULL_POINTER : _to->InitWithWindowID(message, sourceName, sourceLine, lineNumber, columnNumber, flags, category, innerWindowID); } \

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsScriptError : public nsIScriptError
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISCRIPTERROR

  nsScriptError();

private:
  ~nsScriptError();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsScriptError, nsIScriptError)

nsScriptError::nsScriptError()
{
  /* member initializers and constructor code */
}

nsScriptError::~nsScriptError()
{
  /* destructor code */
}

/* readonly attribute AString errorMessage; */
NS_IMETHODIMP nsScriptError::GetErrorMessage(nsAString & aErrorMessage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString sourceName; */
NS_IMETHODIMP nsScriptError::GetSourceName(nsAString & aSourceName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString sourceLine; */
NS_IMETHODIMP nsScriptError::GetSourceLine(nsAString & aSourceLine)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute uint32_t lineNumber; */
NS_IMETHODIMP nsScriptError::GetLineNumber(uint32_t *aLineNumber)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute uint32_t columnNumber; */
NS_IMETHODIMP nsScriptError::GetColumnNumber(uint32_t *aColumnNumber)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute uint32_t flags; */
NS_IMETHODIMP nsScriptError::GetFlags(uint32_t *aFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute string category; */
NS_IMETHODIMP nsScriptError::GetCategory(char * *aCategory)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long long outerWindowID; */
NS_IMETHODIMP nsScriptError::GetOuterWindowID(uint64_t *aOuterWindowID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long long innerWindowID; */
NS_IMETHODIMP nsScriptError::GetInnerWindowID(uint64_t *aInnerWindowID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isFromPrivateWindow; */
NS_IMETHODIMP nsScriptError::GetIsFromPrivateWindow(bool *aIsFromPrivateWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsval stack; */
NS_IMETHODIMP nsScriptError::GetStack(JS::MutableHandleValue aStack)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsScriptError::SetStack(JS::HandleValue aStack)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AString errorMessageName; */
NS_IMETHODIMP nsScriptError::GetErrorMessageName(nsAString & aErrorMessageName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsScriptError::SetErrorMessageName(const nsAString & aErrorMessageName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIArray notes; */
NS_IMETHODIMP nsScriptError::GetNotes(nsIArray * *aNotes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void init (in AString message, in AString sourceName, in AString sourceLine, in uint32_t lineNumber, in uint32_t columnNumber, in uint32_t flags, in string category); */
NS_IMETHODIMP nsScriptError::Init(const nsAString & message, const nsAString & sourceName, const nsAString & sourceLine, uint32_t lineNumber, uint32_t columnNumber, uint32_t flags, const char * category)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void initWithWindowID (in AString message, in AString sourceName, in AString sourceLine, in uint32_t lineNumber, in uint32_t columnNumber, in uint32_t flags, in ACString category, in unsigned long long innerWindowID); */
NS_IMETHODIMP nsScriptError::InitWithWindowID(const nsAString & message, const nsAString & sourceName, const nsAString & sourceLine, uint32_t lineNumber, uint32_t columnNumber, uint32_t flags, const nsACString & category, uint64_t innerWindowID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define NS_SCRIPTERROR_CID \
{ 0x1950539a, 0x90f0, 0x4d22, { 0xb5, 0xaf, 0x71, 0x32, 0x9c, 0x68, 0xfa, 0x35 }}
#define NS_SCRIPTERROR_CONTRACTID "@mozilla.org/scripterror;1"

#endif /* __gen_nsIScriptError_h__ */
