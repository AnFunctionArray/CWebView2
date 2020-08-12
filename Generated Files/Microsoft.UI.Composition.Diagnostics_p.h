

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 05:14:07 2038
 */
/* Compiler settings for C:\Users\sasho\AppData\Local\Temp\Microsoft.UI.Composition.Diagnostics.idl-8eb743c4:
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

#ifndef __Microsoft2EUI2EComposition2EDiagnostics_p_h__
#define __Microsoft2EUI2EComposition2EDiagnostics_p_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps;

#endif 	/* ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_FWD_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings;

#endif 	/* ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_FWD_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics;

#endif 	/* ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Microsoft.UI.Composition.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_Microsoft2EUI2EComposition2EDiagnostics_0000_0000 */
/* [local] */ 






typedef enum __x_Microsoft_CUI_CComposition_CDiagnostics_CCompositionDebugOverdrawContentKinds __x_Microsoft_CUI_CComposition_CDiagnostics_CCompositionDebugOverdrawContentKinds;




/* [v1_enum] */ 
enum __x_Microsoft_CUI_CComposition_CDiagnostics_CCompositionDebugOverdrawContentKinds
    {
        CompositionDebugOverdrawContentKinds_None	= 0,
        CompositionDebugOverdrawContentKinds_OffscreenRendered	= 0x1,
        CompositionDebugOverdrawContentKinds_Colors	= 0x2,
        CompositionDebugOverdrawContentKinds_Effects	= 0x4,
        CompositionDebugOverdrawContentKinds_Shadows	= 0x8,
        CompositionDebugOverdrawContentKinds_Lights	= 0x10,
        CompositionDebugOverdrawContentKinds_Surfaces	= 0x20,
        CompositionDebugOverdrawContentKinds_SwapChains	= 0x40,
        CompositionDebugOverdrawContentKinds_All	= 0xffffffff
    } ;


extern RPC_IF_HANDLE __MIDL_itf_Microsoft2EUI2EComposition2EDiagnostics_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Microsoft2EUI2EComposition2EDiagnostics_0000_0000_v0_0_s_ifspec;

#ifndef ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_INTERFACE_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_INTERFACE_DEFINED__

/* interface __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("815016B8-F645-5C55-87B5-FE2167282B6F")
    __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Hide( 
            /* [in] */ __x_Microsoft_CUI_CComposition_CIVisual *subtree) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowMemoryUsage( 
            /* [in] */ __x_Microsoft_CUI_CComposition_CIVisual *subtree) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowOverdraw( 
            /* [in] */ __x_Microsoft_CUI_CComposition_CIVisual *subtree,
            /* [in] */ __x_Microsoft_CUI_CComposition_CDiagnostics_CCompositionDebugOverdrawContentKinds contentKinds) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowRedraw( 
            /* [in] */ __x_Microsoft_CUI_CComposition_CIVisual *subtree) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMapsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Hide )( 
            __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * This,
            /* [in] */ __x_Microsoft_CUI_CComposition_CIVisual *subtree);
        
        HRESULT ( STDMETHODCALLTYPE *ShowMemoryUsage )( 
            __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * This,
            /* [in] */ __x_Microsoft_CUI_CComposition_CIVisual *subtree);
        
        HRESULT ( STDMETHODCALLTYPE *ShowOverdraw )( 
            __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * This,
            /* [in] */ __x_Microsoft_CUI_CComposition_CIVisual *subtree,
            /* [in] */ __x_Microsoft_CUI_CComposition_CDiagnostics_CCompositionDebugOverdrawContentKinds contentKinds);
        
        HRESULT ( STDMETHODCALLTYPE *ShowRedraw )( 
            __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * This,
            /* [in] */ __x_Microsoft_CUI_CComposition_CIVisual *subtree);
        
        END_INTERFACE
    } __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMapsVtbl;

    interface __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps
    {
        CONST_VTBL struct __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMapsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_Hide(This,subtree)	\
    ( (This)->lpVtbl -> Hide(This,subtree) ) 

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_ShowMemoryUsage(This,subtree)	\
    ( (This)->lpVtbl -> ShowMemoryUsage(This,subtree) ) 

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_ShowOverdraw(This,subtree,contentKinds)	\
    ( (This)->lpVtbl -> ShowOverdraw(This,subtree,contentKinds) ) 

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_ShowRedraw(This,subtree)	\
    ( (This)->lpVtbl -> ShowRedraw(This,subtree) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_INTERFACE_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_INTERFACE_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_INTERFACE_DEFINED__

/* interface __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F4C0C0F6-7F5F-5014-A0D6-C8C7EEECACE6")
    __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HeatMaps( 
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps **value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HeatMaps )( 
            __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings * This,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps **value);
        
        END_INTERFACE
    } __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsVtbl;

    interface __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings
    {
        CONST_VTBL struct __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_get_HeatMaps(This,value)	\
    ( (This)->lpVtbl -> get_HeatMaps(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_INTERFACE_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_INTERFACE_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_INTERFACE_DEFINED__

/* interface __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B56F8AAB-2B8C-51AA-B974-10E5C517F50E")
    __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TryGetSettings( 
            /* [in] */ __x_Microsoft_CUI_CComposition_CICompositor *compositor,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings **result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *TryGetSettings )( 
            __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics * This,
            /* [in] */ __x_Microsoft_CUI_CComposition_CICompositor *compositor,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings **result);
        
        END_INTERFACE
    } __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStaticsVtbl;

    interface __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics
    {
        CONST_VTBL struct __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_TryGetSettings(This,compositor,result)	\
    ( (This)->lpVtbl -> TryGetSettings(This,compositor,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


