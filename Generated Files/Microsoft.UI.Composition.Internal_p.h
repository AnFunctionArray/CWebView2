

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 05:14:07 2038
 */
/* Compiler settings for C:\Users\sasho\AppData\Local\Temp\Microsoft.UI.Composition.Internal.idl-66e6238b:
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

#ifndef __Microsoft2EUI2EComposition2EInternal_p_h__
#define __Microsoft2EUI2EComposition2EInternal_p_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner;

#endif 	/* ____x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_FWD_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview;

#endif 	/* ____x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_FWD_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal;

#endif 	/* ____x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_FWD_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner;

#endif 	/* ____x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_FWD_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow;

#endif 	/* ____x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_FWD_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal;

#endif 	/* ____x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_FWD_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CIVisualReference_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CIVisualReference_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference;

#endif 	/* ____x_Microsoft_CUI_CComposition_CInternal_CIVisualReference_FWD_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory;

#endif 	/* ____x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Microsoft.UI.Composition.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_Microsoft2EUI2EComposition2EInternal_0000_0000 */
/* [local] */ 














typedef enum __x_Microsoft_CUI_CComposition_CCompositionStretch __x_Microsoft_CUI_CComposition_CCompositionStretch;












extern RPC_IF_HANDLE __MIDL_itf_Microsoft2EUI2EComposition2EInternal_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Microsoft2EUI2EComposition2EInternal_0000_0000_v0_0_s_ifspec;

#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_INTERFACE_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_INTERFACE_DEFINED__

