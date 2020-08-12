/* Header file automatically generated from Microsoft.UI.Private.Media.idl */
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
#ifndef __Microsoft2EUI2EPrivate2EMedia_h__
#define __Microsoft2EUI2EPrivate2EMedia_h__
#ifndef __Microsoft2EUI2EPrivate2EMedia_p_h__
#define __Microsoft2EUI2EPrivate2EMedia_p_h__


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

#if !defined(MICROSOFT_UI_COMPOSITION_INTERACTIONS_LIFTEDCONTRACT_VERSION)
#define MICROSOFT_UI_COMPOSITION_INTERACTIONS_LIFTEDCONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_UI_COMPOSITION_INTERACTIONS_LIFTEDCONTRACT_VERSION)

#if !defined(MICROSOFT_UI_COMPOSITION_LIFTEDCONTRACT_VERSION)
#define MICROSOFT_UI_COMPOSITION_LIFTEDCONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_UI_COMPOSITION_LIFTEDCONTRACT_VERSION)

#if !defined(MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION)
#define MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION)

#if !defined(MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION)
#define MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION)

#if !defined(MICROSOFT_UI_XAML_WINUICONTRACT_VERSION)
#define MICROSOFT_UI_XAML_WINUICONTRACT_VERSION 0x80000
#endif // defined(MICROSOFT_UI_XAML_WINUICONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_COMMUNICATIONBLOCKING_COMMUNICATIONBLOCKINGCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_COMMUNICATIONBLOCKING_COMMUNICATIONBLOCKINGCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_COMMUNICATIONBLOCKING_COMMUNICATIONBLOCKINGCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION)
#define WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION)
#define WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION)
#define WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION 0x60000
#endif // defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION)
#define WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0x80000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#if !defined(WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION)
#define WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION)

#if !defined(WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION)
#define WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION)
#define WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION)
#define WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION)
#define WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION)
#define WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)
#define WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)
#define WINDOWS_PHONE_PHONECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)
#define WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)

#if !defined(WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION)
#define WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION)

#if !defined(WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION)
#define WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION)

#if !defined(WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION)
#define WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION 0x60000
#endif // defined(WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION)

#if !defined(WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION)
#define WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION)

#if !defined(WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION)
#define WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION)

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
#include "Microsoft.UI.Xaml.h"
#include "Microsoft.UI.Xaml.Media.h"
#include "Windows.UI.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi_FWD_DEFINED__
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                interface IAcrylicTestApi;
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi Microsoft::UI::Private::Media::IAcrylicTestApi

#endif // ____x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApi_FWD_DEFINED__
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApi_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                interface IMaterialHelperTestApi;
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApi Microsoft::UI::Private::Media::IMaterialHelperTestApi

#endif // ____x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApi_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                interface IMaterialHelperTestApiStatics;
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics Microsoft::UI::Private::Media::IMaterialHelperTestApiStatics

#endif // ____x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight_FWD_DEFINED__
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                interface IRevealBorderLight;
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight Microsoft::UI::Private::Media::IRevealBorderLight

#endif // ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory_FWD_DEFINED__
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                interface IRevealBorderLightFactory;
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory Microsoft::UI::Private::Media::IRevealBorderLightFactory

#endif // ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi_FWD_DEFINED__
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                interface IRevealBrushTestApi;
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi Microsoft::UI::Private::Media::IRevealBrushTestApi

#endif // ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight_FWD_DEFINED__
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                interface IRevealHoverLight;
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight Microsoft::UI::Private::Media::IRevealHoverLight

#endif // ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory_FWD_DEFINED__
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                interface IRevealHoverLightFactory;
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory Microsoft::UI::Private::Media::IRevealHoverLightFactory

#endif // ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_FWD_DEFINED__
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                interface IRevealTestApi;
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi Microsoft::UI::Private::Media::IRevealTestApi

#endif // ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight_FWD_DEFINED__
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                interface IXamlAmbientLight;
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight Microsoft::UI::Private::Media::IXamlAmbientLight

#endif // ____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory_FWD_DEFINED__
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                interface IXamlAmbientLightFactory;
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory Microsoft::UI::Private::Media::IXamlAmbientLightFactory

#endif // ____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                interface IXamlAmbientLightStatics;
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics Microsoft::UI::Private::Media::IXamlAmbientLightStatics

#endif // ____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics_FWD_DEFINED__



namespace Microsoft {
    namespace UI {
        namespace Composition {
            class CompositionBrush;
        } /* Composition */
    } /* UI */
} /* Microsoft */

#ifndef ____x_Microsoft_CUI_CComposition_CICompositionBrush_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CICompositionBrush_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            interface ICompositionBrush;
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CICompositionBrush Microsoft::UI::Composition::ICompositionBrush

#endif // ____x_Microsoft_CUI_CComposition_CICompositionBrush_FWD_DEFINED__



namespace Microsoft {
    namespace UI {
        namespace Composition {
            class ExpressionAnimation;
        } /* Composition */
    } /* UI */
} /* Microsoft */

#ifndef ____x_Microsoft_CUI_CComposition_CIExpressionAnimation_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CIExpressionAnimation_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            interface IExpressionAnimation;
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CIExpressionAnimation Microsoft::UI::Composition::IExpressionAnimation

