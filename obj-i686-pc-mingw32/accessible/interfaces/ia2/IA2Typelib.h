

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for d:/Projects/DanknetExplorer/dne2/platform/accessible/interfaces/ia2/IA2Typelib.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, app_config, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __IA2Typelib_h__
#define __IA2Typelib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "Accessible2.h"
#include "Accessible2_2.h"
#include "Accessible2_3.h"
#include "AccessibleAction.h"
#include "AccessibleApplication.h"
#include "AccessibleComponent.h"
#include "AccessibleDocument.h"
#include "AccessibleEditableText.h"
#include "AccessibleEventId.h"
#include "AccessibleHyperlink.h"
#include "AccessibleHypertext.h"
#include "AccessibleHypertext2.h"
#include "AccessibleImage.h"
#include "AccessibleRole.h"
#include "AccessibleTable.h"
#include "AccessibleTable2.h"
#include "AccessibleTableCell.h"
#include "AccessibleText2.h"
#include "AccessibleValue.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_IA2Typelib_0000_0000 */
/* [local] */ 

typedef struct _MozRemotableHandle
    {
    long fContext;
    long hRemote;
    } 	MozRemotableHandle;

typedef /* [unique] */ MozRemotableHandle *mozHWND;

typedef /* [unique] */ MozRemotableHandle *mozHMENU;

typedef /* [unique] */ MozRemotableHandle *mozHACCEL;

typedef /* [unique] */ MozRemotableHandle *mozHBRUSH;

typedef /* [unique] */ MozRemotableHandle *mozHFONT;

typedef /* [unique] */ MozRemotableHandle *mozHDC;

typedef /* [unique] */ MozRemotableHandle *mozHICON;

typedef /* [unique] */ MozRemotableHandle *mozHRGN;

typedef /* [unique] */ MozRemotableHandle *mozHMONITOR;

#if 0
typedef /* [wire_marshal] */ void *HWND;

typedef /* [wire_marshal] */ void *HMENU;

typedef /* [wire_marshal] */ void *HACCEL;

typedef /* [wire_marshal] */ void *HBRUSH;

typedef /* [wire_marshal] */ void *HFONT;

typedef /* [wire_marshal] */ void *HDC;

typedef /* [wire_marshal] */ void *HICON;

typedef /* [wire_marshal] */ void *HRGN;

typedef /* [wire_marshal] */ void *HMONITOR;

#endif // 0

// Type Library Definitions



extern RPC_IF_HANDLE __MIDL_itf_IA2Typelib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_IA2Typelib_0000_0000_v0_0_s_ifspec;


#ifndef __IAccessible2Lib_LIBRARY_DEFINED__
#define __IAccessible2Lib_LIBRARY_DEFINED__

/* library IAccessible2Lib */
/* [hidden][version][helpstring][uuid] */ 





























EXTERN_C const IID LIBID_IAccessible2Lib;
#endif /* __IAccessible2Lib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


