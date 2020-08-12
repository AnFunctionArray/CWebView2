

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 05:14:07 2038
 */
/* Compiler settings for C:\Users\sasho\AppData\Local\Temp\Microsoft.UI.Composition.Desktop.idl-7d6c9ef9:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
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

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __Microsoft2EUI2EComposition2EDesktop_p_h__
#define __Microsoft2EUI2EComposition2EDesktop_p_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget;

#endif 	/* ____x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Microsoft.UI.Composition.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_Microsoft2EUI2EComposition2EDesktop_0000_0000 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_Microsoft2EUI2EComposition2EDesktop_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Microsoft2EUI2EComposition2EDesktop_0000_0000_v0_0_s_ifspec;

#ifndef ____x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_INTERFACE_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_INTERFACE_DEFINED__

/* interface __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("26FAA6BB-F926-569D-A394-A74D5A7428E9")
    __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsTopmost( 
            /* [out][retval] */ boolean *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTargetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsTopmost )( 
            __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget * This,
            /* [out][retval] */ boolean *value);
        
        END_INTERFACE
    } __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTargetVtbl;

    interface __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget
    {
        CONST_VTBL struct __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTargetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_get_IsTopmost(This,value)	\
    ( (This)->lpVtbl -> get_IsTopmost(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