#endif // ____x_Microsoft_CUI_CComposition_CIExpressionAnimation_FWD_DEFINED__



namespace Microsoft {
    namespace UI {
        namespace Composition {
            class SpotLight;
        } /* Composition */
    } /* UI */
} /* Microsoft */

#ifndef ____x_Microsoft_CUI_CComposition_CISpotLight_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CISpotLight_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            interface ISpotLight;
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CISpotLight Microsoft::UI::Composition::ISpotLight

#endif // ____x_Microsoft_CUI_CComposition_CISpotLight_FWD_DEFINED__






namespace Microsoft {
    namespace UI {
        namespace Xaml {
            
            typedef enum ApplicationTheme : int ApplicationTheme;
            
        } /* Xaml */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Xaml {
            class DependencyObject;
        } /* Xaml */
    } /* UI */
} /* Microsoft */

#ifndef ____x_Microsoft_CUI_CXaml_CIDependencyObject_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CIDependencyObject_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            interface IDependencyObject;
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CIDependencyObject Microsoft::UI::Xaml::IDependencyObject

#endif // ____x_Microsoft_CUI_CXaml_CIDependencyObject_FWD_DEFINED__



namespace Microsoft {
    namespace UI {
        namespace Xaml {
            class DependencyProperty;
        } /* Xaml */
    } /* UI */
} /* Microsoft */

#ifndef ____x_Microsoft_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            interface IDependencyProperty;
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CIDependencyProperty Microsoft::UI::Xaml::IDependencyProperty

#endif // ____x_Microsoft_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__






namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Media {
                class AcrylicBrush;
            } /* Media */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

#ifndef ____x_Microsoft_CUI_CXaml_CMedia_CIAcrylicBrush_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CMedia_CIAcrylicBrush_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Media {
                interface IAcrylicBrush;
            } /* Media */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CMedia_CIAcrylicBrush Microsoft::UI::Xaml::Media::IAcrylicBrush

#endif // ____x_Microsoft_CUI_CXaml_CMedia_CIAcrylicBrush_FWD_DEFINED__



namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Media {
                class RevealBrush;
            } /* Media */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

#ifndef ____x_Microsoft_CUI_CXaml_CMedia_CIRevealBrush_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CMedia_CIRevealBrush_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Media {
                interface IRevealBrush;
            } /* Media */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CMedia_CIRevealBrush Microsoft::UI::Xaml::Media::IRevealBrush

#endif // ____x_Microsoft_CUI_CXaml_CMedia_CIRevealBrush_FWD_DEFINED__



namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Media {
                class XamlLight;
            } /* Media */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

#ifndef ____x_Microsoft_CUI_CXaml_CMedia_CIXamlLight_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CMedia_CIXamlLight_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Media {
                interface IXamlLight;
            } /* Media */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CMedia_CIXamlLight Microsoft::UI::Xaml::Media::IXamlLight

#endif // ____x_Microsoft_CUI_CXaml_CMedia_CIXamlLight_FWD_DEFINED__



















namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                class AcrylicTestApi;
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                class MaterialHelperTestApi;
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                class RevealBorderLight;
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                class RevealBrushTestApi;
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                class RevealHoverLight;
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                class RevealTestApi;
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                class XamlAmbientLight;
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */







