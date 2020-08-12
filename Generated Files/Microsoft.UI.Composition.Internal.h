/* Header file automatically generated from Microsoft.UI.Composition.Internal.idl */
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
#ifndef __Microsoft2EUI2EComposition2EInternal_h__
#define __Microsoft2EUI2EComposition2EInternal_h__
#ifndef __Microsoft2EUI2EComposition2EInternal_p_h__
#define __Microsoft2EUI2EComposition2EInternal_p_h__


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

#if !defined(MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION)
#define MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION)

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
#include "Windows.Foundation.Numerics.h"
#include "Windows.Graphics.h"
#include "Windows.Graphics.DirectX.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Internal {
                interface ICompositionIslandPartner;
            } /* Internal */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner Microsoft::UI::Composition::Internal::ICompositionIslandPartner

#endif // ____x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Internal {
                interface ICompositionSurfaceBrushSuperSamplePreview;
            } /* Internal */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview Microsoft::UI::Composition::Internal::ICompositionSurfaceBrushSuperSamplePreview

#endif // ____x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Internal {
                interface ICompositionTargetInternal;
            } /* Internal */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal Microsoft::UI::Composition::Internal::ICompositionTargetInternal

#endif // ____x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Internal {
                interface ICompositionVisualSurfacePartner;
            } /* Internal */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner Microsoft::UI::Composition::Internal::ICompositionVisualSurfacePartner

#endif // ____x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Internal {
                interface ICompositorPartner_ProjectedShadow;
            } /* Internal */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow Microsoft::UI::Composition::Internal::ICompositorPartner_ProjectedShadow

#endif // ____x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Internal {
                interface IVisualInternal;
            } /* Internal */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal Microsoft::UI::Composition::Internal::IVisualInternal

#endif // ____x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CIVisualReference_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CIVisualReference_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Internal {
                interface IVisualReference;
            } /* Internal */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference Microsoft::UI::Composition::Internal::IVisualReference

#endif // ____x_Microsoft_CUI_CComposition_CInternal_CIVisualReference_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Internal {
                interface IVisualReferenceFactory;
            } /* Internal */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory Microsoft::UI::Composition::Internal::IVisualReferenceFactory

#endif // ____x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
#ifndef ____x_Microsoft_CUI_CComposition_CICompositionSurface_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CICompositionSurface_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            interface ICompositionSurface;
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CICompositionSurface Microsoft::UI::Composition::ICompositionSurface

#endif // ____x_Microsoft_CUI_CComposition_CICompositionSurface_FWD_DEFINED__


#if MICROSOFT_UI_COMPOSITION_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Microsoft__CUI__CComposition__CICompositionSurface_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Microsoft__CUI__CComposition__CICompositionSurface_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c89efa6d-6f22-5e04-8059-b5628e3f0180"))
IAsyncOperationCompletedHandler<Microsoft::UI::Composition::ICompositionSurface*> : IAsyncOperationCompletedHandler_impl<Microsoft::UI::Composition::ICompositionSurface*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Microsoft.UI.Composition.ICompositionSurface>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<Microsoft::UI::Composition::ICompositionSurface*> __FIAsyncOperationCompletedHandler_1_Microsoft__CUI__CComposition__CICompositionSurface_t;
#define __FIAsyncOperationCompletedHandler_1_Microsoft__CUI__CComposition__CICompositionSurface Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Microsoft__CUI__CComposition__CICompositionSurface_t
/* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Microsoft__CUI__CComposition__CICompositionSurface Windows::Foundation::IAsyncOperationCompletedHandler<Microsoft::UI::Composition::ICompositionSurface*>
//#define __FIAsyncOperationCompletedHandler_1_Microsoft__CUI__CComposition__CICompositionSurface_t Windows::Foundation::IAsyncOperationCompletedHandler<Microsoft::UI::Composition::ICompositionSurface*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Microsoft__CUI__CComposition__CICompositionSurface_USE */


#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_LIFTEDCONTRACT_VERSION >= 0x10000


