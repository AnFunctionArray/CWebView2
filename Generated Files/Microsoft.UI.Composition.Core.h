/* Header file automatically generated from Microsoft.UI.Composition.Core.idl */
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
#ifndef __Microsoft2EUI2EComposition2ECore_h__
#define __Microsoft2EUI2EComposition2ECore_h__
#ifndef __Microsoft2EUI2EComposition2ECore_p_h__
#define __Microsoft2EUI2EComposition2ECore_p_h__


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

#if !defined(MICROSOFT_UI_COMPOSITION_CORE_LIFTEDCONTRACT_VERSION)
#define MICROSOFT_UI_COMPOSITION_CORE_LIFTEDCONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_UI_COMPOSITION_CORE_LIFTEDCONTRACT_VERSION)

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
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_Microsoft_CUI_CComposition_CCore_CICompositorController_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CCore_CICompositorController_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Core {
                interface ICompositorController;
            } /* Core */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CCore_CICompositorController Microsoft::UI::Composition::Core::ICompositorController

#endif // ____x_Microsoft_CUI_CComposition_CCore_CICompositorController_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Core {
                class CompositorController;
            } /* Core */
        } /* Composition */
    } /* UI */
} /* Microsoft */



#if MICROSOFT_UI_COMPOSITION_CORE_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("951d00b7-db3e-522c-b1f7-2bef3e1b9108"))
ITypedEventHandler<Microsoft::UI::Composition::Core::CompositorController*,IInspectable*> : ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Microsoft::UI::Composition::Core::CompositorController*, Microsoft::UI::Composition::Core::ICompositorController*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Composition.Core.CompositorController, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<Microsoft::UI::Composition::Core::CompositorController*,IInspectable*> __FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable_t
/* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable Windows::Foundation::ITypedEventHandler<Microsoft::UI::Composition::Core::ICompositorController*,IInspectable*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable_t Windows::Foundation::ITypedEventHandler<Microsoft::UI::Composition::Core::ICompositorController*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable_USE */


#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_CORE_LIFTEDCONTRACT_VERSION >= 0x10000




namespace Microsoft {
    namespace UI {
        namespace Composition {
            class Compositor;
        } /* Composition */
    } /* UI */
} /* Microsoft */

#ifndef ____x_Microsoft_CUI_CComposition_CICompositor_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CICompositor_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            interface ICompositor;
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CICompositor Microsoft::UI::Composition::ICompositor

#endif // ____x_Microsoft_CUI_CComposition_CICompositor_FWD_DEFINED__



















/*
 *
 * Interface Microsoft.UI.Composition.Core.ICompositorController
 *
 * Introduced to Microsoft.UI.Composition.Core.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Core.CompositorController
 *
 *
 */
