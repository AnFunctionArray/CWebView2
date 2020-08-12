/* Header file automatically generated from Microsoft.UI.Composition.Desktop.idl */
/*
 * File built with Microsoft(R) MIDLRT Compiler Engine Version 10.00.0226 
 */

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif /*COM_NO_WINDOWS_H*/
#ifndef __Microsoft2EUI2EComposition2EDesktop_h__
#define __Microsoft2EUI2EComposition2EDesktop_h__
#ifndef __Microsoft2EUI2EComposition2EDesktop_p_h__
#define __Microsoft2EUI2EComposition2EDesktop_p_h__


#pragma once

// Ensure that the setting of the /ns_prefix command line switch is consistent for all headers.
// If you get an error from the compiler indicating "warning C4005: 'CHECK_NS_PREFIX_STATE': macro redefinition", this
// indicates that you have included two different headers with different settings for the /ns_prefix MIDL command line switch
#if !defined(DISABLE_NS_PREFIX_CHECKS)
#define CHECK_NS_PREFIX_STATE "never"
#endif // !defined(DISABLE_NS_PREFIX_CHECKS)


#pragma push_macro("MIDL_CONST_ID")
#undef MIDL_CONST_ID
#define MIDL_CONST_ID const __declspec(selectany)


//  API Contract Inclusion Definitions
#if !defined(SPECIFIC_API_CONTRACT_DEFINITIONS)
#if !defined(MICROSOFT_GRAPHICS_LIFTEDCONTRACT_VERSION)
#define MICROSOFT_GRAPHICS_LIFTEDCONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_GRAPHICS_LIFTEDCONTRACT_VERSION)

#if !defined(MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION)
#define MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION)

#if !defined(MICROSOFT_UI_COMPOSITION_DESKTOP_LIFTEDCONTRACT_VERSION)
#define MICROSOFT_UI_COMPOSITION_DESKTOP_LIFTEDCONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_UI_COMPOSITION_DESKTOP_LIFTEDCONTRACT_VERSION)

#if !defined(MICROSOFT_UI_COMPOSITION_LIFTEDCONTRACT_VERSION)
#define MICROSOFT_UI_COMPOSITION_LIFTEDCONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_UI_COMPOSITION_LIFTEDCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0x80000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)
#define WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)
#define WINDOWS_PHONE_PHONECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)
#define WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)

#if !defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)
#define WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Microsoft.UI.Composition.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Desktop {
                interface IDesktopWindowTarget;
            } /* Desktop */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget Microsoft::UI::Composition::Desktop::IDesktopWindowTarget

#endif // ____x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_FWD_DEFINED__





namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Desktop {
                class DesktopWindowTarget;
            } /* Desktop */
        } /* Composition */
    } /* UI */
} /* Microsoft */








/*
 *
 * Interface Microsoft.UI.Composition.Desktop.IDesktopWindowTarget
 *
 * Introduced to Microsoft.UI.Composition.Desktop.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Desktop.DesktopWindowTarget
 *
 *
 */
#if MICROSOFT_UI_COMPOSITION_DESKTOP_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Desktop_IDesktopWindowTarget[] = L"Microsoft.UI.Composition.Desktop.IDesktopWindowTarget";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Desktop {
                /* [object, uuid("26FAA6BB-F926-569D-A394-A74D5A7428E9"), experimental, exclusiveto, contract] */
                MIDL_INTERFACE("26FAA6BB-F926-569D-A394-A74D5A7428E9")
                IDesktopWindowTarget : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsTopmost(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDesktopWindowTarget=_uuidof(IDesktopWindowTarget);
                
            } /* Desktop */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_DESKTOP_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Desktop.DesktopWindowTarget
 *
 * Introduced to Microsoft.UI.Composition.Desktop.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Desktop.IDesktopWindowTarget ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_COMPOSITION_DESKTOP_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Desktop_DesktopWindowTarget_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Desktop_DesktopWindowTarget_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Desktop_DesktopWindowTarget[] = L"Microsoft.UI.Composition.Desktop.DesktopWindowTarget";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_DESKTOP_LIFTEDCONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget;

#endif // ____x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_FWD_DEFINED__










/*
 *
 * Interface Microsoft.UI.Composition.Desktop.IDesktopWindowTarget
 *
 * Introduced to Microsoft.UI.Composition.Desktop.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Desktop.DesktopWindowTarget
 *
 *
 */
#if MICROSOFT_UI_COMPOSITION_DESKTOP_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Desktop_IDesktopWindowTarget[] = L"Microsoft.UI.Composition.Desktop.IDesktopWindowTarget";
/* [object, uuid("26FAA6BB-F926-569D-A394-A74D5A7428E9"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTargetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsTopmost )(
        __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget * This,
        /* [retval, out] */boolean * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTargetVtbl;

interface __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTargetVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_get_IsTopmost(This,value) \
    ( (This)->lpVtbl->get_IsTopmost(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CDesktop_CIDesktopWindowTarget_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_DESKTOP_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Desktop.DesktopWindowTarget
 *
 * Introduced to Microsoft.UI.Composition.Desktop.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Desktop.IDesktopWindowTarget ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_COMPOSITION_DESKTOP_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Desktop_DesktopWindowTarget_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Desktop_DesktopWindowTarget_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Desktop_DesktopWindowTarget[] = L"Microsoft.UI.Composition.Desktop.DesktopWindowTarget";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_DESKTOP_LIFTEDCONTRACT_VERSION >= 0x10000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __Microsoft2EUI2EComposition2EDesktop_p_h__

#endif // __Microsoft2EUI2EComposition2EDesktop_h__