#if MICROSOFT_UI_COMPOSITION_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef DEF___FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface_USE
#define DEF___FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("92ceaa5d-b255-57d9-ab7c-0f304485c1bd"))
IAsyncOperation<Microsoft::UI::Composition::ICompositionSurface*> : IAsyncOperation_impl<Microsoft::UI::Composition::ICompositionSurface*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Microsoft.UI.Composition.ICompositionSurface>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<Microsoft::UI::Composition::ICompositionSurface*> __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface_t;
#define __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface Windows::Foundation::__FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface_t
/* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface Windows::Foundation::IAsyncOperation<Microsoft::UI::Composition::ICompositionSurface*>
//#define __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface_t Windows::Foundation::IAsyncOperation<Microsoft::UI::Composition::ICompositionSurface*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface_USE */


#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_LIFTEDCONTRACT_VERSION >= 0x10000




namespace Microsoft {
    namespace UI {
        namespace Composition {
            class CompositionGraphicsDevice;
        } /* Composition */
    } /* UI */
} /* Microsoft */

#ifndef ____x_Microsoft_CUI_CComposition_CICompositionGraphicsDevice_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CICompositionGraphicsDevice_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            interface ICompositionGraphicsDevice;
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CICompositionGraphicsDevice Microsoft::UI::Composition::ICompositionGraphicsDevice

#endif // ____x_Microsoft_CUI_CComposition_CICompositionGraphicsDevice_FWD_DEFINED__



namespace Microsoft {
    namespace UI {
        namespace Composition {
            class CompositionProjectedShadowCaster;
        } /* Composition */
    } /* UI */
} /* Microsoft */

#ifndef ____x_Microsoft_CUI_CComposition_CICompositionProjectedShadowCaster_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CICompositionProjectedShadowCaster_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            interface ICompositionProjectedShadowCaster;
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CICompositionProjectedShadowCaster Microsoft::UI::Composition::ICompositionProjectedShadowCaster

#endif // ____x_Microsoft_CUI_CComposition_CICompositionProjectedShadowCaster_FWD_DEFINED__



namespace Microsoft {
    namespace UI {
        namespace Composition {
            
            typedef enum CompositionStretch : int CompositionStretch;
            
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            class Visual;
        } /* Composition */
    } /* UI */
} /* Microsoft */

#ifndef ____x_Microsoft_CUI_CComposition_CIVisual_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CIVisual_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            interface IVisual;
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CIVisual Microsoft::UI::Composition::IVisual

#endif // ____x_Microsoft_CUI_CComposition_CIVisual_FWD_DEFINED__















namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Internal {
                class VisualReference;
            } /* Internal */
        } /* Composition */
    } /* UI */
} /* Microsoft */