/*
 *
 * Interface Microsoft.UI.Private.Media.IAcrylicTestApi
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Media.AcrylicTestApi
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Media_IAcrylicTestApi[] = L"Microsoft.UI.Private.Media.IAcrylicTestApi";

namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                /* [object, version, uuid("9BABF1E4-0D89-559B-9440-2967A0B77447"), exclusiveto] */
                MIDL_INTERFACE("9BABF1E4-0D89-559B-9440-2967A0B77447")
                IAcrylicTestApi : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AcrylicBrush(
                        /* [retval, out] */Microsoft::UI::Xaml::Media::IAcrylicBrush * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AcrylicBrush(
                        /* [in] */Microsoft::UI::Xaml::Media::IAcrylicBrush * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsUsingAcrylicBrush(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CompositionBrush(
                        /* [retval, out] */Microsoft::UI::Composition::ICompositionBrush * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NoiseBrush(
                        /* [retval, out] */Microsoft::UI::Composition::ICompositionBrush * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ForceCreateAcrylicBrush(
                        /* [in] */::boolean useCrossFadeEffect
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAcrylicTestApi=_uuidof(IAcrylicTestApi);
                
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi;
#endif /* !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Media.IMaterialHelperTestApi
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Media.MaterialHelperTestApi
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApi_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApi_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Media_IMaterialHelperTestApi[] = L"Microsoft.UI.Private.Media.IMaterialHelperTestApi";

namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                /* [object, version, uuid("FFEB6DAD-B1FC-56E7-9820-667BD14B4791"), exclusiveto] */
                MIDL_INTERFACE("FFEB6DAD-B1FC-56E7-9820-667BD14B4791")
                IMaterialHelperTestApi : public IInspectable
                {
                public:
                    
                };

                extern MIDL_CONST_ID IID & IID_IMaterialHelperTestApi=_uuidof(IMaterialHelperTestApi);
                
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApi;
#endif /* !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApi_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Media.IMaterialHelperTestApiStatics
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Media.MaterialHelperTestApi
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Media_IMaterialHelperTestApiStatics[] = L"Microsoft.UI.Private.Media.IMaterialHelperTestApiStatics";

namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                /* [object, version, uuid("7FC11A83-CB9E-50B4-B4B3-645F08552BDA"), exclusiveto] */
                MIDL_INTERFACE("7FC11A83-CB9E-50B4-B4B3-645F08552BDA")
                IMaterialHelperTestApiStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SimulateDisabledByPolicy(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SimulateDisabledByPolicy(
                        /* [in] */::boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IgnoreAreEffectsFast(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IgnoreAreEffectsFast(
                        /* [in] */::boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMaterialHelperTestApiStatics=_uuidof(IMaterialHelperTestApiStatics);
                
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics;
#endif /* !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Media.IRevealBorderLight
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Media.RevealBorderLight
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Media_IRevealBorderLight[] = L"Microsoft.UI.Private.Media.IRevealBorderLight";

namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                /* [object, version, uuid("79B08056-EB41-522C-A555-67E2B2367AA7"), exclusiveto] */
                MIDL_INTERFACE("79B08056-EB41-522C-A555-67E2B2367AA7")
                IRevealBorderLight : public IInspectable
                {
                public:
                    
                };

                extern MIDL_CONST_ID IID & IID_IRevealBorderLight=_uuidof(IRevealBorderLight);
                
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight;
#endif /* !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Media.IRevealBorderLightFactory
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Media.RevealBorderLight
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Media_IRevealBorderLightFactory[] = L"Microsoft.UI.Private.Media.IRevealBorderLightFactory";

namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                /* [object, version, uuid("7D80896E-163E-5988-A1C3-3BD217FC97EB"), exclusiveto] */
                MIDL_INTERFACE("7D80896E-163E-5988-A1C3-3BD217FC97EB")
                IRevealBorderLightFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                        /* [in] */IInspectable * baseInterface,
                        /* [out] */IInspectable * * innerInterface,
                        /* [retval, out] */Microsoft::UI::Private::Media::IRevealBorderLight * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRevealBorderLightFactory=_uuidof(IRevealBorderLightFactory);
                
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory;
#endif /* !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Media.IRevealBrushTestApi
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Media.RevealBrushTestApi
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Media_IRevealBrushTestApi[] = L"Microsoft.UI.Private.Media.IRevealBrushTestApi";

namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                /* [object, version, uuid("583F836F-F467-5AF2-9FC4-AB90F0D79DF2"), exclusiveto] */
                MIDL_INTERFACE("583F836F-F467-5AF2-9FC4-AB90F0D79DF2")
                IRevealBrushTestApi : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RevealBrush(
                        /* [retval, out] */Microsoft::UI::Xaml::Media::IRevealBrush * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RevealBrush(
                        /* [in] */Microsoft::UI::Xaml::Media::IRevealBrush * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsInFallbackMode(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsAmbientLightSet(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsBorderLightSet(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsHoverLightSet(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CompositionBrush(
                        /* [retval, out] */Microsoft::UI::Composition::ICompositionBrush * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NoiseBrush(
                        /* [retval, out] */Microsoft::UI::Composition::ICompositionBrush * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRevealBrushTestApi=_uuidof(IRevealBrushTestApi);
                
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi;
#endif /* !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Media.IRevealHoverLight
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Media.RevealHoverLight
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Media_IRevealHoverLight[] = L"Microsoft.UI.Private.Media.IRevealHoverLight";

namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                /* [object, version, uuid("52B1094D-D146-5B7A-99E6-B47465E0845B"), exclusiveto] */
                MIDL_INTERFACE("52B1094D-D146-5B7A-99E6-B47465E0845B")
                IRevealHoverLight : public IInspectable
                {
                public:
                    
                };

                extern MIDL_CONST_ID IID & IID_IRevealHoverLight=_uuidof(IRevealHoverLight);
                
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight;
#endif /* !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Media.IRevealHoverLightFactory
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Media.RevealHoverLight
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Media_IRevealHoverLightFactory[] = L"Microsoft.UI.Private.Media.IRevealHoverLightFactory";

namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                /* [object, version, uuid("94C0A3BA-1F5F-5FFB-BCA3-F14F9993D71F"), exclusiveto] */
                MIDL_INTERFACE("94C0A3BA-1F5F-5FFB-BCA3-F14F9993D71F")
                IRevealHoverLightFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                        /* [in] */IInspectable * baseInterface,
                        /* [out] */IInspectable * * innerInterface,
                        /* [retval, out] */Microsoft::UI::Private::Media::IRevealHoverLight * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRevealHoverLightFactory=_uuidof(IRevealHoverLightFactory);
                
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory;
#endif /* !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Media.IRevealTestApi
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Media.RevealTestApi
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Media_IRevealTestApi[] = L"Microsoft.UI.Private.Media.IRevealTestApi";

namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                /* [object, version, uuid("5E2186C5-5119-5550-87CA-14BD6FF8D72A"), exclusiveto] */
                MIDL_INTERFACE("5E2186C5-5119-5550-87CA-14BD6FF8D72A")
                IRevealTestApi : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TargetTheme(
                        /* [retval, out] */Microsoft::UI::Xaml::ApplicationTheme * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TargetTheme(
                        /* [in] */Microsoft::UI::Xaml::ApplicationTheme value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BackgroundLight(
                        /* [retval, out] */Microsoft::UI::Composition::ISpotLight * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BorderLight(
                        /* [retval, out] */Microsoft::UI::Xaml::Media::IXamlLight * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BorderWideLight(
                        /* [retval, out] */Microsoft::UI::Xaml::Media::IXamlLight * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BackgroundLightMinSize(
                        /* [retval, out] */DOUBLE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BackgroundLightMinSize(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BackgroundLightMaxSize(
                        /* [retval, out] */DOUBLE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BackgroundLightMaxSize(
                        /* [in] */DOUBLE value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetSpotLight(
                        /* [in] */Microsoft::UI::Xaml::Media::IXamlLight * value,
                        /* [retval, out] */Microsoft::UI::Composition::ISpotLight * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetHoverLightOffsetExpression(
                        /* [in] */Microsoft::UI::Private::Media::IRevealHoverLight * value,
                        /* [retval, out] */Microsoft::UI::Composition::IExpressionAnimation * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetAsRevealBorderLight(
                        /* [in] */Microsoft::UI::Xaml::Media::IXamlLight * value,
                        /* [retval, out] */Microsoft::UI::Private::Media::IRevealBorderLight * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetAsRevealHoverLight(
                        /* [in] */Microsoft::UI::Xaml::Media::IXamlLight * value,
                        /* [retval, out] */Microsoft::UI::Private::Media::IRevealHoverLight * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE BorderLight_ShouldBeOn(
                        /* [in] */Microsoft::UI::Private::Media::IRevealBorderLight * value,
                        /* [retval, out] */::boolean * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE HoverLight_ShouldBeOn(
                        /* [in] */Microsoft::UI::Private::Media::IRevealHoverLight * value,
                        /* [retval, out] */::boolean * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE HoverLight_IsPressed(
                        /* [in] */Microsoft::UI::Private::Media::IRevealHoverLight * value,
                        /* [retval, out] */::boolean * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE HoverLight_IsPointerOver(
                        /* [in] */Microsoft::UI::Private::Media::IRevealHoverLight * value,
                        /* [retval, out] */::boolean * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRevealTestApi=_uuidof(IRevealTestApi);
                
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi;
#endif /* !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Media.IXamlAmbientLight
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Media.XamlAmbientLight
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Media_IXamlAmbientLight[] = L"Microsoft.UI.Private.Media.IXamlAmbientLight";

namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                /* [object, version, uuid("FB26A06A-DF17-5D74-8DBF-3DEA4FA35138"), exclusiveto] */
                MIDL_INTERFACE("FB26A06A-DF17-5D74-8DBF-3DEA4FA35138")
                IXamlAmbientLight : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Color(
                        /* [retval, out] */Windows::UI::Color * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Color(
                        /* [in] */Windows::UI::Color value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IXamlAmbientLight=_uuidof(IXamlAmbientLight);
                
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight;
#endif /* !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Media.IXamlAmbientLightFactory
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Media.XamlAmbientLight
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Media_IXamlAmbientLightFactory[] = L"Microsoft.UI.Private.Media.IXamlAmbientLightFactory";

namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                /* [object, version, uuid("E46587EB-7608-51FE-851A-FCB2B6CC26EF"), exclusiveto] */
                MIDL_INTERFACE("E46587EB-7608-51FE-851A-FCB2B6CC26EF")
                IXamlAmbientLightFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                        /* [in] */IInspectable * baseInterface,
                        /* [out] */IInspectable * * innerInterface,
                        /* [retval, out] */Microsoft::UI::Private::Media::IXamlAmbientLight * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IXamlAmbientLightFactory=_uuidof(IXamlAmbientLightFactory);
                
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory;
#endif /* !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Media.IXamlAmbientLightStatics
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Media.XamlAmbientLight
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Media_IXamlAmbientLightStatics[] = L"Microsoft.UI.Private.Media.IXamlAmbientLightStatics";

namespace Microsoft {
    namespace UI {
        namespace Private {
            namespace Media {
                /* [object, version, uuid("A547BC0E-A73D-58DD-B5F0-1E22656BDD5D"), exclusiveto] */
                MIDL_INTERFACE("A547BC0E-A73D-58DD-B5F0-1E22656BDD5D")
                IXamlAmbientLightStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ColorProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsTargetProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetIsTarget(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * object,
                        /* [in] */::boolean value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetIsTarget(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * object,
                        /* [retval, out] */::boolean * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IXamlAmbientLightStatics=_uuidof(IXamlAmbientLightStatics);
                
            } /* Media */
        } /* Private */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics;
#endif /* !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics_INTERFACE_DEFINED__) */


/*
 *
 * Class Microsoft.UI.Private.Media.AcrylicTestApi
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Media.IAcrylicTestApi ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Media_AcrylicTestApi_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Media_AcrylicTestApi_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Media_AcrylicTestApi[] = L"Microsoft.UI.Private.Media.AcrylicTestApi";
#endif


/*
 *
 * Class Microsoft.UI.Private.Media.MaterialHelperTestApi
 *
 * RuntimeClass can be activated.
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Media.IMaterialHelperTestApi ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Media_MaterialHelperTestApi_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Media_MaterialHelperTestApi_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Media_MaterialHelperTestApi[] = L"Microsoft.UI.Private.Media.MaterialHelperTestApi";
#endif


/*
 *
 * Class Microsoft.UI.Private.Media.RevealBorderLight
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Media.IRevealBorderLight ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Media_RevealBorderLight_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Media_RevealBorderLight_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Media_RevealBorderLight[] = L"Microsoft.UI.Private.Media.RevealBorderLight";
#endif


/*
 *
 * Class Microsoft.UI.Private.Media.RevealBrushTestApi
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Media.IRevealBrushTestApi ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Media_RevealBrushTestApi_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Media_RevealBrushTestApi_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Media_RevealBrushTestApi[] = L"Microsoft.UI.Private.Media.RevealBrushTestApi";
#endif


/*
 *
 * Class Microsoft.UI.Private.Media.RevealHoverLight
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Media.IRevealHoverLight ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Media_RevealHoverLight_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Media_RevealHoverLight_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Media_RevealHoverLight[] = L"Microsoft.UI.Private.Media.RevealHoverLight";
#endif


/*
 *
 * Class Microsoft.UI.Private.Media.RevealTestApi
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Media.IRevealTestApi ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Media_RevealTestApi_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Media_RevealTestApi_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Media_RevealTestApi[] = L"Microsoft.UI.Private.Media.RevealTestApi";
#endif


/*
 *
 * Class Microsoft.UI.Private.Media.XamlAmbientLight
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Media.IXamlAmbientLight ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Media_XamlAmbientLight_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Media_XamlAmbientLight_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Media_XamlAmbientLight[] = L"Microsoft.UI.Private.Media.XamlAmbientLight";
#endif





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi_FWD_DEFINED__
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi;

#endif // ____x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApi_FWD_DEFINED__
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApi_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApi __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApi;

#endif // ____x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApi_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics;

#endif // ____x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight_FWD_DEFINED__
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight;

#endif // ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory_FWD_DEFINED__
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory;

#endif // ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi_FWD_DEFINED__
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi;

#endif // ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight_FWD_DEFINED__
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight;

#endif // ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory_FWD_DEFINED__
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory;

#endif // ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_FWD_DEFINED__
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi;

#endif // ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight_FWD_DEFINED__
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight;

#endif // ____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory_FWD_DEFINED__
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory;

#endif // ____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics;

#endif // ____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CICompositionBrush_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CICompositionBrush_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CICompositionBrush __x_Microsoft_CUI_CComposition_CICompositionBrush;

#endif // ____x_Microsoft_CUI_CComposition_CICompositionBrush_FWD_DEFINED__


#ifndef ____x_Microsoft_CUI_CComposition_CIExpressionAnimation_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CIExpressionAnimation_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CIExpressionAnimation __x_Microsoft_CUI_CComposition_CIExpressionAnimation;

#endif // ____x_Microsoft_CUI_CComposition_CIExpressionAnimation_FWD_DEFINED__


#ifndef ____x_Microsoft_CUI_CComposition_CISpotLight_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CISpotLight_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CISpotLight __x_Microsoft_CUI_CComposition_CISpotLight;

#endif // ____x_Microsoft_CUI_CComposition_CISpotLight_FWD_DEFINED__






typedef enum __x_Microsoft_CUI_CXaml_CApplicationTheme __x_Microsoft_CUI_CXaml_CApplicationTheme;

#ifndef ____x_Microsoft_CUI_CXaml_CIDependencyObject_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CIDependencyObject_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CIDependencyObject __x_Microsoft_CUI_CXaml_CIDependencyObject;

#endif // ____x_Microsoft_CUI_CXaml_CIDependencyObject_FWD_DEFINED__


#ifndef ____x_Microsoft_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CIDependencyProperty __x_Microsoft_CUI_CXaml_CIDependencyProperty;

#endif // ____x_Microsoft_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__





#ifndef ____x_Microsoft_CUI_CXaml_CMedia_CIAcrylicBrush_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CMedia_CIAcrylicBrush_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CMedia_CIAcrylicBrush __x_Microsoft_CUI_CXaml_CMedia_CIAcrylicBrush;

#endif // ____x_Microsoft_CUI_CXaml_CMedia_CIAcrylicBrush_FWD_DEFINED__


#ifndef ____x_Microsoft_CUI_CXaml_CMedia_CIRevealBrush_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CMedia_CIRevealBrush_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CMedia_CIRevealBrush __x_Microsoft_CUI_CXaml_CMedia_CIRevealBrush;

#endif // ____x_Microsoft_CUI_CXaml_CMedia_CIRevealBrush_FWD_DEFINED__


#ifndef ____x_Microsoft_CUI_CXaml_CMedia_CIXamlLight_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CMedia_CIXamlLight_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CMedia_CIXamlLight __x_Microsoft_CUI_CXaml_CMedia_CIXamlLight;

#endif // ____x_Microsoft_CUI_CXaml_CMedia_CIXamlLight_FWD_DEFINED__






























/*
 *
 * Interface Microsoft.UI.Private.Media.IAcrylicTestApi
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Media.AcrylicTestApi
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Media_IAcrylicTestApi[] = L"Microsoft.UI.Private.Media.IAcrylicTestApi";
/* [object, version, uuid("9BABF1E4-0D89-559B-9440-2967A0B77447"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApiVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AcrylicBrush )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CMedia_CIAcrylicBrush * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AcrylicBrush )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CMedia_CIAcrylicBrush * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsUsingAcrylicBrush )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CompositionBrush )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CICompositionBrush * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NoiseBrush )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CICompositionBrush * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ForceCreateAcrylicBrush )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi * This,
        /* [in] */boolean useCrossFadeEffect
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApiVtbl;

interface __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi
{
    CONST_VTBL struct __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApiVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi_get_AcrylicBrush(This,value) \
    ( (This)->lpVtbl->get_AcrylicBrush(This,value) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi_put_AcrylicBrush(This,value) \
    ( (This)->lpVtbl->put_AcrylicBrush(This,value) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi_get_IsUsingAcrylicBrush(This,value) \
    ( (This)->lpVtbl->get_IsUsingAcrylicBrush(This,value) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi_get_CompositionBrush(This,value) \
    ( (This)->lpVtbl->get_CompositionBrush(This,value) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi_get_NoiseBrush(This,value) \
    ( (This)->lpVtbl->get_NoiseBrush(This,value) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi_ForceCreateAcrylicBrush(This,useCrossFadeEffect) \
    ( (This)->lpVtbl->ForceCreateAcrylicBrush(This,useCrossFadeEffect) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi;
#endif /* !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIAcrylicTestApi_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Media.IMaterialHelperTestApi
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Media.MaterialHelperTestApi
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApi_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApi_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Media_IMaterialHelperTestApi[] = L"Microsoft.UI.Private.Media.IMaterialHelperTestApi";
/* [object, version, uuid("FFEB6DAD-B1FC-56E7-9820-667BD14B4791"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApi * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApi * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApi * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApi * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApi * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApi * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiVtbl;

interface __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApi
{
    CONST_VTBL struct __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApi_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApi_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApi_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApi_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApi_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApi_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApi;
#endif /* !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApi_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Media.IMaterialHelperTestApiStatics
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Media.MaterialHelperTestApi
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Media_IMaterialHelperTestApiStatics[] = L"Microsoft.UI.Private.Media.IMaterialHelperTestApiStatics";
/* [object, version, uuid("7FC11A83-CB9E-50B4-B4B3-645F08552BDA"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SimulateDisabledByPolicy )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SimulateDisabledByPolicy )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IgnoreAreEffectsFast )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IgnoreAreEffectsFast )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStaticsVtbl;

interface __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics_get_SimulateDisabledByPolicy(This,value) \
    ( (This)->lpVtbl->get_SimulateDisabledByPolicy(This,value) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics_put_SimulateDisabledByPolicy(This,value) \
    ( (This)->lpVtbl->put_SimulateDisabledByPolicy(This,value) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics_get_IgnoreAreEffectsFast(This,value) \
    ( (This)->lpVtbl->get_IgnoreAreEffectsFast(This,value) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics_put_IgnoreAreEffectsFast(This,value) \
    ( (This)->lpVtbl->put_IgnoreAreEffectsFast(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics;
#endif /* !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIMaterialHelperTestApiStatics_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Media.IRevealBorderLight
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Media.RevealBorderLight
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Media_IRevealBorderLight[] = L"Microsoft.UI.Private.Media.IRevealBorderLight";
/* [object, version, uuid("79B08056-EB41-522C-A555-67E2B2367AA7"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightVtbl;

interface __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight
{
    CONST_VTBL struct __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight;
#endif /* !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Media.IRevealBorderLightFactory
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Media.RevealBorderLight
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Media_IRevealBorderLightFactory[] = L"Microsoft.UI.Private.Media.IRevealBorderLightFactory";
/* [object, version, uuid("7D80896E-163E-5988-A1C3-3BD217FC97EB"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory * This,
        /* [in] */IInspectable * baseInterface,
        /* [out] */IInspectable * * innerInterface,
        /* [retval, out] */__x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactoryVtbl;

interface __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory
{
    CONST_VTBL struct __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory_CreateInstance(This,baseInterface,innerInterface,value) \
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory;
#endif /* !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLightFactory_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Media.IRevealBrushTestApi
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Media.RevealBrushTestApi
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Media_IRevealBrushTestApi[] = L"Microsoft.UI.Private.Media.IRevealBrushTestApi";
/* [object, version, uuid("583F836F-F467-5AF2-9FC4-AB90F0D79DF2"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApiVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RevealBrush )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CMedia_CIRevealBrush * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RevealBrush )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CMedia_CIRevealBrush * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsInFallbackMode )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsAmbientLightSet )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsBorderLightSet )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsHoverLightSet )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CompositionBrush )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CICompositionBrush * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NoiseBrush )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CICompositionBrush * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApiVtbl;

interface __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi
{
    CONST_VTBL struct __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApiVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi_get_RevealBrush(This,value) \
    ( (This)->lpVtbl->get_RevealBrush(This,value) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi_put_RevealBrush(This,value) \
    ( (This)->lpVtbl->put_RevealBrush(This,value) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi_get_IsInFallbackMode(This,value) \
    ( (This)->lpVtbl->get_IsInFallbackMode(This,value) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi_get_IsAmbientLightSet(This,value) \
    ( (This)->lpVtbl->get_IsAmbientLightSet(This,value) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi_get_IsBorderLightSet(This,value) \
    ( (This)->lpVtbl->get_IsBorderLightSet(This,value) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi_get_IsHoverLightSet(This,value) \
    ( (This)->lpVtbl->get_IsHoverLightSet(This,value) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi_get_CompositionBrush(This,value) \
    ( (This)->lpVtbl->get_CompositionBrush(This,value) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi_get_NoiseBrush(This,value) \
    ( (This)->lpVtbl->get_NoiseBrush(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi;
#endif /* !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIRevealBrushTestApi_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Media.IRevealHoverLight
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Media.RevealHoverLight
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Media_IRevealHoverLight[] = L"Microsoft.UI.Private.Media.IRevealHoverLight";
/* [object, version, uuid("52B1094D-D146-5B7A-99E6-B47465E0845B"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightVtbl;

interface __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight
{
    CONST_VTBL struct __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight;
#endif /* !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Media.IRevealHoverLightFactory
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Media.RevealHoverLight
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Media_IRevealHoverLightFactory[] = L"Microsoft.UI.Private.Media.IRevealHoverLightFactory";
/* [object, version, uuid("94C0A3BA-1F5F-5FFB-BCA3-F14F9993D71F"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory * This,
        /* [in] */IInspectable * baseInterface,
        /* [out] */IInspectable * * innerInterface,
        /* [retval, out] */__x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactoryVtbl;

interface __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory
{
    CONST_VTBL struct __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory_CreateInstance(This,baseInterface,innerInterface,value) \
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory;
#endif /* !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLightFactory_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Media.IRevealTestApi
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Media.RevealTestApi
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Media_IRevealTestApi[] = L"Microsoft.UI.Private.Media.IRevealTestApi";
/* [object, version, uuid("5E2186C5-5119-5550-87CA-14BD6FF8D72A"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApiVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TargetTheme )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CApplicationTheme * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TargetTheme )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CApplicationTheme value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BackgroundLight )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CISpotLight * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BorderLight )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CMedia_CIXamlLight * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BorderWideLight )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CMedia_CIXamlLight * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BackgroundLightMinSize )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi * This,
        /* [retval, out] */DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BackgroundLightMinSize )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BackgroundLightMaxSize )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi * This,
        /* [retval, out] */DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BackgroundLightMaxSize )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi * This,
        /* [in] */DOUBLE value
        );
    HRESULT ( STDMETHODCALLTYPE *GetSpotLight )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CMedia_CIXamlLight * value,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CISpotLight * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetHoverLightOffsetExpression )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi * This,
        /* [in] */__x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight * value,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CIExpressionAnimation * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetAsRevealBorderLight )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CMedia_CIXamlLight * value,
        /* [retval, out] */__x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetAsRevealHoverLight )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CMedia_CIXamlLight * value,
        /* [retval, out] */__x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight * * result
        );
    HRESULT ( STDMETHODCALLTYPE *BorderLight_ShouldBeOn )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi * This,
        /* [in] */__x_Microsoft_CUI_CPrivate_CMedia_CIRevealBorderLight * value,
        /* [retval, out] */boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *HoverLight_ShouldBeOn )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi * This,
        /* [in] */__x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight * value,
        /* [retval, out] */boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *HoverLight_IsPressed )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi * This,
        /* [in] */__x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight * value,
        /* [retval, out] */boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *HoverLight_IsPointerOver )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi * This,
        /* [in] */__x_Microsoft_CUI_CPrivate_CMedia_CIRevealHoverLight * value,
        /* [retval, out] */boolean * result
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApiVtbl;

interface __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi
{
    CONST_VTBL struct __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApiVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_get_TargetTheme(This,value) \
    ( (This)->lpVtbl->get_TargetTheme(This,value) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_put_TargetTheme(This,value) \
    ( (This)->lpVtbl->put_TargetTheme(This,value) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_get_BackgroundLight(This,value) \
    ( (This)->lpVtbl->get_BackgroundLight(This,value) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_get_BorderLight(This,value) \
    ( (This)->lpVtbl->get_BorderLight(This,value) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_get_BorderWideLight(This,value) \
    ( (This)->lpVtbl->get_BorderWideLight(This,value) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_get_BackgroundLightMinSize(This,value) \
    ( (This)->lpVtbl->get_BackgroundLightMinSize(This,value) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_put_BackgroundLightMinSize(This,value) \
    ( (This)->lpVtbl->put_BackgroundLightMinSize(This,value) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_get_BackgroundLightMaxSize(This,value) \
    ( (This)->lpVtbl->get_BackgroundLightMaxSize(This,value) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_put_BackgroundLightMaxSize(This,value) \
    ( (This)->lpVtbl->put_BackgroundLightMaxSize(This,value) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_GetSpotLight(This,value,result) \
    ( (This)->lpVtbl->GetSpotLight(This,value,result) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_GetHoverLightOffsetExpression(This,value,result) \
    ( (This)->lpVtbl->GetHoverLightOffsetExpression(This,value,result) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_GetAsRevealBorderLight(This,value,result) \
    ( (This)->lpVtbl->GetAsRevealBorderLight(This,value,result) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_GetAsRevealHoverLight(This,value,result) \
    ( (This)->lpVtbl->GetAsRevealHoverLight(This,value,result) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_BorderLight_ShouldBeOn(This,value,result) \
    ( (This)->lpVtbl->BorderLight_ShouldBeOn(This,value,result) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_HoverLight_ShouldBeOn(This,value,result) \
    ( (This)->lpVtbl->HoverLight_ShouldBeOn(This,value,result) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_HoverLight_IsPressed(This,value,result) \
    ( (This)->lpVtbl->HoverLight_IsPressed(This,value,result) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_HoverLight_IsPointerOver(This,value,result) \
    ( (This)->lpVtbl->HoverLight_IsPointerOver(This,value,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi;
#endif /* !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIRevealTestApi_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Media.IXamlAmbientLight
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Media.XamlAmbientLight
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Media_IXamlAmbientLight[] = L"Microsoft.UI.Private.Media.IXamlAmbientLight";
/* [object, version, uuid("FB26A06A-DF17-5D74-8DBF-3DEA4FA35138"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Color )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Color )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightVtbl;

interface __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight
{
    CONST_VTBL struct __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight_get_Color(This,value) \
    ( (This)->lpVtbl->get_Color(This,value) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight_put_Color(This,value) \
    ( (This)->lpVtbl->put_Color(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight;
#endif /* !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Media.IXamlAmbientLightFactory
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Media.XamlAmbientLight
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Media_IXamlAmbientLightFactory[] = L"Microsoft.UI.Private.Media.IXamlAmbientLightFactory";
/* [object, version, uuid("E46587EB-7608-51FE-851A-FCB2B6CC26EF"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory * This,
        /* [in] */IInspectable * baseInterface,
        /* [out] */IInspectable * * innerInterface,
        /* [retval, out] */__x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLight * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactoryVtbl;

interface __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory
{
    CONST_VTBL struct __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory_CreateInstance(This,baseInterface,innerInterface,value) \
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory;
#endif /* !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightFactory_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.UI.Private.Media.IXamlAmbientLightStatics
 *
 * Interface is a part of the implementation of type Microsoft.UI.Private.Media.XamlAmbientLight
 *
 *
 */
#if !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Private_Media_IXamlAmbientLightStatics[] = L"Microsoft.UI.Private.Media.IXamlAmbientLightStatics";
/* [object, version, uuid("A547BC0E-A73D-58DD-B5F0-1E22656BDD5D"), exclusiveto] */
typedef struct __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ColorProperty )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsTargetProperty )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetIsTarget )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * object,
        /* [in] */boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsTarget )(
        __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * object,
        /* [retval, out] */boolean * result
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStaticsVtbl;

interface __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics_get_ColorProperty(This,value) \
    ( (This)->lpVtbl->get_ColorProperty(This,value) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics_get_IsTargetProperty(This,value) \
    ( (This)->lpVtbl->get_IsTargetProperty(This,value) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics_SetIsTarget(This,object,value) \
    ( (This)->lpVtbl->SetIsTarget(This,object,value) )

#define __x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics_GetIsTarget(This,object,result) \
    ( (This)->lpVtbl->GetIsTarget(This,object,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics;
#endif /* !defined(____x_Microsoft_CUI_CPrivate_CMedia_CIXamlAmbientLightStatics_INTERFACE_DEFINED__) */


/*
 *
 * Class Microsoft.UI.Private.Media.AcrylicTestApi
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Media.IAcrylicTestApi ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Media_AcrylicTestApi_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Media_AcrylicTestApi_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Media_AcrylicTestApi[] = L"Microsoft.UI.Private.Media.AcrylicTestApi";
#endif


/*
 *
 * Class Microsoft.UI.Private.Media.MaterialHelperTestApi
 *
 * RuntimeClass can be activated.
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Media.IMaterialHelperTestApi ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Media_MaterialHelperTestApi_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Media_MaterialHelperTestApi_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Media_MaterialHelperTestApi[] = L"Microsoft.UI.Private.Media.MaterialHelperTestApi";
#endif


/*
 *
 * Class Microsoft.UI.Private.Media.RevealBorderLight
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Media.IRevealBorderLight ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Media_RevealBorderLight_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Media_RevealBorderLight_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Media_RevealBorderLight[] = L"Microsoft.UI.Private.Media.RevealBorderLight";
#endif


/*
 *
 * Class Microsoft.UI.Private.Media.RevealBrushTestApi
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Media.IRevealBrushTestApi ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Media_RevealBrushTestApi_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Media_RevealBrushTestApi_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Media_RevealBrushTestApi[] = L"Microsoft.UI.Private.Media.RevealBrushTestApi";
#endif


/*
 *
 * Class Microsoft.UI.Private.Media.RevealHoverLight
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Media.IRevealHoverLight ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Media_RevealHoverLight_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Media_RevealHoverLight_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Media_RevealHoverLight[] = L"Microsoft.UI.Private.Media.RevealHoverLight";
#endif


/*
 *
 * Class Microsoft.UI.Private.Media.RevealTestApi
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Media.IRevealTestApi ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Media_RevealTestApi_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Media_RevealTestApi_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Media_RevealTestApi[] = L"Microsoft.UI.Private.Media.RevealTestApi";
#endif


/*
 *
 * Class Microsoft.UI.Private.Media.XamlAmbientLight
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Private.Media.IXamlAmbientLight ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_UI_Private_Media_XamlAmbientLight_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Private_Media_XamlAmbientLight_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Private_Media_XamlAmbientLight[] = L"Microsoft.UI.Private.Media.XamlAmbientLight";
#endif





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __Microsoft2EUI2EPrivate2EMedia_p_h__

#endif // __Microsoft2EUI2EPrivate2EMedia_h__