#if MICROSOFT_UI_COMPOSITION_CORE_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CCore_CICompositorController_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CCore_CICompositorController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Core_ICompositorController[] = L"Microsoft.UI.Composition.Core.ICompositorController";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Core {
                /* [object, uuid("CC107CDC-558F-5D1A-96A5-A735AC04386B"), experimental, exclusiveto, contract] */
                MIDL_INTERFACE("CC107CDC-558F-5D1A-96A5-A735AC04386B")
                ICompositorController : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Compositor(
                        /* [retval, out] */Microsoft::UI::Composition::ICompositor * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Commit(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE EnsurePreviousCommitCompletedAsync(
                        /* [retval, out] */Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CommitNeeded(
                        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable * handler,
                        /* [retval, out] */EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CommitNeeded(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICompositorController=_uuidof(ICompositorController);
                
            } /* Core */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CCore_CICompositorController;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CCore_CICompositorController_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_CORE_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Core.CompositorController
 *
 * Introduced to Microsoft.UI.Composition.Core.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Microsoft.UI.Composition.Core.LiftedContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Core.ICompositorController ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_COMPOSITION_CORE_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Core_CompositorController_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Core_CompositorController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Core_CompositorController[] = L"Microsoft.UI.Composition.Core.CompositorController";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_CORE_LIFTEDCONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_Microsoft_CUI_CComposition_CCore_CICompositorController_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CCore_CICompositorController_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CCore_CICompositorController __x_Microsoft_CUI_CComposition_CCore_CICompositorController;

#endif // ____x_Microsoft_CUI_CComposition_CCore_CICompositorController_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions


#if MICROSOFT_UI_COMPOSITION_CORE_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable __FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable * This,/* [in] */ __RPC__in_opt __x_Microsoft_CUI_CComposition_CCore_CICompositorController * sender,/* [in] */ __RPC__in_opt IInspectable * e);
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



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable_INTERFACE_DEFINED__

#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_CORE_LIFTEDCONTRACT_VERSION >= 0x10000


#ifndef ____x_Microsoft_CUI_CComposition_CICompositor_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CICompositor_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CICompositor __x_Microsoft_CUI_CComposition_CICompositor;

#endif // ____x_Microsoft_CUI_CComposition_CICompositor_FWD_DEFINED__



















/*
 *
 * Interface Microsoft.UI.Composition.Core.ICompositorController
 *
 * Introduced to Microsoft.UI.Composition.Core.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Core.CompositorController
 *
 *
 */
#if MICROSOFT_UI_COMPOSITION_CORE_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CCore_CICompositorController_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CCore_CICompositorController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Core_ICompositorController[] = L"Microsoft.UI.Composition.Core.ICompositorController";
/* [object, uuid("CC107CDC-558F-5D1A-96A5-A735AC04386B"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CComposition_CCore_CICompositorControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CCore_CICompositorController * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CCore_CICompositorController * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CCore_CICompositorController * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CCore_CICompositorController * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CCore_CICompositorController * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CCore_CICompositorController * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Compositor )(
        __x_Microsoft_CUI_CComposition_CCore_CICompositorController * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CICompositor * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Commit )(
        __x_Microsoft_CUI_CComposition_CCore_CICompositorController * This
        );
    HRESULT ( STDMETHODCALLTYPE *EnsurePreviousCommitCompletedAsync )(
        __x_Microsoft_CUI_CComposition_CCore_CICompositorController * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CommitNeeded )(
        __x_Microsoft_CUI_CComposition_CCore_CICompositorController * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CComposition__CCore__CCompositorController_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CommitNeeded )(
        __x_Microsoft_CUI_CComposition_CCore_CICompositorController * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CCore_CICompositorControllerVtbl;

interface __x_Microsoft_CUI_CComposition_CCore_CICompositorController
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CCore_CICompositorControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CCore_CICompositorController_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CCore_CICompositorController_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CCore_CICompositorController_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CCore_CICompositorController_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CCore_CICompositorController_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CCore_CICompositorController_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CCore_CICompositorController_get_Compositor(This,value) \
    ( (This)->lpVtbl->get_Compositor(This,value) )

#define __x_Microsoft_CUI_CComposition_CCore_CICompositorController_Commit(This) \
    ( (This)->lpVtbl->Commit(This) )

#define __x_Microsoft_CUI_CComposition_CCore_CICompositorController_EnsurePreviousCommitCompletedAsync(This,operation) \
    ( (This)->lpVtbl->EnsurePreviousCommitCompletedAsync(This,operation) )

#define __x_Microsoft_CUI_CComposition_CCore_CICompositorController_add_CommitNeeded(This,handler,token) \
    ( (This)->lpVtbl->add_CommitNeeded(This,handler,token) )

#define __x_Microsoft_CUI_CComposition_CCore_CICompositorController_remove_CommitNeeded(This,token) \
    ( (This)->lpVtbl->remove_CommitNeeded(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CCore_CICompositorController;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CCore_CICompositorController_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_CORE_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Core.CompositorController
 *
 * Introduced to Microsoft.UI.Composition.Core.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Microsoft.UI.Composition.Core.LiftedContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Core.ICompositorController ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_COMPOSITION_CORE_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Core_CompositorController_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Core_CompositorController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Core_CompositorController[] = L"Microsoft.UI.Composition.Core.CompositorController";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_CORE_LIFTEDCONTRACT_VERSION >= 0x10000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __Microsoft2EUI2EComposition2ECore_p_h__

#endif // __Microsoft2EUI2EComposition2ECore_h__