/* interface __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("38EB0908-003B-51D3-B2CD-1EF2AB226AA5")
    __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetIdAsGuid( 
            /* [out][retval] */ GUID *result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAutomationProvider( 
            /* [out][retval] */ IInspectable **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAutomationHostProvider( 
            /* [in] */ IInspectable *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartnerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetIdAsGuid )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner * This,
            /* [out][retval] */ GUID *result);
        
        HRESULT ( STDMETHODCALLTYPE *GetAutomationProvider )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner * This,
            /* [out][retval] */ IInspectable **result);
        
        HRESULT ( STDMETHODCALLTYPE *SetAutomationHostProvider )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner * This,
            /* [in] */ IInspectable *value);
        
        END_INTERFACE
    } __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartnerVtbl;

    interface __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner
    {
        CONST_VTBL struct __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartnerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_GetIdAsGuid(This,result)	\
    ( (This)->lpVtbl -> GetIdAsGuid(This,result) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_GetAutomationProvider(This,result)	\
    ( (This)->lpVtbl -> GetAutomationProvider(This,result) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_SetAutomationHostProvider(This,value)	\
    ( (This)->lpVtbl -> SetAutomationHostProvider(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_INTERFACE_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_INTERFACE_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_INTERFACE_DEFINED__

/* interface __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FA0C355D-B7D7-5E0A-B02B-BF79680E161D")
    __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SuperDownSamplePreview( 
            /* [out][retval] */ boolean *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SuperDownSamplePreview( 
            /* [in] */ boolean value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreviewVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SuperDownSamplePreview )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview * This,
            /* [out][retval] */ boolean *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SuperDownSamplePreview )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview * This,
            /* [in] */ boolean value);
        
        END_INTERFACE
    } __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreviewVtbl;

    interface __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview
    {
        CONST_VTBL struct __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreviewVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_get_SuperDownSamplePreview(This,value)	\
    ( (This)->lpVtbl -> get_SuperDownSamplePreview(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_put_SuperDownSamplePreview(This,value)	\
    ( (This)->lpVtbl -> put_SuperDownSamplePreview(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_INTERFACE_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_INTERFACE_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_INTERFACE_DEFINED__

/* interface __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5C6A420B-B1C6-5C15-9224-7A3FB5971101")
    __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HintSize( 
            /* [out][retval] */ __x_ABI_CWindows_CGraphics_CSizeInt32 *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_HintSize( 
            /* [in] */ __x_ABI_CWindows_CGraphics_CSizeInt32 value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternalVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HintSize )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal * This,
            /* [out][retval] */ __x_ABI_CWindows_CGraphics_CSizeInt32 *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_HintSize )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal * This,
            /* [in] */ __x_ABI_CWindows_CGraphics_CSizeInt32 value);
        
        END_INTERFACE
    } __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternalVtbl;

    interface __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal
    {
        CONST_VTBL struct __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternalVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_get_HintSize(This,value)	\
    ( (This)->lpVtbl -> get_HintSize(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_put_HintSize(This,value)	\
    ( (This)->lpVtbl -> put_HintSize(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_INTERFACE_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_INTERFACE_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_INTERFACE_DEFINED__

/* interface __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9B151826-F42E-5218-A4A6-184215BE8E68")
    __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RealizationSize( 
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_RealizationSize( 
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Stretch( 
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CCompositionStretch *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Stretch( 
            /* [in] */ __x_Microsoft_CUI_CComposition_CCompositionStretch value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Freeze( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartnerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RealizationSize )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner * This,
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_RealizationSize )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Stretch )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner * This,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CCompositionStretch *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Stretch )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner * This,
            /* [in] */ __x_Microsoft_CUI_CComposition_CCompositionStretch value);
        
        HRESULT ( STDMETHODCALLTYPE *Freeze )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner * This);
        
        END_INTERFACE
    } __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartnerVtbl;

    interface __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner
    {
        CONST_VTBL struct __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartnerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_get_RealizationSize(This,value)	\
    ( (This)->lpVtbl -> get_RealizationSize(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_put_RealizationSize(This,value)	\
    ( (This)->lpVtbl -> put_RealizationSize(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_get_Stretch(This,value)	\
    ( (This)->lpVtbl -> get_Stretch(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_put_Stretch(This,value)	\
    ( (This)->lpVtbl -> put_Stretch(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_Freeze(This)	\
    ( (This)->lpVtbl -> Freeze(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_INTERFACE_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_INTERFACE_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_INTERFACE_DEFINED__

/* interface __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E947C5F1-999D-5121-8C25-356E9A6789F0")
    __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateSharedClientProjectedShadowCaster( 
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CICompositionProjectedShadowCaster **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateSharedHostProjectedShadowCaster( 
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CICompositionProjectedShadowCaster **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OpenClientProjectedShadowCasterFromHandle( 
            /* [in] */ UINT64 handle,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CICompositionProjectedShadowCaster **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OpenHostProjectedShadowCasterFromHandle( 
            /* [in] */ UINT64 handle,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CICompositionProjectedShadowCaster **result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadowVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateSharedClientProjectedShadowCaster )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow * This,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CICompositionProjectedShadowCaster **result);
        
        HRESULT ( STDMETHODCALLTYPE *CreateSharedHostProjectedShadowCaster )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow * This,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CICompositionProjectedShadowCaster **result);
        
        HRESULT ( STDMETHODCALLTYPE *OpenClientProjectedShadowCasterFromHandle )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow * This,
            /* [in] */ UINT64 handle,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CICompositionProjectedShadowCaster **result);
        
        HRESULT ( STDMETHODCALLTYPE *OpenHostProjectedShadowCasterFromHandle )( 
            __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow * This,
            /* [in] */ UINT64 handle,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CICompositionProjectedShadowCaster **result);
        
        END_INTERFACE
    } __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadowVtbl;

    interface __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow
    {
        CONST_VTBL struct __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadowVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_CreateSharedClientProjectedShadowCaster(This,result)	\
    ( (This)->lpVtbl -> CreateSharedClientProjectedShadowCaster(This,result) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_CreateSharedHostProjectedShadowCaster(This,result)	\
    ( (This)->lpVtbl -> CreateSharedHostProjectedShadowCaster(This,result) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_OpenClientProjectedShadowCasterFromHandle(This,handle,result)	\
    ( (This)->lpVtbl -> OpenClientProjectedShadowCasterFromHandle(This,handle,result) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_OpenHostProjectedShadowCasterFromHandle(This,handle,result)	\
    ( (This)->lpVtbl -> OpenHostProjectedShadowCasterFromHandle(This,handle,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_INTERFACE_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_INTERFACE_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_INTERFACE_DEFINED__

/* interface __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C3433349-5F90-5C9C-B96C-35034C25C31F")
    __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RasterizationScaleOverride( 
            /* [out][retval] */ FLOAT *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_RasterizationScaleOverride( 
            /* [in] */ FLOAT value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CaptureAsync( 
            /* [in] */ __x_Microsoft_CUI_CComposition_CIVisual *propertyVisual,
            /* [in] */ __x_Microsoft_CUI_CComposition_CICompositionGraphicsDevice *graphicsDevice,
            /* [in] */ INT32 width,
            /* [in] */ INT32 height,
            /* [in] */ __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat pixelFormat,
            /* [in] */ __x_ABI_CWindows_CGraphics_CDirectX_CDirectXAlphaMode alphaMode,
            /* [out][retval] */ __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface **operation) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputSinkHandle( 
            /* [out][retval] */ INT64 *result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputSinkHandle( 
            /* [in] */ INT64 inputHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetParentForTransformFromReference( 
            /* [in] */ __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternalVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RasterizationScaleOverride )( 
            __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal * This,
            /* [out][retval] */ FLOAT *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_RasterizationScaleOverride )( 
            __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal * This,
            /* [in] */ FLOAT value);
        
        HRESULT ( STDMETHODCALLTYPE *CaptureAsync )( 
            __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal * This,
            /* [in] */ __x_Microsoft_CUI_CComposition_CIVisual *propertyVisual,
            /* [in] */ __x_Microsoft_CUI_CComposition_CICompositionGraphicsDevice *graphicsDevice,
            /* [in] */ INT32 width,
            /* [in] */ INT32 height,
            /* [in] */ __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat pixelFormat,
            /* [in] */ __x_ABI_CWindows_CGraphics_CDirectX_CDirectXAlphaMode alphaMode,
            /* [out][retval] */ __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface **operation);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputSinkHandle )( 
            __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal * This,
            /* [out][retval] */ INT64 *result);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputSinkHandle )( 
            __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal * This,
            /* [in] */ INT64 inputHandle);
        
        HRESULT ( STDMETHODCALLTYPE *SetParentForTransformFromReference )( 
            __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal * This,
            /* [in] */ __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference *value);
        
        END_INTERFACE
    } __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternalVtbl;

    interface __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal
    {
        CONST_VTBL struct __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternalVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_get_RasterizationScaleOverride(This,value)	\
    ( (This)->lpVtbl -> get_RasterizationScaleOverride(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_put_RasterizationScaleOverride(This,value)	\
    ( (This)->lpVtbl -> put_RasterizationScaleOverride(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_CaptureAsync(This,propertyVisual,graphicsDevice,width,height,pixelFormat,alphaMode,operation)	\
    ( (This)->lpVtbl -> CaptureAsync(This,propertyVisual,graphicsDevice,width,height,pixelFormat,alphaMode,operation) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_GetInputSinkHandle(This,result)	\
    ( (This)->lpVtbl -> GetInputSinkHandle(This,result) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_SetInputSinkHandle(This,inputHandle)	\
    ( (This)->lpVtbl -> SetInputSinkHandle(This,inputHandle) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_SetParentForTransformFromReference(This,value)	\
    ( (This)->lpVtbl -> SetParentForTransformFromReference(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_INTERFACE_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CIVisualReference_INTERFACE_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CIVisualReference_INTERFACE_DEFINED__

/* interface __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CInternal_CIVisualReference;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AD881CCB-368E-5B22-BF7E-837FC0DD07A7")
    __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference : public IInspectable
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference * This,
            /* [out] */ TrustLevel *trustLevel);
        
        END_INTERFACE
    } __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceVtbl;

    interface __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference
    {
        CONST_VTBL struct __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Microsoft_CUI_CComposition_CInternal_CIVisualReference_INTERFACE_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory_INTERFACE_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory_INTERFACE_DEFINED__

/* interface __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0B778FEE-8BFB-5E21-8809-FE03521EA2A1")
    __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory : public IInspectable
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory * This,
            /* [out] */ TrustLevel *trustLevel);
        
        END_INTERFACE
    } __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactoryVtbl;

    interface __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory
    {
        CONST_VTBL struct __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


