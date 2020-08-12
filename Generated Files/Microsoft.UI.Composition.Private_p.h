

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 05:14:07 2038
 */
/* Compiler settings for C:\Users\sasho\AppData\Local\Temp\Microsoft.UI.Composition.Private.idl-cc8ca79a:
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

#ifndef __Microsoft2EUI2EComposition2EPrivate_p_h__
#define __Microsoft2EUI2EComposition2EPrivate_p_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner;

#endif 	/* ____x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_FWD_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap;

#endif 	/* ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_FWD_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush;

#endif 	/* ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_FWD_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner;

#endif 	/* ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_FWD_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate;

#endif 	/* ____x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_FWD_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader;

#endif 	/* ____x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_FWD_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip;

#endif 	/* ____x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_FWD_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual;

#endif 	/* ____x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_FWD_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation;

#endif 	/* ____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_FWD_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory;

#endif 	/* ____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_FWD_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner;

#endif 	/* ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_FWD_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate;

#endif 	/* ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_FWD_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner;

#endif 	/* ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_FWD_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner;

#endif 	/* ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Microsoft.UI.Composition.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_Microsoft2EUI2EComposition2EPrivate_0000_0000 */
/* [local] */ 






















typedef enum __x_Microsoft_CUI_CComposition_CPrivate_CAnimationPropertyKind __x_Microsoft_CUI_CComposition_CPrivate_CAnimationPropertyKind;

typedef enum __x_Microsoft_CUI_CComposition_CPrivate_CCompositionCubeMapFace __x_Microsoft_CUI_CComposition_CPrivate_CCompositionCubeMapFace;

typedef enum __x_Microsoft_CUI_CComposition_CPrivate_CCompositionDepthMode __x_Microsoft_CUI_CComposition_CPrivate_CCompositionDepthMode;

typedef enum __x_Microsoft_CUI_CComposition_CPrivate_CCompositionResampleMode __x_Microsoft_CUI_CComposition_CPrivate_CCompositionResampleMode;















/* [v1_enum] */ 
enum __x_Microsoft_CUI_CComposition_CPrivate_CAnimationPropertyKind
    {
        AnimationPropertyKind_Unspecified	= 0,
        AnimationPropertyKind_Single	= 1,
        AnimationPropertyKind_Boolean	= 2,
        AnimationPropertyKind_Vector2	= 3,
        AnimationPropertyKind_Vector3	= 4,
        AnimationPropertyKind_Vector4	= 5,
        AnimationPropertyKind_Quaternion	= 6,
        AnimationPropertyKind_Color	= 7,
        AnimationPropertyKind_Matrix3x2	= 8,
        AnimationPropertyKind_Matrix4x4	= 9
    } ;
/* [v1_enum] */ 
enum __x_Microsoft_CUI_CComposition_CPrivate_CCompositionCubeMapFace
    {
        CompositionCubeMapFace_XPositive	= 0,
        CompositionCubeMapFace_XNegative	= 1,
        CompositionCubeMapFace_YPositive	= 2,
        CompositionCubeMapFace_YNegative	= 3,
        CompositionCubeMapFace_ZPositive	= 4,
        CompositionCubeMapFace_ZNegative	= 5
    } ;
/* [v1_enum] */ 
enum __x_Microsoft_CUI_CComposition_CPrivate_CCompositionDepthMode
    {
        CompositionDepthMode_Tree	= 0,
        CompositionDepthMode_Spatial	= 1,
        CompositionDepthMode_Inherit	= 2,
        CompositionDepthMode_Sorted	= 3
    } ;
/* [v1_enum] */ 
enum __x_Microsoft_CUI_CComposition_CPrivate_CCompositionResampleMode
    {
        CompositionResampleMode_Default	= 0,
        CompositionResampleMode_Lanczos	= 1,
        CompositionResampleMode_XBR	= 2
    } ;


extern RPC_IF_HANDLE __MIDL_itf_Microsoft2EUI2EComposition2EPrivate_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Microsoft2EUI2EComposition2EPrivate_0000_0000_v0_0_s_ifspec;

#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_INTERFACE_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_INTERFACE_DEFINED__

