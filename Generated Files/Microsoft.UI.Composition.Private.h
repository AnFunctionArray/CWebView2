/* Header file automatically generated from Microsoft.UI.Composition.Private.idl */
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
#ifndef __Microsoft2EUI2EComposition2EPrivate_h__
#define __Microsoft2EUI2EComposition2EPrivate_h__
#ifndef __Microsoft2EUI2EComposition2EPrivate_p_h__
#define __Microsoft2EUI2EComposition2EPrivate_p_h__


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

#if !defined(MICROSOFT_UI_COMPOSITION_LIFTEDCONTRACT_VERSION)
#define MICROSOFT_UI_COMPOSITION_LIFTEDCONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_UI_COMPOSITION_LIFTEDCONTRACT_VERSION)

#if !defined(MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION)
#define MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION)

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
#include "Windows.Graphics.DirectX.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                interface IAnimationPropertyInfoPartner;
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner Microsoft::UI::Composition::Private::IAnimationPropertyInfoPartner

#endif // ____x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                interface ICompositionCubeMap;
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap Microsoft::UI::Composition::Private::ICompositionCubeMap

#endif // ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                interface ICompositionSkyBoxBrush;
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush Microsoft::UI::Composition::Private::ICompositionSkyBoxBrush

#endif // ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                interface ICompositionSurfaceFacadePartner;
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner Microsoft::UI::Composition::Private::ICompositionSurfaceFacadePartner

#endif // ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                interface ICompositorPrivate;
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate Microsoft::UI::Composition::Private::ICompositorPrivate

#endif // ____x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                interface IDataSourceReader;
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader Microsoft::UI::Composition::Private::IDataSourceReader

#endif // ____x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                interface IRectangleClip;
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip Microsoft::UI::Composition::Private::IRectangleClip

#endif // ____x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                interface IScaleVisual;
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual Microsoft::UI::Composition::Private::IScaleVisual

#endif // ____x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                interface ITransformInformation;
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation Microsoft::UI::Composition::Private::ITransformInformation

#endif // ____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                interface ITransformInformationFactory;
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory Microsoft::UI::Composition::Private::ITransformInformationFactory

#endif // ____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                interface IVisualElementPartner;
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner Microsoft::UI::Composition::Private::IVisualElementPartner

#endif // ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                interface IVisualPrivate;
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate Microsoft::UI::Composition::Private::IVisualPrivate

#endif // ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                interface IVisualTreeIslandDesktopPartner;
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner Microsoft::UI::Composition::Private::IVisualTreeIslandDesktopPartner

#endif // ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                interface IVisualTreeIslandPartner;
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner Microsoft::UI::Composition::Private::IVisualTreeIslandPartner

#endif // ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_FWD_DEFINED__

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
            class AnimationPropertyInfo;
        } /* Composition */
    } /* UI */
} /* Microsoft */

#ifndef ____x_Microsoft_CUI_CComposition_CIAnimationPropertyInfo_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CIAnimationPropertyInfo_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            interface IAnimationPropertyInfo;
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CIAnimationPropertyInfo Microsoft::UI::Composition::IAnimationPropertyInfo

#endif // ____x_Microsoft_CUI_CComposition_CIAnimationPropertyInfo_FWD_DEFINED__



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
            class CompositionObject;
        } /* Composition */
    } /* UI */
} /* Microsoft */

#ifndef ____x_Microsoft_CUI_CComposition_CICompositionObject_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CICompositionObject_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            interface ICompositionObject;
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CICompositionObject Microsoft::UI::Composition::ICompositionObject