/*
 *
 * Interface Microsoft.UI.Composition.Internal.ICompositionIslandPartner
 *
 * Introduced to Microsoft.UI.Composition.Internal.LiftedInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Internal_ICompositionIslandPartner[] = L"Microsoft.UI.Composition.Internal.ICompositionIslandPartner";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Internal {
                /* [object, uuid("38EB0908-003B-51D3-B2CD-1EF2AB226AA5"), experimental, contract] */
                MIDL_INTERFACE("38EB0908-003B-51D3-B2CD-1EF2AB226AA5")
                ICompositionIslandPartner : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE GetIdAsGuid(
                        /* [retval, out] */GUID * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetAutomationProvider(
                        /* [retval, out] */IInspectable * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetAutomationHostProvider(
                        /* [in] */IInspectable * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICompositionIslandPartner=_uuidof(ICompositionIslandPartner);
                
            } /* Internal */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Internal.ICompositionSurfaceBrushSuperSamplePreview
 *
 * Introduced to Microsoft.UI.Composition.Internal.LiftedInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Internal_ICompositionSurfaceBrushSuperSamplePreview[] = L"Microsoft.UI.Composition.Internal.ICompositionSurfaceBrushSuperSamplePreview";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Internal {
                /* [object, uuid("FA0C355D-B7D7-5E0A-B02B-BF79680E161D"), experimental, contract] */
                MIDL_INTERFACE("FA0C355D-B7D7-5E0A-B02B-BF79680E161D")
                ICompositionSurfaceBrushSuperSamplePreview : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SuperDownSamplePreview(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SuperDownSamplePreview(
                        /* [in] */::boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICompositionSurfaceBrushSuperSamplePreview=_uuidof(ICompositionSurfaceBrushSuperSamplePreview);
                
            } /* Internal */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Internal.ICompositionTargetInternal
 *
 * Introduced to Microsoft.UI.Composition.Internal.LiftedInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Internal_ICompositionTargetInternal[] = L"Microsoft.UI.Composition.Internal.ICompositionTargetInternal";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Internal {
                /* [object, uuid("5C6A420B-B1C6-5C15-9224-7A3FB5971101"), experimental, contract] */
                MIDL_INTERFACE("5C6A420B-B1C6-5C15-9224-7A3FB5971101")
                ICompositionTargetInternal : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HintSize(
                        /* [retval, out] */Windows::Graphics::SizeInt32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HintSize(
                        /* [in] */Windows::Graphics::SizeInt32 value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICompositionTargetInternal=_uuidof(ICompositionTargetInternal);
                
            } /* Internal */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Internal.ICompositionVisualSurfacePartner
 *
 * Introduced to Microsoft.UI.Composition.Internal.LiftedInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Internal_ICompositionVisualSurfacePartner[] = L"Microsoft.UI.Composition.Internal.ICompositionVisualSurfacePartner";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Internal {
                /* [object, uuid("9B151826-F42E-5218-A4A6-184215BE8E68"), experimental, contract] */
                MIDL_INTERFACE("9B151826-F42E-5218-A4A6-184215BE8E68")
                ICompositionVisualSurfacePartner : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RealizationSize(
                        /* [retval, out] */Windows::Foundation::Numerics::Vector2 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RealizationSize(
                        /* [in] */Windows::Foundation::Numerics::Vector2 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Stretch(
                        /* [retval, out] */Microsoft::UI::Composition::CompositionStretch * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Stretch(
                        /* [in] */Microsoft::UI::Composition::CompositionStretch value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Freeze(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICompositionVisualSurfacePartner=_uuidof(ICompositionVisualSurfacePartner);
                
            } /* Internal */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Internal.ICompositorPartner_ProjectedShadow
 *
 * Introduced to Microsoft.UI.Composition.Internal.LiftedInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Internal_ICompositorPartner_ProjectedShadow[] = L"Microsoft.UI.Composition.Internal.ICompositorPartner_ProjectedShadow";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Internal {
                /* [object, uuid("E947C5F1-999D-5121-8C25-356E9A6789F0"), experimental, contract] */
                MIDL_INTERFACE("E947C5F1-999D-5121-8C25-356E9A6789F0")
                ICompositorPartner_ProjectedShadow : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE CreateSharedClientProjectedShadowCaster(
                        /* [retval, out] */Microsoft::UI::Composition::ICompositionProjectedShadowCaster * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateSharedHostProjectedShadowCaster(
                        /* [retval, out] */Microsoft::UI::Composition::ICompositionProjectedShadowCaster * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE OpenClientProjectedShadowCasterFromHandle(
                        /* [in] */UINT64 handle,
                        /* [retval, out] */Microsoft::UI::Composition::ICompositionProjectedShadowCaster * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE OpenHostProjectedShadowCasterFromHandle(
                        /* [in] */UINT64 handle,
                        /* [retval, out] */Microsoft::UI::Composition::ICompositionProjectedShadowCaster * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICompositorPartner_ProjectedShadow=_uuidof(ICompositorPartner_ProjectedShadow);
                
            } /* Internal */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Internal.IVisualInternal
 *
 * Introduced to Microsoft.UI.Composition.Internal.LiftedInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Internal_IVisualInternal[] = L"Microsoft.UI.Composition.Internal.IVisualInternal";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Internal {
                /* [object, uuid("C3433349-5F90-5C9C-B96C-35034C25C31F"), experimental, contract] */
                MIDL_INTERFACE("C3433349-5F90-5C9C-B96C-35034C25C31F")
                IVisualInternal : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RasterizationScaleOverride(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RasterizationScaleOverride(
                        /* [in] */FLOAT value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CaptureAsync(
                        /* [in] */Microsoft::UI::Composition::IVisual * propertyVisual,
                        /* [in] */Microsoft::UI::Composition::ICompositionGraphicsDevice * graphicsDevice,
                        /* [in] */INT32 width,
                        /* [in] */INT32 height,
                        /* [in] */Windows::Graphics::DirectX::DirectXPixelFormat pixelFormat,
                        /* [in] */Windows::Graphics::DirectX::DirectXAlphaMode alphaMode,
                        /* [retval, out] */__FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetInputSinkHandle(
                        /* [retval, out] */INT64 * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetInputSinkHandle(
                        /* [in] */INT64 inputHandle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetParentForTransformFromReference(
                        /* [in] */Microsoft::UI::Composition::Internal::IVisualReference * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVisualInternal=_uuidof(IVisualInternal);
                
            } /* Internal */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Internal.IVisualReference
 *
 * Introduced to Microsoft.UI.Composition.Internal.LiftedInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Internal.VisualReference
 *
 *
 */
#if MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CInternal_CIVisualReference_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CInternal_CIVisualReference_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Internal_IVisualReference[] = L"Microsoft.UI.Composition.Internal.IVisualReference";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Internal {
                /* [object, uuid("AD881CCB-368E-5B22-BF7E-837FC0DD07A7"), experimental, exclusiveto, contract] */
                MIDL_INTERFACE("AD881CCB-368E-5B22-BF7E-837FC0DD07A7")
                IVisualReference : public IInspectable
                {
                public:
                    
                };

                extern MIDL_CONST_ID IID & IID_IVisualReference=_uuidof(IVisualReference);
                
            } /* Internal */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CInternal_CIVisualReference;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CInternal_CIVisualReference_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Internal.IVisualReferenceFactory
 *
 * Introduced to Microsoft.UI.Composition.Internal.LiftedInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Internal.VisualReference
 *
 *
 */
#if MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Internal_IVisualReferenceFactory[] = L"Microsoft.UI.Composition.Internal.IVisualReferenceFactory";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Internal {
                /* [object, uuid("0B778FEE-8BFB-5E21-8809-FE03521EA2A1"), experimental, exclusiveto, contract] */
                MIDL_INTERFACE("0B778FEE-8BFB-5E21-8809-FE03521EA2A1")
                IVisualReferenceFactory : public IInspectable
                {
                public:
                    
                };

                extern MIDL_CONST_ID IID & IID_IVisualReferenceFactory=_uuidof(IVisualReferenceFactory);
                
            } /* Internal */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Internal.VisualReference
 *
 * Introduced to Microsoft.UI.Composition.Internal.LiftedInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Internal.IVisualReference ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Internal_VisualReference_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Internal_VisualReference_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Internal_VisualReference[] = L"Microsoft.UI.Composition.Internal.VisualReference";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner;

#endif // ____x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview;

#endif // ____x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal;

#endif // ____x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner;

#endif // ____x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow;

#endif // ____x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal;

#endif // ____x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CIVisualReference_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CIVisualReference_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference;

#endif // ____x_Microsoft_CUI_CComposition_CInternal_CIVisualReference_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory;

#endif // ____x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions
#ifndef ____x_Microsoft_CUI_CComposition_CICompositionSurface_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CICompositionSurface_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CICompositionSurface __x_Microsoft_CUI_CComposition_CICompositionSurface;

#endif // ____x_Microsoft_CUI_CComposition_CICompositionSurface_FWD_DEFINED__


#if MICROSOFT_UI_COMPOSITION_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____FIAsyncOperationCompletedHandler_1_Microsoft__CUI__CComposition__CICompositionSurface_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Microsoft__CUI__CComposition__CICompositionSurface_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Microsoft__CUI__CComposition__CICompositionSurface __FIAsyncOperationCompletedHandler_1_Microsoft__CUI__CComposition__CICompositionSurface;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Microsoft__CUI__CComposition__CICompositionSurface;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface;

typedef struct __FIAsyncOperationCompletedHandler_1_Microsoft__CUI__CComposition__CICompositionSurfaceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Microsoft__CUI__CComposition__CICompositionSurface * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Microsoft__CUI__CComposition__CICompositionSurface * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Microsoft__CUI__CComposition__CICompositionSurface * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Microsoft__CUI__CComposition__CICompositionSurface * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Microsoft__CUI__CComposition__CICompositionSurfaceVtbl;

interface __FIAsyncOperationCompletedHandler_1_Microsoft__CUI__CComposition__CICompositionSurface
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Microsoft__CUI__CComposition__CICompositionSurfaceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Microsoft__CUI__CComposition__CICompositionSurface_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Microsoft__CUI__CComposition__CICompositionSurface_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Microsoft__CUI__CComposition__CICompositionSurface_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Microsoft__CUI__CComposition__CICompositionSurface_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Microsoft__CUI__CComposition__CICompositionSurface_INTERFACE_DEFINED__

#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_LIFTEDCONTRACT_VERSION >= 0x10000


#if MICROSOFT_UI_COMPOSITION_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface;

typedef struct __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurfaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Microsoft__CUI__CComposition__CICompositionSurface *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Microsoft__CUI__CComposition__CICompositionSurface **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface * This, /* [retval][out] */ __RPC__out __x_Microsoft_CUI_CComposition_CICompositionSurface * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurfaceVtbl;

interface __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface
{
    CONST_VTBL struct __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurfaceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface_INTERFACE_DEFINED__

#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_LIFTEDCONTRACT_VERSION >= 0x10000


#ifndef ____x_Microsoft_CUI_CComposition_CICompositionGraphicsDevice_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CICompositionGraphicsDevice_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CICompositionGraphicsDevice __x_Microsoft_CUI_CComposition_CICompositionGraphicsDevice;

#endif // ____x_Microsoft_CUI_CComposition_CICompositionGraphicsDevice_FWD_DEFINED__


#ifndef ____x_Microsoft_CUI_CComposition_CICompositionProjectedShadowCaster_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CICompositionProjectedShadowCaster_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CICompositionProjectedShadowCaster __x_Microsoft_CUI_CComposition_CICompositionProjectedShadowCaster;

#endif // ____x_Microsoft_CUI_CComposition_CICompositionProjectedShadowCaster_FWD_DEFINED__



typedef enum __x_Microsoft_CUI_CComposition_CCompositionStretch __x_Microsoft_CUI_CComposition_CCompositionStretch;


#ifndef ____x_Microsoft_CUI_CComposition_CIVisual_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CIVisual_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CIVisual __x_Microsoft_CUI_CComposition_CIVisual;

#endif // ____x_Microsoft_CUI_CComposition_CIVisual_FWD_DEFINED__





















/*
 *
 * Interface Microsoft.UI.Composition.Internal.ICompositionIslandPartner
 *
 * Introduced to Microsoft.UI.Composition.Internal.LiftedInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Internal_ICompositionIslandPartner[] = L"Microsoft.UI.Composition.Internal.ICompositionIslandPartner";
/* [object, uuid("38EB0908-003B-51D3-B2CD-1EF2AB226AA5"), experimental, contract] */
typedef struct __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartnerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetIdAsGuid )(
        __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner * This,
        /* [retval, out] */GUID * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetAutomationProvider )(
        __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner * This,
        /* [retval, out] */IInspectable * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetAutomationHostProvider )(
        __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner * This,
        /* [in] */IInspectable * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartnerVtbl;

interface __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartnerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_GetIdAsGuid(This,result) \
    ( (This)->lpVtbl->GetIdAsGuid(This,result) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_GetAutomationProvider(This,result) \
    ( (This)->lpVtbl->GetAutomationProvider(This,result) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_SetAutomationHostProvider(This,value) \
    ( (This)->lpVtbl->SetAutomationHostProvider(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CInternal_CICompositionIslandPartner_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Internal.ICompositionSurfaceBrushSuperSamplePreview
 *
 * Introduced to Microsoft.UI.Composition.Internal.LiftedInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Internal_ICompositionSurfaceBrushSuperSamplePreview[] = L"Microsoft.UI.Composition.Internal.ICompositionSurfaceBrushSuperSamplePreview";
/* [object, uuid("FA0C355D-B7D7-5E0A-B02B-BF79680E161D"), experimental, contract] */
typedef struct __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SuperDownSamplePreview )(
        __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SuperDownSamplePreview )(
        __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreviewVtbl;

interface __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreviewVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_get_SuperDownSamplePreview(This,value) \
    ( (This)->lpVtbl->get_SuperDownSamplePreview(This,value) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_put_SuperDownSamplePreview(This,value) \
    ( (This)->lpVtbl->put_SuperDownSamplePreview(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CInternal_CICompositionSurfaceBrushSuperSamplePreview_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Internal.ICompositionTargetInternal
 *
 * Introduced to Microsoft.UI.Composition.Internal.LiftedInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Internal_ICompositionTargetInternal[] = L"Microsoft.UI.Composition.Internal.ICompositionTargetInternal";
/* [object, uuid("5C6A420B-B1C6-5C15-9224-7A3FB5971101"), experimental, contract] */
typedef struct __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternalVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HintSize )(
        __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CSizeInt32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HintSize )(
        __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CSizeInt32 value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternalVtbl;

interface __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternalVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_get_HintSize(This,value) \
    ( (This)->lpVtbl->get_HintSize(This,value) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_put_HintSize(This,value) \
    ( (This)->lpVtbl->put_HintSize(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CInternal_CICompositionTargetInternal_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Internal.ICompositionVisualSurfacePartner
 *
 * Introduced to Microsoft.UI.Composition.Internal.LiftedInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Internal_ICompositionVisualSurfacePartner[] = L"Microsoft.UI.Composition.Internal.ICompositionVisualSurfacePartner";
/* [object, uuid("9B151826-F42E-5218-A4A6-184215BE8E68"), experimental, contract] */
typedef struct __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartnerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RealizationSize )(
        __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RealizationSize )(
        __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Stretch )(
        __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CCompositionStretch * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Stretch )(
        __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CCompositionStretch value
        );
    HRESULT ( STDMETHODCALLTYPE *Freeze )(
        __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner * This
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartnerVtbl;

interface __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartnerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_get_RealizationSize(This,value) \
    ( (This)->lpVtbl->get_RealizationSize(This,value) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_put_RealizationSize(This,value) \
    ( (This)->lpVtbl->put_RealizationSize(This,value) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_get_Stretch(This,value) \
    ( (This)->lpVtbl->get_Stretch(This,value) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_put_Stretch(This,value) \
    ( (This)->lpVtbl->put_Stretch(This,value) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_Freeze(This) \
    ( (This)->lpVtbl->Freeze(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CInternal_CICompositionVisualSurfacePartner_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Internal.ICompositorPartner_ProjectedShadow
 *
 * Introduced to Microsoft.UI.Composition.Internal.LiftedInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Internal_ICompositorPartner_ProjectedShadow[] = L"Microsoft.UI.Composition.Internal.ICompositorPartner_ProjectedShadow";
/* [object, uuid("E947C5F1-999D-5121-8C25-356E9A6789F0"), experimental, contract] */
typedef struct __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadowVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateSharedClientProjectedShadowCaster )(
        __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CICompositionProjectedShadowCaster * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateSharedHostProjectedShadowCaster )(
        __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CICompositionProjectedShadowCaster * * result
        );
    HRESULT ( STDMETHODCALLTYPE *OpenClientProjectedShadowCasterFromHandle )(
        __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow * This,
        /* [in] */UINT64 handle,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CICompositionProjectedShadowCaster * * result
        );
    HRESULT ( STDMETHODCALLTYPE *OpenHostProjectedShadowCasterFromHandle )(
        __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow * This,
        /* [in] */UINT64 handle,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CICompositionProjectedShadowCaster * * result
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadowVtbl;

interface __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadowVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_CreateSharedClientProjectedShadowCaster(This,result) \
    ( (This)->lpVtbl->CreateSharedClientProjectedShadowCaster(This,result) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_CreateSharedHostProjectedShadowCaster(This,result) \
    ( (This)->lpVtbl->CreateSharedHostProjectedShadowCaster(This,result) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_OpenClientProjectedShadowCasterFromHandle(This,handle,result) \
    ( (This)->lpVtbl->OpenClientProjectedShadowCasterFromHandle(This,handle,result) )

#define __x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_OpenHostProjectedShadowCasterFromHandle(This,handle,result) \
    ( (This)->lpVtbl->OpenHostProjectedShadowCasterFromHandle(This,handle,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CInternal_CICompositorPartner__ProjectedShadow_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Internal.IVisualInternal
 *
 * Introduced to Microsoft.UI.Composition.Internal.LiftedInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Internal_IVisualInternal[] = L"Microsoft.UI.Composition.Internal.IVisualInternal";
/* [object, uuid("C3433349-5F90-5C9C-B96C-35034C25C31F"), experimental, contract] */
typedef struct __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternalVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RasterizationScaleOverride )(
        __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RasterizationScaleOverride )(
        __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal * This,
        /* [in] */FLOAT value
        );
    HRESULT ( STDMETHODCALLTYPE *CaptureAsync )(
        __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CIVisual * propertyVisual,
        /* [in] */__x_Microsoft_CUI_CComposition_CICompositionGraphicsDevice * graphicsDevice,
        /* [in] */INT32 width,
        /* [in] */INT32 height,
        /* [in] */__x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat pixelFormat,
        /* [in] */__x_ABI_CWindows_CGraphics_CDirectX_CDirectXAlphaMode alphaMode,
        /* [retval, out] */__FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetInputSinkHandle )(
        __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal * This,
        /* [retval, out] */INT64 * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetInputSinkHandle )(
        __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal * This,
        /* [in] */INT64 inputHandle
        );
    HRESULT ( STDMETHODCALLTYPE *SetParentForTransformFromReference )(
        __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CInternal_CIVisualReference * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternalVtbl;

interface __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternalVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_get_RasterizationScaleOverride(This,value) \
    ( (This)->lpVtbl->get_RasterizationScaleOverride(This,value) )

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_put_RasterizationScaleOverride(This,value) \
    ( (This)->lpVtbl->put_RasterizationScaleOverride(This,value) )

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_CaptureAsync(This,propertyVisual,graphicsDevice,width,height,pixelFormat,alphaMode,operation) \
    ( (This)->lpVtbl->CaptureAsync(This,propertyVisual,graphicsDevice,width,height,pixelFormat,alphaMode,operation) )

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_GetInputSinkHandle(This,result) \
    ( (This)->lpVtbl->GetInputSinkHandle(This,result) )

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_SetInputSinkHandle(This,inputHandle) \
    ( (This)->lpVtbl->SetInputSinkHandle(This,inputHandle) )

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_SetParentForTransformFromReference(This,value) \
    ( (This)->lpVtbl->SetParentForTransformFromReference(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CInternal_CIVisualInternal_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Internal.IVisualReference
 *
 * Introduced to Microsoft.UI.Composition.Internal.LiftedInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Internal.VisualReference
 *
 *
 */
#if MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CInternal_CIVisualReference_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CInternal_CIVisualReference_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Internal_IVisualReference[] = L"Microsoft.UI.Composition.Internal.IVisualReference";
/* [object, uuid("AD881CCB-368E-5B22-BF7E-837FC0DD07A7"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceVtbl;

interface __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualReference_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CInternal_CIVisualReference;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CInternal_CIVisualReference_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Internal.IVisualReferenceFactory
 *
 * Introduced to Microsoft.UI.Composition.Internal.LiftedInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Internal.VisualReference
 *
 *
 */
#if MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Internal_IVisualReferenceFactory[] = L"Microsoft.UI.Composition.Internal.IVisualReferenceFactory";
/* [object, uuid("0B778FEE-8BFB-5E21-8809-FE03521EA2A1"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactoryVtbl;

interface __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CInternal_CIVisualReferenceFactory_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Internal.VisualReference
 *
 * Introduced to Microsoft.UI.Composition.Internal.LiftedInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Internal.IVisualReference ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Internal_VisualReference_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Internal_VisualReference_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Internal_VisualReference[] = L"Microsoft.UI.Composition.Internal.VisualReference";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_INTERNAL_LIFTEDINTERNALCONTRACT_VERSION >= 0x10000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __Microsoft2EUI2EComposition2EInternal_p_h__

#endif // __Microsoft2EUI2EComposition2EInternal_h__
