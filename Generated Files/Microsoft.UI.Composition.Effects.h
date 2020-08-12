/* Header file automatically generated from Microsoft.UI.Composition.Effects.idl */
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
#ifndef __Microsoft2EUI2EComposition2EEffects_h__
#define __Microsoft2EUI2EComposition2EEffects_h__
#ifndef __Microsoft2EUI2EComposition2EEffects_p_h__
#define __Microsoft2EUI2EComposition2EEffects_p_h__


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
#if !defined(MICROSOFT_UI_COMPOSITION_EFFECTS_LIFTEDCONTRACT_VERSION)
#define MICROSOFT_UI_COMPOSITION_EFFECTS_LIFTEDCONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_UI_COMPOSITION_EFFECTS_LIFTEDCONTRACT_VERSION)

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
#include "Windows.Foundation.Numerics.h"
#include "Windows.Graphics.Effects.h"
#include "Windows.UI.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface IAlphaMaskEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect Microsoft::UI::Composition::Effects::IAlphaMaskEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface IArithmeticCompositeEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect Microsoft::UI::Composition::Effects::IArithmeticCompositeEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface IBlendEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect Microsoft::UI::Composition::Effects::IBlendEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface IBorderEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect Microsoft::UI::Composition::Effects::IBorderEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface IColorMatrixEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect Microsoft::UI::Composition::Effects::IColorMatrixEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface IColorSourceEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect Microsoft::UI::Composition::Effects::IColorSourceEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface ICompositeStepEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect Microsoft::UI::Composition::Effects::ICompositeStepEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface IContrastEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect Microsoft::UI::Composition::Effects::IContrastEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface ICrossFadeEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect Microsoft::UI::Composition::Effects::ICrossFadeEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface IDistantDiffuseEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect Microsoft::UI::Composition::Effects::IDistantDiffuseEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface IDistantSpecularEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect Microsoft::UI::Composition::Effects::IDistantSpecularEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface IExposureEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect Microsoft::UI::Composition::Effects::IExposureEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface IGammaTransferEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect Microsoft::UI::Composition::Effects::IGammaTransferEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface IGaussianBlurEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect Microsoft::UI::Composition::Effects::IGaussianBlurEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface IGrayscaleEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect Microsoft::UI::Composition::Effects::IGrayscaleEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface IHueRotationEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect Microsoft::UI::Composition::Effects::IHueRotationEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface IInvertEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect Microsoft::UI::Composition::Effects::IInvertEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface ILinearTransferEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect Microsoft::UI::Composition::Effects::ILinearTransferEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface ILuminanceToAlphaEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect Microsoft::UI::Composition::Effects::ILuminanceToAlphaEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface IOpacityEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect Microsoft::UI::Composition::Effects::IOpacityEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface IPointDiffuseEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect Microsoft::UI::Composition::Effects::IPointDiffuseEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface IPointSpecularEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect Microsoft::UI::Composition::Effects::IPointSpecularEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface IPosterizeEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect Microsoft::UI::Composition::Effects::IPosterizeEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface IPremultiplyEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect Microsoft::UI::Composition::Effects::IPremultiplyEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface ISaturationEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect Microsoft::UI::Composition::Effects::ISaturationEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface ISceneLightingEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect Microsoft::UI::Composition::Effects::ISceneLightingEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface ISceneLightingEffect2;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2 Microsoft::UI::Composition::Effects::ISceneLightingEffect2

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface ISepiaEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect Microsoft::UI::Composition::Effects::ISepiaEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface ISpotDiffuseEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect Microsoft::UI::Composition::Effects::ISpotDiffuseEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface ISpotSpecularEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect Microsoft::UI::Composition::Effects::ISpotSpecularEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface ITemperatureAndTintEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect Microsoft::UI::Composition::Effects::ITemperatureAndTintEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CITintEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CITintEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface ITintEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CITintEffect Microsoft::UI::Composition::Effects::ITintEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CITintEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface ITransform2DEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect Microsoft::UI::Composition::Effects::ITransform2DEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                interface IUnPremultiplyEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect Microsoft::UI::Composition::Effects::IUnPremultiplyEffect

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect_FWD_DEFINED__




namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                
                typedef enum BlendEffectMode : int BlendEffectMode;
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                
                typedef enum CanvasAlphaMode : int CanvasAlphaMode;
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                
                typedef enum CanvasBlend : int CanvasBlend;
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                
                typedef enum CanvasComposite : int CanvasComposite;
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                
                typedef enum CanvasEdgeBehavior : int CanvasEdgeBehavior;
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                
                typedef enum CanvasImageInterpolation : int CanvasImageInterpolation;
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                
                typedef enum EffectBorderMode : int EffectBorderMode;
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                
                typedef enum EffectChannelSelect : int EffectChannelSelect;
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                
                typedef enum EffectOptimization : int EffectOptimization;
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                
                typedef enum SceneLightingEffectReflectanceModel : int SceneLightingEffectReflectanceModel;
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                
                typedef struct Matrix5x4 Matrix5x4;
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */




































namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class AlphaMaskEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class ArithmeticCompositeEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class BlendEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class BorderEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class ColorMatrixEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class ColorSourceEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class CompositeStepEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class ContrastEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class CrossFadeEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class DistantDiffuseEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class DistantSpecularEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class ExposureEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class GammaTransferEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class GaussianBlurEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class GrayscaleEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class HueRotationEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class InvertEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class LinearTransferEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class LuminanceToAlphaEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class OpacityEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class PointDiffuseEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class PointSpecularEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class PosterizeEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class PremultiplyEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class SaturationEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class SceneLightingEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class SepiaEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class SpotDiffuseEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class SpotSpecularEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class TemperatureAndTintEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class TintEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class Transform2DEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                class UnPremultiplyEffect;
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */








/*
 *
 * Struct Microsoft.UI.Composition.Effects.BlendEffectMode
 *
 */


namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [v1_enum, version] */
                enum BlendEffectMode : int
                {
                    BlendEffectMode_Multiply = 0,
                    BlendEffectMode_Screen = 1,
                    BlendEffectMode_Darken = 2,
                    BlendEffectMode_Lighten = 3,
                    BlendEffectMode_Dissolve = 4,
                    BlendEffectMode_ColorBurn = 5,
                    BlendEffectMode_LinearBurn = 6,
                    BlendEffectMode_DarkerColor = 7,
                    BlendEffectMode_LighterColor = 8,
                    BlendEffectMode_ColorDodge = 9,
                    BlendEffectMode_LinearDodge = 10,
                    BlendEffectMode_Overlay = 11,
                    BlendEffectMode_SoftLight = 12,
                    BlendEffectMode_HardLight = 13,
                    BlendEffectMode_VividLight = 14,
                    BlendEffectMode_LinearLight = 15,
                    BlendEffectMode_PinLight = 16,
                    BlendEffectMode_HardMix = 17,
                    BlendEffectMode_Difference = 18,
                    BlendEffectMode_Exclusion = 19,
                    BlendEffectMode_Hue = 20,
                    BlendEffectMode_Saturation = 21,
                    BlendEffectMode_Color = 22,
                    BlendEffectMode_Luminosity = 23,
                    BlendEffectMode_Subtract = 24,
                    BlendEffectMode_Division = 25,
                };
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */


/*
 *
 * Struct Microsoft.UI.Composition.Effects.CanvasAlphaMode
 *
 */


namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [v1_enum, version] */
                enum CanvasAlphaMode : int
                {
                    CanvasAlphaMode_Premultiplied = 0,
                    CanvasAlphaMode_Straight = 1,
                    CanvasAlphaMode_Ignore = 2,
                };
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */


/*
 *
 * Struct Microsoft.UI.Composition.Effects.CanvasBlend
 *
 */


namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [v1_enum, version] */
                enum CanvasBlend : int
                {
                    CanvasBlend_SourceOver = 0,
                    CanvasBlend_Copy = 1,
                    CanvasBlend_Min = 2,
                    CanvasBlend_Add = 3,
                };
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */


/*
 *
 * Struct Microsoft.UI.Composition.Effects.CanvasComposite
 *
 */


namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [v1_enum, version] */
                enum CanvasComposite : int
                {
                    CanvasComposite_SourceOver = 0,
                    CanvasComposite_DestinationOver = 1,
                    CanvasComposite_SourceIn = 2,
                    CanvasComposite_DestinationIn = 3,
                    CanvasComposite_SourceOut = 4,
                    CanvasComposite_DestinationOut = 5,
                    CanvasComposite_SourceAtop = 6,
                    CanvasComposite_DestinationAtop = 7,
                    CanvasComposite_Xor = 8,
                    CanvasComposite_Add = 9,
                    CanvasComposite_Copy = 10,
                    CanvasComposite_BoundedCopy = 11,
                    CanvasComposite_MaskInvert = 12,
                };
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */


/*
 *
 * Struct Microsoft.UI.Composition.Effects.CanvasEdgeBehavior
 *
 */


namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [v1_enum, version] */
                enum CanvasEdgeBehavior : int
                {
                    CanvasEdgeBehavior_Clamp = 0,
                    CanvasEdgeBehavior_Wrap = 1,
                    CanvasEdgeBehavior_Mirror = 2,
                };
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */


/*
 *
 * Struct Microsoft.UI.Composition.Effects.CanvasImageInterpolation
 *
 */


namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [v1_enum, version] */
                enum CanvasImageInterpolation : int
                {
                    CanvasImageInterpolation_NearestNeighbor = 0,
                    CanvasImageInterpolation_Linear = 1,
                    CanvasImageInterpolation_Cubic = 2,
                    CanvasImageInterpolation_MultiSampleLinear = 3,
                    CanvasImageInterpolation_Anisotropic = 4,
                    CanvasImageInterpolation_HighQualityCubic = 5,
                };
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */


/*
 *
 * Struct Microsoft.UI.Composition.Effects.EffectBorderMode
 *
 */


namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [v1_enum, version] */
                enum EffectBorderMode : int
                {
                    EffectBorderMode_Soft = 0,
                    EffectBorderMode_Hard = 1,
                };
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */


/*
 *
 * Struct Microsoft.UI.Composition.Effects.EffectChannelSelect
 *
 */


namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [v1_enum, version] */
                enum EffectChannelSelect : int
                {
                    EffectChannelSelect_Red = 0,
                    EffectChannelSelect_Green = 1,
                    EffectChannelSelect_Blue = 2,
                    EffectChannelSelect_Alpha = 3,
                };
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */


/*
 *
 * Struct Microsoft.UI.Composition.Effects.EffectOptimization
 *
 */


namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [v1_enum, version] */
                enum EffectOptimization : int
                {
                    EffectOptimization_Speed = 0,
                    EffectOptimization_Balanced = 1,
                    EffectOptimization_Quality = 2,
                };
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */


/*
 *
 * Struct Microsoft.UI.Composition.Effects.SceneLightingEffectReflectanceModel
 *
 * Introduced to Microsoft.UI.Composition.Effects.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */

#if MICROSOFT_UI_COMPOSITION_EFFECTS_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [v1_enum, experimental, contract] */
                enum SceneLightingEffectReflectanceModel : int
                {
                    SceneLightingEffectReflectanceModel_BlinnPhong = 0,
                    SceneLightingEffectReflectanceModel_PhysicallyBasedBlinnPhong = 1,
                };
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_EFFECTS_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Composition.Effects.Matrix5x4
 *
 */


namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [version] */
                struct Matrix5x4
                {
                    FLOAT M11;
                    FLOAT M12;
                    FLOAT M13;
                    FLOAT M14;
                    FLOAT M21;
                    FLOAT M22;
                    FLOAT M23;
                    FLOAT M24;
                    FLOAT M31;
                    FLOAT M32;
                    FLOAT M33;
                    FLOAT M34;
                    FLOAT M41;
                    FLOAT M42;
                    FLOAT M43;
                    FLOAT M44;
                    FLOAT M51;
                    FLOAT M52;
                    FLOAT M53;
                    FLOAT M54;
                };
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IAlphaMaskEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.AlphaMaskEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IAlphaMaskEffect[] = L"Microsoft.UI.Composition.Effects.IAlphaMaskEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("AEFEA128-5F3E-4ABB-BDE8-D53E55F730E4"), exclusiveto] */
                MIDL_INTERFACE("AEFEA128-5F3E-4ABB-BDE8-D53E55F730E4")
                IAlphaMaskEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Mask(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Mask(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAlphaMaskEffect=_uuidof(IAlphaMaskEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IArithmeticCompositeEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.ArithmeticCompositeEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IArithmeticCompositeEffect[] = L"Microsoft.UI.Composition.Effects.IArithmeticCompositeEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("BEEB682B-D64C-5C8B-A1FB-332162ED099B"), exclusiveto] */
                MIDL_INTERFACE("BEEB682B-D64C-5C8B-A1FB-332162ED099B")
                IArithmeticCompositeEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ClampOutput(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ClampOutput(
                        /* [in] */::boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MultiplyAmount(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MultiplyAmount(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source1Amount(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source1Amount(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source2Amount(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source2Amount(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Offset(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Offset(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source1(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source1(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source2(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source2(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IArithmeticCompositeEffect=_uuidof(IArithmeticCompositeEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IBlendEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.BlendEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IBlendEffect[] = L"Microsoft.UI.Composition.Effects.IBlendEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("5673248E-7266-5E49-B2AB-2589D5D875C2"), exclusiveto] */
                MIDL_INTERFACE("5673248E-7266-5E49-B2AB-2589D5D875C2")
                IBlendEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Mode(
                        /* [retval, out] */Microsoft::UI::Composition::Effects::BlendEffectMode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Mode(
                        /* [in] */Microsoft::UI::Composition::Effects::BlendEffectMode value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Background(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Background(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Foreground(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Foreground(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBlendEffect=_uuidof(IBlendEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IBorderEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.BorderEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IBorderEffect[] = L"Microsoft.UI.Composition.Effects.IBorderEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("31602441-15DB-5B4A-98DD-BA4247548B40"), exclusiveto] */
                MIDL_INTERFACE("31602441-15DB-5B4A-98DD-BA4247548B40")
                IBorderEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExtendX(
                        /* [retval, out] */Microsoft::UI::Composition::Effects::CanvasEdgeBehavior * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ExtendX(
                        /* [in] */Microsoft::UI::Composition::Effects::CanvasEdgeBehavior value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExtendY(
                        /* [retval, out] */Microsoft::UI::Composition::Effects::CanvasEdgeBehavior * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ExtendY(
                        /* [in] */Microsoft::UI::Composition::Effects::CanvasEdgeBehavior value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBorderEffect=_uuidof(IBorderEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IColorMatrixEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.ColorMatrixEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IColorMatrixEffect[] = L"Microsoft.UI.Composition.Effects.IColorMatrixEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("E6AE54C4-883D-588E-B451-E9EBE3830436"), exclusiveto] */
                MIDL_INTERFACE("E6AE54C4-883D-588E-B451-E9EBE3830436")
                IColorMatrixEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ColorMatrix(
                        /* [retval, out] */Microsoft::UI::Composition::Effects::Matrix5x4 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ColorMatrix(
                        /* [in] */Microsoft::UI::Composition::Effects::Matrix5x4 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AlphaMode(
                        /* [retval, out] */Microsoft::UI::Composition::Effects::CanvasAlphaMode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AlphaMode(
                        /* [in] */Microsoft::UI::Composition::Effects::CanvasAlphaMode value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ClampOutput(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ClampOutput(
                        /* [in] */::boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IColorMatrixEffect=_uuidof(IColorMatrixEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IColorSourceEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.ColorSourceEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IColorSourceEffect[] = L"Microsoft.UI.Composition.Effects.IColorSourceEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("25F942C7-7FEE-518A-BA7B-22A0060AF7F5"), exclusiveto] */
                MIDL_INTERFACE("25F942C7-7FEE-518A-BA7B-22A0060AF7F5")
                IColorSourceEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Color(
                        /* [retval, out] */Windows::UI::Color * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Color(
                        /* [in] */Windows::UI::Color value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IColorSourceEffect=_uuidof(IColorSourceEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.ICompositeStepEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.CompositeStepEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_ICompositeStepEffect[] = L"Microsoft.UI.Composition.Effects.ICompositeStepEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("58360908-1B6B-4302-8ECD-CC24B26F27B0"), exclusiveto] */
                MIDL_INTERFACE("58360908-1B6B-4302-8ECD-CC24B26F27B0")
                ICompositeStepEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Mode(
                        /* [retval, out] */Microsoft::UI::Composition::Effects::CanvasComposite * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Mode(
                        /* [in] */Microsoft::UI::Composition::Effects::CanvasComposite value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Destination(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Destination(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICompositeStepEffect=_uuidof(ICompositeStepEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IContrastEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.ContrastEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IContrastEffect[] = L"Microsoft.UI.Composition.Effects.IContrastEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("DA8A2B9F-594E-560A-9EAA-1F912408FE78"), exclusiveto] */
                MIDL_INTERFACE("DA8A2B9F-594E-560A-9EAA-1F912408FE78")
                IContrastEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Contrast(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Contrast(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ClampSource(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ClampSource(
                        /* [in] */::boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IContrastEffect=_uuidof(IContrastEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.ICrossFadeEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.CrossFadeEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_ICrossFadeEffect[] = L"Microsoft.UI.Composition.Effects.ICrossFadeEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("2A451393-CCC3-4C7E-B9BC-5AD9F9538C08"), exclusiveto] */
                MIDL_INTERFACE("2A451393-CCC3-4C7E-B9BC-5AD9F9538C08")
                ICrossFadeEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Weight(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Weight(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source1(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source1(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source2(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source2(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICrossFadeEffect=_uuidof(ICrossFadeEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IDistantDiffuseEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.DistantDiffuseEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IDistantDiffuseEffect[] = L"Microsoft.UI.Composition.Effects.IDistantDiffuseEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("D501B10B-B445-50F4-8B8F-CDECFCDD1320"), exclusiveto] */
                MIDL_INTERFACE("D501B10B-B445-50F4-8B8F-CDECFCDD1320")
                IDistantDiffuseEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Azimuth(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Azimuth(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Elevation(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Elevation(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DiffuseAmount(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DiffuseAmount(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HeightMapScale(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HeightMapScale(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightColor(
                        /* [retval, out] */Windows::UI::Color * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LightColor(
                        /* [in] */Windows::UI::Color value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HeightMapKernelSize(
                        /* [retval, out] */Windows::Foundation::Numerics::Vector2 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HeightMapKernelSize(
                        /* [in] */Windows::Foundation::Numerics::Vector2 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HeightMapInterpolationMode(
                        /* [retval, out] */Microsoft::UI::Composition::Effects::CanvasImageInterpolation * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HeightMapInterpolationMode(
                        /* [in] */Microsoft::UI::Composition::Effects::CanvasImageInterpolation value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDistantDiffuseEffect=_uuidof(IDistantDiffuseEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IDistantSpecularEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.DistantSpecularEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IDistantSpecularEffect[] = L"Microsoft.UI.Composition.Effects.IDistantSpecularEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("A7A828DF-3072-545F-8D75-86C100F03230"), exclusiveto] */
                MIDL_INTERFACE("A7A828DF-3072-545F-8D75-86C100F03230")
                IDistantSpecularEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Azimuth(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Azimuth(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Elevation(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Elevation(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SpecularExponent(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SpecularExponent(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SpecularAmount(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SpecularAmount(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HeightMapScale(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HeightMapScale(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightColor(
                        /* [retval, out] */Windows::UI::Color * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LightColor(
                        /* [in] */Windows::UI::Color value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HeightMapKernelSize(
                        /* [retval, out] */Windows::Foundation::Numerics::Vector2 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HeightMapKernelSize(
                        /* [in] */Windows::Foundation::Numerics::Vector2 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HeightMapInterpolationMode(
                        /* [retval, out] */Microsoft::UI::Composition::Effects::CanvasImageInterpolation * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HeightMapInterpolationMode(
                        /* [in] */Microsoft::UI::Composition::Effects::CanvasImageInterpolation value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDistantSpecularEffect=_uuidof(IDistantSpecularEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IExposureEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.ExposureEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IExposureEffect[] = L"Microsoft.UI.Composition.Effects.IExposureEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("B9E20A03-2232-5FD3-B408-15784B79DBBF"), exclusiveto] */
                MIDL_INTERFACE("B9E20A03-2232-5FD3-B408-15784B79DBBF")
                IExposureEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Exposure(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Exposure(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IExposureEffect=_uuidof(IExposureEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IGammaTransferEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.GammaTransferEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IGammaTransferEffect[] = L"Microsoft.UI.Composition.Effects.IGammaTransferEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("B4576B6B-6C3E-534A-8576-D46DF4FCE93C"), exclusiveto] */
                MIDL_INTERFACE("B4576B6B-6C3E-534A-8576-D46DF4FCE93C")
                IGammaTransferEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RedAmplitude(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RedAmplitude(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RedExponent(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RedExponent(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RedOffset(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RedOffset(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RedDisable(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RedDisable(
                        /* [in] */::boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GreenAmplitude(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_GreenAmplitude(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GreenExponent(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_GreenExponent(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GreenOffset(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_GreenOffset(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GreenDisable(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_GreenDisable(
                        /* [in] */::boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BlueAmplitude(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BlueAmplitude(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BlueExponent(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BlueExponent(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BlueOffset(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BlueOffset(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BlueDisable(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BlueDisable(
                        /* [in] */::boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AlphaAmplitude(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AlphaAmplitude(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AlphaExponent(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AlphaExponent(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AlphaOffset(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AlphaOffset(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AlphaDisable(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AlphaDisable(
                        /* [in] */::boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ClampOutput(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ClampOutput(
                        /* [in] */::boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGammaTransferEffect=_uuidof(IGammaTransferEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IGaussianBlurEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.GaussianBlurEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IGaussianBlurEffect[] = L"Microsoft.UI.Composition.Effects.IGaussianBlurEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("CC3FF255-A83D-5AED-8187-70F64BBD9E50"), exclusiveto] */
                MIDL_INTERFACE("CC3FF255-A83D-5AED-8187-70F64BBD9E50")
                IGaussianBlurEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BlurAmount(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BlurAmount(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Optimization(
                        /* [retval, out] */Microsoft::UI::Composition::Effects::EffectOptimization * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Optimization(
                        /* [in] */Microsoft::UI::Composition::Effects::EffectOptimization value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BorderMode(
                        /* [retval, out] */Microsoft::UI::Composition::Effects::EffectBorderMode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BorderMode(
                        /* [in] */Microsoft::UI::Composition::Effects::EffectBorderMode value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGaussianBlurEffect=_uuidof(IGaussianBlurEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IGrayscaleEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.GrayscaleEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IGrayscaleEffect[] = L"Microsoft.UI.Composition.Effects.IGrayscaleEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("78E13B83-0638-53F8-B0B3-5B0B320A9AD1"), exclusiveto] */
                MIDL_INTERFACE("78E13B83-0638-53F8-B0B3-5B0B320A9AD1")
                IGrayscaleEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGrayscaleEffect=_uuidof(IGrayscaleEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IHueRotationEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.HueRotationEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IHueRotationEffect[] = L"Microsoft.UI.Composition.Effects.IHueRotationEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("C172EBF2-E35F-58AE-AD2C-561ECEAF2693"), exclusiveto] */
                MIDL_INTERFACE("C172EBF2-E35F-58AE-AD2C-561ECEAF2693")
                IHueRotationEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Angle(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Angle(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHueRotationEffect=_uuidof(IHueRotationEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IInvertEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.InvertEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IInvertEffect[] = L"Microsoft.UI.Composition.Effects.IInvertEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("D4ADCDFC-0F60-524D-936A-7F2736AD33D7"), exclusiveto] */
                MIDL_INTERFACE("D4ADCDFC-0F60-524D-936A-7F2736AD33D7")
                IInvertEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IInvertEffect=_uuidof(IInvertEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.ILinearTransferEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.LinearTransferEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_ILinearTransferEffect[] = L"Microsoft.UI.Composition.Effects.ILinearTransferEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("0CDF2CD0-1CE5-5C97-A09C-F14361B96E46"), exclusiveto] */
                MIDL_INTERFACE("0CDF2CD0-1CE5-5C97-A09C-F14361B96E46")
                ILinearTransferEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RedOffset(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RedOffset(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RedSlope(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RedSlope(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RedDisable(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RedDisable(
                        /* [in] */::boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GreenOffset(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_GreenOffset(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GreenSlope(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_GreenSlope(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GreenDisable(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_GreenDisable(
                        /* [in] */::boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BlueOffset(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BlueOffset(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BlueSlope(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BlueSlope(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BlueDisable(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BlueDisable(
                        /* [in] */::boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AlphaOffset(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AlphaOffset(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AlphaSlope(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AlphaSlope(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AlphaDisable(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AlphaDisable(
                        /* [in] */::boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ClampOutput(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ClampOutput(
                        /* [in] */::boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILinearTransferEffect=_uuidof(ILinearTransferEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.ILuminanceToAlphaEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.LuminanceToAlphaEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_ILuminanceToAlphaEffect[] = L"Microsoft.UI.Composition.Effects.ILuminanceToAlphaEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("32983357-0FD9-52B7-B63B-001F6FF4618B"), exclusiveto] */
                MIDL_INTERFACE("32983357-0FD9-52B7-B63B-001F6FF4618B")
                ILuminanceToAlphaEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILuminanceToAlphaEffect=_uuidof(ILuminanceToAlphaEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IOpacityEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.OpacityEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IOpacityEffect[] = L"Microsoft.UI.Composition.Effects.IOpacityEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("C20AE33A-1844-4650-811C-63CA823B86B5"), exclusiveto] */
                MIDL_INTERFACE("C20AE33A-1844-4650-811C-63CA823B86B5")
                IOpacityEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Opacity(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Opacity(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IOpacityEffect=_uuidof(IOpacityEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IPointDiffuseEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.PointDiffuseEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IPointDiffuseEffect[] = L"Microsoft.UI.Composition.Effects.IPointDiffuseEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("6CCE09EC-F847-5661-AF4B-531DD3DD7D6D"), exclusiveto] */
                MIDL_INTERFACE("6CCE09EC-F847-5661-AF4B-531DD3DD7D6D")
                IPointDiffuseEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightPosition(
                        /* [retval, out] */Windows::Foundation::Numerics::Vector3 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LightPosition(
                        /* [in] */Windows::Foundation::Numerics::Vector3 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DiffuseAmount(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DiffuseAmount(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HeightMapScale(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HeightMapScale(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightColor(
                        /* [retval, out] */Windows::UI::Color * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LightColor(
                        /* [in] */Windows::UI::Color value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HeightMapKernelSize(
                        /* [retval, out] */Windows::Foundation::Numerics::Vector2 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HeightMapKernelSize(
                        /* [in] */Windows::Foundation::Numerics::Vector2 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HeightMapInterpolationMode(
                        /* [retval, out] */Microsoft::UI::Composition::Effects::CanvasImageInterpolation * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HeightMapInterpolationMode(
                        /* [in] */Microsoft::UI::Composition::Effects::CanvasImageInterpolation value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPointDiffuseEffect=_uuidof(IPointDiffuseEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IPointSpecularEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.PointSpecularEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IPointSpecularEffect[] = L"Microsoft.UI.Composition.Effects.IPointSpecularEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("EC8AFE9B-8501-5286-A43C-1AFFF7420AD5"), exclusiveto] */
                MIDL_INTERFACE("EC8AFE9B-8501-5286-A43C-1AFFF7420AD5")
                IPointSpecularEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightPosition(
                        /* [retval, out] */Windows::Foundation::Numerics::Vector3 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LightPosition(
                        /* [in] */Windows::Foundation::Numerics::Vector3 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SpecularExponent(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SpecularExponent(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SpecularAmount(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SpecularAmount(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HeightMapScale(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HeightMapScale(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightColor(
                        /* [retval, out] */Windows::UI::Color * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LightColor(
                        /* [in] */Windows::UI::Color value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HeightMapKernelSize(
                        /* [retval, out] */Windows::Foundation::Numerics::Vector2 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HeightMapKernelSize(
                        /* [in] */Windows::Foundation::Numerics::Vector2 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HeightMapInterpolationMode(
                        /* [retval, out] */Microsoft::UI::Composition::Effects::CanvasImageInterpolation * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HeightMapInterpolationMode(
                        /* [in] */Microsoft::UI::Composition::Effects::CanvasImageInterpolation value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPointSpecularEffect=_uuidof(IPointSpecularEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IPosterizeEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.PosterizeEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IPosterizeEffect[] = L"Microsoft.UI.Composition.Effects.IPosterizeEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("2F631A3B-C89A-507C-9756-299B61434FA3"), exclusiveto] */
                MIDL_INTERFACE("2F631A3B-C89A-507C-9756-299B61434FA3")
                IPosterizeEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RedValueCount(
                        /* [retval, out] */INT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RedValueCount(
                        /* [in] */INT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GreenValueCount(
                        /* [retval, out] */INT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_GreenValueCount(
                        /* [in] */INT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BlueValueCount(
                        /* [retval, out] */INT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BlueValueCount(
                        /* [in] */INT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPosterizeEffect=_uuidof(IPosterizeEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IPremultiplyEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.PremultiplyEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IPremultiplyEffect[] = L"Microsoft.UI.Composition.Effects.IPremultiplyEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("D2884C75-A4A1-556B-ACEF-28ED22CF067F"), exclusiveto] */
                MIDL_INTERFACE("D2884C75-A4A1-556B-ACEF-28ED22CF067F")
                IPremultiplyEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPremultiplyEffect=_uuidof(IPremultiplyEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.ISaturationEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.SaturationEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_ISaturationEffect[] = L"Microsoft.UI.Composition.Effects.ISaturationEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("F85A5ED7-7212-57A6-B357-61038961C58C"), exclusiveto] */
                MIDL_INTERFACE("F85A5ED7-7212-57A6-B357-61038961C58C")
                ISaturationEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Saturation(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Saturation(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISaturationEffect=_uuidof(ISaturationEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.ISceneLightingEffect
 *
 * Introduced to Microsoft.UI.Composition.Effects.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.SceneLightingEffect
 *
 *
 */
#if MICROSOFT_UI_COMPOSITION_EFFECTS_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_ISceneLightingEffect[] = L"Microsoft.UI.Composition.Effects.ISceneLightingEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, uuid("EB1E7316-114C-5950-8480-20A29A3BB1EE"), experimental, exclusiveto, contract] */
                MIDL_INTERFACE("EB1E7316-114C-5950-8480-20A29A3BB1EE")
                ISceneLightingEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AmbientAmount(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AmbientAmount(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DiffuseAmount(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DiffuseAmount(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NormalMapSource(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_NormalMapSource(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SpecularAmount(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SpecularAmount(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SpecularShine(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SpecularShine(
                        /* [in] */FLOAT value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISceneLightingEffect=_uuidof(ISceneLightingEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_EFFECTS_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Effects.ISceneLightingEffect2
 *
 * Introduced to Microsoft.UI.Composition.Effects.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.SceneLightingEffect
 *
 *
 */
#if MICROSOFT_UI_COMPOSITION_EFFECTS_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_ISceneLightingEffect2[] = L"Microsoft.UI.Composition.Effects.ISceneLightingEffect2";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, uuid("6B6496B2-468D-50D1-BBE9-593B8263AD80"), experimental, exclusiveto, contract] */
                MIDL_INTERFACE("6B6496B2-468D-50D1-BBE9-593B8263AD80")
                ISceneLightingEffect2 : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReflectanceModel(
                        /* [retval, out] */Microsoft::UI::Composition::Effects::SceneLightingEffectReflectanceModel * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ReflectanceModel(
                        /* [in] */Microsoft::UI::Composition::Effects::SceneLightingEffectReflectanceModel value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISceneLightingEffect2=_uuidof(ISceneLightingEffect2);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_EFFECTS_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Effects.ISepiaEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.SepiaEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_ISepiaEffect[] = L"Microsoft.UI.Composition.Effects.ISepiaEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("F933471F-A7AF-5521-BE79-B0DA22976CFE"), exclusiveto] */
                MIDL_INTERFACE("F933471F-A7AF-5521-BE79-B0DA22976CFE")
                ISepiaEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Intensity(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Intensity(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AlphaMode(
                        /* [retval, out] */Microsoft::UI::Composition::Effects::CanvasAlphaMode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AlphaMode(
                        /* [in] */Microsoft::UI::Composition::Effects::CanvasAlphaMode value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISepiaEffect=_uuidof(ISepiaEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.ISpotDiffuseEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.SpotDiffuseEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_ISpotDiffuseEffect[] = L"Microsoft.UI.Composition.Effects.ISpotDiffuseEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("B3DCBE44-1DD7-5CB3-95E5-A48974CD12E7"), exclusiveto] */
                MIDL_INTERFACE("B3DCBE44-1DD7-5CB3-95E5-A48974CD12E7")
                ISpotDiffuseEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightPosition(
                        /* [retval, out] */Windows::Foundation::Numerics::Vector3 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LightPosition(
                        /* [in] */Windows::Foundation::Numerics::Vector3 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightTarget(
                        /* [retval, out] */Windows::Foundation::Numerics::Vector3 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LightTarget(
                        /* [in] */Windows::Foundation::Numerics::Vector3 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Focus(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Focus(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LimitingConeAngle(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LimitingConeAngle(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DiffuseAmount(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DiffuseAmount(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HeightMapScale(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HeightMapScale(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightColor(
                        /* [retval, out] */Windows::UI::Color * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LightColor(
                        /* [in] */Windows::UI::Color value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HeightMapKernelSize(
                        /* [retval, out] */Windows::Foundation::Numerics::Vector2 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HeightMapKernelSize(
                        /* [in] */Windows::Foundation::Numerics::Vector2 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HeightMapInterpolationMode(
                        /* [retval, out] */Microsoft::UI::Composition::Effects::CanvasImageInterpolation * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HeightMapInterpolationMode(
                        /* [in] */Microsoft::UI::Composition::Effects::CanvasImageInterpolation value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpotDiffuseEffect=_uuidof(ISpotDiffuseEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.ISpotSpecularEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.SpotSpecularEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_ISpotSpecularEffect[] = L"Microsoft.UI.Composition.Effects.ISpotSpecularEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("83AE4CD0-80AA-5783-8572-F15E5F85329D"), exclusiveto] */
                MIDL_INTERFACE("83AE4CD0-80AA-5783-8572-F15E5F85329D")
                ISpotSpecularEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightPosition(
                        /* [retval, out] */Windows::Foundation::Numerics::Vector3 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LightPosition(
                        /* [in] */Windows::Foundation::Numerics::Vector3 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightTarget(
                        /* [retval, out] */Windows::Foundation::Numerics::Vector3 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LightTarget(
                        /* [in] */Windows::Foundation::Numerics::Vector3 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Focus(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Focus(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LimitingConeAngle(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LimitingConeAngle(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SpecularExponent(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SpecularExponent(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SpecularAmount(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SpecularAmount(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HeightMapScale(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HeightMapScale(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightColor(
                        /* [retval, out] */Windows::UI::Color * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LightColor(
                        /* [in] */Windows::UI::Color value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HeightMapKernelSize(
                        /* [retval, out] */Windows::Foundation::Numerics::Vector2 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HeightMapKernelSize(
                        /* [in] */Windows::Foundation::Numerics::Vector2 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HeightMapInterpolationMode(
                        /* [retval, out] */Microsoft::UI::Composition::Effects::CanvasImageInterpolation * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HeightMapInterpolationMode(
                        /* [in] */Microsoft::UI::Composition::Effects::CanvasImageInterpolation value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpotSpecularEffect=_uuidof(ISpotSpecularEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.ITemperatureAndTintEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.TemperatureAndTintEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_ITemperatureAndTintEffect[] = L"Microsoft.UI.Composition.Effects.ITemperatureAndTintEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("8AE43E02-2619-5D78-8980-4ED569549BD7"), exclusiveto] */
                MIDL_INTERFACE("8AE43E02-2619-5D78-8980-4ED569549BD7")
                ITemperatureAndTintEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Temperature(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Temperature(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Tint(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Tint(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ITemperatureAndTintEffect=_uuidof(ITemperatureAndTintEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.ITintEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.TintEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CITintEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CITintEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_ITintEffect[] = L"Microsoft.UI.Composition.Effects.ITintEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("44FE4B1A-D909-4848-B08F-B6E979402771"), exclusiveto] */
                MIDL_INTERFACE("44FE4B1A-D909-4848-B08F-B6E979402771")
                ITintEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Color(
                        /* [retval, out] */Windows::UI::Color * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Color(
                        /* [in] */Windows::UI::Color value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ClampOutput(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ClampOutput(
                        /* [in] */::boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ITintEffect=_uuidof(ITintEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CITintEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CITintEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.ITransform2DEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.Transform2DEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_ITransform2DEffect[] = L"Microsoft.UI.Composition.Effects.ITransform2DEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("4467D118-33E7-5B1A-87C2-0F1F0497353C"), exclusiveto] */
                MIDL_INTERFACE("4467D118-33E7-5B1A-87C2-0F1F0497353C")
                ITransform2DEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InterpolationMode(
                        /* [retval, out] */Microsoft::UI::Composition::Effects::CanvasImageInterpolation * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InterpolationMode(
                        /* [in] */Microsoft::UI::Composition::Effects::CanvasImageInterpolation value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BorderMode(
                        /* [retval, out] */Microsoft::UI::Composition::Effects::EffectBorderMode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BorderMode(
                        /* [in] */Microsoft::UI::Composition::Effects::EffectBorderMode value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TransformMatrix(
                        /* [retval, out] */Windows::Foundation::Numerics::Matrix3x2 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TransformMatrix(
                        /* [in] */Windows::Foundation::Numerics::Matrix3x2 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Sharpness(
                        /* [retval, out] */FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Sharpness(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ITransform2DEffect=_uuidof(ITransform2DEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IUnPremultiplyEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.UnPremultiplyEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IUnPremultiplyEffect[] = L"Microsoft.UI.Composition.Effects.IUnPremultiplyEffect";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Effects {
                /* [object, version, uuid("9C8B2B18-CBC1-547E-B6D5-64A1D8BBC802"), exclusiveto] */
                MIDL_INTERFACE("9C8B2B18-CBC1-547E-B6D5-64A1D8BBC802")
                IUnPremultiplyEffect : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */Windows::Graphics::Effects::IGraphicsEffectSource * * source
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */Windows::Graphics::Effects::IGraphicsEffectSource * source
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUnPremultiplyEffect=_uuidof(IUnPremultiplyEffect);
                
            } /* Effects */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect_INTERFACE_DEFINED__) */


/*
 *
 * Class Microsoft.UI.Composition.Effects.AlphaMaskEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IAlphaMaskEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_AlphaMaskEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_AlphaMaskEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_AlphaMaskEffect[] = L"Microsoft.UI.Composition.Effects.AlphaMaskEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.ArithmeticCompositeEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IArithmeticCompositeEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_ArithmeticCompositeEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_ArithmeticCompositeEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_ArithmeticCompositeEffect[] = L"Microsoft.UI.Composition.Effects.ArithmeticCompositeEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.BlendEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IBlendEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_BlendEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_BlendEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_BlendEffect[] = L"Microsoft.UI.Composition.Effects.BlendEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.BorderEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IBorderEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_BorderEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_BorderEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_BorderEffect[] = L"Microsoft.UI.Composition.Effects.BorderEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.ColorMatrixEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IColorMatrixEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_ColorMatrixEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_ColorMatrixEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_ColorMatrixEffect[] = L"Microsoft.UI.Composition.Effects.ColorMatrixEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.ColorSourceEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IColorSourceEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_ColorSourceEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_ColorSourceEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_ColorSourceEffect[] = L"Microsoft.UI.Composition.Effects.ColorSourceEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.CompositeStepEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.ICompositeStepEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_CompositeStepEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_CompositeStepEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_CompositeStepEffect[] = L"Microsoft.UI.Composition.Effects.CompositeStepEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.ContrastEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IContrastEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_ContrastEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_ContrastEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_ContrastEffect[] = L"Microsoft.UI.Composition.Effects.ContrastEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.CrossFadeEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.ICrossFadeEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_CrossFadeEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_CrossFadeEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_CrossFadeEffect[] = L"Microsoft.UI.Composition.Effects.CrossFadeEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.DistantDiffuseEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IDistantDiffuseEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_DistantDiffuseEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_DistantDiffuseEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_DistantDiffuseEffect[] = L"Microsoft.UI.Composition.Effects.DistantDiffuseEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.DistantSpecularEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IDistantSpecularEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_DistantSpecularEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_DistantSpecularEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_DistantSpecularEffect[] = L"Microsoft.UI.Composition.Effects.DistantSpecularEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.ExposureEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IExposureEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_ExposureEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_ExposureEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_ExposureEffect[] = L"Microsoft.UI.Composition.Effects.ExposureEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.GammaTransferEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IGammaTransferEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_GammaTransferEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_GammaTransferEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_GammaTransferEffect[] = L"Microsoft.UI.Composition.Effects.GammaTransferEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.GaussianBlurEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IGaussianBlurEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_GaussianBlurEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_GaussianBlurEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_GaussianBlurEffect[] = L"Microsoft.UI.Composition.Effects.GaussianBlurEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.GrayscaleEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IGrayscaleEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_GrayscaleEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_GrayscaleEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_GrayscaleEffect[] = L"Microsoft.UI.Composition.Effects.GrayscaleEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.HueRotationEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IHueRotationEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_HueRotationEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_HueRotationEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_HueRotationEffect[] = L"Microsoft.UI.Composition.Effects.HueRotationEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.InvertEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IInvertEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_InvertEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_InvertEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_InvertEffect[] = L"Microsoft.UI.Composition.Effects.InvertEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.LinearTransferEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.ILinearTransferEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_LinearTransferEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_LinearTransferEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_LinearTransferEffect[] = L"Microsoft.UI.Composition.Effects.LinearTransferEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.LuminanceToAlphaEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.ILuminanceToAlphaEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_LuminanceToAlphaEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_LuminanceToAlphaEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_LuminanceToAlphaEffect[] = L"Microsoft.UI.Composition.Effects.LuminanceToAlphaEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.OpacityEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IOpacityEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_OpacityEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_OpacityEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_OpacityEffect[] = L"Microsoft.UI.Composition.Effects.OpacityEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.PointDiffuseEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IPointDiffuseEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_PointDiffuseEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_PointDiffuseEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_PointDiffuseEffect[] = L"Microsoft.UI.Composition.Effects.PointDiffuseEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.PointSpecularEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IPointSpecularEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_PointSpecularEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_PointSpecularEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_PointSpecularEffect[] = L"Microsoft.UI.Composition.Effects.PointSpecularEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.PosterizeEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IPosterizeEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_PosterizeEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_PosterizeEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_PosterizeEffect[] = L"Microsoft.UI.Composition.Effects.PosterizeEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.PremultiplyEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IPremultiplyEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_PremultiplyEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_PremultiplyEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_PremultiplyEffect[] = L"Microsoft.UI.Composition.Effects.PremultiplyEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.SaturationEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.ISaturationEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_SaturationEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_SaturationEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_SaturationEffect[] = L"Microsoft.UI.Composition.Effects.SaturationEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.SceneLightingEffect
 *
 * Introduced to Microsoft.UI.Composition.Effects.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Microsoft.UI.Composition.Effects.LiftedContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.ISceneLightingEffect ** Default Interface **
 *    Microsoft.UI.Composition.Effects.ISceneLightingEffect2
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_COMPOSITION_EFFECTS_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_SceneLightingEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_SceneLightingEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_SceneLightingEffect[] = L"Microsoft.UI.Composition.Effects.SceneLightingEffect";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_EFFECTS_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Effects.SepiaEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.ISepiaEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_SepiaEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_SepiaEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_SepiaEffect[] = L"Microsoft.UI.Composition.Effects.SepiaEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.SpotDiffuseEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.ISpotDiffuseEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_SpotDiffuseEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_SpotDiffuseEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_SpotDiffuseEffect[] = L"Microsoft.UI.Composition.Effects.SpotDiffuseEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.SpotSpecularEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.ISpotSpecularEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_SpotSpecularEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_SpotSpecularEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_SpotSpecularEffect[] = L"Microsoft.UI.Composition.Effects.SpotSpecularEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.TemperatureAndTintEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.ITemperatureAndTintEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_TemperatureAndTintEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_TemperatureAndTintEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_TemperatureAndTintEffect[] = L"Microsoft.UI.Composition.Effects.TemperatureAndTintEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.TintEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.ITintEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_TintEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_TintEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_TintEffect[] = L"Microsoft.UI.Composition.Effects.TintEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.Transform2DEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.ITransform2DEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_Transform2DEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_Transform2DEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_Transform2DEffect[] = L"Microsoft.UI.Composition.Effects.Transform2DEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.UnPremultiplyEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IUnPremultiplyEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_UnPremultiplyEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_UnPremultiplyEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_UnPremultiplyEffect[] = L"Microsoft.UI.Composition.Effects.UnPremultiplyEffect";
#endif





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect __x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect __x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect __x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect __x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect __x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect __x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect __x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect __x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect __x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect __x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2 __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CITintEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CITintEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CITintEffect __x_Microsoft_CUI_CComposition_CEffects_CITintEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CITintEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect __x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect;

#endif // ____x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect_FWD_DEFINED__



typedef enum __x_Microsoft_CUI_CComposition_CEffects_CBlendEffectMode __x_Microsoft_CUI_CComposition_CEffects_CBlendEffectMode;


typedef enum __x_Microsoft_CUI_CComposition_CEffects_CCanvasAlphaMode __x_Microsoft_CUI_CComposition_CEffects_CCanvasAlphaMode;


typedef enum __x_Microsoft_CUI_CComposition_CEffects_CCanvasBlend __x_Microsoft_CUI_CComposition_CEffects_CCanvasBlend;


typedef enum __x_Microsoft_CUI_CComposition_CEffects_CCanvasComposite __x_Microsoft_CUI_CComposition_CEffects_CCanvasComposite;


typedef enum __x_Microsoft_CUI_CComposition_CEffects_CCanvasEdgeBehavior __x_Microsoft_CUI_CComposition_CEffects_CCanvasEdgeBehavior;


typedef enum __x_Microsoft_CUI_CComposition_CEffects_CCanvasImageInterpolation __x_Microsoft_CUI_CComposition_CEffects_CCanvasImageInterpolation;


typedef enum __x_Microsoft_CUI_CComposition_CEffects_CEffectBorderMode __x_Microsoft_CUI_CComposition_CEffects_CEffectBorderMode;


typedef enum __x_Microsoft_CUI_CComposition_CEffects_CEffectChannelSelect __x_Microsoft_CUI_CComposition_CEffects_CEffectChannelSelect;


typedef enum __x_Microsoft_CUI_CComposition_CEffects_CEffectOptimization __x_Microsoft_CUI_CComposition_CEffects_CEffectOptimization;


typedef enum __x_Microsoft_CUI_CComposition_CEffects_CSceneLightingEffectReflectanceModel __x_Microsoft_CUI_CComposition_CEffects_CSceneLightingEffectReflectanceModel;


typedef struct __x_Microsoft_CUI_CComposition_CEffects_CMatrix5x4 __x_Microsoft_CUI_CComposition_CEffects_CMatrix5x4;










































































/*
 *
 * Struct Microsoft.UI.Composition.Effects.BlendEffectMode
 *
 */

/* [v1_enum, version] */
enum __x_Microsoft_CUI_CComposition_CEffects_CBlendEffectMode
{
    Microsoft_UI_Composition_Effects_BlendEffectMode_Multiply = 0,
    Microsoft_UI_Composition_Effects_BlendEffectMode_Screen = 1,
    Microsoft_UI_Composition_Effects_BlendEffectMode_Darken = 2,
    Microsoft_UI_Composition_Effects_BlendEffectMode_Lighten = 3,
    Microsoft_UI_Composition_Effects_BlendEffectMode_Dissolve = 4,
    Microsoft_UI_Composition_Effects_BlendEffectMode_ColorBurn = 5,
    Microsoft_UI_Composition_Effects_BlendEffectMode_LinearBurn = 6,
    Microsoft_UI_Composition_Effects_BlendEffectMode_DarkerColor = 7,
    Microsoft_UI_Composition_Effects_BlendEffectMode_LighterColor = 8,
    Microsoft_UI_Composition_Effects_BlendEffectMode_ColorDodge = 9,
    Microsoft_UI_Composition_Effects_BlendEffectMode_LinearDodge = 10,
    Microsoft_UI_Composition_Effects_BlendEffectMode_Overlay = 11,
    Microsoft_UI_Composition_Effects_BlendEffectMode_SoftLight = 12,
    Microsoft_UI_Composition_Effects_BlendEffectMode_HardLight = 13,
    Microsoft_UI_Composition_Effects_BlendEffectMode_VividLight = 14,
    Microsoft_UI_Composition_Effects_BlendEffectMode_LinearLight = 15,
    Microsoft_UI_Composition_Effects_BlendEffectMode_PinLight = 16,
    Microsoft_UI_Composition_Effects_BlendEffectMode_HardMix = 17,
    Microsoft_UI_Composition_Effects_BlendEffectMode_Difference = 18,
    Microsoft_UI_Composition_Effects_BlendEffectMode_Exclusion = 19,
    Microsoft_UI_Composition_Effects_BlendEffectMode_Hue = 20,
    Microsoft_UI_Composition_Effects_BlendEffectMode_Saturation = 21,
    Microsoft_UI_Composition_Effects_BlendEffectMode_Color = 22,
    Microsoft_UI_Composition_Effects_BlendEffectMode_Luminosity = 23,
    Microsoft_UI_Composition_Effects_BlendEffectMode_Subtract = 24,
    Microsoft_UI_Composition_Effects_BlendEffectMode_Division = 25,
};


/*
 *
 * Struct Microsoft.UI.Composition.Effects.CanvasAlphaMode
 *
 */

/* [v1_enum, version] */
enum __x_Microsoft_CUI_CComposition_CEffects_CCanvasAlphaMode
{
    Microsoft_UI_Composition_Effects_CanvasAlphaMode_Premultiplied = 0,
    Microsoft_UI_Composition_Effects_CanvasAlphaMode_Straight = 1,
    Microsoft_UI_Composition_Effects_CanvasAlphaMode_Ignore = 2,
};


/*
 *
 * Struct Microsoft.UI.Composition.Effects.CanvasBlend
 *
 */

/* [v1_enum, version] */
enum __x_Microsoft_CUI_CComposition_CEffects_CCanvasBlend
{
    Microsoft_UI_Composition_Effects_CanvasBlend_SourceOver = 0,
    Microsoft_UI_Composition_Effects_CanvasBlend_Copy = 1,
    Microsoft_UI_Composition_Effects_CanvasBlend_Min = 2,
    Microsoft_UI_Composition_Effects_CanvasBlend_Add = 3,
};


/*
 *
 * Struct Microsoft.UI.Composition.Effects.CanvasComposite
 *
 */

/* [v1_enum, version] */
enum __x_Microsoft_CUI_CComposition_CEffects_CCanvasComposite
{
    Microsoft_UI_Composition_Effects_CanvasComposite_SourceOver = 0,
    Microsoft_UI_Composition_Effects_CanvasComposite_DestinationOver = 1,
    Microsoft_UI_Composition_Effects_CanvasComposite_SourceIn = 2,
    Microsoft_UI_Composition_Effects_CanvasComposite_DestinationIn = 3,
    Microsoft_UI_Composition_Effects_CanvasComposite_SourceOut = 4,
    Microsoft_UI_Composition_Effects_CanvasComposite_DestinationOut = 5,
    Microsoft_UI_Composition_Effects_CanvasComposite_SourceAtop = 6,
    Microsoft_UI_Composition_Effects_CanvasComposite_DestinationAtop = 7,
    Microsoft_UI_Composition_Effects_CanvasComposite_Xor = 8,
    Microsoft_UI_Composition_Effects_CanvasComposite_Add = 9,
    Microsoft_UI_Composition_Effects_CanvasComposite_Copy = 10,
    Microsoft_UI_Composition_Effects_CanvasComposite_BoundedCopy = 11,
    Microsoft_UI_Composition_Effects_CanvasComposite_MaskInvert = 12,
};


/*
 *
 * Struct Microsoft.UI.Composition.Effects.CanvasEdgeBehavior
 *
 */

/* [v1_enum, version] */
enum __x_Microsoft_CUI_CComposition_CEffects_CCanvasEdgeBehavior
{
    Microsoft_UI_Composition_Effects_CanvasEdgeBehavior_Clamp = 0,
    Microsoft_UI_Composition_Effects_CanvasEdgeBehavior_Wrap = 1,
    Microsoft_UI_Composition_Effects_CanvasEdgeBehavior_Mirror = 2,
};


/*
 *
 * Struct Microsoft.UI.Composition.Effects.CanvasImageInterpolation
 *
 */

/* [v1_enum, version] */
enum __x_Microsoft_CUI_CComposition_CEffects_CCanvasImageInterpolation
{
    Microsoft_UI_Composition_Effects_CanvasImageInterpolation_NearestNeighbor = 0,
    Microsoft_UI_Composition_Effects_CanvasImageInterpolation_Linear = 1,
    Microsoft_UI_Composition_Effects_CanvasImageInterpolation_Cubic = 2,
    Microsoft_UI_Composition_Effects_CanvasImageInterpolation_MultiSampleLinear = 3,
    Microsoft_UI_Composition_Effects_CanvasImageInterpolation_Anisotropic = 4,
    Microsoft_UI_Composition_Effects_CanvasImageInterpolation_HighQualityCubic = 5,
};


/*
 *
 * Struct Microsoft.UI.Composition.Effects.EffectBorderMode
 *
 */

/* [v1_enum, version] */
enum __x_Microsoft_CUI_CComposition_CEffects_CEffectBorderMode
{
    Microsoft_UI_Composition_Effects_EffectBorderMode_Soft = 0,
    Microsoft_UI_Composition_Effects_EffectBorderMode_Hard = 1,
};


/*
 *
 * Struct Microsoft.UI.Composition.Effects.EffectChannelSelect
 *
 */

/* [v1_enum, version] */
enum __x_Microsoft_CUI_CComposition_CEffects_CEffectChannelSelect
{
    Microsoft_UI_Composition_Effects_EffectChannelSelect_Red = 0,
    Microsoft_UI_Composition_Effects_EffectChannelSelect_Green = 1,
    Microsoft_UI_Composition_Effects_EffectChannelSelect_Blue = 2,
    Microsoft_UI_Composition_Effects_EffectChannelSelect_Alpha = 3,
};


/*
 *
 * Struct Microsoft.UI.Composition.Effects.EffectOptimization
 *
 */

/* [v1_enum, version] */
enum __x_Microsoft_CUI_CComposition_CEffects_CEffectOptimization
{
    Microsoft_UI_Composition_Effects_EffectOptimization_Speed = 0,
    Microsoft_UI_Composition_Effects_EffectOptimization_Balanced = 1,
    Microsoft_UI_Composition_Effects_EffectOptimization_Quality = 2,
};


/*
 *
 * Struct Microsoft.UI.Composition.Effects.SceneLightingEffectReflectanceModel
 *
 * Introduced to Microsoft.UI.Composition.Effects.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */

#if MICROSOFT_UI_COMPOSITION_EFFECTS_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
/* [v1_enum, experimental, contract] */
enum __x_Microsoft_CUI_CComposition_CEffects_CSceneLightingEffectReflectanceModel
{
    Microsoft_UI_Composition_Effects_SceneLightingEffectReflectanceModel_BlinnPhong = 0,
    Microsoft_UI_Composition_Effects_SceneLightingEffectReflectanceModel_PhysicallyBasedBlinnPhong = 1,
};
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_EFFECTS_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Composition.Effects.Matrix5x4
 *
 */

/* [version] */
struct __x_Microsoft_CUI_CComposition_CEffects_CMatrix5x4
{
    FLOAT M11;
    FLOAT M12;
    FLOAT M13;
    FLOAT M14;
    FLOAT M21;
    FLOAT M22;
    FLOAT M23;
    FLOAT M24;
    FLOAT M31;
    FLOAT M32;
    FLOAT M33;
    FLOAT M34;
    FLOAT M41;
    FLOAT M42;
    FLOAT M43;
    FLOAT M44;
    FLOAT M51;
    FLOAT M52;
    FLOAT M53;
    FLOAT M54;
};


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IAlphaMaskEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.AlphaMaskEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IAlphaMaskEffect[] = L"Microsoft.UI.Composition.Effects.IAlphaMaskEffect";
/* [object, version, uuid("AEFEA128-5F3E-4ABB-BDE8-D53E55F730E4"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Mask )(
        __x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Mask )(
        __x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect_get_Source(This,source) \
    ( (This)->lpVtbl->get_Source(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect_put_Source(This,source) \
    ( (This)->lpVtbl->put_Source(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect_get_Mask(This,source) \
    ( (This)->lpVtbl->get_Mask(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect_put_Mask(This,source) \
    ( (This)->lpVtbl->put_Mask(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIAlphaMaskEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IArithmeticCompositeEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.ArithmeticCompositeEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IArithmeticCompositeEffect[] = L"Microsoft.UI.Composition.Effects.IArithmeticCompositeEffect";
/* [object, version, uuid("BEEB682B-D64C-5C8B-A1FB-332162ED099B"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ClampOutput )(
        __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ClampOutput )(
        __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MultiplyAmount )(
        __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MultiplyAmount )(
        __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source1Amount )(
        __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source1Amount )(
        __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source2Amount )(
        __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source2Amount )(
        __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Offset )(
        __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Offset )(
        __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source1 )(
        __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source1 )(
        __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source2 )(
        __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source2 )(
        __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_get_ClampOutput(This,value) \
    ( (This)->lpVtbl->get_ClampOutput(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_put_ClampOutput(This,value) \
    ( (This)->lpVtbl->put_ClampOutput(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_get_MultiplyAmount(This,value) \
    ( (This)->lpVtbl->get_MultiplyAmount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_put_MultiplyAmount(This,value) \
    ( (This)->lpVtbl->put_MultiplyAmount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_get_Source1Amount(This,value) \
    ( (This)->lpVtbl->get_Source1Amount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_put_Source1Amount(This,value) \
    ( (This)->lpVtbl->put_Source1Amount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_get_Source2Amount(This,value) \
    ( (This)->lpVtbl->get_Source2Amount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_put_Source2Amount(This,value) \
    ( (This)->lpVtbl->put_Source2Amount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_get_Offset(This,value) \
    ( (This)->lpVtbl->get_Offset(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_put_Offset(This,value) \
    ( (This)->lpVtbl->put_Offset(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_get_Source1(This,source) \
    ( (This)->lpVtbl->get_Source1(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_put_Source1(This,source) \
    ( (This)->lpVtbl->put_Source1(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_get_Source2(This,source) \
    ( (This)->lpVtbl->get_Source2(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_put_Source2(This,source) \
    ( (This)->lpVtbl->put_Source2(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIArithmeticCompositeEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IBlendEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.BlendEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IBlendEffect[] = L"Microsoft.UI.Composition.Effects.IBlendEffect";
/* [object, version, uuid("5673248E-7266-5E49-B2AB-2589D5D875C2"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CEffects_CBlendEffectMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CEffects_CBlendEffectMode value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Background )(
        __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Background )(
        __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Foreground )(
        __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Foreground )(
        __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect_get_Mode(This,value) \
    ( (This)->lpVtbl->get_Mode(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect_put_Mode(This,value) \
    ( (This)->lpVtbl->put_Mode(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect_get_Background(This,source) \
    ( (This)->lpVtbl->get_Background(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect_put_Background(This,source) \
    ( (This)->lpVtbl->put_Background(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect_get_Foreground(This,source) \
    ( (This)->lpVtbl->get_Foreground(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect_put_Foreground(This,source) \
    ( (This)->lpVtbl->put_Foreground(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIBlendEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IBorderEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.BorderEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IBorderEffect[] = L"Microsoft.UI.Composition.Effects.IBorderEffect";
/* [object, version, uuid("31602441-15DB-5B4A-98DD-BA4247548B40"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExtendX )(
        __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CEffects_CCanvasEdgeBehavior * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ExtendX )(
        __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CEffects_CCanvasEdgeBehavior value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExtendY )(
        __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CEffects_CCanvasEdgeBehavior * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ExtendY )(
        __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CEffects_CCanvasEdgeBehavior value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect_get_ExtendX(This,value) \
    ( (This)->lpVtbl->get_ExtendX(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect_put_ExtendX(This,value) \
    ( (This)->lpVtbl->put_ExtendX(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect_get_ExtendY(This,value) \
    ( (This)->lpVtbl->get_ExtendY(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect_put_ExtendY(This,value) \
    ( (This)->lpVtbl->put_ExtendY(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect_get_Source(This,source) \
    ( (This)->lpVtbl->get_Source(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect_put_Source(This,source) \
    ( (This)->lpVtbl->put_Source(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIBorderEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IColorMatrixEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.ColorMatrixEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IColorMatrixEffect[] = L"Microsoft.UI.Composition.Effects.IColorMatrixEffect";
/* [object, version, uuid("E6AE54C4-883D-588E-B451-E9EBE3830436"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ColorMatrix )(
        __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CEffects_CMatrix5x4 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ColorMatrix )(
        __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CEffects_CMatrix5x4 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AlphaMode )(
        __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CEffects_CCanvasAlphaMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AlphaMode )(
        __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CEffects_CCanvasAlphaMode value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ClampOutput )(
        __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ClampOutput )(
        __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect_get_ColorMatrix(This,value) \
    ( (This)->lpVtbl->get_ColorMatrix(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect_put_ColorMatrix(This,value) \
    ( (This)->lpVtbl->put_ColorMatrix(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect_get_AlphaMode(This,value) \
    ( (This)->lpVtbl->get_AlphaMode(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect_put_AlphaMode(This,value) \
    ( (This)->lpVtbl->put_AlphaMode(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect_get_ClampOutput(This,value) \
    ( (This)->lpVtbl->get_ClampOutput(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect_put_ClampOutput(This,value) \
    ( (This)->lpVtbl->put_ClampOutput(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect_get_Source(This,source) \
    ( (This)->lpVtbl->get_Source(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect_put_Source(This,source) \
    ( (This)->lpVtbl->put_Source(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIColorMatrixEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IColorSourceEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.ColorSourceEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IColorSourceEffect[] = L"Microsoft.UI.Composition.Effects.IColorSourceEffect";
/* [object, version, uuid("25F942C7-7FEE-518A-BA7B-22A0060AF7F5"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Color )(
        __x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Color )(
        __x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect_get_Color(This,value) \
    ( (This)->lpVtbl->get_Color(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect_put_Color(This,value) \
    ( (This)->lpVtbl->put_Color(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIColorSourceEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.ICompositeStepEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.CompositeStepEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_ICompositeStepEffect[] = L"Microsoft.UI.Composition.Effects.ICompositeStepEffect";
/* [object, version, uuid("58360908-1B6B-4302-8ECD-CC24B26F27B0"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CEffects_CCanvasComposite * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CEffects_CCanvasComposite value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Destination )(
        __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Destination )(
        __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect_get_Mode(This,value) \
    ( (This)->lpVtbl->get_Mode(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect_put_Mode(This,value) \
    ( (This)->lpVtbl->put_Mode(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect_get_Destination(This,source) \
    ( (This)->lpVtbl->get_Destination(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect_put_Destination(This,source) \
    ( (This)->lpVtbl->put_Destination(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect_get_Source(This,source) \
    ( (This)->lpVtbl->get_Source(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect_put_Source(This,source) \
    ( (This)->lpVtbl->put_Source(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CICompositeStepEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IContrastEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.ContrastEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IContrastEffect[] = L"Microsoft.UI.Composition.Effects.IContrastEffect";
/* [object, version, uuid("DA8A2B9F-594E-560A-9EAA-1F912408FE78"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Contrast )(
        __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Contrast )(
        __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ClampSource )(
        __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ClampSource )(
        __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect_get_Contrast(This,value) \
    ( (This)->lpVtbl->get_Contrast(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect_put_Contrast(This,value) \
    ( (This)->lpVtbl->put_Contrast(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect_get_ClampSource(This,value) \
    ( (This)->lpVtbl->get_ClampSource(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect_put_ClampSource(This,value) \
    ( (This)->lpVtbl->put_ClampSource(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect_get_Source(This,source) \
    ( (This)->lpVtbl->get_Source(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect_put_Source(This,source) \
    ( (This)->lpVtbl->put_Source(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIContrastEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.ICrossFadeEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.CrossFadeEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_ICrossFadeEffect[] = L"Microsoft.UI.Composition.Effects.ICrossFadeEffect";
/* [object, version, uuid("2A451393-CCC3-4C7E-B9BC-5AD9F9538C08"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Weight )(
        __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Weight )(
        __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source1 )(
        __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source1 )(
        __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source2 )(
        __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source2 )(
        __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect_get_Weight(This,value) \
    ( (This)->lpVtbl->get_Weight(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect_put_Weight(This,value) \
    ( (This)->lpVtbl->put_Weight(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect_get_Source1(This,source) \
    ( (This)->lpVtbl->get_Source1(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect_put_Source1(This,source) \
    ( (This)->lpVtbl->put_Source1(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect_get_Source2(This,source) \
    ( (This)->lpVtbl->get_Source2(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect_put_Source2(This,source) \
    ( (This)->lpVtbl->put_Source2(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CICrossFadeEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IDistantDiffuseEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.DistantDiffuseEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IDistantDiffuseEffect[] = L"Microsoft.UI.Composition.Effects.IDistantDiffuseEffect";
/* [object, version, uuid("D501B10B-B445-50F4-8B8F-CDECFCDD1320"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Azimuth )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Azimuth )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Elevation )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Elevation )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DiffuseAmount )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DiffuseAmount )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HeightMapScale )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HeightMapScale )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightColor )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LightColor )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HeightMapKernelSize )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HeightMapKernelSize )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HeightMapInterpolationMode )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CEffects_CCanvasImageInterpolation * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HeightMapInterpolationMode )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CEffects_CCanvasImageInterpolation value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_get_Azimuth(This,value) \
    ( (This)->lpVtbl->get_Azimuth(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_put_Azimuth(This,value) \
    ( (This)->lpVtbl->put_Azimuth(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_get_Elevation(This,value) \
    ( (This)->lpVtbl->get_Elevation(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_put_Elevation(This,value) \
    ( (This)->lpVtbl->put_Elevation(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_get_DiffuseAmount(This,value) \
    ( (This)->lpVtbl->get_DiffuseAmount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_put_DiffuseAmount(This,value) \
    ( (This)->lpVtbl->put_DiffuseAmount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_get_HeightMapScale(This,value) \
    ( (This)->lpVtbl->get_HeightMapScale(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_put_HeightMapScale(This,value) \
    ( (This)->lpVtbl->put_HeightMapScale(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_get_LightColor(This,value) \
    ( (This)->lpVtbl->get_LightColor(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_put_LightColor(This,value) \
    ( (This)->lpVtbl->put_LightColor(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_get_HeightMapKernelSize(This,value) \
    ( (This)->lpVtbl->get_HeightMapKernelSize(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_put_HeightMapKernelSize(This,value) \
    ( (This)->lpVtbl->put_HeightMapKernelSize(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_get_HeightMapInterpolationMode(This,value) \
    ( (This)->lpVtbl->get_HeightMapInterpolationMode(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_put_HeightMapInterpolationMode(This,value) \
    ( (This)->lpVtbl->put_HeightMapInterpolationMode(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_get_Source(This,source) \
    ( (This)->lpVtbl->get_Source(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_put_Source(This,source) \
    ( (This)->lpVtbl->put_Source(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIDistantDiffuseEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IDistantSpecularEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.DistantSpecularEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IDistantSpecularEffect[] = L"Microsoft.UI.Composition.Effects.IDistantSpecularEffect";
/* [object, version, uuid("A7A828DF-3072-545F-8D75-86C100F03230"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Azimuth )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Azimuth )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Elevation )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Elevation )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SpecularExponent )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SpecularExponent )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SpecularAmount )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SpecularAmount )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HeightMapScale )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HeightMapScale )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightColor )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LightColor )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HeightMapKernelSize )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HeightMapKernelSize )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HeightMapInterpolationMode )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CEffects_CCanvasImageInterpolation * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HeightMapInterpolationMode )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CEffects_CCanvasImageInterpolation value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_get_Azimuth(This,value) \
    ( (This)->lpVtbl->get_Azimuth(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_put_Azimuth(This,value) \
    ( (This)->lpVtbl->put_Azimuth(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_get_Elevation(This,value) \
    ( (This)->lpVtbl->get_Elevation(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_put_Elevation(This,value) \
    ( (This)->lpVtbl->put_Elevation(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_get_SpecularExponent(This,value) \
    ( (This)->lpVtbl->get_SpecularExponent(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_put_SpecularExponent(This,value) \
    ( (This)->lpVtbl->put_SpecularExponent(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_get_SpecularAmount(This,value) \
    ( (This)->lpVtbl->get_SpecularAmount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_put_SpecularAmount(This,value) \
    ( (This)->lpVtbl->put_SpecularAmount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_get_HeightMapScale(This,value) \
    ( (This)->lpVtbl->get_HeightMapScale(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_put_HeightMapScale(This,value) \
    ( (This)->lpVtbl->put_HeightMapScale(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_get_LightColor(This,value) \
    ( (This)->lpVtbl->get_LightColor(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_put_LightColor(This,value) \
    ( (This)->lpVtbl->put_LightColor(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_get_HeightMapKernelSize(This,value) \
    ( (This)->lpVtbl->get_HeightMapKernelSize(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_put_HeightMapKernelSize(This,value) \
    ( (This)->lpVtbl->put_HeightMapKernelSize(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_get_HeightMapInterpolationMode(This,value) \
    ( (This)->lpVtbl->get_HeightMapInterpolationMode(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_put_HeightMapInterpolationMode(This,value) \
    ( (This)->lpVtbl->put_HeightMapInterpolationMode(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_get_Source(This,source) \
    ( (This)->lpVtbl->get_Source(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_put_Source(This,source) \
    ( (This)->lpVtbl->put_Source(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIDistantSpecularEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IExposureEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.ExposureEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IExposureEffect[] = L"Microsoft.UI.Composition.Effects.IExposureEffect";
/* [object, version, uuid("B9E20A03-2232-5FD3-B408-15784B79DBBF"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CIExposureEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Exposure )(
        __x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Exposure )(
        __x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CIExposureEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CIExposureEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect_get_Exposure(This,value) \
    ( (This)->lpVtbl->get_Exposure(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect_put_Exposure(This,value) \
    ( (This)->lpVtbl->put_Exposure(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect_get_Source(This,source) \
    ( (This)->lpVtbl->get_Source(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect_put_Source(This,source) \
    ( (This)->lpVtbl->put_Source(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIExposureEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IGammaTransferEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.GammaTransferEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IGammaTransferEffect[] = L"Microsoft.UI.Composition.Effects.IGammaTransferEffect";
/* [object, version, uuid("B4576B6B-6C3E-534A-8576-D46DF4FCE93C"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RedAmplitude )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RedAmplitude )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RedExponent )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RedExponent )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RedOffset )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RedOffset )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RedDisable )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RedDisable )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GreenAmplitude )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_GreenAmplitude )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GreenExponent )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_GreenExponent )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GreenOffset )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_GreenOffset )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GreenDisable )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_GreenDisable )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BlueAmplitude )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BlueAmplitude )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BlueExponent )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BlueExponent )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BlueOffset )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BlueOffset )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BlueDisable )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BlueDisable )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AlphaAmplitude )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AlphaAmplitude )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AlphaExponent )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AlphaExponent )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AlphaOffset )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AlphaOffset )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AlphaDisable )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AlphaDisable )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ClampOutput )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ClampOutput )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_get_RedAmplitude(This,value) \
    ( (This)->lpVtbl->get_RedAmplitude(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_put_RedAmplitude(This,value) \
    ( (This)->lpVtbl->put_RedAmplitude(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_get_RedExponent(This,value) \
    ( (This)->lpVtbl->get_RedExponent(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_put_RedExponent(This,value) \
    ( (This)->lpVtbl->put_RedExponent(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_get_RedOffset(This,value) \
    ( (This)->lpVtbl->get_RedOffset(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_put_RedOffset(This,value) \
    ( (This)->lpVtbl->put_RedOffset(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_get_RedDisable(This,value) \
    ( (This)->lpVtbl->get_RedDisable(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_put_RedDisable(This,value) \
    ( (This)->lpVtbl->put_RedDisable(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_get_GreenAmplitude(This,value) \
    ( (This)->lpVtbl->get_GreenAmplitude(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_put_GreenAmplitude(This,value) \
    ( (This)->lpVtbl->put_GreenAmplitude(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_get_GreenExponent(This,value) \
    ( (This)->lpVtbl->get_GreenExponent(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_put_GreenExponent(This,value) \
    ( (This)->lpVtbl->put_GreenExponent(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_get_GreenOffset(This,value) \
    ( (This)->lpVtbl->get_GreenOffset(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_put_GreenOffset(This,value) \
    ( (This)->lpVtbl->put_GreenOffset(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_get_GreenDisable(This,value) \
    ( (This)->lpVtbl->get_GreenDisable(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_put_GreenDisable(This,value) \
    ( (This)->lpVtbl->put_GreenDisable(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_get_BlueAmplitude(This,value) \
    ( (This)->lpVtbl->get_BlueAmplitude(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_put_BlueAmplitude(This,value) \
    ( (This)->lpVtbl->put_BlueAmplitude(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_get_BlueExponent(This,value) \
    ( (This)->lpVtbl->get_BlueExponent(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_put_BlueExponent(This,value) \
    ( (This)->lpVtbl->put_BlueExponent(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_get_BlueOffset(This,value) \
    ( (This)->lpVtbl->get_BlueOffset(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_put_BlueOffset(This,value) \
    ( (This)->lpVtbl->put_BlueOffset(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_get_BlueDisable(This,value) \
    ( (This)->lpVtbl->get_BlueDisable(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_put_BlueDisable(This,value) \
    ( (This)->lpVtbl->put_BlueDisable(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_get_AlphaAmplitude(This,value) \
    ( (This)->lpVtbl->get_AlphaAmplitude(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_put_AlphaAmplitude(This,value) \
    ( (This)->lpVtbl->put_AlphaAmplitude(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_get_AlphaExponent(This,value) \
    ( (This)->lpVtbl->get_AlphaExponent(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_put_AlphaExponent(This,value) \
    ( (This)->lpVtbl->put_AlphaExponent(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_get_AlphaOffset(This,value) \
    ( (This)->lpVtbl->get_AlphaOffset(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_put_AlphaOffset(This,value) \
    ( (This)->lpVtbl->put_AlphaOffset(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_get_AlphaDisable(This,value) \
    ( (This)->lpVtbl->get_AlphaDisable(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_put_AlphaDisable(This,value) \
    ( (This)->lpVtbl->put_AlphaDisable(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_get_ClampOutput(This,value) \
    ( (This)->lpVtbl->get_ClampOutput(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_put_ClampOutput(This,value) \
    ( (This)->lpVtbl->put_ClampOutput(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_get_Source(This,source) \
    ( (This)->lpVtbl->get_Source(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_put_Source(This,source) \
    ( (This)->lpVtbl->put_Source(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIGammaTransferEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IGaussianBlurEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.GaussianBlurEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IGaussianBlurEffect[] = L"Microsoft.UI.Composition.Effects.IGaussianBlurEffect";
/* [object, version, uuid("CC3FF255-A83D-5AED-8187-70F64BBD9E50"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BlurAmount )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BlurAmount )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Optimization )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CEffects_CEffectOptimization * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Optimization )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CEffects_CEffectOptimization value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BorderMode )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CEffects_CEffectBorderMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BorderMode )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CEffects_CEffectBorderMode value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect_get_BlurAmount(This,value) \
    ( (This)->lpVtbl->get_BlurAmount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect_put_BlurAmount(This,value) \
    ( (This)->lpVtbl->put_BlurAmount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect_get_Optimization(This,value) \
    ( (This)->lpVtbl->get_Optimization(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect_put_Optimization(This,value) \
    ( (This)->lpVtbl->put_Optimization(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect_get_BorderMode(This,value) \
    ( (This)->lpVtbl->get_BorderMode(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect_put_BorderMode(This,value) \
    ( (This)->lpVtbl->put_BorderMode(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect_get_Source(This,source) \
    ( (This)->lpVtbl->get_Source(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect_put_Source(This,source) \
    ( (This)->lpVtbl->put_Source(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIGaussianBlurEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IGrayscaleEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.GrayscaleEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IGrayscaleEffect[] = L"Microsoft.UI.Composition.Effects.IGrayscaleEffect";
/* [object, version, uuid("78E13B83-0638-53F8-B0B3-5B0B320A9AD1"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect_get_Source(This,source) \
    ( (This)->lpVtbl->get_Source(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect_put_Source(This,source) \
    ( (This)->lpVtbl->put_Source(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIGrayscaleEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IHueRotationEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.HueRotationEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IHueRotationEffect[] = L"Microsoft.UI.Composition.Effects.IHueRotationEffect";
/* [object, version, uuid("C172EBF2-E35F-58AE-AD2C-561ECEAF2693"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Angle )(
        __x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Angle )(
        __x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect_get_Angle(This,value) \
    ( (This)->lpVtbl->get_Angle(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect_put_Angle(This,value) \
    ( (This)->lpVtbl->put_Angle(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect_get_Source(This,source) \
    ( (This)->lpVtbl->get_Source(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect_put_Source(This,source) \
    ( (This)->lpVtbl->put_Source(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIHueRotationEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IInvertEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.InvertEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IInvertEffect[] = L"Microsoft.UI.Composition.Effects.IInvertEffect";
/* [object, version, uuid("D4ADCDFC-0F60-524D-936A-7F2736AD33D7"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CIInvertEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CIInvertEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CIInvertEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect_get_Source(This,source) \
    ( (This)->lpVtbl->get_Source(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect_put_Source(This,source) \
    ( (This)->lpVtbl->put_Source(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIInvertEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.ILinearTransferEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.LinearTransferEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_ILinearTransferEffect[] = L"Microsoft.UI.Composition.Effects.ILinearTransferEffect";
/* [object, version, uuid("0CDF2CD0-1CE5-5C97-A09C-F14361B96E46"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RedOffset )(
        __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RedOffset )(
        __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RedSlope )(
        __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RedSlope )(
        __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RedDisable )(
        __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RedDisable )(
        __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GreenOffset )(
        __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_GreenOffset )(
        __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GreenSlope )(
        __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_GreenSlope )(
        __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GreenDisable )(
        __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_GreenDisable )(
        __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BlueOffset )(
        __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BlueOffset )(
        __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BlueSlope )(
        __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BlueSlope )(
        __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BlueDisable )(
        __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BlueDisable )(
        __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AlphaOffset )(
        __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AlphaOffset )(
        __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AlphaSlope )(
        __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AlphaSlope )(
        __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AlphaDisable )(
        __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AlphaDisable )(
        __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ClampOutput )(
        __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ClampOutput )(
        __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_get_RedOffset(This,value) \
    ( (This)->lpVtbl->get_RedOffset(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_put_RedOffset(This,value) \
    ( (This)->lpVtbl->put_RedOffset(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_get_RedSlope(This,value) \
    ( (This)->lpVtbl->get_RedSlope(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_put_RedSlope(This,value) \
    ( (This)->lpVtbl->put_RedSlope(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_get_RedDisable(This,value) \
    ( (This)->lpVtbl->get_RedDisable(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_put_RedDisable(This,value) \
    ( (This)->lpVtbl->put_RedDisable(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_get_GreenOffset(This,value) \
    ( (This)->lpVtbl->get_GreenOffset(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_put_GreenOffset(This,value) \
    ( (This)->lpVtbl->put_GreenOffset(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_get_GreenSlope(This,value) \
    ( (This)->lpVtbl->get_GreenSlope(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_put_GreenSlope(This,value) \
    ( (This)->lpVtbl->put_GreenSlope(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_get_GreenDisable(This,value) \
    ( (This)->lpVtbl->get_GreenDisable(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_put_GreenDisable(This,value) \
    ( (This)->lpVtbl->put_GreenDisable(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_get_BlueOffset(This,value) \
    ( (This)->lpVtbl->get_BlueOffset(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_put_BlueOffset(This,value) \
    ( (This)->lpVtbl->put_BlueOffset(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_get_BlueSlope(This,value) \
    ( (This)->lpVtbl->get_BlueSlope(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_put_BlueSlope(This,value) \
    ( (This)->lpVtbl->put_BlueSlope(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_get_BlueDisable(This,value) \
    ( (This)->lpVtbl->get_BlueDisable(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_put_BlueDisable(This,value) \
    ( (This)->lpVtbl->put_BlueDisable(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_get_AlphaOffset(This,value) \
    ( (This)->lpVtbl->get_AlphaOffset(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_put_AlphaOffset(This,value) \
    ( (This)->lpVtbl->put_AlphaOffset(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_get_AlphaSlope(This,value) \
    ( (This)->lpVtbl->get_AlphaSlope(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_put_AlphaSlope(This,value) \
    ( (This)->lpVtbl->put_AlphaSlope(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_get_AlphaDisable(This,value) \
    ( (This)->lpVtbl->get_AlphaDisable(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_put_AlphaDisable(This,value) \
    ( (This)->lpVtbl->put_AlphaDisable(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_get_ClampOutput(This,value) \
    ( (This)->lpVtbl->get_ClampOutput(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_put_ClampOutput(This,value) \
    ( (This)->lpVtbl->put_ClampOutput(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_get_Source(This,source) \
    ( (This)->lpVtbl->get_Source(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_put_Source(This,source) \
    ( (This)->lpVtbl->put_Source(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CILinearTransferEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.ILuminanceToAlphaEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.LuminanceToAlphaEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_ILuminanceToAlphaEffect[] = L"Microsoft.UI.Composition.Effects.ILuminanceToAlphaEffect";
/* [object, version, uuid("32983357-0FD9-52B7-B63B-001F6FF4618B"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect_get_Source(This,source) \
    ( (This)->lpVtbl->get_Source(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect_put_Source(This,source) \
    ( (This)->lpVtbl->put_Source(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CILuminanceToAlphaEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IOpacityEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.OpacityEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IOpacityEffect[] = L"Microsoft.UI.Composition.Effects.IOpacityEffect";
/* [object, version, uuid("C20AE33A-1844-4650-811C-63CA823B86B5"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Opacity )(
        __x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Opacity )(
        __x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect_get_Opacity(This,value) \
    ( (This)->lpVtbl->get_Opacity(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect_put_Opacity(This,value) \
    ( (This)->lpVtbl->put_Opacity(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect_get_Source(This,source) \
    ( (This)->lpVtbl->get_Source(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect_put_Source(This,source) \
    ( (This)->lpVtbl->put_Source(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIOpacityEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IPointDiffuseEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.PointDiffuseEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IPointDiffuseEffect[] = L"Microsoft.UI.Composition.Effects.IPointDiffuseEffect";
/* [object, version, uuid("6CCE09EC-F847-5661-AF4B-531DD3DD7D6D"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightPosition )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LightPosition )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DiffuseAmount )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DiffuseAmount )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HeightMapScale )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HeightMapScale )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightColor )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LightColor )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HeightMapKernelSize )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HeightMapKernelSize )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HeightMapInterpolationMode )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CEffects_CCanvasImageInterpolation * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HeightMapInterpolationMode )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CEffects_CCanvasImageInterpolation value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_get_LightPosition(This,value) \
    ( (This)->lpVtbl->get_LightPosition(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_put_LightPosition(This,value) \
    ( (This)->lpVtbl->put_LightPosition(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_get_DiffuseAmount(This,value) \
    ( (This)->lpVtbl->get_DiffuseAmount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_put_DiffuseAmount(This,value) \
    ( (This)->lpVtbl->put_DiffuseAmount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_get_HeightMapScale(This,value) \
    ( (This)->lpVtbl->get_HeightMapScale(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_put_HeightMapScale(This,value) \
    ( (This)->lpVtbl->put_HeightMapScale(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_get_LightColor(This,value) \
    ( (This)->lpVtbl->get_LightColor(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_put_LightColor(This,value) \
    ( (This)->lpVtbl->put_LightColor(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_get_HeightMapKernelSize(This,value) \
    ( (This)->lpVtbl->get_HeightMapKernelSize(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_put_HeightMapKernelSize(This,value) \
    ( (This)->lpVtbl->put_HeightMapKernelSize(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_get_HeightMapInterpolationMode(This,value) \
    ( (This)->lpVtbl->get_HeightMapInterpolationMode(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_put_HeightMapInterpolationMode(This,value) \
    ( (This)->lpVtbl->put_HeightMapInterpolationMode(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_get_Source(This,source) \
    ( (This)->lpVtbl->get_Source(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_put_Source(This,source) \
    ( (This)->lpVtbl->put_Source(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIPointDiffuseEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IPointSpecularEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.PointSpecularEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IPointSpecularEffect[] = L"Microsoft.UI.Composition.Effects.IPointSpecularEffect";
/* [object, version, uuid("EC8AFE9B-8501-5286-A43C-1AFFF7420AD5"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightPosition )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LightPosition )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SpecularExponent )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SpecularExponent )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SpecularAmount )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SpecularAmount )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HeightMapScale )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HeightMapScale )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightColor )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LightColor )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HeightMapKernelSize )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HeightMapKernelSize )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HeightMapInterpolationMode )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CEffects_CCanvasImageInterpolation * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HeightMapInterpolationMode )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CEffects_CCanvasImageInterpolation value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_get_LightPosition(This,value) \
    ( (This)->lpVtbl->get_LightPosition(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_put_LightPosition(This,value) \
    ( (This)->lpVtbl->put_LightPosition(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_get_SpecularExponent(This,value) \
    ( (This)->lpVtbl->get_SpecularExponent(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_put_SpecularExponent(This,value) \
    ( (This)->lpVtbl->put_SpecularExponent(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_get_SpecularAmount(This,value) \
    ( (This)->lpVtbl->get_SpecularAmount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_put_SpecularAmount(This,value) \
    ( (This)->lpVtbl->put_SpecularAmount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_get_HeightMapScale(This,value) \
    ( (This)->lpVtbl->get_HeightMapScale(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_put_HeightMapScale(This,value) \
    ( (This)->lpVtbl->put_HeightMapScale(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_get_LightColor(This,value) \
    ( (This)->lpVtbl->get_LightColor(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_put_LightColor(This,value) \
    ( (This)->lpVtbl->put_LightColor(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_get_HeightMapKernelSize(This,value) \
    ( (This)->lpVtbl->get_HeightMapKernelSize(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_put_HeightMapKernelSize(This,value) \
    ( (This)->lpVtbl->put_HeightMapKernelSize(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_get_HeightMapInterpolationMode(This,value) \
    ( (This)->lpVtbl->get_HeightMapInterpolationMode(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_put_HeightMapInterpolationMode(This,value) \
    ( (This)->lpVtbl->put_HeightMapInterpolationMode(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_get_Source(This,source) \
    ( (This)->lpVtbl->get_Source(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_put_Source(This,source) \
    ( (This)->lpVtbl->put_Source(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIPointSpecularEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IPosterizeEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.PosterizeEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IPosterizeEffect[] = L"Microsoft.UI.Composition.Effects.IPosterizeEffect";
/* [object, version, uuid("2F631A3B-C89A-507C-9756-299B61434FA3"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RedValueCount )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect * This,
        /* [retval, out] */INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RedValueCount )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GreenValueCount )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect * This,
        /* [retval, out] */INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_GreenValueCount )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BlueValueCount )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect * This,
        /* [retval, out] */INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BlueValueCount )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect_get_RedValueCount(This,value) \
    ( (This)->lpVtbl->get_RedValueCount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect_put_RedValueCount(This,value) \
    ( (This)->lpVtbl->put_RedValueCount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect_get_GreenValueCount(This,value) \
    ( (This)->lpVtbl->get_GreenValueCount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect_put_GreenValueCount(This,value) \
    ( (This)->lpVtbl->put_GreenValueCount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect_get_BlueValueCount(This,value) \
    ( (This)->lpVtbl->get_BlueValueCount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect_put_BlueValueCount(This,value) \
    ( (This)->lpVtbl->put_BlueValueCount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect_get_Source(This,source) \
    ( (This)->lpVtbl->get_Source(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect_put_Source(This,source) \
    ( (This)->lpVtbl->put_Source(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIPosterizeEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IPremultiplyEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.PremultiplyEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IPremultiplyEffect[] = L"Microsoft.UI.Composition.Effects.IPremultiplyEffect";
/* [object, version, uuid("D2884C75-A4A1-556B-ACEF-28ED22CF067F"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect_get_Source(This,source) \
    ( (This)->lpVtbl->get_Source(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect_put_Source(This,source) \
    ( (This)->lpVtbl->put_Source(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIPremultiplyEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.ISaturationEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.SaturationEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_ISaturationEffect[] = L"Microsoft.UI.Composition.Effects.ISaturationEffect";
/* [object, version, uuid("F85A5ED7-7212-57A6-B357-61038961C58C"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CISaturationEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Saturation )(
        __x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Saturation )(
        __x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CISaturationEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CISaturationEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect_get_Saturation(This,value) \
    ( (This)->lpVtbl->get_Saturation(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect_put_Saturation(This,value) \
    ( (This)->lpVtbl->put_Saturation(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect_get_Source(This,source) \
    ( (This)->lpVtbl->get_Source(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect_put_Source(This,source) \
    ( (This)->lpVtbl->put_Source(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CISaturationEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.ISceneLightingEffect
 *
 * Introduced to Microsoft.UI.Composition.Effects.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.SceneLightingEffect
 *
 *
 */
#if MICROSOFT_UI_COMPOSITION_EFFECTS_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_ISceneLightingEffect[] = L"Microsoft.UI.Composition.Effects.ISceneLightingEffect";
/* [object, uuid("EB1E7316-114C-5950-8480-20A29A3BB1EE"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AmbientAmount )(
        __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AmbientAmount )(
        __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DiffuseAmount )(
        __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DiffuseAmount )(
        __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NormalMapSource )(
        __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_NormalMapSource )(
        __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SpecularAmount )(
        __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SpecularAmount )(
        __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SpecularShine )(
        __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SpecularShine )(
        __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect * This,
        /* [in] */FLOAT value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect_get_AmbientAmount(This,value) \
    ( (This)->lpVtbl->get_AmbientAmount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect_put_AmbientAmount(This,value) \
    ( (This)->lpVtbl->put_AmbientAmount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect_get_DiffuseAmount(This,value) \
    ( (This)->lpVtbl->get_DiffuseAmount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect_put_DiffuseAmount(This,value) \
    ( (This)->lpVtbl->put_DiffuseAmount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect_get_NormalMapSource(This,value) \
    ( (This)->lpVtbl->get_NormalMapSource(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect_put_NormalMapSource(This,value) \
    ( (This)->lpVtbl->put_NormalMapSource(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect_get_SpecularAmount(This,value) \
    ( (This)->lpVtbl->get_SpecularAmount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect_put_SpecularAmount(This,value) \
    ( (This)->lpVtbl->put_SpecularAmount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect_get_SpecularShine(This,value) \
    ( (This)->lpVtbl->get_SpecularShine(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect_put_SpecularShine(This,value) \
    ( (This)->lpVtbl->put_SpecularShine(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_EFFECTS_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Effects.ISceneLightingEffect2
 *
 * Introduced to Microsoft.UI.Composition.Effects.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.SceneLightingEffect
 *
 *
 */
#if MICROSOFT_UI_COMPOSITION_EFFECTS_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_ISceneLightingEffect2[] = L"Microsoft.UI.Composition.Effects.ISceneLightingEffect2";
/* [object, uuid("6B6496B2-468D-50D1-BBE9-593B8263AD80"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReflectanceModel )(
        __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2 * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CEffects_CSceneLightingEffectReflectanceModel * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ReflectanceModel )(
        __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2 * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CEffects_CSceneLightingEffectReflectanceModel value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2Vtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2_get_ReflectanceModel(This,value) \
    ( (This)->lpVtbl->get_ReflectanceModel(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2_put_ReflectanceModel(This,value) \
    ( (This)->lpVtbl->put_ReflectanceModel(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CISceneLightingEffect2_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_EFFECTS_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Effects.ISepiaEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.SepiaEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_ISepiaEffect[] = L"Microsoft.UI.Composition.Effects.ISepiaEffect";
/* [object, version, uuid("F933471F-A7AF-5521-BE79-B0DA22976CFE"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Intensity )(
        __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Intensity )(
        __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AlphaMode )(
        __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CEffects_CCanvasAlphaMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AlphaMode )(
        __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CEffects_CCanvasAlphaMode value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect_get_Intensity(This,value) \
    ( (This)->lpVtbl->get_Intensity(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect_put_Intensity(This,value) \
    ( (This)->lpVtbl->put_Intensity(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect_get_AlphaMode(This,value) \
    ( (This)->lpVtbl->get_AlphaMode(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect_put_AlphaMode(This,value) \
    ( (This)->lpVtbl->put_AlphaMode(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect_get_Source(This,source) \
    ( (This)->lpVtbl->get_Source(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect_put_Source(This,source) \
    ( (This)->lpVtbl->put_Source(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CISepiaEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.ISpotDiffuseEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.SpotDiffuseEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_ISpotDiffuseEffect[] = L"Microsoft.UI.Composition.Effects.ISpotDiffuseEffect";
/* [object, version, uuid("B3DCBE44-1DD7-5CB3-95E5-A48974CD12E7"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightPosition )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LightPosition )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightTarget )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LightTarget )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Focus )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Focus )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LimitingConeAngle )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LimitingConeAngle )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DiffuseAmount )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DiffuseAmount )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HeightMapScale )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HeightMapScale )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightColor )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LightColor )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HeightMapKernelSize )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HeightMapKernelSize )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HeightMapInterpolationMode )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CEffects_CCanvasImageInterpolation * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HeightMapInterpolationMode )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CEffects_CCanvasImageInterpolation value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_get_LightPosition(This,value) \
    ( (This)->lpVtbl->get_LightPosition(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_put_LightPosition(This,value) \
    ( (This)->lpVtbl->put_LightPosition(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_get_LightTarget(This,value) \
    ( (This)->lpVtbl->get_LightTarget(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_put_LightTarget(This,value) \
    ( (This)->lpVtbl->put_LightTarget(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_get_Focus(This,value) \
    ( (This)->lpVtbl->get_Focus(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_put_Focus(This,value) \
    ( (This)->lpVtbl->put_Focus(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_get_LimitingConeAngle(This,value) \
    ( (This)->lpVtbl->get_LimitingConeAngle(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_put_LimitingConeAngle(This,value) \
    ( (This)->lpVtbl->put_LimitingConeAngle(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_get_DiffuseAmount(This,value) \
    ( (This)->lpVtbl->get_DiffuseAmount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_put_DiffuseAmount(This,value) \
    ( (This)->lpVtbl->put_DiffuseAmount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_get_HeightMapScale(This,value) \
    ( (This)->lpVtbl->get_HeightMapScale(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_put_HeightMapScale(This,value) \
    ( (This)->lpVtbl->put_HeightMapScale(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_get_LightColor(This,value) \
    ( (This)->lpVtbl->get_LightColor(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_put_LightColor(This,value) \
    ( (This)->lpVtbl->put_LightColor(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_get_HeightMapKernelSize(This,value) \
    ( (This)->lpVtbl->get_HeightMapKernelSize(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_put_HeightMapKernelSize(This,value) \
    ( (This)->lpVtbl->put_HeightMapKernelSize(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_get_HeightMapInterpolationMode(This,value) \
    ( (This)->lpVtbl->get_HeightMapInterpolationMode(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_put_HeightMapInterpolationMode(This,value) \
    ( (This)->lpVtbl->put_HeightMapInterpolationMode(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_get_Source(This,source) \
    ( (This)->lpVtbl->get_Source(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_put_Source(This,source) \
    ( (This)->lpVtbl->put_Source(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CISpotDiffuseEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.ISpotSpecularEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.SpotSpecularEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_ISpotSpecularEffect[] = L"Microsoft.UI.Composition.Effects.ISpotSpecularEffect";
/* [object, version, uuid("83AE4CD0-80AA-5783-8572-F15E5F85329D"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightPosition )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LightPosition )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightTarget )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LightTarget )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Focus )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Focus )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LimitingConeAngle )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LimitingConeAngle )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SpecularExponent )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SpecularExponent )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SpecularAmount )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SpecularAmount )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HeightMapScale )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HeightMapScale )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightColor )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LightColor )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HeightMapKernelSize )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HeightMapKernelSize )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HeightMapInterpolationMode )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CEffects_CCanvasImageInterpolation * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HeightMapInterpolationMode )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CEffects_CCanvasImageInterpolation value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_get_LightPosition(This,value) \
    ( (This)->lpVtbl->get_LightPosition(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_put_LightPosition(This,value) \
    ( (This)->lpVtbl->put_LightPosition(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_get_LightTarget(This,value) \
    ( (This)->lpVtbl->get_LightTarget(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_put_LightTarget(This,value) \
    ( (This)->lpVtbl->put_LightTarget(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_get_Focus(This,value) \
    ( (This)->lpVtbl->get_Focus(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_put_Focus(This,value) \
    ( (This)->lpVtbl->put_Focus(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_get_LimitingConeAngle(This,value) \
    ( (This)->lpVtbl->get_LimitingConeAngle(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_put_LimitingConeAngle(This,value) \
    ( (This)->lpVtbl->put_LimitingConeAngle(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_get_SpecularExponent(This,value) \
    ( (This)->lpVtbl->get_SpecularExponent(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_put_SpecularExponent(This,value) \
    ( (This)->lpVtbl->put_SpecularExponent(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_get_SpecularAmount(This,value) \
    ( (This)->lpVtbl->get_SpecularAmount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_put_SpecularAmount(This,value) \
    ( (This)->lpVtbl->put_SpecularAmount(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_get_HeightMapScale(This,value) \
    ( (This)->lpVtbl->get_HeightMapScale(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_put_HeightMapScale(This,value) \
    ( (This)->lpVtbl->put_HeightMapScale(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_get_LightColor(This,value) \
    ( (This)->lpVtbl->get_LightColor(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_put_LightColor(This,value) \
    ( (This)->lpVtbl->put_LightColor(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_get_HeightMapKernelSize(This,value) \
    ( (This)->lpVtbl->get_HeightMapKernelSize(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_put_HeightMapKernelSize(This,value) \
    ( (This)->lpVtbl->put_HeightMapKernelSize(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_get_HeightMapInterpolationMode(This,value) \
    ( (This)->lpVtbl->get_HeightMapInterpolationMode(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_put_HeightMapInterpolationMode(This,value) \
    ( (This)->lpVtbl->put_HeightMapInterpolationMode(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_get_Source(This,source) \
    ( (This)->lpVtbl->get_Source(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_put_Source(This,source) \
    ( (This)->lpVtbl->put_Source(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CISpotSpecularEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.ITemperatureAndTintEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.TemperatureAndTintEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_ITemperatureAndTintEffect[] = L"Microsoft.UI.Composition.Effects.ITemperatureAndTintEffect";
/* [object, version, uuid("8AE43E02-2619-5D78-8980-4ED569549BD7"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Temperature )(
        __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Temperature )(
        __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Tint )(
        __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Tint )(
        __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect_get_Temperature(This,value) \
    ( (This)->lpVtbl->get_Temperature(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect_put_Temperature(This,value) \
    ( (This)->lpVtbl->put_Temperature(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect_get_Tint(This,value) \
    ( (This)->lpVtbl->get_Tint(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect_put_Tint(This,value) \
    ( (This)->lpVtbl->put_Tint(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect_get_Source(This,source) \
    ( (This)->lpVtbl->get_Source(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect_put_Source(This,source) \
    ( (This)->lpVtbl->put_Source(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CITemperatureAndTintEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.ITintEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.TintEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CITintEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CITintEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_ITintEffect[] = L"Microsoft.UI.Composition.Effects.ITintEffect";
/* [object, version, uuid("44FE4B1A-D909-4848-B08F-B6E979402771"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CITintEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CITintEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CITintEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CITintEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CITintEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CITintEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CITintEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Color )(
        __x_Microsoft_CUI_CComposition_CEffects_CITintEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Color )(
        __x_Microsoft_CUI_CComposition_CEffects_CITintEffect * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ClampOutput )(
        __x_Microsoft_CUI_CComposition_CEffects_CITintEffect * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ClampOutput )(
        __x_Microsoft_CUI_CComposition_CEffects_CITintEffect * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CITintEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CITintEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CITintEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CITintEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CITintEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CITintEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITintEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITintEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITintEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITintEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITintEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITintEffect_get_Color(This,value) \
    ( (This)->lpVtbl->get_Color(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITintEffect_put_Color(This,value) \
    ( (This)->lpVtbl->put_Color(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITintEffect_get_ClampOutput(This,value) \
    ( (This)->lpVtbl->get_ClampOutput(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITintEffect_put_ClampOutput(This,value) \
    ( (This)->lpVtbl->put_ClampOutput(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITintEffect_get_Source(This,source) \
    ( (This)->lpVtbl->get_Source(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITintEffect_put_Source(This,source) \
    ( (This)->lpVtbl->put_Source(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CITintEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CITintEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.ITransform2DEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.Transform2DEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_ITransform2DEffect[] = L"Microsoft.UI.Composition.Effects.ITransform2DEffect";
/* [object, version, uuid("4467D118-33E7-5B1A-87C2-0F1F0497353C"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InterpolationMode )(
        __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CEffects_CCanvasImageInterpolation * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InterpolationMode )(
        __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CEffects_CCanvasImageInterpolation value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BorderMode )(
        __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CEffects_CEffectBorderMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BorderMode )(
        __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CEffects_CEffectBorderMode value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TransformMatrix )(
        __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TransformMatrix )(
        __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Sharpness )(
        __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Sharpness )(
        __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect_get_InterpolationMode(This,value) \
    ( (This)->lpVtbl->get_InterpolationMode(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect_put_InterpolationMode(This,value) \
    ( (This)->lpVtbl->put_InterpolationMode(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect_get_BorderMode(This,value) \
    ( (This)->lpVtbl->get_BorderMode(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect_put_BorderMode(This,value) \
    ( (This)->lpVtbl->put_BorderMode(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect_get_TransformMatrix(This,value) \
    ( (This)->lpVtbl->get_TransformMatrix(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect_put_TransformMatrix(This,value) \
    ( (This)->lpVtbl->put_TransformMatrix(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect_get_Sharpness(This,value) \
    ( (This)->lpVtbl->get_Sharpness(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect_put_Sharpness(This,value) \
    ( (This)->lpVtbl->put_Sharpness(This,value) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect_get_Source(This,source) \
    ( (This)->lpVtbl->get_Source(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect_put_Source(This,source) \
    ( (This)->lpVtbl->put_Source(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CITransform2DEffect_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Composition.Effects.IUnPremultiplyEffect
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Effects.UnPremultiplyEffect
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Effects_IUnPremultiplyEffect[] = L"Microsoft.UI.Composition.Effects.IUnPremultiplyEffect";
/* [object, version, uuid("9C8B2B18-CBC1-547E-B6D5-64A1D8BBC802"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect * This,
        /* [retval, out] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * source
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * source
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffectVtbl;

interface __x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect_get_Source(This,source) \
    ( (This)->lpVtbl->get_Source(This,source) )

#define __x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect_put_Source(This,source) \
    ( (This)->lpVtbl->put_Source(This,source) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CEffects_CIUnPremultiplyEffect_INTERFACE_DEFINED__) */


/*
 *
 * Class Microsoft.UI.Composition.Effects.AlphaMaskEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IAlphaMaskEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_AlphaMaskEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_AlphaMaskEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_AlphaMaskEffect[] = L"Microsoft.UI.Composition.Effects.AlphaMaskEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.ArithmeticCompositeEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IArithmeticCompositeEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_ArithmeticCompositeEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_ArithmeticCompositeEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_ArithmeticCompositeEffect[] = L"Microsoft.UI.Composition.Effects.ArithmeticCompositeEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.BlendEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IBlendEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_BlendEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_BlendEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_BlendEffect[] = L"Microsoft.UI.Composition.Effects.BlendEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.BorderEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IBorderEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_BorderEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_BorderEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_BorderEffect[] = L"Microsoft.UI.Composition.Effects.BorderEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.ColorMatrixEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IColorMatrixEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_ColorMatrixEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_ColorMatrixEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_ColorMatrixEffect[] = L"Microsoft.UI.Composition.Effects.ColorMatrixEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.ColorSourceEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IColorSourceEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_ColorSourceEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_ColorSourceEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_ColorSourceEffect[] = L"Microsoft.UI.Composition.Effects.ColorSourceEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.CompositeStepEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.ICompositeStepEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_CompositeStepEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_CompositeStepEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_CompositeStepEffect[] = L"Microsoft.UI.Composition.Effects.CompositeStepEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.ContrastEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IContrastEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_ContrastEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_ContrastEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_ContrastEffect[] = L"Microsoft.UI.Composition.Effects.ContrastEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.CrossFadeEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.ICrossFadeEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_CrossFadeEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_CrossFadeEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_CrossFadeEffect[] = L"Microsoft.UI.Composition.Effects.CrossFadeEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.DistantDiffuseEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IDistantDiffuseEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_DistantDiffuseEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_DistantDiffuseEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_DistantDiffuseEffect[] = L"Microsoft.UI.Composition.Effects.DistantDiffuseEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.DistantSpecularEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IDistantSpecularEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_DistantSpecularEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_DistantSpecularEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_DistantSpecularEffect[] = L"Microsoft.UI.Composition.Effects.DistantSpecularEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.ExposureEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IExposureEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_ExposureEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_ExposureEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_ExposureEffect[] = L"Microsoft.UI.Composition.Effects.ExposureEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.GammaTransferEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IGammaTransferEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_GammaTransferEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_GammaTransferEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_GammaTransferEffect[] = L"Microsoft.UI.Composition.Effects.GammaTransferEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.GaussianBlurEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IGaussianBlurEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_GaussianBlurEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_GaussianBlurEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_GaussianBlurEffect[] = L"Microsoft.UI.Composition.Effects.GaussianBlurEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.GrayscaleEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IGrayscaleEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_GrayscaleEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_GrayscaleEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_GrayscaleEffect[] = L"Microsoft.UI.Composition.Effects.GrayscaleEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.HueRotationEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IHueRotationEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_HueRotationEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_HueRotationEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_HueRotationEffect[] = L"Microsoft.UI.Composition.Effects.HueRotationEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.InvertEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IInvertEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_InvertEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_InvertEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_InvertEffect[] = L"Microsoft.UI.Composition.Effects.InvertEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.LinearTransferEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.ILinearTransferEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_LinearTransferEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_LinearTransferEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_LinearTransferEffect[] = L"Microsoft.UI.Composition.Effects.LinearTransferEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.LuminanceToAlphaEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.ILuminanceToAlphaEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_LuminanceToAlphaEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_LuminanceToAlphaEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_LuminanceToAlphaEffect[] = L"Microsoft.UI.Composition.Effects.LuminanceToAlphaEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.OpacityEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IOpacityEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_OpacityEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_OpacityEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_OpacityEffect[] = L"Microsoft.UI.Composition.Effects.OpacityEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.PointDiffuseEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IPointDiffuseEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_PointDiffuseEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_PointDiffuseEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_PointDiffuseEffect[] = L"Microsoft.UI.Composition.Effects.PointDiffuseEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.PointSpecularEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IPointSpecularEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_PointSpecularEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_PointSpecularEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_PointSpecularEffect[] = L"Microsoft.UI.Composition.Effects.PointSpecularEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.PosterizeEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IPosterizeEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_PosterizeEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_PosterizeEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_PosterizeEffect[] = L"Microsoft.UI.Composition.Effects.PosterizeEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.PremultiplyEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IPremultiplyEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_PremultiplyEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_PremultiplyEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_PremultiplyEffect[] = L"Microsoft.UI.Composition.Effects.PremultiplyEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.SaturationEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.ISaturationEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_SaturationEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_SaturationEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_SaturationEffect[] = L"Microsoft.UI.Composition.Effects.SaturationEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.SceneLightingEffect
 *
 * Introduced to Microsoft.UI.Composition.Effects.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Microsoft.UI.Composition.Effects.LiftedContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.ISceneLightingEffect ** Default Interface **
 *    Microsoft.UI.Composition.Effects.ISceneLightingEffect2
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_COMPOSITION_EFFECTS_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_SceneLightingEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_SceneLightingEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_SceneLightingEffect[] = L"Microsoft.UI.Composition.Effects.SceneLightingEffect";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_EFFECTS_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Effects.SepiaEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.ISepiaEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_SepiaEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_SepiaEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_SepiaEffect[] = L"Microsoft.UI.Composition.Effects.SepiaEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.SpotDiffuseEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.ISpotDiffuseEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_SpotDiffuseEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_SpotDiffuseEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_SpotDiffuseEffect[] = L"Microsoft.UI.Composition.Effects.SpotDiffuseEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.SpotSpecularEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.ISpotSpecularEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_SpotSpecularEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_SpotSpecularEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_SpotSpecularEffect[] = L"Microsoft.UI.Composition.Effects.SpotSpecularEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.TemperatureAndTintEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.ITemperatureAndTintEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_TemperatureAndTintEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_TemperatureAndTintEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_TemperatureAndTintEffect[] = L"Microsoft.UI.Composition.Effects.TemperatureAndTintEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.TintEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.ITintEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_TintEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_TintEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_TintEffect[] = L"Microsoft.UI.Composition.Effects.TintEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.Transform2DEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.ITransform2DEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_Transform2DEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_Transform2DEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_Transform2DEffect[] = L"Microsoft.UI.Composition.Effects.Transform2DEffect";
#endif


/*
 *
 * Class Microsoft.UI.Composition.Effects.UnPremultiplyEffect
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Effects.IUnPremultiplyEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Effects_UnPremultiplyEffect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Effects_UnPremultiplyEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Effects_UnPremultiplyEffect[] = L"Microsoft.UI.Composition.Effects.UnPremultiplyEffect";
#endif





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __Microsoft2EUI2EComposition2EEffects_p_h__

#endif // __Microsoft2EUI2EComposition2EEffects_h__