#endif // ____x_Microsoft_CUI_CComposition_CICompositionObject_FWD_DEFINED__




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
            namespace Private {
                
                typedef enum AnimationPropertyKind : int AnimationPropertyKind;
                
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                
                typedef enum CompositionCubeMapFace : int CompositionCubeMapFace;
                
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                
                typedef enum CompositionDepthMode : int CompositionDepthMode;
                
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                
                typedef enum CompositionResampleMode : int CompositionResampleMode;
                
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */
















namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                class CompositionCubeMap;
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                class CompositionSkyBoxBrush;
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                class DataSourceReader;
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                class RectangleClip;
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                class ScaleVisual;
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                class TransformInformation;
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                class TransformInformationFactory;
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */








/*
 *
 * Struct Microsoft.UI.Composition.Private.AnimationPropertyKind
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */

#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                /* [v1_enum, experimental, contract] */
                enum AnimationPropertyKind : int
                {
                    AnimationPropertyKind_Unspecified = 0,
                    AnimationPropertyKind_Single = 1,
                    AnimationPropertyKind_Boolean = 2,
                    AnimationPropertyKind_Vector2 = 3,
                    AnimationPropertyKind_Vector3 = 4,
                    AnimationPropertyKind_Vector4 = 5,
                    AnimationPropertyKind_Quaternion = 6,
                    AnimationPropertyKind_Color = 7,
                    AnimationPropertyKind_Matrix3x2 = 8,
                    AnimationPropertyKind_Matrix4x4 = 9,
                };
                
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Composition.Private.CompositionCubeMapFace
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */

#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                /* [v1_enum, experimental, contract] */
                enum CompositionCubeMapFace : int
                {
                    CompositionCubeMapFace_XPositive = 0,
                    CompositionCubeMapFace_XNegative = 1,
                    CompositionCubeMapFace_YPositive = 2,
                    CompositionCubeMapFace_YNegative = 3,
                    CompositionCubeMapFace_ZPositive = 4,
                    CompositionCubeMapFace_ZNegative = 5,
                };
                
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Composition.Private.CompositionDepthMode
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */

#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                /* [v1_enum, experimental, contract] */
                enum CompositionDepthMode : int
                {
                    CompositionDepthMode_Tree = 0,
                    CompositionDepthMode_Spatial = 1,
                    CompositionDepthMode_Inherit = 2,
                    CompositionDepthMode_Sorted = 3,
                };
                
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Composition.Private.CompositionResampleMode
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */

#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                /* [v1_enum, experimental, contract] */
                enum CompositionResampleMode : int
                {
                    CompositionResampleMode_Default = 0,
                    CompositionResampleMode_Lanczos = 1,
                    CompositionResampleMode_XBR = 2,
                };
                
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Private.IAnimationPropertyInfoPartner
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Private_IAnimationPropertyInfoPartner[] = L"Microsoft.UI.Composition.Private.IAnimationPropertyInfoPartner";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                /* [object, uuid("19B15BF2-5E56-58C8-B47D-067E2B39EA5A"), experimental, contract] */
                MIDL_INTERFACE("19B15BF2-5E56-58C8-B47D-067E2B39EA5A")
                IAnimationPropertyInfoPartner : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResolvedCompositionObject(
                        /* [retval, out] */Microsoft::UI::Composition::ICompositionObject * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResolvedCompositionObjectProperty(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAnimationPropertyInfoPartner=_uuidof(IAnimationPropertyInfoPartner);
                
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Private.ICompositionCubeMap
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Private.CompositionCubeMap
 *
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Private_ICompositionCubeMap[] = L"Microsoft.UI.Composition.Private.ICompositionCubeMap";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                /* [object, uuid("9DC81110-459E-52C6-AD09-DA74C8A7F520"), experimental, exclusiveto, contract] */
                MIDL_INTERFACE("9DC81110-459E-52C6-AD09-DA74C8A7F520")
                ICompositionCubeMap : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MipLevels(
                        /* [retval, out] */UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Size(
                        /* [retval, out] */UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutomaticMipmaps(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetSurfaces(
                        /* [in] */UINT32 mipLevel,
                        /* [in] */Microsoft::UI::Composition::ICompositionSurface * xPositive,
                        /* [in] */Microsoft::UI::Composition::ICompositionSurface * xNegative,
                        /* [in] */Microsoft::UI::Composition::ICompositionSurface * yPositive,
                        /* [in] */Microsoft::UI::Composition::ICompositionSurface * yNegative,
                        /* [in] */Microsoft::UI::Composition::ICompositionSurface * zPositive,
                        /* [in] */Microsoft::UI::Composition::ICompositionSurface * zNegative
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICompositionCubeMap=_uuidof(ICompositionCubeMap);
                
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Private.ICompositionSkyBoxBrush
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Private.CompositionSkyBoxBrush
 *
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Private_ICompositionSkyBoxBrush[] = L"Microsoft.UI.Composition.Private.ICompositionSkyBoxBrush";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                /* [object, uuid("D1C29D15-84B0-573A-81C8-0AE1EC565502"), experimental, exclusiveto, contract] */
                MIDL_INTERFACE("D1C29D15-84B0-573A-81C8-0AE1EC565502")
                ICompositionSkyBoxBrush : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AnchorPoint(
                        /* [retval, out] */Windows::Foundation::Numerics::Vector2 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AnchorPoint(
                        /* [in] */Windows::Foundation::Numerics::Vector2 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CenterPoint(
                        /* [retval, out] */Windows::Foundation::Numerics::Vector3 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CenterPoint(
                        /* [in] */Windows::Foundation::Numerics::Vector3 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsLocal(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsLocal(
                        /* [in] */::boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Offset(
                        /* [retval, out] */Windows::Foundation::Numerics::Vector3 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Offset(
                        /* [in] */Windows::Foundation::Numerics::Vector3 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Orientation(
                        /* [retval, out] */Windows::Foundation::Numerics::Quaternion * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Orientation(
                        /* [in] */Windows::Foundation::Numerics::Quaternion value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Size(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Size(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */Microsoft::UI::Composition::Private::ICompositionCubeMap * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */Microsoft::UI::Composition::Private::ICompositionCubeMap * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RotationAngle(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RotationAngle(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RotationAngleInDegrees(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RotationAngleInDegrees(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RotationAxis(
                        /* [retval, out] */Windows::Foundation::Numerics::Vector3 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RotationAxis(
                        /* [in] */Windows::Foundation::Numerics::Vector3 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Scale(
                        /* [retval, out] */Windows::Foundation::Numerics::Vector3 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Scale(
                        /* [in] */Windows::Foundation::Numerics::Vector3 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TransformMatrix(
                        /* [retval, out] */Windows::Foundation::Numerics::Matrix4x4 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TransformMatrix(
                        /* [in] */Windows::Foundation::Numerics::Matrix4x4 value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetFaceVisibility(
                        /* [in] */Microsoft::UI::Composition::Private::CompositionCubeMapFace face,
                        /* [retval, out] */::boolean * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetFaceVisibility(
                        /* [in] */Microsoft::UI::Composition::Private::CompositionCubeMapFace face,
                        /* [in] */::boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICompositionSkyBoxBrush=_uuidof(ICompositionSkyBoxBrush);
                
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Private.ICompositionSurfaceFacadePartner
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Private_ICompositionSurfaceFacadePartner[] = L"Microsoft.UI.Composition.Private.ICompositionSurfaceFacadePartner";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                /* [object, uuid("9FCD509F-3FF4-59DD-8AB3-C6ECD4A30C3F"), experimental, contract] */
                MIDL_INTERFACE("9FCD509F-3FF4-59DD-8AB3-C6ECD4A30C3F")
                ICompositionSurfaceFacadePartner : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE GetRealSurface(
                        /* [retval, out] */Microsoft::UI::Composition::ICompositionSurface * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICompositionSurfaceFacadePartner=_uuidof(ICompositionSurfaceFacadePartner);
                
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Private.ICompositorPrivate
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Private_ICompositorPrivate[] = L"Microsoft.UI.Composition.Private.ICompositorPrivate";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                /* [object, uuid("9EF69BDA-43E0-5403-9256-4836928484A3"), experimental, contract] */
                MIDL_INTERFACE("9EF69BDA-43E0-5403-9256-4836928484A3")
                ICompositorPrivate : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrentBatchId(
                        /* [retval, out] */UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LastConfirmedBatchId(
                        /* [retval, out] */UINT32 * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateAnimationPropertyInfo(
                        /* [retval, out] */Microsoft::UI::Composition::IAnimationPropertyInfo * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateCubeMap(
                        /* [in] */UINT32 size,
                        /* [in] */UINT32 mipLevels,
                        /* [in] */::boolean automaticMipmaps,
                        /* [retval, out] */Microsoft::UI::Composition::Private::ICompositionCubeMap * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateDataSourceReader(
                        /* [in] */UINT64 providerId,
                        /* [in] */UINT64 dataSourceId,
                        /* [retval, out] */Microsoft::UI::Composition::Private::IDataSourceReader * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateRectangleClip(
                        /* [retval, out] */Microsoft::UI::Composition::Private::IRectangleClip * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateRectangleClipWithSides(
                        /* [in] */FLOAT left,
                        /* [in] */FLOAT top,
                        /* [in] */FLOAT right,
                        /* [in] */FLOAT bottom,
                        /* [retval, out] */Microsoft::UI::Composition::Private::IRectangleClip * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateRectangleClipWithSidesAndRadius(
                        /* [in] */FLOAT left,
                        /* [in] */FLOAT top,
                        /* [in] */FLOAT right,
                        /* [in] */FLOAT bottom,
                        /* [in] */Windows::Foundation::Numerics::Vector2 topLeftRadius,
                        /* [in] */Windows::Foundation::Numerics::Vector2 topRightRadius,
                        /* [in] */Windows::Foundation::Numerics::Vector2 bottomLeftRadius,
                        /* [in] */Windows::Foundation::Numerics::Vector2 bottomRightRadius,
                        /* [retval, out] */Microsoft::UI::Composition::Private::IRectangleClip * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateScaleVisual(
                        /* [retval, out] */Microsoft::UI::Composition::Private::IScaleVisual * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateSkyBoxBrush(
                        /* [retval, out] */Microsoft::UI::Composition::Private::ICompositionSkyBoxBrush * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICompositorPrivate=_uuidof(ICompositorPrivate);
                
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Private.IDataSourceReader
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Private.DataSourceReader
 *
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Private_IDataSourceReader[] = L"Microsoft.UI.Composition.Private.IDataSourceReader";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                /* [object, uuid("1D74BDA7-2D1E-5E62-8BC6-A36C401F99B7"), experimental, exclusiveto, contract] */
                MIDL_INTERFACE("1D74BDA7-2D1E-5E62-8BC6-A36C401F99B7")
                IDataSourceReader : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE AddDataSourcePropertyId(
                        /* [in] */HSTRING propertyName,
                        /* [in] */UINT32 dataSourcePropertyId,
                        /* [in] */Microsoft::UI::Composition::Private::AnimationPropertyKind propertyKind
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataSourceReader=_uuidof(IDataSourceReader);
                
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Private.IRectangleClip
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Private.RectangleClip
 *
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Private_IRectangleClip[] = L"Microsoft.UI.Composition.Private.IRectangleClip";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                /* [object, uuid("BE289788-E97E-5382-9C14-6247736A37EA"), experimental, exclusiveto, contract] */
                MIDL_INTERFACE("BE289788-E97E-5382-9C14-6247736A37EA")
                IRectangleClip : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Bottom(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Bottom(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BottomLeftRadius(
                        /* [retval, out] */Windows::Foundation::Numerics::Vector2 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BottomLeftRadius(
                        /* [in] */Windows::Foundation::Numerics::Vector2 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BottomRightRadius(
                        /* [retval, out] */Windows::Foundation::Numerics::Vector2 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BottomRightRadius(
                        /* [in] */Windows::Foundation::Numerics::Vector2 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Left(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Left(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Right(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Right(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Top(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Top(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TopLeftRadius(
                        /* [retval, out] */Windows::Foundation::Numerics::Vector2 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TopLeftRadius(
                        /* [in] */Windows::Foundation::Numerics::Vector2 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TopRightRadius(
                        /* [retval, out] */Windows::Foundation::Numerics::Vector2 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TopRightRadius(
                        /* [in] */Windows::Foundation::Numerics::Vector2 value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRectangleClip=_uuidof(IRectangleClip);
                
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Private.IScaleVisual
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Private.ScaleVisual
 *
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Private_IScaleVisual[] = L"Microsoft.UI.Composition.Private.IScaleVisual";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                /* [object, uuid("3FB39999-337F-5CDD-91BE-D8CE6C40CD76"), experimental, exclusiveto, contract] */
                MIDL_INTERFACE("3FB39999-337F-5CDD-91BE-D8CE6C40CD76")
                IScaleVisual : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResampleMode(
                        /* [retval, out] */Microsoft::UI::Composition::Private::CompositionResampleMode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ResampleMode(
                        /* [in] */Microsoft::UI::Composition::Private::CompositionResampleMode value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IScaleVisual=_uuidof(IScaleVisual);
                
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Private.ITransformInformation
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Private.TransformInformation
 *
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Private_ITransformInformation[] = L"Microsoft.UI.Composition.Private.ITransformInformation";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                /* [object, uuid("FFC82FEE-48DE-5D9A-AA7E-AC717ED7E6B0"), experimental, exclusiveto, contract] */
                MIDL_INTERFACE("FFC82FEE-48DE-5D9A-AA7E-AC717ED7E6B0")
                ITransformInformation : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplaySizePhysicalPixels(
                        /* [retval, out] */Windows::Foundation::Numerics::Vector2 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ScreenPhysicalPixelsToHimetricScaleFactor(
                        /* [retval, out] */Windows::Foundation::Numerics::Vector2 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VisualRelativePixelsToScreenPhysicalPixelsScale(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VisualRelativePixelsToScreenPhysicalPixelsRotation(
                        /* [retval, out] */Windows::Foundation::Numerics::Vector3 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ITransformInformation=_uuidof(ITransformInformation);
                
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Private.ITransformInformationFactory
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Private_ITransformInformationFactory[] = L"Microsoft.UI.Composition.Private.ITransformInformationFactory";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                /* [object, uuid("48EA0687-9BAC-5DA1-BEA9-22EA7D943494"), experimental, contract] */
                MIDL_INTERFACE("48EA0687-9BAC-5DA1-BEA9-22EA7D943494")
                ITransformInformationFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE ActivateInstance(
                        /* [in] */INT64 hwnd,
                        /* [retval, out] */Microsoft::UI::Composition::Private::ITransformInformation * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ITransformInformationFactory=_uuidof(ITransformInformationFactory);
                
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Private.IVisualElementPartner
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Private_IVisualElementPartner[] = L"Microsoft.UI.Composition.Private.IVisualElementPartner";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                /* [object, uuid("935C8A2C-30C7-5845-A9E5-A4877AFBFCA5"), experimental, contract] */
                MIDL_INTERFACE("935C8A2C-30C7-5845-A9E5-A4877AFBFCA5")
                IVisualElementPartner : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VisualInternal(
                        /* [retval, out] */Microsoft::UI::Composition::IVisual * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVisualElementPartner=_uuidof(IVisualElementPartner);
                
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Private.IVisualPrivate
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Private_IVisualPrivate[] = L"Microsoft.UI.Composition.Private.IVisualPrivate";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                /* [object, uuid("EA55BB33-72D8-596B-A2DF-15A7921BEFA7"), experimental, contract] */
                MIDL_INTERFACE("EA55BB33-72D8-596B-A2DF-15A7921BEFA7")
                IVisualPrivate : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DepthMode(
                        /* [retval, out] */Microsoft::UI::Composition::Private::CompositionDepthMode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DepthMode(
                        /* [in] */Microsoft::UI::Composition::Private::CompositionDepthMode value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisconnectChildrenOnDestroy(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DisconnectChildrenOnDestroy(
                        /* [in] */::boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsTransparentForInput(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsTransparentForInput(
                        /* [in] */::boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProtectContents(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ProtectContents(
                        /* [in] */::boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UpVectorOverride(
                        /* [retval, out] */Windows::Foundation::Numerics::Vector3 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_UpVectorOverride(
                        /* [in] */Windows::Foundation::Numerics::Vector3 value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE AttachMouseDragToHwnd(
                        /* [in] */INT64 hwnd,
                        /* [in] */::boolean enable
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE AttachMouseWheelToHwnd(
                        /* [in] */INT64 hwnd,
                        /* [in] */::boolean enable
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CaptureOverrideSDRBoostAsync(
                        /* [in] */Microsoft::UI::Composition::IVisual * propertyVisual,
                        /* [in] */Microsoft::UI::Composition::ICompositionGraphicsDevice * graphicsDevice,
                        /* [in] */INT32 width,
                        /* [in] */INT32 height,
                        /* [in] */Windows::Graphics::DirectX::DirectXPixelFormat pixelFormat,
                        /* [in] */Windows::Graphics::DirectX::DirectXAlphaMode alphaMode,
                        /* [in] */FLOAT sdrBoost,
                        /* [retval, out] */__FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetClosedEventHandle(
                        /* [retval, out] */INT64 * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVisualPrivate=_uuidof(IVisualPrivate);
                
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Private.IVisualTreeIslandDesktopPartner
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Private_IVisualTreeIslandDesktopPartner[] = L"Microsoft.UI.Composition.Private.IVisualTreeIslandDesktopPartner";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                /* [object, uuid("3292FF4B-6ECE-52F3-B0B2-D58034E840AE"), experimental, contract] */
                MIDL_INTERFACE("3292FF4B-6ECE-52F3-B0B2-D58034E840AE")
                IVisualTreeIslandDesktopPartner : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesktopOffset(
                        /* [retval, out] */Windows::Foundation::Numerics::Vector2 * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE EnableDesktopOffset(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DisableDesktopOffset(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVisualTreeIslandDesktopPartner=_uuidof(IVisualTreeIslandDesktopPartner);
                
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Private.IVisualTreeIslandPartner
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Private_IVisualTreeIslandPartner[] = L"Microsoft.UI.Composition.Private.IVisualTreeIslandPartner";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Private {
                /* [object, uuid("D5757CFE-7F82-5198-8335-62A57AF61B5F"), experimental, contract] */
                MIDL_INTERFACE("D5757CFE-7F82-5198-8335-62A57AF61B5F")
                IVisualTreeIslandPartner : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContentVisual(
                        /* [retval, out] */Microsoft::UI::Composition::IVisual * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVisualTreeIslandPartner=_uuidof(IVisualTreeIslandPartner);
                
            } /* Private */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Private.CompositionCubeMap
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Private.ICompositionCubeMap ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Private_CompositionCubeMap_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Private_CompositionCubeMap_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Private_CompositionCubeMap[] = L"Microsoft.UI.Composition.Private.CompositionCubeMap";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Private.CompositionSkyBoxBrush
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Private.ICompositionSkyBoxBrush ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Private_CompositionSkyBoxBrush_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Private_CompositionSkyBoxBrush_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Private_CompositionSkyBoxBrush[] = L"Microsoft.UI.Composition.Private.CompositionSkyBoxBrush";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Private.DataSourceReader
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Private.IDataSourceReader ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Private_DataSourceReader_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Private_DataSourceReader_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Private_DataSourceReader[] = L"Microsoft.UI.Composition.Private.DataSourceReader";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Private.RectangleClip
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Private.IRectangleClip ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Private_RectangleClip_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Private_RectangleClip_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Private_RectangleClip[] = L"Microsoft.UI.Composition.Private.RectangleClip";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Private.ScaleVisual
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Private.IScaleVisual ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Private_ScaleVisual_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Private_ScaleVisual_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Private_ScaleVisual[] = L"Microsoft.UI.Composition.Private.ScaleVisual";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Private.TransformInformation
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Microsoft.UI.Composition.Private.ITransformInformationFactory interface starting with version 1.0 of the Microsoft.UI.Composition.Private.LiftedPrivateContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Private.ITransformInformation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Private_TransformInformation_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Private_TransformInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Private_TransformInformation[] = L"Microsoft.UI.Composition.Private.TransformInformation";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Private.TransformInformationFactory
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Private.ITransformInformationFactory ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Private_TransformInformationFactory_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Private_TransformInformationFactory_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Private_TransformInformationFactory[] = L"Microsoft.UI.Composition.Private.TransformInformationFactory";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner;

#endif // ____x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap;

#endif // ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush;

#endif // ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner;

#endif // ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate;

#endif // ____x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader;

#endif // ____x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip;

#endif // ____x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual;

#endif // ____x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation;

#endif // ____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory;

#endif // ____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner;

#endif // ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate;

#endif // ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner;

#endif // ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner;

#endif // ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_FWD_DEFINED__

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


#ifndef ____x_Microsoft_CUI_CComposition_CIAnimationPropertyInfo_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CIAnimationPropertyInfo_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CIAnimationPropertyInfo __x_Microsoft_CUI_CComposition_CIAnimationPropertyInfo;

#endif // ____x_Microsoft_CUI_CComposition_CIAnimationPropertyInfo_FWD_DEFINED__


#ifndef ____x_Microsoft_CUI_CComposition_CICompositionGraphicsDevice_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CICompositionGraphicsDevice_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CICompositionGraphicsDevice __x_Microsoft_CUI_CComposition_CICompositionGraphicsDevice;

#endif // ____x_Microsoft_CUI_CComposition_CICompositionGraphicsDevice_FWD_DEFINED__


#ifndef ____x_Microsoft_CUI_CComposition_CICompositionObject_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CICompositionObject_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CICompositionObject __x_Microsoft_CUI_CComposition_CICompositionObject;

#endif // ____x_Microsoft_CUI_CComposition_CICompositionObject_FWD_DEFINED__



#ifndef ____x_Microsoft_CUI_CComposition_CIVisual_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CIVisual_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CIVisual __x_Microsoft_CUI_CComposition_CIVisual;

#endif // ____x_Microsoft_CUI_CComposition_CIVisual_FWD_DEFINED__







typedef enum __x_Microsoft_CUI_CComposition_CPrivate_CAnimationPropertyKind __x_Microsoft_CUI_CComposition_CPrivate_CAnimationPropertyKind;


typedef enum __x_Microsoft_CUI_CComposition_CPrivate_CCompositionCubeMapFace __x_Microsoft_CUI_CComposition_CPrivate_CCompositionCubeMapFace;


typedef enum __x_Microsoft_CUI_CComposition_CPrivate_CCompositionDepthMode __x_Microsoft_CUI_CComposition_CPrivate_CCompositionDepthMode;


typedef enum __x_Microsoft_CUI_CComposition_CPrivate_CCompositionResampleMode __x_Microsoft_CUI_CComposition_CPrivate_CCompositionResampleMode;




























/*
 *
 * Struct Microsoft.UI.Composition.Private.AnimationPropertyKind
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */

#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
/* [v1_enum, experimental, contract] */
enum __x_Microsoft_CUI_CComposition_CPrivate_CAnimationPropertyKind
{
    Microsoft_UI_Composition_Private_AnimationPropertyKind_Unspecified = 0,
    Microsoft_UI_Composition_Private_AnimationPropertyKind_Single = 1,
    Microsoft_UI_Composition_Private_AnimationPropertyKind_Boolean = 2,
    Microsoft_UI_Composition_Private_AnimationPropertyKind_Vector2 = 3,
    Microsoft_UI_Composition_Private_AnimationPropertyKind_Vector3 = 4,
    Microsoft_UI_Composition_Private_AnimationPropertyKind_Vector4 = 5,
    Microsoft_UI_Composition_Private_AnimationPropertyKind_Quaternion = 6,
    Microsoft_UI_Composition_Private_AnimationPropertyKind_Color = 7,
    Microsoft_UI_Composition_Private_AnimationPropertyKind_Matrix3x2 = 8,
    Microsoft_UI_Composition_Private_AnimationPropertyKind_Matrix4x4 = 9,
};
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Composition.Private.CompositionCubeMapFace
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */

#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
/* [v1_enum, experimental, contract] */
enum __x_Microsoft_CUI_CComposition_CPrivate_CCompositionCubeMapFace
{
    Microsoft_UI_Composition_Private_CompositionCubeMapFace_XPositive = 0,
    Microsoft_UI_Composition_Private_CompositionCubeMapFace_XNegative = 1,
    Microsoft_UI_Composition_Private_CompositionCubeMapFace_YPositive = 2,
    Microsoft_UI_Composition_Private_CompositionCubeMapFace_YNegative = 3,
    Microsoft_UI_Composition_Private_CompositionCubeMapFace_ZPositive = 4,
    Microsoft_UI_Composition_Private_CompositionCubeMapFace_ZNegative = 5,
};
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Composition.Private.CompositionDepthMode
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */

#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
/* [v1_enum, experimental, contract] */
enum __x_Microsoft_CUI_CComposition_CPrivate_CCompositionDepthMode
{
    Microsoft_UI_Composition_Private_CompositionDepthMode_Tree = 0,
    Microsoft_UI_Composition_Private_CompositionDepthMode_Spatial = 1,
    Microsoft_UI_Composition_Private_CompositionDepthMode_Inherit = 2,
    Microsoft_UI_Composition_Private_CompositionDepthMode_Sorted = 3,
};
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Composition.Private.CompositionResampleMode
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */

#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
/* [v1_enum, experimental, contract] */
enum __x_Microsoft_CUI_CComposition_CPrivate_CCompositionResampleMode
{
    Microsoft_UI_Composition_Private_CompositionResampleMode_Default = 0,
    Microsoft_UI_Composition_Private_CompositionResampleMode_Lanczos = 1,
    Microsoft_UI_Composition_Private_CompositionResampleMode_XBR = 2,
};
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Private.IAnimationPropertyInfoPartner
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Private_IAnimationPropertyInfoPartner[] = L"Microsoft.UI.Composition.Private.IAnimationPropertyInfoPartner";
/* [object, uuid("19B15BF2-5E56-58C8-B47D-067E2B39EA5A"), experimental, contract] */
typedef struct __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartnerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResolvedCompositionObject )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CICompositionObject * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResolvedCompositionObjectProperty )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner * This,
        /* [retval, out] */HSTRING * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartnerVtbl;

interface __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartnerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_get_ResolvedCompositionObject(This,value) \
    ( (This)->lpVtbl->get_ResolvedCompositionObject(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_get_ResolvedCompositionObjectProperty(This,value) \
    ( (This)->lpVtbl->get_ResolvedCompositionObjectProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIAnimationPropertyInfoPartner_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Private.ICompositionCubeMap
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Private.CompositionCubeMap
 *
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Private_ICompositionCubeMap[] = L"Microsoft.UI.Composition.Private.ICompositionCubeMap";
/* [object, uuid("9DC81110-459E-52C6-AD09-DA74C8A7F520"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMapVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MipLevels )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap * This,
        /* [retval, out] */UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap * This,
        /* [retval, out] */UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutomaticMipmaps )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap * This,
        /* [retval, out] */boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetSurfaces )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap * This,
        /* [in] */UINT32 mipLevel,
        /* [in] */__x_Microsoft_CUI_CComposition_CICompositionSurface * xPositive,
        /* [in] */__x_Microsoft_CUI_CComposition_CICompositionSurface * xNegative,
        /* [in] */__x_Microsoft_CUI_CComposition_CICompositionSurface * yPositive,
        /* [in] */__x_Microsoft_CUI_CComposition_CICompositionSurface * yNegative,
        /* [in] */__x_Microsoft_CUI_CComposition_CICompositionSurface * zPositive,
        /* [in] */__x_Microsoft_CUI_CComposition_CICompositionSurface * zNegative
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMapVtbl;

interface __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMapVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_get_MipLevels(This,value) \
    ( (This)->lpVtbl->get_MipLevels(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_get_Size(This,value) \
    ( (This)->lpVtbl->get_Size(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_get_AutomaticMipmaps(This,value) \
    ( (This)->lpVtbl->get_AutomaticMipmaps(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_SetSurfaces(This,mipLevel,xPositive,xNegative,yPositive,yNegative,zPositive,zNegative) \
    ( (This)->lpVtbl->SetSurfaces(This,mipLevel,xPositive,xNegative,yPositive,yNegative,zPositive,zNegative) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Private.ICompositionSkyBoxBrush
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Private.CompositionSkyBoxBrush
 *
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Private_ICompositionSkyBoxBrush[] = L"Microsoft.UI.Composition.Private.ICompositionSkyBoxBrush";
/* [object, uuid("D1C29D15-84B0-573A-81C8-0AE1EC565502"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrushVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AnchorPoint )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AnchorPoint )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CenterPoint )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CenterPoint )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsLocal )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsLocal )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Offset )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Offset )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CQuaternion * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Orientation )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CQuaternion value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Size )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RotationAngle )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RotationAngle )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RotationAngleInDegrees )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RotationAngleInDegrees )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RotationAxis )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RotationAxis )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Scale )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Scale )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TransformMatrix )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TransformMatrix )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 value
        );
    HRESULT ( STDMETHODCALLTYPE *GetFaceVisibility )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CPrivate_CCompositionCubeMapFace face,
        /* [retval, out] */boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetFaceVisibility )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CPrivate_CCompositionCubeMapFace face,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrushVtbl;

interface __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrushVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_get_AnchorPoint(This,value) \
    ( (This)->lpVtbl->get_AnchorPoint(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_put_AnchorPoint(This,value) \
    ( (This)->lpVtbl->put_AnchorPoint(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_get_CenterPoint(This,value) \
    ( (This)->lpVtbl->get_CenterPoint(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_put_CenterPoint(This,value) \
    ( (This)->lpVtbl->put_CenterPoint(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_get_IsLocal(This,value) \
    ( (This)->lpVtbl->get_IsLocal(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_put_IsLocal(This,value) \
    ( (This)->lpVtbl->put_IsLocal(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_get_Offset(This,value) \
    ( (This)->lpVtbl->get_Offset(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_put_Offset(This,value) \
    ( (This)->lpVtbl->put_Offset(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_get_Orientation(This,value) \
    ( (This)->lpVtbl->get_Orientation(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_put_Orientation(This,value) \
    ( (This)->lpVtbl->put_Orientation(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_get_Size(This,value) \
    ( (This)->lpVtbl->get_Size(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_put_Size(This,value) \
    ( (This)->lpVtbl->put_Size(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_get_Source(This,value) \
    ( (This)->lpVtbl->get_Source(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_put_Source(This,value) \
    ( (This)->lpVtbl->put_Source(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_get_RotationAngle(This,value) \
    ( (This)->lpVtbl->get_RotationAngle(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_put_RotationAngle(This,value) \
    ( (This)->lpVtbl->put_RotationAngle(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_get_RotationAngleInDegrees(This,value) \
    ( (This)->lpVtbl->get_RotationAngleInDegrees(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_put_RotationAngleInDegrees(This,value) \
    ( (This)->lpVtbl->put_RotationAngleInDegrees(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_get_RotationAxis(This,value) \
    ( (This)->lpVtbl->get_RotationAxis(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_put_RotationAxis(This,value) \
    ( (This)->lpVtbl->put_RotationAxis(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_get_Scale(This,value) \
    ( (This)->lpVtbl->get_Scale(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_put_Scale(This,value) \
    ( (This)->lpVtbl->put_Scale(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_get_TransformMatrix(This,value) \
    ( (This)->lpVtbl->get_TransformMatrix(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_put_TransformMatrix(This,value) \
    ( (This)->lpVtbl->put_TransformMatrix(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_GetFaceVisibility(This,face,result) \
    ( (This)->lpVtbl->GetFaceVisibility(This,face,result) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_SetFaceVisibility(This,face,value) \
    ( (This)->lpVtbl->SetFaceVisibility(This,face,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Private.ICompositionSurfaceFacadePartner
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Private_ICompositionSurfaceFacadePartner[] = L"Microsoft.UI.Composition.Private.ICompositionSurfaceFacadePartner";
/* [object, uuid("9FCD509F-3FF4-59DD-8AB3-C6ECD4A30C3F"), experimental, contract] */
typedef struct __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartnerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetRealSurface )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CICompositionSurface * * result
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartnerVtbl;

interface __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartnerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_GetRealSurface(This,result) \
    ( (This)->lpVtbl->GetRealSurface(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CPrivate_CICompositionSurfaceFacadePartner_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Private.ICompositorPrivate
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Private_ICompositorPrivate[] = L"Microsoft.UI.Composition.Private.ICompositorPrivate";
/* [object, uuid("9EF69BDA-43E0-5403-9256-4836928484A3"), experimental, contract] */
typedef struct __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrentBatchId )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This,
        /* [retval, out] */UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LastConfirmedBatchId )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This,
        /* [retval, out] */UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateAnimationPropertyInfo )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CIAnimationPropertyInfo * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateCubeMap )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This,
        /* [in] */UINT32 size,
        /* [in] */UINT32 mipLevels,
        /* [in] */boolean automaticMipmaps,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CPrivate_CICompositionCubeMap * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateDataSourceReader )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This,
        /* [in] */UINT64 providerId,
        /* [in] */UINT64 dataSourceId,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateRectangleClip )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateRectangleClipWithSides )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This,
        /* [in] */FLOAT left,
        /* [in] */FLOAT top,
        /* [in] */FLOAT right,
        /* [in] */FLOAT bottom,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateRectangleClipWithSidesAndRadius )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This,
        /* [in] */FLOAT left,
        /* [in] */FLOAT top,
        /* [in] */FLOAT right,
        /* [in] */FLOAT bottom,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 topLeftRadius,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 topRightRadius,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 bottomLeftRadius,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 bottomRightRadius,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateScaleVisual )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateSkyBoxBrush )(
        __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CPrivate_CICompositionSkyBoxBrush * * result
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivateVtbl;

interface __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivateVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_get_CurrentBatchId(This,value) \
    ( (This)->lpVtbl->get_CurrentBatchId(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_get_LastConfirmedBatchId(This,value) \
    ( (This)->lpVtbl->get_LastConfirmedBatchId(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_CreateAnimationPropertyInfo(This,result) \
    ( (This)->lpVtbl->CreateAnimationPropertyInfo(This,result) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_CreateCubeMap(This,size,mipLevels,automaticMipmaps,result) \
    ( (This)->lpVtbl->CreateCubeMap(This,size,mipLevels,automaticMipmaps,result) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_CreateDataSourceReader(This,providerId,dataSourceId,result) \
    ( (This)->lpVtbl->CreateDataSourceReader(This,providerId,dataSourceId,result) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_CreateRectangleClip(This,result) \
    ( (This)->lpVtbl->CreateRectangleClip(This,result) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_CreateRectangleClipWithSides(This,left,top,right,bottom,result) \
    ( (This)->lpVtbl->CreateRectangleClipWithSides(This,left,top,right,bottom,result) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_CreateRectangleClipWithSidesAndRadius(This,left,top,right,bottom,topLeftRadius,topRightRadius,bottomLeftRadius,bottomRightRadius,result) \
    ( (This)->lpVtbl->CreateRectangleClipWithSidesAndRadius(This,left,top,right,bottom,topLeftRadius,topRightRadius,bottomLeftRadius,bottomRightRadius,result) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_CreateScaleVisual(This,result) \
    ( (This)->lpVtbl->CreateScaleVisual(This,result) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_CreateSkyBoxBrush(This,result) \
    ( (This)->lpVtbl->CreateSkyBoxBrush(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CPrivate_CICompositorPrivate_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Private.IDataSourceReader
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Private.DataSourceReader
 *
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Private_IDataSourceReader[] = L"Microsoft.UI.Composition.Private.IDataSourceReader";
/* [object, uuid("1D74BDA7-2D1E-5E62-8BC6-A36C401F99B7"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddDataSourcePropertyId )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader * This,
        /* [in] */HSTRING propertyName,
        /* [in] */UINT32 dataSourcePropertyId,
        /* [in] */__x_Microsoft_CUI_CComposition_CPrivate_CAnimationPropertyKind propertyKind
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReaderVtbl;

interface __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReaderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_AddDataSourcePropertyId(This,propertyName,dataSourcePropertyId,propertyKind) \
    ( (This)->lpVtbl->AddDataSourcePropertyId(This,propertyName,dataSourcePropertyId,propertyKind) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIDataSourceReader_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Private.IRectangleClip
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Private.RectangleClip
 *
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Private_IRectangleClip[] = L"Microsoft.UI.Composition.Private.IRectangleClip";
/* [object, uuid("BE289788-E97E-5382-9C14-6247736A37EA"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClipVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Bottom )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Bottom )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BottomLeftRadius )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BottomLeftRadius )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BottomRightRadius )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BottomRightRadius )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Left )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Left )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Right )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Right )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Top )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Top )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TopLeftRadius )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TopLeftRadius )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TopRightRadius )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TopRightRadius )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClipVtbl;

interface __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClipVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_get_Bottom(This,value) \
    ( (This)->lpVtbl->get_Bottom(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_put_Bottom(This,value) \
    ( (This)->lpVtbl->put_Bottom(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_get_BottomLeftRadius(This,value) \
    ( (This)->lpVtbl->get_BottomLeftRadius(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_put_BottomLeftRadius(This,value) \
    ( (This)->lpVtbl->put_BottomLeftRadius(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_get_BottomRightRadius(This,value) \
    ( (This)->lpVtbl->get_BottomRightRadius(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_put_BottomRightRadius(This,value) \
    ( (This)->lpVtbl->put_BottomRightRadius(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_get_Left(This,value) \
    ( (This)->lpVtbl->get_Left(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_put_Left(This,value) \
    ( (This)->lpVtbl->put_Left(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_get_Right(This,value) \
    ( (This)->lpVtbl->get_Right(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_put_Right(This,value) \
    ( (This)->lpVtbl->put_Right(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_get_Top(This,value) \
    ( (This)->lpVtbl->get_Top(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_put_Top(This,value) \
    ( (This)->lpVtbl->put_Top(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_get_TopLeftRadius(This,value) \
    ( (This)->lpVtbl->get_TopLeftRadius(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_put_TopLeftRadius(This,value) \
    ( (This)->lpVtbl->put_TopLeftRadius(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_get_TopRightRadius(This,value) \
    ( (This)->lpVtbl->get_TopRightRadius(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_put_TopRightRadius(This,value) \
    ( (This)->lpVtbl->put_TopRightRadius(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIRectangleClip_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Private.IScaleVisual
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Private.ScaleVisual
 *
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Private_IScaleVisual[] = L"Microsoft.UI.Composition.Private.IScaleVisual";
/* [object, uuid("3FB39999-337F-5CDD-91BE-D8CE6C40CD76"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisualVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResampleMode )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CPrivate_CCompositionResampleMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ResampleMode )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CPrivate_CCompositionResampleMode value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisualVtbl;

interface __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisualVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_get_ResampleMode(This,value) \
    ( (This)->lpVtbl->get_ResampleMode(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_put_ResampleMode(This,value) \
    ( (This)->lpVtbl->put_ResampleMode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIScaleVisual_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Private.ITransformInformation
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Private.TransformInformation
 *
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Private_ITransformInformation[] = L"Microsoft.UI.Composition.Private.ITransformInformation";
/* [object, uuid("FFC82FEE-48DE-5D9A-AA7E-AC717ED7E6B0"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplaySizePhysicalPixels )(
        __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ScreenPhysicalPixelsToHimetricScaleFactor )(
        __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VisualRelativePixelsToScreenPhysicalPixelsScale )(
        __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VisualRelativePixelsToScreenPhysicalPixelsRotation )(
        __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationVtbl;

interface __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_get_DisplaySizePhysicalPixels(This,value) \
    ( (This)->lpVtbl->get_DisplaySizePhysicalPixels(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_get_ScreenPhysicalPixelsToHimetricScaleFactor(This,value) \
    ( (This)->lpVtbl->get_ScreenPhysicalPixelsToHimetricScaleFactor(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_get_VisualRelativePixelsToScreenPhysicalPixelsScale(This,value) \
    ( (This)->lpVtbl->get_VisualRelativePixelsToScreenPhysicalPixelsScale(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_get_VisualRelativePixelsToScreenPhysicalPixelsRotation(This,value) \
    ( (This)->lpVtbl->get_VisualRelativePixelsToScreenPhysicalPixelsRotation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Private.ITransformInformationFactory
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Private_ITransformInformationFactory[] = L"Microsoft.UI.Composition.Private.ITransformInformationFactory";
/* [object, uuid("48EA0687-9BAC-5DA1-BEA9-22EA7D943494"), experimental, contract] */
typedef struct __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ActivateInstance )(
        __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory * This,
        /* [in] */INT64 hwnd,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CPrivate_CITransformInformation * * result
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactoryVtbl;

interface __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_ActivateInstance(This,hwnd,result) \
    ( (This)->lpVtbl->ActivateInstance(This,hwnd,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CPrivate_CITransformInformationFactory_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Private.IVisualElementPartner
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Private_IVisualElementPartner[] = L"Microsoft.UI.Composition.Private.IVisualElementPartner";
/* [object, uuid("935C8A2C-30C7-5845-A9E5-A4877AFBFCA5"), experimental, contract] */
typedef struct __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartnerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VisualInternal )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CIVisual * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartnerVtbl;

interface __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartnerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_get_VisualInternal(This,value) \
    ( (This)->lpVtbl->get_VisualInternal(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIVisualElementPartner_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Private.IVisualPrivate
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Private_IVisualPrivate[] = L"Microsoft.UI.Composition.Private.IVisualPrivate";
/* [object, uuid("EA55BB33-72D8-596B-A2DF-15A7921BEFA7"), experimental, contract] */
typedef struct __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DepthMode )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CPrivate_CCompositionDepthMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DepthMode )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CPrivate_CCompositionDepthMode value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisconnectChildrenOnDestroy )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DisconnectChildrenOnDestroy )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsTransparentForInput )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsTransparentForInput )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProtectContents )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ProtectContents )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UpVectorOverride )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_UpVectorOverride )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
    HRESULT ( STDMETHODCALLTYPE *AttachMouseDragToHwnd )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
        /* [in] */INT64 hwnd,
        /* [in] */boolean enable
        );
    HRESULT ( STDMETHODCALLTYPE *AttachMouseWheelToHwnd )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
        /* [in] */INT64 hwnd,
        /* [in] */boolean enable
        );
    HRESULT ( STDMETHODCALLTYPE *CaptureOverrideSDRBoostAsync )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CIVisual * propertyVisual,
        /* [in] */__x_Microsoft_CUI_CComposition_CICompositionGraphicsDevice * graphicsDevice,
        /* [in] */INT32 width,
        /* [in] */INT32 height,
        /* [in] */__x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat pixelFormat,
        /* [in] */__x_ABI_CWindows_CGraphics_CDirectX_CDirectXAlphaMode alphaMode,
        /* [in] */FLOAT sdrBoost,
        /* [retval, out] */__FIAsyncOperation_1_Microsoft__CUI__CComposition__CICompositionSurface * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetClosedEventHandle )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate * This,
        /* [retval, out] */INT64 * result
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivateVtbl;

interface __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivateVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_get_DepthMode(This,value) \
    ( (This)->lpVtbl->get_DepthMode(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_put_DepthMode(This,value) \
    ( (This)->lpVtbl->put_DepthMode(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_get_DisconnectChildrenOnDestroy(This,value) \
    ( (This)->lpVtbl->get_DisconnectChildrenOnDestroy(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_put_DisconnectChildrenOnDestroy(This,value) \
    ( (This)->lpVtbl->put_DisconnectChildrenOnDestroy(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_get_IsTransparentForInput(This,value) \
    ( (This)->lpVtbl->get_IsTransparentForInput(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_put_IsTransparentForInput(This,value) \
    ( (This)->lpVtbl->put_IsTransparentForInput(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_get_ProtectContents(This,value) \
    ( (This)->lpVtbl->get_ProtectContents(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_put_ProtectContents(This,value) \
    ( (This)->lpVtbl->put_ProtectContents(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_get_UpVectorOverride(This,value) \
    ( (This)->lpVtbl->get_UpVectorOverride(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_put_UpVectorOverride(This,value) \
    ( (This)->lpVtbl->put_UpVectorOverride(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_AttachMouseDragToHwnd(This,hwnd,enable) \
    ( (This)->lpVtbl->AttachMouseDragToHwnd(This,hwnd,enable) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_AttachMouseWheelToHwnd(This,hwnd,enable) \
    ( (This)->lpVtbl->AttachMouseWheelToHwnd(This,hwnd,enable) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_CaptureOverrideSDRBoostAsync(This,propertyVisual,graphicsDevice,width,height,pixelFormat,alphaMode,sdrBoost,operation) \
    ( (This)->lpVtbl->CaptureOverrideSDRBoostAsync(This,propertyVisual,graphicsDevice,width,height,pixelFormat,alphaMode,sdrBoost,operation) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_GetClosedEventHandle(This,result) \
    ( (This)->lpVtbl->GetClosedEventHandle(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIVisualPrivate_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Private.IVisualTreeIslandDesktopPartner
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Private_IVisualTreeIslandDesktopPartner[] = L"Microsoft.UI.Composition.Private.IVisualTreeIslandDesktopPartner";
/* [object, uuid("3292FF4B-6ECE-52F3-B0B2-D58034E840AE"), experimental, contract] */
typedef struct __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartnerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesktopOffset )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
    HRESULT ( STDMETHODCALLTYPE *EnableDesktopOffset )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner * This
        );
    HRESULT ( STDMETHODCALLTYPE *DisableDesktopOffset )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner * This
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartnerVtbl;

interface __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartnerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_get_DesktopOffset(This,value) \
    ( (This)->lpVtbl->get_DesktopOffset(This,value) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_EnableDesktopOffset(This) \
    ( (This)->lpVtbl->EnableDesktopOffset(This) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_DisableDesktopOffset(This) \
    ( (This)->lpVtbl->DisableDesktopOffset(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandDesktopPartner_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Private.IVisualTreeIslandPartner
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Private_IVisualTreeIslandPartner[] = L"Microsoft.UI.Composition.Private.IVisualTreeIslandPartner";
/* [object, uuid("D5757CFE-7F82-5198-8335-62A57AF61B5F"), experimental, contract] */
typedef struct __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartnerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContentVisual )(
        __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CIVisual * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartnerVtbl;

interface __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartnerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_get_ContentVisual(This,value) \
    ( (This)->lpVtbl->get_ContentVisual(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CPrivate_CIVisualTreeIslandPartner_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Private.CompositionCubeMap
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Private.ICompositionCubeMap ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Private_CompositionCubeMap_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Private_CompositionCubeMap_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Private_CompositionCubeMap[] = L"Microsoft.UI.Composition.Private.CompositionCubeMap";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Private.CompositionSkyBoxBrush
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Private.ICompositionSkyBoxBrush ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Private_CompositionSkyBoxBrush_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Private_CompositionSkyBoxBrush_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Private_CompositionSkyBoxBrush[] = L"Microsoft.UI.Composition.Private.CompositionSkyBoxBrush";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Private.DataSourceReader
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Private.IDataSourceReader ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Private_DataSourceReader_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Private_DataSourceReader_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Private_DataSourceReader[] = L"Microsoft.UI.Composition.Private.DataSourceReader";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Private.RectangleClip
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Private.IRectangleClip ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Private_RectangleClip_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Private_RectangleClip_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Private_RectangleClip[] = L"Microsoft.UI.Composition.Private.RectangleClip";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Private.ScaleVisual
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Private.IScaleVisual ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Private_ScaleVisual_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Private_ScaleVisual_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Private_ScaleVisual[] = L"Microsoft.UI.Composition.Private.ScaleVisual";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Private.TransformInformation
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Microsoft.UI.Composition.Private.ITransformInformationFactory interface starting with version 1.0 of the Microsoft.UI.Composition.Private.LiftedPrivateContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Private.ITransformInformation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Private_TransformInformation_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Private_TransformInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Private_TransformInformation[] = L"Microsoft.UI.Composition.Private.TransformInformation";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Private.TransformInformationFactory
 *
 * Introduced to Microsoft.UI.Composition.Private.LiftedPrivateContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Private.ITransformInformationFactory ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Private_TransformInformationFactory_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Private_TransformInformationFactory_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Private_TransformInformationFactory[] = L"Microsoft.UI.Composition.Private.TransformInformationFactory";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_PRIVATE_LIFTEDPRIVATECONTRACT_VERSION >= 0x10000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __Microsoft2EUI2EComposition2EPrivate_p_h__

#endif // __Microsoft2EUI2EComposition2EPrivate_h__
