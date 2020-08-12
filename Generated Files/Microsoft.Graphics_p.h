

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 05:14:07 2038
 */
/* Compiler settings for C:\Users\sasho\AppData\Local\Temp\Microsoft.Graphics.idl-0aed897b:
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

#ifndef __Microsoft2EGraphics_p_h__
#define __Microsoft2EGraphics_p_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_Microsoft_CGraphics_CIGeometrySource2D_FWD_DEFINED__
#define ____x_Microsoft_CGraphics_CIGeometrySource2D_FWD_DEFINED__
typedef interface __x_Microsoft_CGraphics_CIGeometrySource2D __x_Microsoft_CGraphics_CIGeometrySource2D;

#endif 	/* ____x_Microsoft_CGraphics_CIGeometrySource2D_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_Microsoft2EGraphics_0000_0000 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_Microsoft2EGraphics_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Microsoft2EGraphics_0000_0000_v0_0_s_ifspec;

#ifndef ____x_Microsoft_CGraphics_CIGeometrySource2D_INTERFACE_DEFINED__
#define ____x_Microsoft_CGraphics_CIGeometrySource2D_INTERFACE_DEFINED__

/* interface __x_Microsoft_CGraphics_CIGeometrySource2D */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Microsoft_CGraphics_CIGeometrySource2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EB4728DE-0C12-4428-A840-4DCAC71490E8")
    __x_Microsoft_CGraphics_CIGeometrySource2D : public IInspectable
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct __x_Microsoft_CGraphics_CIGeometrySource2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Microsoft_CGraphics_CIGeometrySource2D * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Microsoft_CGraphics_CIGeometrySource2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Microsoft_CGraphics_CIGeometrySource2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Microsoft_CGraphics_CIGeometrySource2D * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Microsoft_CGraphics_CIGeometrySource2D * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Microsoft_CGraphics_CIGeometrySource2D * This,
            /* [out] */ TrustLevel *trustLevel);
        
        END_INTERFACE
    } __x_Microsoft_CGraphics_CIGeometrySource2DVtbl;

    interface __x_Microsoft_CGraphics_CIGeometrySource2D
    {
        CONST_VTBL struct __x_Microsoft_CGraphics_CIGeometrySource2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Microsoft_CGraphics_CIGeometrySource2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Microsoft_CGraphics_CIGeometrySource2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Microsoft_CGraphics_CIGeometrySource2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Microsoft_CGraphics_CIGeometrySource2D_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Microsoft_CGraphics_CIGeometrySource2D_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Microsoft_CGraphics_CIGeometrySource2D_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Microsoft_CGraphics_CIGeometrySource2D_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


