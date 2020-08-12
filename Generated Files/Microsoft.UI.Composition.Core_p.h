

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 05:14:07 2038
 */
/* Compiler settings for C:\Users\sasho\AppData\Local\Temp\Microsoft.UI.Composition.Core.idl-4b56f4f1:
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

#ifndef __Microsoft2EUI2EComposition2ECore_p_h__
#define __Microsoft2EUI2EComposition2ECore_p_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable_FWD_DEFINED__
#define ____FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable_FWD_DEFINED__
typedef interface __FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable __FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable;

#endif 	/* ____FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable_FWD_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CCore_CICompositorController_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CCore_CICompositorController_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CCore_CICompositorController __x_Microsoft_CUI_CComposition_CCore_CICompositorController;

#endif 	/* ____x_Microsoft_CUI_CComposition_CCore_CICompositorController_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Microsoft.UI.Composition.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_Microsoft2EUI2EComposition2ECore_0000_0000 */
/* [local] */ 








extern RPC_IF_HANDLE __MIDL_itf_Microsoft2EUI2EComposition2ECore_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Microsoft2EUI2EComposition2ECore_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_Microsoft2EUI2EComposition2ECore2Eidl_0000_0233 */




extern RPC_IF_HANDLE __MIDL_itf_Microsoft2EUI2EComposition2ECore2Eidl_0000_0233_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Microsoft2EUI2EComposition2ECore2Eidl_0000_0233_v0_0_s_ifspec;

/* interface __MIDL_itf_Microsoft2EUI2EComposition2ECore_0000_0001 */
/* [local] */ 

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


extern RPC_IF_HANDLE __MIDL_itf_Microsoft2EUI2EComposition2ECore_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Microsoft2EUI2EComposition2ECore_0000_0001_v0_0_s_ifspec;

#ifndef ____FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable_INTERFACE_DEFINED__
#define ____FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable_INTERFACE_DEFINED__

/* interface __FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("951d00b7-db3e-522c-b1f7-2bef3e1b9108")
    __FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __x_Microsoft_CUI_CComposition_CCore_CICompositorController *sender,
            /* [in] */ IInspectable *e) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectableVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable * This,
            /* [in] */ __x_Microsoft_CUI_CComposition_CCore_CICompositorController *sender,
            /* [in] */ IInspectable *e);
        
        END_INTERFACE
    } __FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectableVtbl;

    interface __FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable
    {
        CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectableVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Microsoft2EUI2EComposition2ECore_0000_0002 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable */


extern RPC_IF_HANDLE __MIDL_itf_Microsoft2EUI2EComposition2ECore_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Microsoft2EUI2EComposition2ECore_0000_0002_v0_0_s_ifspec;

#ifndef ____x_Microsoft_CUI_CComposition_CCore_CICompositorController_INTERFACE_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CCore_CICompositorController_INTERFACE_DEFINED__

/* interface __x_Microsoft_CUI_CComposition_CCore_CICompositorController */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CCore_CICompositorController;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CC107CDC-558F-5D1A-96A5-A735AC04386B")
    __x_Microsoft_CUI_CComposition_CCore_CICompositorController : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Compositor( 
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CICompositor **value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Commit( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnsurePreviousCommitCompletedAsync( 
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CIAsyncAction **operation) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE add_CommitNeeded( 
            /* [in] */ __FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable *handler,
            /* [out][retval] */ EventRegistrationToken *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE remove_CommitNeeded( 
            /* [in] */ EventRegistrationToken token) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_Microsoft_CUI_CComposition_CCore_CICompositorControllerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Microsoft_CUI_CComposition_CCore_CICompositorController * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Microsoft_CUI_CComposition_CCore_CICompositorController * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Microsoft_CUI_CComposition_CCore_CICompositorController * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Microsoft_CUI_CComposition_CCore_CICompositorController * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Microsoft_CUI_CComposition_CCore_CICompositorController * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Microsoft_CUI_CComposition_CCore_CICompositorController * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Compositor )( 
            __x_Microsoft_CUI_CComposition_CCore_CICompositorController * This,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CICompositor **value);
        
        HRESULT ( STDMETHODCALLTYPE *Commit )( 
            __x_Microsoft_CUI_CComposition_CCore_CICompositorController * This);
        
        HRESULT ( STDMETHODCALLTYPE *EnsurePreviousCommitCompletedAsync )( 
            __x_Microsoft_CUI_CComposition_CCore_CICompositorController * This,
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CIAsyncAction **operation);
        
        HRESULT ( STDMETHODCALLTYPE *add_CommitNeeded )( 
            __x_Microsoft_CUI_CComposition_CCore_CICompositorController * This,
            /* [in] */ __FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable *handler,
            /* [out][retval] */ EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_CommitNeeded )( 
            __x_Microsoft_CUI_CComposition_CCore_CICompositorController * This,
            /* [in] */ EventRegistrationToken token);
        
        END_INTERFACE
    } __x_Microsoft_CUI_CComposition_CCore_CICompositorControllerVtbl;

    interface __x_Microsoft_CUI_CComposition_CCore_CICompositorController
    {
        CONST_VTBL struct __x_Microsoft_CUI_CComposition_CCore_CICompositorControllerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Microsoft_CUI_CComposition_CCore_CICompositorController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Microsoft_CUI_CComposition_CCore_CICompositorController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Microsoft_CUI_CComposition_CCore_CICompositorController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Microsoft_CUI_CComposition_CCore_CICompositorController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Microsoft_CUI_CComposition_CCore_CICompositorController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Microsoft_CUI_CComposition_CCore_CICompositorController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_Microsoft_CUI_CComposition_CCore_CICompositorController_get_Compositor(This,value)	\
    ( (This)->lpVtbl -> get_Compositor(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CCore_CICompositorController_Commit(This)	\
    ( (This)->lpVtbl -> Commit(This) ) 

#define __x_Microsoft_CUI_CComposition_CCore_CICompositorController_EnsurePreviousCommitCompletedAsync(This,operation)	\
    ( (This)->lpVtbl -> EnsurePreviousCommitCompletedAsync(This,operation) ) 

#define __x_Microsoft_CUI_CComposition_CCore_CICompositorController_add_CommitNeeded(This,handler,token)	\
    ( (This)->lpVtbl -> add_CommitNeeded(This,handler,token) ) 

#define __x_Microsoft_CUI_CComposition_CCore_CICompositorController_remove_CommitNeeded(This,token)	\
    ( (This)->lpVtbl -> remove_CommitNeeded(This,token) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Microsoft_CUI_CComposition_CCore_CICompositorController_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