/* interface __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("19B15BF2-5E56-58C8-B47D-067E2B39EA5A")
    __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ResolvedCompositionObject( 
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CICompositionObject **value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ResolvedCompositionObjectProperty( 
            /* [out][retval] */ HSTRING *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartnerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResolvedCompositionObject )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner * This,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CICompositionObject **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResolvedCompositionObjectProperty )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner * This,
            /* [out][retval] */ HSTRING *value);
        
        END_INTERFACE
    } __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartnerVtbl;

    interface __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner
    {
        CONST_VTBL struct __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartnerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_get_ResolvedCompositionObject(This,value)	\
    ( (This)->lpVtbl -> get_ResolvedCompositionObject(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_get_ResolvedCompositionObjectProperty(This,value)	\
    ( (This)->lpVtbl -> get_ResolvedCompositionObjectProperty(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_INTERFACE_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_INTERFACE_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_INTERFACE_DEFINED__

/* interface __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9DC81110-459E-52C6-AD09-DA74C8A7F520")
    __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MipLevels( 
            /* [out][retval] */ UINT32 *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [out][retval] */ UINT32 *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AutomaticMipmaps( 
            /* [out][retval] */ boolean *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSurfaces( 
            /* [in] */ UINT32 mipLevel,
            /* [in] */ __x_Microsoft_CUI_CComposition_CICompositionSurface *xPositive,
            /* [in] */ __x_Microsoft_CUI_CComposition_CICompositionSurface *xNegative,
            /* [in] */ __x_Microsoft_CUI_CComposition_CICompositionSurface *yPositive,
            /* [in] */ __x_Microsoft_CUI_CComposition_CICompositionSurface *yNegative,
            /* [in] */ __x_Microsoft_CUI_CComposition_CICompositionSurface *zPositive,
            /* [in] */ __x_Microsoft_CUI_CComposition_CICompositionSurface *zNegative) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMapVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MipLevels )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap * This,
            /* [out][retval] */ UINT32 *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap * This,
            /* [out][retval] */ UINT32 *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutomaticMipmaps )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap * This,
            /* [out][retval] */ boolean *value);
        
        HRESULT ( STDMETHODCALLTYPE *SetSurfaces )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap * This,
            /* [in] */ UINT32 mipLevel,
            /* [in] */ __x_Microsoft_CUI_CComposition_CICompositionSurface *xPositive,
            /* [in] */ __x_Microsoft_CUI_CComposition_CICompositionSurface *xNegative,
            /* [in] */ __x_Microsoft_CUI_CComposition_CICompositionSurface *yPositive,
            /* [in] */ __x_Microsoft_CUI_CComposition_CICompositionSurface *yNegative,
            /* [in] */ __x_Microsoft_CUI_CComposition_CICompositionSurface *zPositive,
            /* [in] */ __x_Microsoft_CUI_CComposition_CICompositionSurface *zNegative);
        
        END_INTERFACE
    } __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMapVtbl;

    interface __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap
    {
        CONST_VTBL struct __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMapVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_get_MipLevels(This,value)	\
    ( (This)->lpVtbl -> get_MipLevels(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_get_Size(This,value)	\
    ( (This)->lpVtbl -> get_Size(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_get_AutomaticMipmaps(This,value)	\
    ( (This)->lpVtbl -> get_AutomaticMipmaps(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_SetSurfaces(This,mipLevel,xPositive,xNegative,yPositive,yNegative,zPositive,zNegative)	\
    ( (This)->lpVtbl -> SetSurfaces(This,mipLevel,xPositive,xNegative,yPositive,yNegative,zPositive,zNegative) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_INTERFACE_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_INTERFACE_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_INTERFACE_DEFINED__

/* interface __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D1C29D15-84B0-573A-81C8-0AE1EC565502")
    __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AnchorPoint( 
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_AnchorPoint( 
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CenterPoint( 
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector3 *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_CenterPoint( 
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsLocal( 
            /* [out][retval] */ boolean *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_IsLocal( 
            /* [in] */ boolean value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Offset( 
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector3 *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Offset( 
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Orientation( 
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Orientation( 
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [out][retval] */ FLOAT *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Size( 
            /* [in] */ FLOAT value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap **value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RotationAngle( 
            /* [out][retval] */ FLOAT *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_RotationAngle( 
            /* [in] */ FLOAT value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RotationAngleInDegrees( 
            /* [out][retval] */ FLOAT *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_RotationAngleInDegrees( 
            /* [in] */ FLOAT value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RotationAxis( 
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector3 *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_RotationAxis( 
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Scale( 
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector3 *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Scale( 
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TransformMatrix( 
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_TransformMatrix( 
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFaceVisibility( 
            /* [in] */ __x_Microsoft_CUI_CComposition_CPrivate_CCompositionCubeMapFace face,
            /* [out][retval] */ boolean *result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFaceVisibility( 
            /* [in] */ __x_Microsoft_CUI_CComposition_CPrivate_CCompositionCubeMapFace face,
            /* [in] */ boolean value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrushVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AnchorPoint )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AnchorPoint )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CenterPoint )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector3 *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CenterPoint )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsLocal )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
            /* [out][retval] */ boolean *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsLocal )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
            /* [in] */ boolean value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Offset )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector3 *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Offset )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Orientation )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Orientation )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
            /* [out][retval] */ FLOAT *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Size )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
            /* [in] */ FLOAT value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap **value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
            /* [in] */ __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RotationAngle )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
            /* [out][retval] */ FLOAT *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_RotationAngle )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
            /* [in] */ FLOAT value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RotationAngleInDegrees )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
            /* [out][retval] */ FLOAT *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_RotationAngleInDegrees )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
            /* [in] */ FLOAT value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RotationAxis )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector3 *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_RotationAxis )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Scale )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector3 *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Scale )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransformMatrix )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TransformMatrix )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 value);
        
        HRESULT ( STDMETHODCALLTYPE *GetFaceVisibility )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
            /* [in] */ __x_Microsoft_CUI_CComposition_CPrivate_CCompositionCubeMapFace face,
            /* [out][retval] */ boolean *result);
        
        HRESULT ( STDMETHODCALLTYPE *SetFaceVisibility )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
            /* [in] */ __x_Microsoft_CUI_CComposition_CPrivate_CCompositionCubeMapFace face,
            /* [in] */ boolean value);
        
        END_INTERFACE
    } __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrushVtbl;

    interface __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush
    {
        CONST_VTBL struct __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrushVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_get_AnchorPoint(This,value)	\
    ( (This)->lpVtbl -> get_AnchorPoint(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_put_AnchorPoint(This,value)	\
    ( (This)->lpVtbl -> put_AnchorPoint(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_get_CenterPoint(This,value)	\
    ( (This)->lpVtbl -> get_CenterPoint(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_put_CenterPoint(This,value)	\
    ( (This)->lpVtbl -> put_CenterPoint(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_get_IsLocal(This,value)	\
    ( (This)->lpVtbl -> get_IsLocal(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_put_IsLocal(This,value)	\
    ( (This)->lpVtbl -> put_IsLocal(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_get_Offset(This,value)	\
    ( (This)->lpVtbl -> get_Offset(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_put_Offset(This,value)	\
    ( (This)->lpVtbl -> put_Offset(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_get_Orientation(This,value)	\
    ( (This)->lpVtbl -> get_Orientation(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_put_Orientation(This,value)	\
    ( (This)->lpVtbl -> put_Orientation(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_get_Size(This,value)	\
    ( (This)->lpVtbl -> get_Size(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_put_Size(This,value)	\
    ( (This)->lpVtbl -> put_Size(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_get_Source(This,value)	\
    ( (This)->lpVtbl -> get_Source(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_put_Source(This,value)	\
    ( (This)->lpVtbl -> put_Source(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_get_RotationAngle(This,value)	\
    ( (This)->lpVtbl -> get_RotationAngle(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_put_RotationAngle(This,value)	\
    ( (This)->lpVtbl -> put_RotationAngle(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_get_RotationAngleInDegrees(This,value)	\
    ( (This)->lpVtbl -> get_RotationAngleInDegrees(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_put_RotationAngleInDegrees(This,value)	\
    ( (This)->lpVtbl -> put_RotationAngleInDegrees(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_get_RotationAxis(This,value)	\
    ( (This)->lpVtbl -> get_RotationAxis(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_put_RotationAxis(This,value)	\
    ( (This)->lpVtbl -> put_RotationAxis(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_get_Scale(This,value)	\
    ( (This)->lpVtbl -> get_Scale(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_put_Scale(This,value)	\
    ( (This)->lpVtbl -> put_Scale(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_get_TransformMatrix(This,value)	\
    ( (This)->lpVtbl -> get_TransformMatrix(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_put_TransformMatrix(This,value)	\
    ( (This)->lpVtbl -> put_TransformMatrix(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_GetFaceVisibility(This,face,result)	\
    ( (This)->lpVtbl -> GetFaceVisibility(This,face,result) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_SetFaceVisibility(This,face,value)	\
    ( (This)->lpVtbl -> SetFaceVisibility(This,face,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_INTERFACE_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_INTERFACE_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_INTERFACE_DEFINED__

/* interface __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9FCD509F-3FF4-59DD-8AB3-C6ECD4A30C3F")
    __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetRealSurface( 
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CICompositionSurface **result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartnerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetRealSurface )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner * This,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CICompositionSurface **result);
        
        END_INTERFACE
    } __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartnerVtbl;

    interface __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner
    {
        CONST_VTBL struct __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartnerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_GetRealSurface(This,result)	\
    ( (This)->lpVtbl -> GetRealSurface(This,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_INTERFACE_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_INTERFACE_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_INTERFACE_DEFINED__

/* interface __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9EF69BDA-43E0-5403-9256-4836928484A3")
    __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentBatchId( 
            /* [out][retval] */ UINT32 *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LastConfirmedBatchId( 
            /* [out][retval] */ UINT32 *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateAnimationPropertyInfo( 
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CIAnimationPropertyInfo **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateCubeMap( 
            /* [in] */ UINT32 size,
            /* [in] */ UINT32 mipLevels,
            /* [in] */ boolean automaticMipmaps,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateDataSourceReader( 
            /* [in] */ UINT64 providerId,
            /* [in] */ UINT64 dataSourceId,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateRectangleClip( 
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateRectangleClipWithSides( 
            /* [in] */ FLOAT left,
            /* [in] */ FLOAT top,
            /* [in] */ FLOAT right,
            /* [in] */ FLOAT bottom,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateRectangleClipWithSidesAndRadius( 
            /* [in] */ FLOAT left,
            /* [in] */ FLOAT top,
            /* [in] */ FLOAT right,
            /* [in] */ FLOAT bottom,
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 topLeftRadius,
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 topRightRadius,
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 bottomLeftRadius,
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 bottomRightRadius,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateScaleVisual( 
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateSkyBoxBrush( 
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush **result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentBatchId )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This,
            /* [out][retval] */ UINT32 *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastConfirmedBatchId )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This,
            /* [out][retval] */ UINT32 *value);
        
        HRESULT ( STDMETHODCALLTYPE *CreateAnimationPropertyInfo )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CIAnimationPropertyInfo **result);
        
        HRESULT ( STDMETHODCALLTYPE *CreateCubeMap )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This,
            /* [in] */ UINT32 size,
            /* [in] */ UINT32 mipLevels,
            /* [in] */ boolean automaticMipmaps,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap **result);
        
        HRESULT ( STDMETHODCALLTYPE *CreateDataSourceReader )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This,
            /* [in] */ UINT64 providerId,
            /* [in] */ UINT64 dataSourceId,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader **result);
        
        HRESULT ( STDMETHODCALLTYPE *CreateRectangleClip )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip **result);
        
        HRESULT ( STDMETHODCALLTYPE *CreateRectangleClipWithSides )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This,
            /* [in] */ FLOAT left,
            /* [in] */ FLOAT top,
            /* [in] */ FLOAT right,
            /* [in] */ FLOAT bottom,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip **result);
        
        HRESULT ( STDMETHODCALLTYPE *CreateRectangleClipWithSidesAndRadius )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This,
            /* [in] */ FLOAT left,
            /* [in] */ FLOAT top,
            /* [in] */ FLOAT right,
            /* [in] */ FLOAT bottom,
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 topLeftRadius,
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 topRightRadius,
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 bottomLeftRadius,
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 bottomRightRadius,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip **result);
        
        HRESULT ( STDMETHODCALLTYPE *CreateScaleVisual )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual **result);
        
        HRESULT ( STDMETHODCALLTYPE *CreateSkyBoxBrush )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush **result);
        
        END_INTERFACE
    } __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivateVtbl;

    interface __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate
    {
        CONST_VTBL struct __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_get_CurrentBatchId(This,value)	\
    ( (This)->lpVtbl -> get_CurrentBatchId(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_get_LastConfirmedBatchId(This,value)	\
    ( (This)->lpVtbl -> get_LastConfirmedBatchId(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_CreateAnimationPropertyInfo(This,result)	\
    ( (This)->lpVtbl -> CreateAnimationPropertyInfo(This,result) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_CreateCubeMap(This,size,mipLevels,automaticMipmaps,result)	\
    ( (This)->lpVtbl -> CreateCubeMap(This,size,mipLevels,automaticMipmaps,result) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_CreateDataSourceReader(This,providerId,dataSourceId,result)	\
    ( (This)->lpVtbl -> CreateDataSourceReader(This,providerId,dataSourceId,result) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_CreateRectangleClip(This,result)	\
    ( (This)->lpVtbl -> CreateRectangleClip(This,result) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_CreateRectangleClipWithSides(This,left,top,right,bottom,result)	\
    ( (This)->lpVtbl -> CreateRectangleClipWithSides(This,left,top,right,bottom,result) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_CreateRectangleClipWithSidesAndRadius(This,left,top,right,bottom,topLeftRadius,topRightRadius,bottomLeftRadius,bottomRightRadius,result)	\
    ( (This)->lpVtbl -> CreateRectangleClipWithSidesAndRadius(This,left,top,right,bottom,topLeftRadius,topRightRadius,bottomLeftRadius,bottomRightRadius,result) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_CreateScaleVisual(This,result)	\
    ( (This)->lpVtbl -> CreateScaleVisual(This,result) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_CreateSkyBoxBrush(This,result)	\
    ( (This)->lpVtbl -> CreateSkyBoxBrush(This,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_INTERFACE_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_INTERFACE_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_INTERFACE_DEFINED__

/* interface __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1D74BDA7-2D1E-5E62-8BC6-A36C401F99B7")
    __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddDataSourcePropertyId( 
            /* [in] */ HSTRING propertyName,
            /* [in] */ UINT32 dataSourcePropertyId,
            /* [in] */ __x_Microsoft_CUI_CComposition_CPrivate_CAnimationPropertyKind propertyKind) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *AddDataSourcePropertyId )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader * This,
            /* [in] */ HSTRING propertyName,
            /* [in] */ UINT32 dataSourcePropertyId,
            /* [in] */ __x_Microsoft_CUI_CComposition_CPrivate_CAnimationPropertyKind propertyKind);
        
        END_INTERFACE
    } __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReaderVtbl;

    interface __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader
    {
        CONST_VTBL struct __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_AddDataSourcePropertyId(This,propertyName,dataSourcePropertyId,propertyKind)	\
    ( (This)->lpVtbl -> AddDataSourcePropertyId(This,propertyName,dataSourcePropertyId,propertyKind) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_INTERFACE_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_INTERFACE_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_INTERFACE_DEFINED__

/* interface __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BE289788-E97E-5382-9C14-6247736A37EA")
    __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Bottom( 
            /* [out][retval] */ FLOAT *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Bottom( 
            /* [in] */ FLOAT value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BottomLeftRadius( 
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BottomLeftRadius( 
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BottomRightRadius( 
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BottomRightRadius( 
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Left( 
            /* [out][retval] */ FLOAT *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Left( 
            /* [in] */ FLOAT value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Right( 
            /* [out][retval] */ FLOAT *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Right( 
            /* [in] */ FLOAT value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Top( 
            /* [out][retval] */ FLOAT *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Top( 
            /* [in] */ FLOAT value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TopLeftRadius( 
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_TopLeftRadius( 
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TopRightRadius( 
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_TopRightRadius( 
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClipVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Bottom )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
            /* [out][retval] */ FLOAT *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Bottom )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
            /* [in] */ FLOAT value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BottomLeftRadius )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BottomLeftRadius )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BottomRightRadius )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BottomRightRadius )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Left )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
            /* [out][retval] */ FLOAT *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Left )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
            /* [in] */ FLOAT value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Right )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
            /* [out][retval] */ FLOAT *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Right )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
            /* [in] */ FLOAT value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Top )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
            /* [out][retval] */ FLOAT *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Top )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
            /* [in] */ FLOAT value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TopLeftRadius )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TopLeftRadius )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TopRightRadius )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TopRightRadius )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value);
        
        END_INTERFACE
    } __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClipVtbl;

    interface __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip
    {
        CONST_VTBL struct __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClipVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_get_Bottom(This,value)	\
    ( (This)->lpVtbl -> get_Bottom(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_put_Bottom(This,value)	\
    ( (This)->lpVtbl -> put_Bottom(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_get_BottomLeftRadius(This,value)	\
    ( (This)->lpVtbl -> get_BottomLeftRadius(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_put_BottomLeftRadius(This,value)	\
    ( (This)->lpVtbl -> put_BottomLeftRadius(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_get_BottomRightRadius(This,value)	\
    ( (This)->lpVtbl -> get_BottomRightRadius(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_put_BottomRightRadius(This,value)	\
    ( (This)->lpVtbl -> put_BottomRightRadius(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_get_Left(This,value)	\
    ( (This)->lpVtbl -> get_Left(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_put_Left(This,value)	\
    ( (This)->lpVtbl -> put_Left(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_get_Right(This,value)	\
    ( (This)->lpVtbl -> get_Right(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_put_Right(This,value)	\
    ( (This)->lpVtbl -> put_Right(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_get_Top(This,value)	\
    ( (This)->lpVtbl -> get_Top(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_put_Top(This,value)	\
    ( (This)->lpVtbl -> put_Top(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_get_TopLeftRadius(This,value)	\
    ( (This)->lpVtbl -> get_TopLeftRadius(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_put_TopLeftRadius(This,value)	\
    ( (This)->lpVtbl -> put_TopLeftRadius(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_get_TopRightRadius(This,value)	\
    ( (This)->lpVtbl -> get_TopRightRadius(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_put_TopRightRadius(This,value)	\
    ( (This)->lpVtbl -> put_TopRightRadius(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_INTERFACE_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_INTERFACE_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_INTERFACE_DEFINED__

/* interface __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3FB39999-337F-5CDD-91BE-D8CE6C40CD76")
    __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ResampleMode( 
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CPrivate_CCompositionResampleMode *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ResampleMode( 
            /* [in] */ __x_Microsoft_CUI_CComposition_CPrivate_CCompositionResampleMode value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisualVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResampleMode )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual * This,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CPrivate_CCompositionResampleMode *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ResampleMode )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual * This,
            /* [in] */ __x_Microsoft_CUI_CComposition_CPrivate_CCompositionResampleMode value);
        
        END_INTERFACE
    } __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisualVtbl;

    interface __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual
    {
        CONST_VTBL struct __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisualVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_get_ResampleMode(This,value)	\
    ( (This)->lpVtbl -> get_ResampleMode(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_put_ResampleMode(This,value)	\
    ( (This)->lpVtbl -> put_ResampleMode(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_INTERFACE_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_INTERFACE_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_INTERFACE_DEFINED__

/* interface __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FFC82FEE-48DE-5D9A-AA7E-AC717ED7E6B0")
    __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DisplaySizePhysicalPixels( 
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ScreenPhysicalPixelsToHimetricScaleFactor( 
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_VisualRelativePixelsToScreenPhysicalPixelsScale( 
            /* [out][retval] */ FLOAT *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_VisualRelativePixelsToScreenPhysicalPixelsRotation( 
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector3 *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplaySizePhysicalPixels )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation * This,
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScreenPhysicalPixelsToHimetricScaleFactor )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation * This,
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_VisualRelativePixelsToScreenPhysicalPixelsScale )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation * This,
            /* [out][retval] */ FLOAT *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_VisualRelativePixelsToScreenPhysicalPixelsRotation )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation * This,
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector3 *value);
        
        END_INTERFACE
    } __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationVtbl;

    interface __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation
    {
        CONST_VTBL struct __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_get_DisplaySizePhysicalPixels(This,value)	\
    ( (This)->lpVtbl -> get_DisplaySizePhysicalPixels(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_get_ScreenPhysicalPixelsToHimetricScaleFactor(This,value)	\
    ( (This)->lpVtbl -> get_ScreenPhysicalPixelsToHimetricScaleFactor(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_get_VisualRelativePixelsToScreenPhysicalPixelsScale(This,value)	\
    ( (This)->lpVtbl -> get_VisualRelativePixelsToScreenPhysicalPixelsScale(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_get_VisualRelativePixelsToScreenPhysicalPixelsRotation(This,value)	\
    ( (This)->lpVtbl -> get_VisualRelativePixelsToScreenPhysicalPixelsRotation(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_INTERFACE_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_INTERFACE_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_INTERFACE_DEFINED__

/* interface __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("48EA0687-9BAC-5DA1-BEA9-22EA7D943494")
    __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ActivateInstance( 
            /* [in] */ INT64 hwnd,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation **result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *ActivateInstance )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory * This,
            /* [in] */ INT64 hwnd,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation **result);
        
        END_INTERFACE
    } __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactoryVtbl;

    interface __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory
    {
        CONST_VTBL struct __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_ActivateInstance(This,hwnd,result)	\
    ( (This)->lpVtbl -> ActivateInstance(This,hwnd,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_INTERFACE_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_INTERFACE_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_INTERFACE_DEFINED__

/* interface __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("935C8A2C-30C7-5845-A9E5-A4877AFBFCA5")
    __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_VisualInternal( 
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CIVisual **value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartnerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_VisualInternal )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner * This,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CIVisual **value);
        
        END_INTERFACE
    } __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartnerVtbl;

    interface __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner
    {
        CONST_VTBL struct __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartnerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_get_VisualInternal(This,value)	\
    ( (This)->lpVtbl -> get_VisualInternal(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_INTERFACE_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_INTERFACE_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_INTERFACE_DEFINED__

/* interface __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EA55BB33-72D8-596B-A2DF-15A7921BEFA7")
    __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DepthMode( 
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CPrivate_CCompositionDepthMode *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_DepthMode( 
            /* [in] */ __x_Microsoft_CUI_CComposition_CPrivate_CCompositionDepthMode value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DisconnectChildrenOnDestroy( 
            /* [out][retval] */ boolean *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_DisconnectChildrenOnDestroy( 
            /* [in] */ boolean value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsTransparentForInput( 
            /* [out][retval] */ boolean *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_IsTransparentForInput( 
            /* [in] */ boolean value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ProtectContents( 
            /* [out][retval] */ boolean *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ProtectContents( 
            /* [in] */ boolean value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_UpVectorOverride( 
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector3 *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_UpVectorOverride( 
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AttachMouseDragToHwnd( 
            /* [in] */ INT64 hwnd,
            /* [in] */ boolean enable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AttachMouseWheelToHwnd( 
            /* [in] */ INT64 hwnd,
            /* [in] */ boolean enable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CaptureOverrideSDRBoostAsync( 
            /* [in] */ __x_Microsoft_CUI_CComposition_CIVisual *propertyVisual,
            /* [in] */ __x_Microsoft_CUI_CComposition_CICompositionGraphicsDevice *graphicsDevice,
            /* [in] */ INT32 width,
            /* [in] */ INT32 height,
            /* [in] */ __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat pixelFormat,
            /* [in] */ __x_ABI_CWindows_CGraphics_CDirectX_CDirectXAlphaMode alphaMode,
            /* [in] */ FLOAT sdrBoost,
            /* [out][retval] */ __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface **operation) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClosedEventHandle( 
            /* [out][retval] */ INT64 *result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DepthMode )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CPrivate_CCompositionDepthMode *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_DepthMode )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
            /* [in] */ __x_Microsoft_CUI_CComposition_CPrivate_CCompositionDepthMode value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisconnectChildrenOnDestroy )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
            /* [out][retval] */ boolean *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisconnectChildrenOnDestroy )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
            /* [in] */ boolean value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsTransparentForInput )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
            /* [out][retval] */ boolean *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsTransparentForInput )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
            /* [in] */ boolean value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProtectContents )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
            /* [out][retval] */ boolean *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProtectContents )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
            /* [in] */ boolean value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_UpVectorOverride )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector3 *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_UpVectorOverride )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value);
        
        HRESULT ( STDMETHODCALLTYPE *AttachMouseDragToHwnd )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
            /* [in] */ INT64 hwnd,
            /* [in] */ boolean enable);
        
        HRESULT ( STDMETHODCALLTYPE *AttachMouseWheelToHwnd )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
            /* [in] */ INT64 hwnd,
            /* [in] */ boolean enable);
        
        HRESULT ( STDMETHODCALLTYPE *CaptureOverrideSDRBoostAsync )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
            /* [in] */ __x_Microsoft_CUI_CComposition_CIVisual *propertyVisual,
            /* [in] */ __x_Microsoft_CUI_CComposition_CICompositionGraphicsDevice *graphicsDevice,
            /* [in] */ INT32 width,
            /* [in] */ INT32 height,
            /* [in] */ __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat pixelFormat,
            /* [in] */ __x_ABI_CWindows_CGraphics_CDirectX_CDirectXAlphaMode alphaMode,
            /* [in] */ FLOAT sdrBoost,
            /* [out][retval] */ __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface **operation);
        
        HRESULT ( STDMETHODCALLTYPE *GetClosedEventHandle )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
            /* [out][retval] */ INT64 *result);
        
        END_INTERFACE
    } __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivateVtbl;

    interface __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate
    {
        CONST_VTBL struct __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_get_DepthMode(This,value)	\
    ( (This)->lpVtbl -> get_DepthMode(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_put_DepthMode(This,value)	\
    ( (This)->lpVtbl -> put_DepthMode(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_get_DisconnectChildrenOnDestroy(This,value)	\
    ( (This)->lpVtbl -> get_DisconnectChildrenOnDestroy(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_put_DisconnectChildrenOnDestroy(This,value)	\
    ( (This)->lpVtbl -> put_DisconnectChildrenOnDestroy(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_get_IsTransparentForInput(This,value)	\
    ( (This)->lpVtbl -> get_IsTransparentForInput(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_put_IsTransparentForInput(This,value)	\
    ( (This)->lpVtbl -> put_IsTransparentForInput(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_get_ProtectContents(This,value)	\
    ( (This)->lpVtbl -> get_ProtectContents(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_put_ProtectContents(This,value)	\
    ( (This)->lpVtbl -> put_ProtectContents(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_get_UpVectorOverride(This,value)	\
    ( (This)->lpVtbl -> get_UpVectorOverride(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_put_UpVectorOverride(This,value)	\
    ( (This)->lpVtbl -> put_UpVectorOverride(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_AttachMouseDragToHwnd(This,hwnd,enable)	\
    ( (This)->lpVtbl -> AttachMouseDragToHwnd(This,hwnd,enable) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_AttachMouseWheelToHwnd(This,hwnd,enable)	\
    ( (This)->lpVtbl -> AttachMouseWheelToHwnd(This,hwnd,enable) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_CaptureOverrideSDRBoostAsync(This,propertyVisual,graphicsDevice,width,height,pixelFormat,alphaMode,sdrBoost,operation)	\
    ( (This)->lpVtbl -> CaptureOverrideSDRBoostAsync(This,propertyVisual,graphicsDevice,width,height,pixelFormat,alphaMode,sdrBoost,operation) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_GetClosedEventHandle(This,result)	\
    ( (This)->lpVtbl -> GetClosedEventHandle(This,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_INTERFACE_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_INTERFACE_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_INTERFACE_DEFINED__

/* interface __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3292FF4B-6ECE-52F3-B0B2-D58034E840AE")
    __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DesktopOffset( 
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnableDesktopOffset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DisableDesktopOffset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartnerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopOffset )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner * This,
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CNumerics_CVector2 *value);
        
        HRESULT ( STDMETHODCALLTYPE *EnableDesktopOffset )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner * This);
        
        HRESULT ( STDMETHODCALLTYPE *DisableDesktopOffset )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner * This);
        
        END_INTERFACE
    } __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartnerVtbl;

    interface __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner
    {
        CONST_VTBL struct __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartnerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_get_DesktopOffset(This,value)	\
    ( (This)->lpVtbl -> get_DesktopOffset(This,value) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_EnableDesktopOffset(This)	\
    ( (This)->lpVtbl -> EnableDesktopOffset(This) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_DisableDesktopOffset(This)	\
    ( (This)->lpVtbl -> DisableDesktopOffset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_INTERFACE_DEFINED__ */


#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_INTERFACE_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_INTERFACE_DEFINED__

/* interface __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D5757CFE-7F82-5198-8335-62A57AF61B5F")
    __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ContentVisual( 
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CIVisual **value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartnerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContentVisual )( 
            __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner * This,
            /* [out][retval] */ __x_Microsoft_CUI_CComposition_CIVisual **value);
        
        END_INTERFACE
    } __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartnerVtbl;

    interface __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner
    {
        CONST_VTBL struct __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartnerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_get_ContentVisual(This,value)	\
    ( (This)->lpVtbl -> get_ContentVisual(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HSTRING_UserSize(     unsigned long *, unsigned long            , HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal(  unsigned long *, unsigned char *, HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal(unsigned long *, unsigned char *, HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree(     unsigned long *, HSTRING * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


