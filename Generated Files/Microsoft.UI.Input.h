/* Header file automatically generated from Microsoft.UI.Input.idl */
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
#ifndef __Microsoft2EUI2EInput_h__
#define __Microsoft2EUI2EInput_h__
#ifndef __Microsoft2EUI2EInput_p_h__
#define __Microsoft2EUI2EInput_p_h__


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

#if !defined(MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION)
#define MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION)

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
#include "Microsoft.System.h"
#include "Microsoft.UI.Composition.h"
#include "Windows.System.h"
#include "Windows.UI.Core.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_Microsoft_CUI_CInput_CIAttachableInputObject_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIAttachableInputObject_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface IAttachableInputObject;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CIAttachableInputObject Microsoft::UI::Input::IAttachableInputObject

#endif // ____x_Microsoft_CUI_CInput_CIAttachableInputObject_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIAttachableInputObjectFactory_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIAttachableInputObjectFactory_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface IAttachableInputObjectFactory;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CIAttachableInputObjectFactory Microsoft::UI::Input::IAttachableInputObjectFactory

#endif // ____x_Microsoft_CUI_CInput_CIAttachableInputObjectFactory_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIContentBridge_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIContentBridge_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface IContentBridge;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CIContentBridge Microsoft::UI::Input::IContentBridge

#endif // ____x_Microsoft_CUI_CInput_CIContentBridge_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface IContextMenuKeyEventArgs;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs Microsoft::UI::Input::IContextMenuKeyEventArgs

#endif // ____x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface ICoreWindowLiftedContentBridge;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge Microsoft::UI::Input::ICoreWindowLiftedContentBridge

#endif // ____x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface ICoreWindowLiftedContentBridgeFactory;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory Microsoft::UI::Input::ICoreWindowLiftedContentBridgeFactory

#endif // ____x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface IDesktopWindowLiftedContentBridge;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge Microsoft::UI::Input::IDesktopWindowLiftedContentBridge

#endif // ____x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface IDesktopWindowLiftedContentBridgeFactory;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory Microsoft::UI::Input::IDesktopWindowLiftedContentBridgeFactory

#endif // ____x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIFocusChangedEventArgs_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIFocusChangedEventArgs_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface IFocusChangedEventArgs;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CIFocusChangedEventArgs Microsoft::UI::Input::IFocusChangedEventArgs

#endif // ____x_Microsoft_CUI_CInput_CIFocusChangedEventArgs_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIFocusController_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIFocusController_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface IFocusController;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CIFocusController Microsoft::UI::Input::IFocusController

#endif // ____x_Microsoft_CUI_CInput_CIFocusController_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIFocusControllerStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIFocusControllerStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface IFocusControllerStatics;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CIFocusControllerStatics Microsoft::UI::Input::IFocusControllerStatics

#endif // ____x_Microsoft_CUI_CInput_CIFocusControllerStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIFocusObserver_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIFocusObserver_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface IFocusObserver;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CIFocusObserver Microsoft::UI::Input::IFocusObserver

#endif // ____x_Microsoft_CUI_CInput_CIFocusObserver_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIFocusObserverFactory_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIFocusObserverFactory_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface IFocusObserverFactory;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CIFocusObserverFactory Microsoft::UI::Input::IFocusObserverFactory

#endif // ____x_Microsoft_CUI_CInput_CIFocusObserverFactory_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIInputActivationListener_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIInputActivationListener_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface IInputActivationListener;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CIInputActivationListener Microsoft::UI::Input::IInputActivationListener

#endif // ____x_Microsoft_CUI_CInput_CIInputActivationListener_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface IInputActivationListenerActivationChangedEventArgs;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs Microsoft::UI::Input::IInputActivationListenerActivationChangedEventArgs

#endif // ____x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface IInputActivationListenerPartnerStatics;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics Microsoft::UI::Input::IInputActivationListenerPartnerStatics

#endif // ____x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIInputObjectPartner_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIInputObjectPartner_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface IInputObjectPartner;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CIInputObjectPartner Microsoft::UI::Input::IInputObjectPartner

#endif // ____x_Microsoft_CUI_CInput_CIInputObjectPartner_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIInputObjectPartnerFactory_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIInputObjectPartnerFactory_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface IInputObjectPartnerFactory;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CIInputObjectPartnerFactory Microsoft::UI::Input::IInputObjectPartnerFactory

#endif // ____x_Microsoft_CUI_CInput_CIInputObjectPartnerFactory_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIInputSite_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIInputSite_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface IInputSite;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CIInputSite Microsoft::UI::Input::IInputSite

#endif // ____x_Microsoft_CUI_CInput_CIInputSite_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIInputSiteStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIInputSiteStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface IInputSiteStatics;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CIInputSiteStatics Microsoft::UI::Input::IInputSiteStatics

#endif // ____x_Microsoft_CUI_CInput_CIInputSiteStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIKeyboardInput_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIKeyboardInput_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface IKeyboardInput;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CIKeyboardInput Microsoft::UI::Input::IKeyboardInput

#endif // ____x_Microsoft_CUI_CInput_CIKeyboardInput_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIKeyboardInputStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIKeyboardInputStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface IKeyboardInputStatics;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CIKeyboardInputStatics Microsoft::UI::Input::IKeyboardInputStatics

#endif // ____x_Microsoft_CUI_CInput_CIKeyboardInputStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIMouseCapture_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIMouseCapture_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface IMouseCapture;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CIMouseCapture Microsoft::UI::Input::IMouseCapture

#endif // ____x_Microsoft_CUI_CInput_CIMouseCapture_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIMouseCaptureStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIMouseCaptureStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface IMouseCaptureStatics;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CIMouseCaptureStatics Microsoft::UI::Input::IMouseCaptureStatics

#endif // ____x_Microsoft_CUI_CInput_CIMouseCaptureStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIPointerCursorController_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIPointerCursorController_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface IPointerCursorController;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CIPointerCursorController Microsoft::UI::Input::IPointerCursorController

#endif // ____x_Microsoft_CUI_CInput_CIPointerCursorController_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface IPointerCursorControllerStatics;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics Microsoft::UI::Input::IPointerCursorControllerStatics

#endif // ____x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIPointerInputObserver_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIPointerInputObserver_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface IPointerInputObserver;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CIPointerInputObserver Microsoft::UI::Input::IPointerInputObserver

#endif // ____x_Microsoft_CUI_CInput_CIPointerInputObserver_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIPointerInputObserverFactory_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIPointerInputObserverFactory_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface IPointerInputObserverFactory;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CIPointerInputObserverFactory Microsoft::UI::Input::IPointerInputObserverFactory

#endif // ____x_Microsoft_CUI_CInput_CIPointerInputObserverFactory_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CITouchHitTestingProvider_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CITouchHitTestingProvider_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface ITouchHitTestingProvider;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CITouchHitTestingProvider Microsoft::UI::Input::ITouchHitTestingProvider

#endif // ____x_Microsoft_CUI_CInput_CITouchHitTestingProvider_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface ITouchHitTestingProviderStatics;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics Microsoft::UI::Input::ITouchHitTestingProviderStatics

#endif // ____x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIWindowsMessageDelivery_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIWindowsMessageDelivery_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface IWindowsMessageDelivery;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CIWindowsMessageDelivery Microsoft::UI::Input::IWindowsMessageDelivery

#endif // ____x_Microsoft_CUI_CInput_CIWindowsMessageDelivery_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Input {
            interface IWindowsMessageDeliveryStatics;
        } /* Input */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics Microsoft::UI::Input::IWindowsMessageDeliveryStatics

#endif // ____x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions

namespace Microsoft {
    namespace UI {
        namespace Input {
            class FocusObserver;
        } /* Input */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Input {
            class FocusChangedEventArgs;
        } /* Input */
    } /* UI */
} /* Microsoft */


#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CFocusObserver_Microsoft__CUI__CInput__CFocusChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CFocusObserver_Microsoft__CUI__CInput__CFocusChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("58f1f9c6-b10d-5259-b021-921de17764f2"))
ITypedEventHandler<Microsoft::UI::Input::FocusObserver*,Microsoft::UI::Input::FocusChangedEventArgs*> : ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Microsoft::UI::Input::FocusObserver*, Microsoft::UI::Input::IFocusObserver*>,Windows::Foundation::Internal::AggregateType<Microsoft::UI::Input::FocusChangedEventArgs*, Microsoft::UI::Input::IFocusChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.FocusObserver, Microsoft.UI.Input.FocusChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<Microsoft::UI::Input::FocusObserver*,Microsoft::UI::Input::FocusChangedEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CFocusObserver_Microsoft__CUI__CInput__CFocusChangedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CFocusObserver_Microsoft__CUI__CInput__CFocusChangedEventArgs Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CFocusObserver_Microsoft__CUI__CInput__CFocusChangedEventArgs_t
/* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CFocusObserver_Microsoft__CUI__CInput__CFocusChangedEventArgs Windows::Foundation::ITypedEventHandler<Microsoft::UI::Input::IFocusObserver*,Microsoft::UI::Input::IFocusChangedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CFocusObserver_Microsoft__CUI__CInput__CFocusChangedEventArgs_t Windows::Foundation::ITypedEventHandler<Microsoft::UI::Input::IFocusObserver*,Microsoft::UI::Input::IFocusChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CFocusObserver_Microsoft__CUI__CInput__CFocusChangedEventArgs_USE */


#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


namespace Microsoft {
    namespace UI {
        namespace Input {
            class InputActivationListener;
        } /* Input */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Input {
            class InputActivationListenerActivationChangedEventArgs;
        } /* Input */
    } /* UI */
} /* Microsoft */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("50703c5d-ae99-5a53-af74-6f4e8d8358ba"))
ITypedEventHandler<Microsoft::UI::Input::InputActivationListener*,Microsoft::UI::Input::InputActivationListenerActivationChangedEventArgs*> : ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Microsoft::UI::Input::InputActivationListener*, Microsoft::UI::Input::IInputActivationListener*>,Windows::Foundation::Internal::AggregateType<Microsoft::UI::Input::InputActivationListenerActivationChangedEventArgs*, Microsoft::UI::Input::IInputActivationListenerActivationChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.InputActivationListener, Microsoft.UI.Input.InputActivationListenerActivationChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<Microsoft::UI::Input::InputActivationListener*,Microsoft::UI::Input::InputActivationListenerActivationChangedEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs_t
/* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs Windows::Foundation::ITypedEventHandler<Microsoft::UI::Input::IInputActivationListener*,Microsoft::UI::Input::IInputActivationListenerActivationChangedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs_t Windows::Foundation::ITypedEventHandler<Microsoft::UI::Input::IInputActivationListener*,Microsoft::UI::Input::IInputActivationListenerActivationChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs_USE */


#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


namespace Microsoft {
    namespace UI {
        namespace Input {
            class KeyboardInput;
        } /* Input */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Input {
            class ContextMenuKeyEventArgs;
        } /* Input */
    } /* UI */
} /* Microsoft */


#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Microsoft__CUI__CInput__CContextMenuKeyEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Microsoft__CUI__CInput__CContextMenuKeyEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cca37a10-b49b-56cd-8aa8-7af1a6f0ab7a"))
ITypedEventHandler<Microsoft::UI::Input::KeyboardInput*,Microsoft::UI::Input::ContextMenuKeyEventArgs*> : ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Microsoft::UI::Input::KeyboardInput*, Microsoft::UI::Input::IKeyboardInput*>,Windows::Foundation::Internal::AggregateType<Microsoft::UI::Input::ContextMenuKeyEventArgs*, Microsoft::UI::Input::IContextMenuKeyEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.KeyboardInput, Microsoft.UI.Input.ContextMenuKeyEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<Microsoft::UI::Input::KeyboardInput*,Microsoft::UI::Input::ContextMenuKeyEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Microsoft__CUI__CInput__CContextMenuKeyEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Microsoft__CUI__CInput__CContextMenuKeyEventArgs Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Microsoft__CUI__CInput__CContextMenuKeyEventArgs_t
/* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Microsoft__CUI__CInput__CContextMenuKeyEventArgs Windows::Foundation::ITypedEventHandler<Microsoft::UI::Input::IKeyboardInput*,Microsoft::UI::Input::IContextMenuKeyEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Microsoft__CUI__CInput__CContextMenuKeyEventArgs_t Windows::Foundation::ITypedEventHandler<Microsoft::UI::Input::IKeyboardInput*,Microsoft::UI::Input::IContextMenuKeyEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Microsoft__CUI__CInput__CContextMenuKeyEventArgs_USE */


#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000



namespace Windows {
    namespace UI {
        namespace Core {
            class AcceleratorKeyEventArgs;
        } /* Core */
    } /* UI */
} /* Windows */

#ifndef ____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_FWD_DEFINED__

namespace Windows {
    namespace UI {
        namespace Core {
            interface IAcceleratorKeyEventArgs;
        } /* Core */
    } /* UI */
} /* Windows */
#define __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs Windows::UI::Core::IAcceleratorKeyEventArgs

#endif // ____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_FWD_DEFINED__


#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("15e849bd-0efd-526f-8b46-074b4a021b3c"))
ITypedEventHandler<Microsoft::UI::Input::KeyboardInput*,Windows::UI::Core::AcceleratorKeyEventArgs*> : ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Microsoft::UI::Input::KeyboardInput*, Microsoft::UI::Input::IKeyboardInput*>,Windows::Foundation::Internal::AggregateType<Windows::UI::Core::AcceleratorKeyEventArgs*, Windows::UI::Core::IAcceleratorKeyEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.KeyboardInput, Windows.UI.Core.AcceleratorKeyEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<Microsoft::UI::Input::KeyboardInput*,Windows::UI::Core::AcceleratorKeyEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs_t
/* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs Windows::Foundation::ITypedEventHandler<Microsoft::UI::Input::IKeyboardInput*,Windows::UI::Core::IAcceleratorKeyEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs_t Windows::Foundation::ITypedEventHandler<Microsoft::UI::Input::IKeyboardInput*,Windows::UI::Core::IAcceleratorKeyEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs_USE */


#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



namespace Windows {
    namespace UI {
        namespace Core {
            class CharacterReceivedEventArgs;
        } /* Core */
    } /* UI */
} /* Windows */

#ifndef ____x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_FWD_DEFINED__

namespace Windows {
    namespace UI {
        namespace Core {
            interface ICharacterReceivedEventArgs;
        } /* Core */
    } /* UI */
} /* Windows */
#define __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs Windows::UI::Core::ICharacterReceivedEventArgs

#endif // ____x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_FWD_DEFINED__


#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e7063a0f-6729-5523-a0c8-dd113c261f83"))
ITypedEventHandler<Microsoft::UI::Input::KeyboardInput*,Windows::UI::Core::CharacterReceivedEventArgs*> : ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Microsoft::UI::Input::KeyboardInput*, Microsoft::UI::Input::IKeyboardInput*>,Windows::Foundation::Internal::AggregateType<Windows::UI::Core::CharacterReceivedEventArgs*, Windows::UI::Core::ICharacterReceivedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.KeyboardInput, Windows.UI.Core.CharacterReceivedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<Microsoft::UI::Input::KeyboardInput*,Windows::UI::Core::CharacterReceivedEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs_t
/* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs Windows::Foundation::ITypedEventHandler<Microsoft::UI::Input::IKeyboardInput*,Windows::UI::Core::ICharacterReceivedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs_t Windows::Foundation::ITypedEventHandler<Microsoft::UI::Input::IKeyboardInput*,Windows::UI::Core::ICharacterReceivedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs_USE */


#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



namespace Windows {
    namespace UI {
        namespace Core {
            class KeyEventArgs;
        } /* Core */
    } /* UI */
} /* Windows */

#ifndef ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_FWD_DEFINED__

namespace Windows {
    namespace UI {
        namespace Core {
            interface IKeyEventArgs;
        } /* Core */
    } /* UI */
} /* Windows */
#define __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs Windows::UI::Core::IKeyEventArgs

#endif // ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_FWD_DEFINED__


#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("59a2117c-334d-5e56-aa05-7b9e4981a764"))
ITypedEventHandler<Microsoft::UI::Input::KeyboardInput*,Windows::UI::Core::KeyEventArgs*> : ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Microsoft::UI::Input::KeyboardInput*, Microsoft::UI::Input::IKeyboardInput*>,Windows::Foundation::Internal::AggregateType<Windows::UI::Core::KeyEventArgs*, Windows::UI::Core::IKeyEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.KeyboardInput, Windows.UI.Core.KeyEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<Microsoft::UI::Input::KeyboardInput*,Windows::UI::Core::KeyEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs_t
/* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs Windows::Foundation::ITypedEventHandler<Microsoft::UI::Input::IKeyboardInput*,Windows::UI::Core::IKeyEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs_t Windows::Foundation::ITypedEventHandler<Microsoft::UI::Input::IKeyboardInput*,Windows::UI::Core::IKeyEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs_USE */


#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace Microsoft {
    namespace UI {
        namespace Input {
            class PointerInputObserver;
        } /* Input */
    } /* UI */
} /* Microsoft */



namespace Windows {
    namespace UI {
        namespace Core {
            class PointerEventArgs;
        } /* Core */
    } /* UI */
} /* Windows */

#ifndef ____x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_FWD_DEFINED__

namespace Windows {
    namespace UI {
        namespace Core {
            interface IPointerEventArgs;
        } /* Core */
    } /* UI */
} /* Windows */
#define __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs Windows::UI::Core::IPointerEventArgs

#endif // ____x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_FWD_DEFINED__


#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2ce84c88-3776-5749-88da-8d6ce8741b3e"))
ITypedEventHandler<Microsoft::UI::Input::PointerInputObserver*,Windows::UI::Core::PointerEventArgs*> : ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Microsoft::UI::Input::PointerInputObserver*, Microsoft::UI::Input::IPointerInputObserver*>,Windows::Foundation::Internal::AggregateType<Windows::UI::Core::PointerEventArgs*, Windows::UI::Core::IPointerEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.PointerInputObserver, Windows.UI.Core.PointerEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<Microsoft::UI::Input::PointerInputObserver*,Windows::UI::Core::PointerEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs_t
/* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs Windows::Foundation::ITypedEventHandler<Microsoft::UI::Input::IPointerInputObserver*,Windows::UI::Core::IPointerEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs_t Windows::Foundation::ITypedEventHandler<Microsoft::UI::Input::IPointerInputObserver*,Windows::UI::Core::IPointerEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs_USE */


#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace Microsoft {
    namespace UI {
        namespace Input {
            class TouchHitTestingProvider;
        } /* Input */
    } /* UI */
} /* Microsoft */



namespace Windows {
    namespace UI {
        namespace Core {
            class TouchHitTestingEventArgs;
        } /* Core */
    } /* UI */
} /* Windows */

#ifndef ____x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_FWD_DEFINED__

namespace Windows {
    namespace UI {
        namespace Core {
            interface ITouchHitTestingEventArgs;
        } /* Core */
    } /* UI */
} /* Windows */
#define __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs Windows::UI::Core::ITouchHitTestingEventArgs

#endif // ____x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_FWD_DEFINED__


#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5f11b0d1-8589-5d14-a4d9-26d70d749ca2"))
ITypedEventHandler<Microsoft::UI::Input::TouchHitTestingProvider*,Windows::UI::Core::TouchHitTestingEventArgs*> : ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Microsoft::UI::Input::TouchHitTestingProvider*, Microsoft::UI::Input::ITouchHitTestingProvider*>,Windows::Foundation::Internal::AggregateType<Windows::UI::Core::TouchHitTestingEventArgs*, Windows::UI::Core::ITouchHitTestingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.TouchHitTestingProvider, Windows.UI.Core.TouchHitTestingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<Microsoft::UI::Input::TouchHitTestingProvider*,Windows::UI::Core::TouchHitTestingEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs_t
/* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs Windows::Foundation::ITypedEventHandler<Microsoft::UI::Input::ITouchHitTestingProvider*,Windows::UI::Core::ITouchHitTestingEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs_t Windows::Foundation::ITypedEventHandler<Microsoft::UI::Input::ITouchHitTestingProvider*,Windows::UI::Core::ITouchHitTestingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs_USE */


#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




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
            class VisualTreeIsland;
        } /* Composition */
    } /* UI */
} /* Microsoft */

#ifndef ____x_Microsoft_CUI_CComposition_CIVisualTreeIsland_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CIVisualTreeIsland_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            interface IVisualTreeIsland;
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CIVisualTreeIsland Microsoft::UI::Composition::IVisualTreeIsland

#endif // ____x_Microsoft_CUI_CComposition_CIVisualTreeIsland_FWD_DEFINED__










namespace Microsoft {
    namespace UI {
        namespace Input {
            
            typedef enum FocusChangedDirection : int FocusChangedDirection;
            
        } /* Input */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Input {
            
            typedef enum HitTestConfiguration : int HitTestConfiguration;
            
        } /* Input */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Input {
            
            typedef enum InputActivationState : int InputActivationState;
            
        } /* Input */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Input {
            
            typedef enum InputType : int InputType;
            
        } /* Input */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Input {
            
            typedef enum WindowsMessageDeliveryType : int WindowsMessageDeliveryType;
            
        } /* Input */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Input {
            
            typedef struct InputSiteForIslandSiteConfiguration InputSiteForIslandSiteConfiguration;
            
        } /* Input */
    } /* UI */
} /* Microsoft */


































namespace Microsoft {
    namespace UI {
        namespace Input {
            class AttachableInputObject;
        } /* Input */
    } /* UI */
} /* Microsoft */




namespace Microsoft {
    namespace UI {
        namespace Input {
            class CoreWindowLiftedContentBridge;
        } /* Input */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Input {
            class DesktopWindowLiftedContentBridge;
        } /* Input */
    } /* UI */
} /* Microsoft */




namespace Microsoft {
    namespace UI {
        namespace Input {
            class FocusController;
        } /* Input */
    } /* UI */
} /* Microsoft */







namespace Microsoft {
    namespace UI {
        namespace Input {
            class InputObjectPartner;
        } /* Input */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Input {
            class InputSite;
        } /* Input */
    } /* UI */
} /* Microsoft */




namespace Microsoft {
    namespace UI {
        namespace Input {
            class MouseCapture;
        } /* Input */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Input {
            class PointerCursorController;
        } /* Input */
    } /* UI */
} /* Microsoft */





namespace Microsoft {
    namespace UI {
        namespace Input {
            class WindowsMessageDelivery;
        } /* Input */
    } /* UI */
} /* Microsoft */











/*
 *
 * Struct Microsoft.UI.Input.FocusChangedDirection
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */

#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [v1_enum, experimental, contract] */
            enum FocusChangedDirection : int
            {
                FocusChangedDirection_None = 0,
                FocusChangedDirection_Next = 1,
                FocusChangedDirection_Previous = 2,
                FocusChangedDirection_Up = 3,
                FocusChangedDirection_Down = 4,
                FocusChangedDirection_Left = 5,
                FocusChangedDirection_Right = 6,
            };
            
        } /* Input */
    } /* UI */
} /* Microsoft */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Input.HitTestConfiguration
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [v1_enum, contract] */
            enum HitTestConfiguration : int
            {
                HitTestConfiguration_Self = 0,
                HitTestConfiguration_ChildAreas = 1,
                HitTestConfiguration_Both = 2,
            };
            
        } /* Input */
    } /* UI */
} /* Microsoft */
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Input.InputActivationState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 8.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [v1_enum, experimental, contract] */
            enum InputActivationState : int
            {
                InputActivationState_None = 0,
                InputActivationState_Deactivated = 1,
                InputActivationState_ActivatedNotForeground = 2,
                InputActivationState_ActivatedInForeground = 3,
            };
            
        } /* Input */
    } /* UI */
} /* Microsoft */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


/*
 *
 * Struct Microsoft.UI.Input.InputType
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */

#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [v1_enum, experimental, contract] */
            enum InputType : int
            {
                InputType_Unknown = 0,
                InputType_Mouse = 1,
                InputType_Touch = 2,
                InputType_Pen = 3,
            };
            
        } /* Input */
    } /* UI */
} /* Microsoft */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Input.WindowsMessageDeliveryType
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */

#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [v1_enum, experimental, contract] */
            enum WindowsMessageDeliveryType : int
            {
                WindowsMessageDeliveryType_CoreWindow = 0,
                WindowsMessageDeliveryType_CoreComponentInput = 1,
                WindowsMessageDeliveryType_CoreIndependentInput = 2,
                WindowsMessageDeliveryType_IslandSite = 3,
                WindowsMessageDeliveryType_Island = 4,
            };
            
        } /* Input */
    } /* UI */
} /* Microsoft */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Input.InputSiteForIslandSiteConfiguration
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)


namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [experimental, contract] */
            struct InputSiteForIslandSiteConfiguration
            {
                UINT64 WindowId;
                UINT32 ViewInstanceId;
                ::boolean SupportsActivation;
            };
            
        } /* Input */
    } /* UI */
} /* Microsoft */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IAttachableInputObject
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 8.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.AttachableInputObject
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIAttachableInputObject_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIAttachableInputObject_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IAttachableInputObject[] = L"Microsoft.UI.Input.IAttachableInputObject";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("69741938-9DE5-57B6-98E7-8895BF9EB420"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("69741938-9DE5-57B6-98E7-8895BF9EB420")
            IAttachableInputObject : public IInspectable
            {
            public:
                
            };

            extern MIDL_CONST_ID IID & IID_IAttachableInputObject=_uuidof(IAttachableInputObject);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIAttachableInputObject;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIAttachableInputObject_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


/*
 *
 * Interface Microsoft.UI.Input.IAttachableInputObjectFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 8.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.AttachableInputObject
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIAttachableInputObjectFactory_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIAttachableInputObjectFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IAttachableInputObjectFactory[] = L"Microsoft.UI.Input.IAttachableInputObjectFactory";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("3E6F6172-AA2B-51B9-99D0-B710B5E34B99"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("3E6F6172-AA2B-51B9-99D0-B710B5E34B99")
            IAttachableInputObjectFactory : public IInspectable
            {
            public:
                
            };

            extern MIDL_CONST_ID IID & IID_IAttachableInputObjectFactory=_uuidof(IAttachableInputObjectFactory);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIAttachableInputObjectFactory;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIAttachableInputObjectFactory_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


/*
 *
 * Interface Microsoft.UI.Input.IContentBridge
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIContentBridge_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIContentBridge_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IContentBridge[] = L"Microsoft.UI.Input.IContentBridge";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("B9E84CD6-BFD0-51E0-A272-C349E102BA3A"), experimental, contract] */
            MIDL_INTERFACE("B9E84CD6-BFD0-51E0-A272-C349E102BA3A")
            IContentBridge : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE Connect(
                    /* [in] */Microsoft::UI::Composition::IVisualTreeIsland * island,
                    /* [in] */Microsoft::UI::Input::IInputSite * inputSite
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IContentBridge=_uuidof(IContentBridge);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIContentBridge;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIContentBridge_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IContextMenuKeyEventArgs
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.ContextMenuKeyEventArgs
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IContextMenuKeyEventArgs[] = L"Microsoft.UI.Input.IContextMenuKeyEventArgs";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("F6025762-9426-541A-B647-037ABDBECEFC"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("F6025762-9426-541A-B647-037ABDBECEFC")
            IContextMenuKeyEventArgs : public IInspectable
            {
            public:
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handled(
                    /* [retval, out] */::boolean * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handled(
                    /* [in] */::boolean value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IContextMenuKeyEventArgs=_uuidof(IContextMenuKeyEventArgs);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.ICoreWindowLiftedContentBridge
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.CoreWindowLiftedContentBridge
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_ICoreWindowLiftedContentBridge[] = L"Microsoft.UI.Input.ICoreWindowLiftedContentBridge";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("9505F821-BA14-5427-AB7D-D0BBCB2278A6"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("9505F821-BA14-5427-AB7D-D0BBCB2278A6")
            ICoreWindowLiftedContentBridge : public IInspectable
            {
            public:
                
            };

            extern MIDL_CONST_ID IID & IID_ICoreWindowLiftedContentBridge=_uuidof(ICoreWindowLiftedContentBridge);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge;
#endif /* !defined(____x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.ICoreWindowLiftedContentBridgeFactory
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.CoreWindowLiftedContentBridge
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_ICoreWindowLiftedContentBridgeFactory[] = L"Microsoft.UI.Input.ICoreWindowLiftedContentBridgeFactory";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("1D0934B8-C69B-5F16-983F-AC3C2D4AEE75"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("1D0934B8-C69B-5F16-983F-AC3C2D4AEE75")
            ICoreWindowLiftedContentBridgeFactory : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                    /* [in] */Microsoft::UI::Composition::ICompositor * compositor,
                    /* [in] */Windows::UI::Core::ICoreWindow * coreWindow,
                    /* [retval, out] */Microsoft::UI::Input::ICoreWindowLiftedContentBridge * * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_ICoreWindowLiftedContentBridgeFactory=_uuidof(ICoreWindowLiftedContentBridgeFactory);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory;
#endif /* !defined(____x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IDesktopWindowLiftedContentBridge
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.DesktopWindowLiftedContentBridge
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IDesktopWindowLiftedContentBridge[] = L"Microsoft.UI.Input.IDesktopWindowLiftedContentBridge";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("181527F2-756D-5B61-9420-0E6485581111"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("181527F2-756D-5B61-9420-0E6485581111")
            IDesktopWindowLiftedContentBridge : public IInspectable
            {
            public:
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppliedScaleFactor(
                    /* [retval, out] */FLOAT * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CompositionIsland(
                    /* [retval, out] */Microsoft::UI::Composition::IVisualTreeIsland * * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HwndAsWindowId(
                    /* [retval, out] */UINT64 * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InputSite(
                    /* [retval, out] */Microsoft::UI::Input::IInputSite * * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ScaleFactor(
                    /* [retval, out] */FLOAT * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ScaleFactor(
                    /* [in] */FLOAT value
                    ) = 0;
                virtual HRESULT STDMETHODCALLTYPE Activate(
                    /* [in] */::boolean active
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IDesktopWindowLiftedContentBridge=_uuidof(IDesktopWindowLiftedContentBridge);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IDesktopWindowLiftedContentBridgeFactory
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.DesktopWindowLiftedContentBridge
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IDesktopWindowLiftedContentBridgeFactory[] = L"Microsoft.UI.Input.IDesktopWindowLiftedContentBridgeFactory";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("FCDDA493-1AB9-5E0C-945E-E55D218A6588"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("FCDDA493-1AB9-5E0C-945E-E55D218A6588")
            IDesktopWindowLiftedContentBridgeFactory : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                    /* [in] */Microsoft::UI::Composition::ICompositor * compositor,
                    /* [in] */UINT64 parentHwndAsWindowId,
                    /* [retval, out] */Microsoft::UI::Input::IDesktopWindowLiftedContentBridge * * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IDesktopWindowLiftedContentBridgeFactory=_uuidof(IDesktopWindowLiftedContentBridgeFactory);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IFocusChangedEventArgs
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.FocusChangedEventArgs
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIFocusChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIFocusChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IFocusChangedEventArgs[] = L"Microsoft.UI.Input.IFocusChangedEventArgs";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("69F37917-DB62-535C-9BD5-4A8298AC1B39"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("69F37917-DB62-535C-9BD5-4A8298AC1B39")
            IFocusChangedEventArgs : public IInspectable
            {
            public:
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Direction(
                    /* [retval, out] */Microsoft::UI::Input::FocusChangedDirection * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IFocusChangedEventArgs=_uuidof(IFocusChangedEventArgs);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIFocusChangedEventArgs;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIFocusChangedEventArgs_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IFocusController
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.FocusController
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIFocusController_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIFocusController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IFocusController[] = L"Microsoft.UI.Input.IFocusController";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("443CDE2A-33D2-5FA9-8CB4-2BEA8978399A"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("443CDE2A-33D2-5FA9-8CB4-2BEA8978399A")
            IFocusController : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE TrySetFocus(
                    /* [retval, out] */::boolean * result
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasFocus(
                    /* [retval, out] */::boolean * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IFocusController=_uuidof(IFocusController);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIFocusController;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIFocusController_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IFocusControllerStatics
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.FocusController
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIFocusControllerStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIFocusControllerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IFocusControllerStatics[] = L"Microsoft.UI.Input.IFocusControllerStatics";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("D40BF5B9-62C7-5BAD-8859-6DCD62CDCEDB"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("D40BF5B9-62C7-5BAD-8859-6DCD62CDCEDB")
            IFocusControllerStatics : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE GetForInputSite(
                    /* [in] */Microsoft::UI::Input::IInputSite * inputSite,
                    /* [retval, out] */Microsoft::UI::Input::IFocusController * * result
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IFocusControllerStatics=_uuidof(IFocusControllerStatics);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIFocusControllerStatics;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIFocusControllerStatics_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IFocusObserver
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.FocusObserver
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIFocusObserver_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIFocusObserver_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IFocusObserver[] = L"Microsoft.UI.Input.IFocusObserver";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("93EC6858-E99B-5E80-A6CA-FD705FDC4E31"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("93EC6858-E99B-5E80-A6CA-FD705FDC4E31")
            IFocusObserver : public IInspectable
            {
            public:
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasFocus(
                    /* [retval, out] */::boolean * value
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_GotFocus(
                    /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CFocusObserver_Microsoft__CUI__CInput__CFocusChangedEventArgs * handler,
                    /* [retval, out] */EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_GotFocus(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_LostFocus(
                    /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CFocusObserver_Microsoft__CUI__CInput__CFocusChangedEventArgs * handler,
                    /* [retval, out] */EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_LostFocus(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IFocusObserver=_uuidof(IFocusObserver);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIFocusObserver;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIFocusObserver_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IFocusObserverFactory
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.FocusObserver
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIFocusObserverFactory_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIFocusObserverFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IFocusObserverFactory[] = L"Microsoft.UI.Input.IFocusObserverFactory";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("922AFDFE-99A1-5C98-8840-801E28C3D750"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("922AFDFE-99A1-5C98-8840-801E28C3D750")
            IFocusObserverFactory : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                    /* [in] */Microsoft::UI::Input::IInputSite * inputSite,
                    /* [retval, out] */Microsoft::UI::Input::IFocusObserver * * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IFocusObserverFactory=_uuidof(IFocusObserverFactory);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIFocusObserverFactory;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIFocusObserverFactory_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IInputActivationListener
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 8.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputActivationListener
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIInputActivationListener_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIInputActivationListener_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputActivationListener[] = L"Microsoft.UI.Input.IInputActivationListener";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("3B818627-6CE7-5E0D-A0F5-6684FD1AEC78"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("3B818627-6CE7-5E0D-A0F5-6684FD1AEC78")
            IInputActivationListener : public IInspectable
            {
            public:
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_State(
                    /* [retval, out] */Microsoft::UI::Input::InputActivationState * value
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_InputActivationChanged(
                    /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs * handler,
                    /* [retval, out] */EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_InputActivationChanged(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IInputActivationListener=_uuidof(IInputActivationListener);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIInputActivationListener;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIInputActivationListener_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


/*
 *
 * Interface Microsoft.UI.Input.IInputActivationListenerActivationChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 8.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputActivationListenerActivationChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputActivationListenerActivationChangedEventArgs[] = L"Microsoft.UI.Input.IInputActivationListenerActivationChangedEventArgs";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("381FCCE4-4C82-5CDF-B3AA-57A4276C1BEB"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("381FCCE4-4C82-5CDF-B3AA-57A4276C1BEB")
            IInputActivationListenerActivationChangedEventArgs : public IInspectable
            {
            public:
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_State(
                    /* [retval, out] */Microsoft::UI::Input::InputActivationState * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IInputActivationListenerActivationChangedEventArgs=_uuidof(IInputActivationListenerActivationChangedEventArgs);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


/*
 *
 * Interface Microsoft.UI.Input.IInputActivationListenerPartnerStatics
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputActivationListenerPartner
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputActivationListenerPartnerStatics[] = L"Microsoft.UI.Input.IInputActivationListenerPartnerStatics";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("C96DEF7F-201F-518B-9DAB-9F0F5DCF8730"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("C96DEF7F-201F-518B-9DAB-9F0F5DCF8730")
            IInputActivationListenerPartnerStatics : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE GetForInputSite(
                    /* [in] */Microsoft::UI::Input::IInputSite * inputSite,
                    /* [retval, out] */IInspectable * * result
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IInputActivationListenerPartnerStatics=_uuidof(IInputActivationListenerPartnerStatics);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IInputObjectPartner
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputObjectPartner
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIInputObjectPartner_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIInputObjectPartner_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputObjectPartner[] = L"Microsoft.UI.Input.IInputObjectPartner";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("E8B4EEF6-932B-5DF4-B1AB-51D41EA33FE7"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("E8B4EEF6-932B-5DF4-B1AB-51D41EA33FE7")
            IInputObjectPartner : public IInspectable
            {
            public:
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InputSite(
                    /* [retval, out] */Microsoft::UI::Input::IInputSite * * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DispatcherQueue(
                    /* [retval, out] */Microsoft::System::IDispatcherQueue * * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IInputObjectPartner=_uuidof(IInputObjectPartner);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIInputObjectPartner;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIInputObjectPartner_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IInputObjectPartnerFactory
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputObjectPartner
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIInputObjectPartnerFactory_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIInputObjectPartnerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputObjectPartnerFactory[] = L"Microsoft.UI.Input.IInputObjectPartnerFactory";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("5C0D1330-E1B1-5449-AC76-1113D7791833"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("5C0D1330-E1B1-5449-AC76-1113D7791833")
            IInputObjectPartnerFactory : public IInspectable
            {
            public:
                
            };

            extern MIDL_CONST_ID IID & IID_IInputObjectPartnerFactory=_uuidof(IInputObjectPartnerFactory);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIInputObjectPartnerFactory;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIInputObjectPartnerFactory_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IInputSite
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputSite
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIInputSite_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIInputSite_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputSite[] = L"Microsoft.UI.Input.IInputSite";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("1C75759C-DE25-5BEB-B4CF-8C82909F3833"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("1C75759C-DE25-5BEB-B4CF-8C82909F3833")
            IInputSite : public IInspectable
            {
            public:
                
            };

            extern MIDL_CONST_ID IID & IID_IInputSite=_uuidof(IInputSite);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIInputSite;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIInputSite_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IInputSiteStatics
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputSite
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIInputSiteStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIInputSiteStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputSiteStatics[] = L"Microsoft.UI.Input.IInputSiteStatics";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("154D4A56-4AA0-5EE5-823C-02A8DD38EF05"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("154D4A56-4AA0-5EE5-823C-02A8DD38EF05")
            IInputSiteStatics : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE GetForVisual(
                    /* [in] */Microsoft::UI::Composition::IVisual * visual,
                    /* [retval, out] */Microsoft::UI::Input::IInputSite * * result
                    ) = 0;
                virtual HRESULT STDMETHODCALLTYPE GetForHwnd(
                    /* [in] */UINT64 hwndAsUInt64,
                    /* [retval, out] */Microsoft::UI::Input::IInputSite * * result
                    ) = 0;
                virtual HRESULT STDMETHODCALLTYPE CreateForIslandSite(
                    /* [in] */IInspectable * visualIslandSite,
                    /* [in] */Microsoft::UI::Input::InputSiteForIslandSiteConfiguration configuration,
                    /* [retval, out] */Microsoft::UI::Input::IInputSite * * result
                    ) = 0;
                virtual HRESULT STDMETHODCALLTYPE GetOrCreateForIsland(
                    /* [in] */IInspectable * visualTreeIsland,
                    /* [retval, out] */Microsoft::UI::Input::IInputSite * * result
                    ) = 0;
                virtual HRESULT STDMETHODCALLTYPE ConnectIsland(
                    /* [in] */Microsoft::UI::Input::IInputSite * islandSiteInputSite,
                    /* [in] */Microsoft::UI::Input::IInputSite * islandInputSite
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IInputSiteStatics=_uuidof(IInputSiteStatics);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIInputSiteStatics;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIInputSiteStatics_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IKeyboardInput
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.KeyboardInput
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIKeyboardInput_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIKeyboardInput_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IKeyboardInput[] = L"Microsoft.UI.Input.IKeyboardInput";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("A174DE40-8A3D-529D-9EDF-07EF7F5483C4"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("A174DE40-8A3D-529D-9EDF-07EF7F5483C4")
            IKeyboardInput : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE GetKeyState(
                    /* [in] */Windows::System::VirtualKey virtualKey,
                    /* [retval, out] */Windows::UI::Core::CoreVirtualKeyStates * result
                    ) = 0;
                virtual HRESULT STDMETHODCALLTYPE GetCurrentKeyState(
                    /* [in] */Windows::System::VirtualKey virtualKey,
                    /* [retval, out] */Windows::UI::Core::CoreVirtualKeyStates * result
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrentKeyEventDeviceId(
                    /* [retval, out] */HSTRING * value
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_AcceleratorKeyActivated(
                    /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs * handler,
                    /* [retval, out] */EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_AcceleratorKeyActivated(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CharacterReceived(
                    /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs * handler,
                    /* [retval, out] */EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CharacterReceived(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_KeyDown(
                    /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs * handler,
                    /* [retval, out] */EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_KeyDown(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_KeyUp(
                    /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs * handler,
                    /* [retval, out] */EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_KeyUp(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_SysKeyDown(
                    /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs * handler,
                    /* [retval, out] */EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_SysKeyDown(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_SysKeyUp(
                    /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs * handler,
                    /* [retval, out] */EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_SysKeyUp(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ContextMenuKey(
                    /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Microsoft__CUI__CInput__CContextMenuKeyEventArgs * handler,
                    /* [retval, out] */EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ContextMenuKey(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IKeyboardInput=_uuidof(IKeyboardInput);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIKeyboardInput;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIKeyboardInput_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IKeyboardInputStatics
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.KeyboardInput
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIKeyboardInputStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIKeyboardInputStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IKeyboardInputStatics[] = L"Microsoft.UI.Input.IKeyboardInputStatics";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("3E2D115C-410F-5476-89F6-35693287CE01"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("3E2D115C-410F-5476-89F6-35693287CE01")
            IKeyboardInputStatics : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE GetForInputSite(
                    /* [in] */Microsoft::UI::Input::IInputSite * inputSite,
                    /* [retval, out] */Microsoft::UI::Input::IKeyboardInput * * result
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IKeyboardInputStatics=_uuidof(IKeyboardInputStatics);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIKeyboardInputStatics;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIKeyboardInputStatics_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IMouseCapture
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.MouseCapture
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIMouseCapture_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIMouseCapture_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IMouseCapture[] = L"Microsoft.UI.Input.IMouseCapture";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("3ED55268-E63E-5756-999D-0ACB7B39331D"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("3ED55268-E63E-5756-999D-0ACB7B39331D")
            IMouseCapture : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE TrySetCapture(
                    /* [retval, out] */::boolean * result
                    ) = 0;
                virtual HRESULT STDMETHODCALLTYPE TryReleaseCapture(
                    /* [retval, out] */::boolean * result
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasCapture(
                    /* [retval, out] */::boolean * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IMouseCapture=_uuidof(IMouseCapture);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIMouseCapture;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIMouseCapture_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IMouseCaptureStatics
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.MouseCapture
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIMouseCaptureStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIMouseCaptureStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IMouseCaptureStatics[] = L"Microsoft.UI.Input.IMouseCaptureStatics";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("B3EEB519-9B27-586E-B3DB-B8B948FE680B"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("B3EEB519-9B27-586E-B3DB-B8B948FE680B")
            IMouseCaptureStatics : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE GetForInputSite(
                    /* [in] */Microsoft::UI::Input::IInputSite * inputSite,
                    /* [retval, out] */Microsoft::UI::Input::IMouseCapture * * result
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IMouseCaptureStatics=_uuidof(IMouseCaptureStatics);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIMouseCaptureStatics;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIMouseCaptureStatics_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IPointerCursorController
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.PointerCursorController
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIPointerCursorController_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIPointerCursorController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IPointerCursorController[] = L"Microsoft.UI.Input.IPointerCursorController";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("959ABC0B-D3CA-56E9-ACED-DE1DF6029C2A"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("959ABC0B-D3CA-56E9-ACED-DE1DF6029C2A")
            IPointerCursorController : public IInspectable
            {
            public:
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                    /* [retval, out] */Windows::Foundation::Point * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Cursor(
                    /* [retval, out] */Windows::UI::Core::ICoreCursor * * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Cursor(
                    /* [in] */Windows::UI::Core::ICoreCursor * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPointerCursorController=_uuidof(IPointerCursorController);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIPointerCursorController;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIPointerCursorController_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IPointerCursorControllerStatics
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.PointerCursorController
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IPointerCursorControllerStatics[] = L"Microsoft.UI.Input.IPointerCursorControllerStatics";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("45CA99A8-7B4B-585C-80C6-4B7C261E4DAD"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("45CA99A8-7B4B-585C-80C6-4B7C261E4DAD")
            IPointerCursorControllerStatics : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE GetForInputSite(
                    /* [in] */Microsoft::UI::Input::IInputSite * inputSite,
                    /* [retval, out] */Microsoft::UI::Input::IPointerCursorController * * result
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPointerCursorControllerStatics=_uuidof(IPointerCursorControllerStatics);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IPointerInputObserver
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.PointerInputObserver
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIPointerInputObserver_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIPointerInputObserver_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IPointerInputObserver[] = L"Microsoft.UI.Input.IPointerInputObserver";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("09A750C3-F303-573D-B6E0-0FDFD705DD86"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("09A750C3-F303-573D-B6E0-0FDFD705DD86")
            IPointerInputObserver : public IInspectable
            {
            public:
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerCaptureLost(
                    /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs * handler,
                    /* [retval, out] */EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerCaptureLost(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerEntered(
                    /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs * handler,
                    /* [retval, out] */EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerEntered(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerExited(
                    /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs * handler,
                    /* [retval, out] */EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerExited(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerMoved(
                    /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs * handler,
                    /* [retval, out] */EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerMoved(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerPressed(
                    /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs * handler,
                    /* [retval, out] */EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerPressed(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerReleased(
                    /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs * handler,
                    /* [retval, out] */EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerReleased(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerRoutedAway(
                    /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs * handler,
                    /* [retval, out] */EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerRoutedAway(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerRoutedReleased(
                    /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs * handler,
                    /* [retval, out] */EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerRoutedReleased(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerRoutedTo(
                    /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs * handler,
                    /* [retval, out] */EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerRoutedTo(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerWheelChanged(
                    /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs * handler,
                    /* [retval, out] */EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerWheelChanged(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPointerInputObserver=_uuidof(IPointerInputObserver);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIPointerInputObserver;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIPointerInputObserver_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IPointerInputObserverFactory
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.PointerInputObserver
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIPointerInputObserverFactory_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIPointerInputObserverFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IPointerInputObserverFactory[] = L"Microsoft.UI.Input.IPointerInputObserverFactory";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("C2FD90C9-DD14-554D-85E5-FA265FB73445"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("C2FD90C9-DD14-554D-85E5-FA265FB73445")
            IPointerInputObserverFactory : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                    /* [in] */Microsoft::UI::Input::IInputSite * site,
                    /* [retval, out] */Microsoft::UI::Input::IPointerInputObserver * * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPointerInputObserverFactory=_uuidof(IPointerInputObserverFactory);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIPointerInputObserverFactory;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIPointerInputObserverFactory_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.ITouchHitTestingProvider
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.TouchHitTestingProvider
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CITouchHitTestingProvider_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CITouchHitTestingProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_ITouchHitTestingProvider[] = L"Microsoft.UI.Input.ITouchHitTestingProvider";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("444B83DA-7A58-5BFD-A157-9F27ECB2BE60"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("444B83DA-7A58-5BFD-A157-9F27ECB2BE60")
            ITouchHitTestingProvider : public IInspectable
            {
            public:
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_TouchHitTestRequested(
                    /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs * handler,
                    /* [retval, out] */EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_TouchHitTestRequested(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_ITouchHitTestingProvider=_uuidof(ITouchHitTestingProvider);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CITouchHitTestingProvider;
#endif /* !defined(____x_Microsoft_CUI_CInput_CITouchHitTestingProvider_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.ITouchHitTestingProviderStatics
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.TouchHitTestingProvider
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_ITouchHitTestingProviderStatics[] = L"Microsoft.UI.Input.ITouchHitTestingProviderStatics";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("4D586F2A-8CD2-5D01-80E9-0D7D8BCEEB62"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("4D586F2A-8CD2-5D01-80E9-0D7D8BCEEB62")
            ITouchHitTestingProviderStatics : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE GetForInputSite(
                    /* [in] */Microsoft::UI::Input::IInputSite * inputSite,
                    /* [retval, out] */Microsoft::UI::Input::ITouchHitTestingProvider * * result
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_ITouchHitTestingProviderStatics=_uuidof(ITouchHitTestingProviderStatics);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics;
#endif /* !defined(____x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IWindowsMessageDelivery
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.WindowsMessageDelivery
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIWindowsMessageDelivery_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIWindowsMessageDelivery_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IWindowsMessageDelivery[] = L"Microsoft.UI.Input.IWindowsMessageDelivery";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("9DF77403-7D9E-50E8-AAFD-FA1164528E90"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("9DF77403-7D9E-50E8-AAFD-FA1164528E90")
            IWindowsMessageDelivery : public IInspectable
            {
            public:
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WindowId(
                    /* [retval, out] */UINT64 * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                    /* [retval, out] */Microsoft::UI::Input::WindowsMessageDeliveryType * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IWindowsMessageDelivery=_uuidof(IWindowsMessageDelivery);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIWindowsMessageDelivery;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIWindowsMessageDelivery_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IWindowsMessageDeliveryStatics
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.WindowsMessageDelivery
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IWindowsMessageDeliveryStatics[] = L"Microsoft.UI.Input.IWindowsMessageDeliveryStatics";

namespace Microsoft {
    namespace UI {
        namespace Input {
            /* [object, uuid("03C77EDD-7940-5686-B356-6F64077D9261"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("03C77EDD-7940-5686-B356-6F64077D9261")
            IWindowsMessageDeliveryStatics : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE CreateForInputSite(
                    /* [in] */Microsoft::UI::Input::IInputSite * inputSite,
                    /* [in] */UINT64 windowId,
                    /* [in] */Microsoft::UI::Input::WindowsMessageDeliveryType type,
                    /* [retval, out] */Microsoft::UI::Input::IWindowsMessageDelivery * * result
                    ) = 0;
                virtual HRESULT STDMETHODCALLTYPE TryGetForInputSite(
                    /* [in] */Microsoft::UI::Input::IInputSite * inputSite,
                    /* [retval, out] */Microsoft::UI::Input::IWindowsMessageDelivery * * result
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IWindowsMessageDeliveryStatics=_uuidof(IWindowsMessageDeliveryStatics);
            
        } /* Input */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.AttachableInputObject
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 8.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IAttachableInputObject ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_AttachableInputObject_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_AttachableInputObject_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_AttachableInputObject[] = L"Microsoft.UI.Input.AttachableInputObject";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


/*
 *
 * Class Microsoft.UI.Input.ContextMenuKeyEventArgs
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IContextMenuKeyEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_ContextMenuKeyEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_ContextMenuKeyEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_ContextMenuKeyEventArgs[] = L"Microsoft.UI.Input.ContextMenuKeyEventArgs";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.CoreWindowLiftedContentBridge
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Microsoft.UI.Input.ICoreWindowLiftedContentBridgeFactory interface starting with version 1.0 of the Microsoft.UI.Input.ISMInternalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.ICoreWindowLiftedContentBridge ** Default Interface **
 *    Microsoft.UI.Input.IContentBridge
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_CoreWindowLiftedContentBridge_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_CoreWindowLiftedContentBridge_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_CoreWindowLiftedContentBridge[] = L"Microsoft.UI.Input.CoreWindowLiftedContentBridge";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.DesktopWindowLiftedContentBridge
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Microsoft.UI.Input.IDesktopWindowLiftedContentBridgeFactory interface starting with version 1.0 of the Microsoft.UI.Input.ISMInternalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IDesktopWindowLiftedContentBridge ** Default Interface **
 *    Microsoft.UI.Input.IContentBridge
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_DesktopWindowLiftedContentBridge_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_DesktopWindowLiftedContentBridge_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_DesktopWindowLiftedContentBridge[] = L"Microsoft.UI.Input.DesktopWindowLiftedContentBridge";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.FocusChangedEventArgs
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IFocusChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_FocusChangedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_FocusChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_FocusChangedEventArgs[] = L"Microsoft.UI.Input.FocusChangedEventArgs";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.FocusController
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.IFocusControllerStatics interface starting with version 1.0 of the Microsoft.UI.Input.ISMInternalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IFocusController ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_FocusController_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_FocusController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_FocusController[] = L"Microsoft.UI.Input.FocusController";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.FocusObserver
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Microsoft.UI.Input.IFocusObserverFactory interface starting with version 1.0 of the Microsoft.UI.Input.ISMInternalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IFocusObserver ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_FocusObserver_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_FocusObserver_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_FocusObserver[] = L"Microsoft.UI.Input.FocusObserver";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.InputActivationListener
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 8.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputActivationListener ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputActivationListener_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputActivationListener_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputActivationListener[] = L"Microsoft.UI.Input.InputActivationListener";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


/*
 *
 * Class Microsoft.UI.Input.InputActivationListenerActivationChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 8.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputActivationListenerActivationChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputActivationListenerActivationChangedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputActivationListenerActivationChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputActivationListenerActivationChangedEventArgs[] = L"Microsoft.UI.Input.InputActivationListenerActivationChangedEventArgs";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


/*
 *
 * Class Microsoft.UI.Input.InputActivationListenerPartner
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.IInputActivationListenerPartnerStatics interface starting with version 1.0 of the Microsoft.UI.Input.ISMInternalContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputActivationListenerPartner_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputActivationListenerPartner_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputActivationListenerPartner[] = L"Microsoft.UI.Input.InputActivationListenerPartner";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.InputObjectPartner
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputObjectPartner ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputObjectPartner_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputObjectPartner_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputObjectPartner[] = L"Microsoft.UI.Input.InputObjectPartner";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.InputSite
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.IInputSiteStatics interface starting with version 1.0 of the Microsoft.UI.Input.ISMInternalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputSite ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputSite_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputSite_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputSite[] = L"Microsoft.UI.Input.InputSite";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.KeyboardInput
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.IKeyboardInputStatics interface starting with version 1.0 of the Microsoft.UI.Input.ISMInternalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IKeyboardInput ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_KeyboardInput_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_KeyboardInput_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_KeyboardInput[] = L"Microsoft.UI.Input.KeyboardInput";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.MouseCapture
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.IMouseCaptureStatics interface starting with version 1.0 of the Microsoft.UI.Input.ISMInternalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IMouseCapture ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_MouseCapture_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_MouseCapture_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_MouseCapture[] = L"Microsoft.UI.Input.MouseCapture";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.PointerCursorController
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.IPointerCursorControllerStatics interface starting with version 1.0 of the Microsoft.UI.Input.ISMInternalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IPointerCursorController ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_PointerCursorController_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_PointerCursorController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_PointerCursorController[] = L"Microsoft.UI.Input.PointerCursorController";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.PointerInputObserver
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Microsoft.UI.Input.IPointerInputObserverFactory interface starting with version 1.0 of the Microsoft.UI.Input.ISMInternalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IPointerInputObserver ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_PointerInputObserver_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_PointerInputObserver_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_PointerInputObserver[] = L"Microsoft.UI.Input.PointerInputObserver";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.TouchHitTestingProvider
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.ITouchHitTestingProviderStatics interface starting with version 1.0 of the Microsoft.UI.Input.ISMInternalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.ITouchHitTestingProvider ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_TouchHitTestingProvider_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_TouchHitTestingProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_TouchHitTestingProvider[] = L"Microsoft.UI.Input.TouchHitTestingProvider";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.WindowsMessageDelivery
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.IWindowsMessageDeliveryStatics interface starting with version 1.0 of the Microsoft.UI.Input.ISMInternalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IWindowsMessageDelivery ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_WindowsMessageDelivery_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_WindowsMessageDelivery_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_WindowsMessageDelivery[] = L"Microsoft.UI.Input.WindowsMessageDelivery";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_Microsoft_CUI_CInput_CIAttachableInputObject_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIAttachableInputObject_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CIAttachableInputObject __x_Microsoft_CUI_CInput_CIAttachableInputObject;

#endif // ____x_Microsoft_CUI_CInput_CIAttachableInputObject_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIAttachableInputObjectFactory_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIAttachableInputObjectFactory_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CIAttachableInputObjectFactory __x_Microsoft_CUI_CInput_CIAttachableInputObjectFactory;

#endif // ____x_Microsoft_CUI_CInput_CIAttachableInputObjectFactory_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIContentBridge_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIContentBridge_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CIContentBridge __x_Microsoft_CUI_CInput_CIContentBridge;

#endif // ____x_Microsoft_CUI_CInput_CIContentBridge_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs __x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs;

#endif // ____x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge;

#endif // ____x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory;

#endif // ____x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge;

#endif // ____x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory;

#endif // ____x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIFocusChangedEventArgs_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIFocusChangedEventArgs_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CIFocusChangedEventArgs __x_Microsoft_CUI_CInput_CIFocusChangedEventArgs;

#endif // ____x_Microsoft_CUI_CInput_CIFocusChangedEventArgs_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIFocusController_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIFocusController_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CIFocusController __x_Microsoft_CUI_CInput_CIFocusController;

#endif // ____x_Microsoft_CUI_CInput_CIFocusController_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIFocusControllerStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIFocusControllerStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CIFocusControllerStatics __x_Microsoft_CUI_CInput_CIFocusControllerStatics;

#endif // ____x_Microsoft_CUI_CInput_CIFocusControllerStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIFocusObserver_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIFocusObserver_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CIFocusObserver __x_Microsoft_CUI_CInput_CIFocusObserver;

#endif // ____x_Microsoft_CUI_CInput_CIFocusObserver_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIFocusObserverFactory_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIFocusObserverFactory_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CIFocusObserverFactory __x_Microsoft_CUI_CInput_CIFocusObserverFactory;

#endif // ____x_Microsoft_CUI_CInput_CIFocusObserverFactory_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIInputActivationListener_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIInputActivationListener_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CIInputActivationListener __x_Microsoft_CUI_CInput_CIInputActivationListener;

#endif // ____x_Microsoft_CUI_CInput_CIInputActivationListener_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs __x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs;

#endif // ____x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics __x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics;

#endif // ____x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIInputObjectPartner_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIInputObjectPartner_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CIInputObjectPartner __x_Microsoft_CUI_CInput_CIInputObjectPartner;

#endif // ____x_Microsoft_CUI_CInput_CIInputObjectPartner_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIInputObjectPartnerFactory_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIInputObjectPartnerFactory_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CIInputObjectPartnerFactory __x_Microsoft_CUI_CInput_CIInputObjectPartnerFactory;

#endif // ____x_Microsoft_CUI_CInput_CIInputObjectPartnerFactory_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIInputSite_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIInputSite_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CIInputSite __x_Microsoft_CUI_CInput_CIInputSite;

#endif // ____x_Microsoft_CUI_CInput_CIInputSite_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIInputSiteStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIInputSiteStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CIInputSiteStatics __x_Microsoft_CUI_CInput_CIInputSiteStatics;

#endif // ____x_Microsoft_CUI_CInput_CIInputSiteStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIKeyboardInput_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIKeyboardInput_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CIKeyboardInput __x_Microsoft_CUI_CInput_CIKeyboardInput;

#endif // ____x_Microsoft_CUI_CInput_CIKeyboardInput_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIKeyboardInputStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIKeyboardInputStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CIKeyboardInputStatics __x_Microsoft_CUI_CInput_CIKeyboardInputStatics;

#endif // ____x_Microsoft_CUI_CInput_CIKeyboardInputStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIMouseCapture_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIMouseCapture_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CIMouseCapture __x_Microsoft_CUI_CInput_CIMouseCapture;

#endif // ____x_Microsoft_CUI_CInput_CIMouseCapture_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIMouseCaptureStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIMouseCaptureStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CIMouseCaptureStatics __x_Microsoft_CUI_CInput_CIMouseCaptureStatics;

#endif // ____x_Microsoft_CUI_CInput_CIMouseCaptureStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIPointerCursorController_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIPointerCursorController_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CIPointerCursorController __x_Microsoft_CUI_CInput_CIPointerCursorController;

#endif // ____x_Microsoft_CUI_CInput_CIPointerCursorController_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics __x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics;

#endif // ____x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIPointerInputObserver_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIPointerInputObserver_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CIPointerInputObserver __x_Microsoft_CUI_CInput_CIPointerInputObserver;

#endif // ____x_Microsoft_CUI_CInput_CIPointerInputObserver_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIPointerInputObserverFactory_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIPointerInputObserverFactory_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CIPointerInputObserverFactory __x_Microsoft_CUI_CInput_CIPointerInputObserverFactory;

#endif // ____x_Microsoft_CUI_CInput_CIPointerInputObserverFactory_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CITouchHitTestingProvider_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CITouchHitTestingProvider_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CITouchHitTestingProvider __x_Microsoft_CUI_CInput_CITouchHitTestingProvider;

#endif // ____x_Microsoft_CUI_CInput_CITouchHitTestingProvider_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics __x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics;

#endif // ____x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIWindowsMessageDelivery_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIWindowsMessageDelivery_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CIWindowsMessageDelivery __x_Microsoft_CUI_CInput_CIWindowsMessageDelivery;

#endif // ____x_Microsoft_CUI_CInput_CIWindowsMessageDelivery_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics __x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics;

#endif // ____x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions


#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CFocusObserver_Microsoft__CUI__CInput__CFocusChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CFocusObserver_Microsoft__CUI__CInput__CFocusChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CFocusObserver_Microsoft__CUI__CInput__CFocusChangedEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CFocusObserver_Microsoft__CUI__CInput__CFocusChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CFocusObserver_Microsoft__CUI__CInput__CFocusChangedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CFocusObserver_Microsoft__CUI__CInput__CFocusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CFocusObserver_Microsoft__CUI__CInput__CFocusChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CFocusObserver_Microsoft__CUI__CInput__CFocusChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CFocusObserver_Microsoft__CUI__CInput__CFocusChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CFocusObserver_Microsoft__CUI__CInput__CFocusChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_Microsoft_CUI_CInput_CIFocusObserver * sender,/* [in] */ __RPC__in_opt __x_Microsoft_CUI_CInput_CIFocusChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CFocusObserver_Microsoft__CUI__CInput__CFocusChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CFocusObserver_Microsoft__CUI__CInput__CFocusChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CFocusObserver_Microsoft__CUI__CInput__CFocusChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CFocusObserver_Microsoft__CUI__CInput__CFocusChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CFocusObserver_Microsoft__CUI__CInput__CFocusChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CFocusObserver_Microsoft__CUI__CInput__CFocusChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CFocusObserver_Microsoft__CUI__CInput__CFocusChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CFocusObserver_Microsoft__CUI__CInput__CFocusChangedEventArgs_INTERFACE_DEFINED__

#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_Microsoft_CUI_CInput_CIInputActivationListener * sender,/* [in] */ __RPC__in_opt __x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs_INTERFACE_DEFINED__

#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000



#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Microsoft__CUI__CInput__CContextMenuKeyEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Microsoft__CUI__CInput__CContextMenuKeyEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Microsoft__CUI__CInput__CContextMenuKeyEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Microsoft__CUI__CInput__CContextMenuKeyEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Microsoft__CUI__CInput__CContextMenuKeyEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Microsoft__CUI__CInput__CContextMenuKeyEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Microsoft__CUI__CInput__CContextMenuKeyEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Microsoft__CUI__CInput__CContextMenuKeyEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Microsoft__CUI__CInput__CContextMenuKeyEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Microsoft__CUI__CInput__CContextMenuKeyEventArgs * This,/* [in] */ __RPC__in_opt __x_Microsoft_CUI_CInput_CIKeyboardInput * sender,/* [in] */ __RPC__in_opt __x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Microsoft__CUI__CInput__CContextMenuKeyEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Microsoft__CUI__CInput__CContextMenuKeyEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Microsoft__CUI__CInput__CContextMenuKeyEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Microsoft__CUI__CInput__CContextMenuKeyEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Microsoft__CUI__CInput__CContextMenuKeyEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Microsoft__CUI__CInput__CContextMenuKeyEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Microsoft__CUI__CInput__CContextMenuKeyEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Microsoft__CUI__CInput__CContextMenuKeyEventArgs_INTERFACE_DEFINED__

#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs;

#endif // ____x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs_FWD_DEFINED__


#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs * This,/* [in] */ __RPC__in_opt __x_Microsoft_CUI_CInput_CIKeyboardInput * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs_INTERFACE_DEFINED__

#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs_FWD_DEFINED__


#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs * This,/* [in] */ __RPC__in_opt __x_Microsoft_CUI_CInput_CIKeyboardInput * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs_INTERFACE_DEFINED__

#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs;

#endif // ____x_ABI_CWindows_CUI_CCore_CIKeyEventArgs_FWD_DEFINED__


#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs * This,/* [in] */ __RPC__in_opt __x_Microsoft_CUI_CInput_CIKeyboardInput * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs_INTERFACE_DEFINED__

#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs;

#endif // ____x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_FWD_DEFINED__


#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs * This,/* [in] */ __RPC__in_opt __x_Microsoft_CUI_CInput_CIPointerInputObserver * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs_INTERFACE_DEFINED__

#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs;

#endif // ____x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs_FWD_DEFINED__


#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CInput__CTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs * This,/* [in] */ __RPC__in_opt __x_Microsoft_CUI_CInput_CITouchHitTestingProvider * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs_INTERFACE_DEFINED__

#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef ____x_Microsoft_CUI_CComposition_CICompositor_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CICompositor_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CICompositor __x_Microsoft_CUI_CComposition_CICompositor;

#endif // ____x_Microsoft_CUI_CComposition_CICompositor_FWD_DEFINED__


#ifndef ____x_Microsoft_CUI_CComposition_CIVisual_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CIVisual_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CIVisual __x_Microsoft_CUI_CComposition_CIVisual;

#endif // ____x_Microsoft_CUI_CComposition_CIVisual_FWD_DEFINED__


#ifndef ____x_Microsoft_CUI_CComposition_CIVisualTreeIsland_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CIVisualTreeIsland_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CIVisualTreeIsland __x_Microsoft_CUI_CComposition_CIVisualTreeIsland;

#endif // ____x_Microsoft_CUI_CComposition_CIVisualTreeIsland_FWD_DEFINED__










typedef enum __x_Microsoft_CUI_CInput_CFocusChangedDirection __x_Microsoft_CUI_CInput_CFocusChangedDirection;


typedef enum __x_Microsoft_CUI_CInput_CHitTestConfiguration __x_Microsoft_CUI_CInput_CHitTestConfiguration;


typedef enum __x_Microsoft_CUI_CInput_CInputActivationState __x_Microsoft_CUI_CInput_CInputActivationState;


typedef enum __x_Microsoft_CUI_CInput_CInputType __x_Microsoft_CUI_CInput_CInputType;


typedef enum __x_Microsoft_CUI_CInput_CWindowsMessageDeliveryType __x_Microsoft_CUI_CInput_CWindowsMessageDeliveryType;


typedef struct __x_Microsoft_CUI_CInput_CInputSiteForIslandSiteConfiguration __x_Microsoft_CUI_CInput_CInputSiteForIslandSiteConfiguration;




























































/*
 *
 * Struct Microsoft.UI.Input.FocusChangedDirection
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */

#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
/* [v1_enum, experimental, contract] */
enum __x_Microsoft_CUI_CInput_CFocusChangedDirection
{
    Microsoft_UI_Input_FocusChangedDirection_None = 0,
    Microsoft_UI_Input_FocusChangedDirection_Next = 1,
    Microsoft_UI_Input_FocusChangedDirection_Previous = 2,
    Microsoft_UI_Input_FocusChangedDirection_Up = 3,
    Microsoft_UI_Input_FocusChangedDirection_Down = 4,
    Microsoft_UI_Input_FocusChangedDirection_Left = 5,
    Microsoft_UI_Input_FocusChangedDirection_Right = 6,
};
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Input.HitTestConfiguration
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_Microsoft_CUI_CInput_CHitTestConfiguration
{
    Microsoft_UI_Input_HitTestConfiguration_Self = 0,
    Microsoft_UI_Input_HitTestConfiguration_ChildAreas = 1,
    Microsoft_UI_Input_HitTestConfiguration_Both = 2,
};
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Input.InputActivationState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 8.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
/* [v1_enum, experimental, contract] */
enum __x_Microsoft_CUI_CInput_CInputActivationState
{
    Microsoft_UI_Input_InputActivationState_None = 0,
    Microsoft_UI_Input_InputActivationState_Deactivated = 1,
    Microsoft_UI_Input_InputActivationState_ActivatedNotForeground = 2,
    Microsoft_UI_Input_InputActivationState_ActivatedInForeground = 3,
};
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


/*
 *
 * Struct Microsoft.UI.Input.InputType
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */

#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
/* [v1_enum, experimental, contract] */
enum __x_Microsoft_CUI_CInput_CInputType
{
    Microsoft_UI_Input_InputType_Unknown = 0,
    Microsoft_UI_Input_InputType_Mouse = 1,
    Microsoft_UI_Input_InputType_Touch = 2,
    Microsoft_UI_Input_InputType_Pen = 3,
};
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Input.WindowsMessageDeliveryType
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */

#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
/* [v1_enum, experimental, contract] */
enum __x_Microsoft_CUI_CInput_CWindowsMessageDeliveryType
{
    Microsoft_UI_Input_WindowsMessageDeliveryType_CoreWindow = 0,
    Microsoft_UI_Input_WindowsMessageDeliveryType_CoreComponentInput = 1,
    Microsoft_UI_Input_WindowsMessageDeliveryType_CoreIndependentInput = 2,
    Microsoft_UI_Input_WindowsMessageDeliveryType_IslandSite = 3,
    Microsoft_UI_Input_WindowsMessageDeliveryType_Island = 4,
};
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Input.InputSiteForIslandSiteConfiguration
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/* [experimental, contract] */
struct __x_Microsoft_CUI_CInput_CInputSiteForIslandSiteConfiguration
{
    UINT64 WindowId;
    UINT32 ViewInstanceId;
    boolean SupportsActivation;
};
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IAttachableInputObject
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 8.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.AttachableInputObject
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIAttachableInputObject_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIAttachableInputObject_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IAttachableInputObject[] = L"Microsoft.UI.Input.IAttachableInputObject";
/* [object, uuid("69741938-9DE5-57B6-98E7-8895BF9EB420"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CIAttachableInputObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CIAttachableInputObject * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CIAttachableInputObject * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CIAttachableInputObject * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CIAttachableInputObject * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CIAttachableInputObject * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CIAttachableInputObject * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CIAttachableInputObjectVtbl;

interface __x_Microsoft_CUI_CInput_CIAttachableInputObject
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CIAttachableInputObjectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CIAttachableInputObject_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CIAttachableInputObject_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CIAttachableInputObject_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CIAttachableInputObject_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CIAttachableInputObject_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CIAttachableInputObject_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIAttachableInputObject;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIAttachableInputObject_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


/*
 *
 * Interface Microsoft.UI.Input.IAttachableInputObjectFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 8.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.AttachableInputObject
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIAttachableInputObjectFactory_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIAttachableInputObjectFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IAttachableInputObjectFactory[] = L"Microsoft.UI.Input.IAttachableInputObjectFactory";
/* [object, uuid("3E6F6172-AA2B-51B9-99D0-B710B5E34B99"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CIAttachableInputObjectFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CIAttachableInputObjectFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CIAttachableInputObjectFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CIAttachableInputObjectFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CIAttachableInputObjectFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CIAttachableInputObjectFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CIAttachableInputObjectFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CIAttachableInputObjectFactoryVtbl;

interface __x_Microsoft_CUI_CInput_CIAttachableInputObjectFactory
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CIAttachableInputObjectFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CIAttachableInputObjectFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CIAttachableInputObjectFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CIAttachableInputObjectFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CIAttachableInputObjectFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CIAttachableInputObjectFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CIAttachableInputObjectFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIAttachableInputObjectFactory;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIAttachableInputObjectFactory_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


/*
 *
 * Interface Microsoft.UI.Input.IContentBridge
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIContentBridge_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIContentBridge_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IContentBridge[] = L"Microsoft.UI.Input.IContentBridge";
/* [object, uuid("B9E84CD6-BFD0-51E0-A272-C349E102BA3A"), experimental, contract] */
typedef struct __x_Microsoft_CUI_CInput_CIContentBridgeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CIContentBridge * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CIContentBridge * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CIContentBridge * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CIContentBridge * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CIContentBridge * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CIContentBridge * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Connect )(
        __x_Microsoft_CUI_CInput_CIContentBridge * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CIVisualTreeIsland * island,
        /* [in] */__x_Microsoft_CUI_CInput_CIInputSite * inputSite
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CIContentBridgeVtbl;

interface __x_Microsoft_CUI_CInput_CIContentBridge
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CIContentBridgeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CIContentBridge_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CIContentBridge_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CIContentBridge_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CIContentBridge_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CIContentBridge_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CIContentBridge_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CInput_CIContentBridge_Connect(This,island,inputSite) \
    ( (This)->lpVtbl->Connect(This,island,inputSite) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIContentBridge;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIContentBridge_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IContextMenuKeyEventArgs
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.ContextMenuKeyEventArgs
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IContextMenuKeyEventArgs[] = L"Microsoft.UI.Input.IContextMenuKeyEventArgs";
/* [object, uuid("F6025762-9426-541A-B647-037ABDBECEFC"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgsVtbl;

interface __x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs_get_Handled(This,value) \
    ( (This)->lpVtbl->get_Handled(This,value) )

#define __x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs_put_Handled(This,value) \
    ( (This)->lpVtbl->put_Handled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIContextMenuKeyEventArgs_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.ICoreWindowLiftedContentBridge
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.CoreWindowLiftedContentBridge
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_ICoreWindowLiftedContentBridge[] = L"Microsoft.UI.Input.ICoreWindowLiftedContentBridge";
/* [object, uuid("9505F821-BA14-5427-AB7D-D0BBCB2278A6"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeVtbl;

interface __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge;
#endif /* !defined(____x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.ICoreWindowLiftedContentBridgeFactory
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.CoreWindowLiftedContentBridge
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_ICoreWindowLiftedContentBridgeFactory[] = L"Microsoft.UI.Input.ICoreWindowLiftedContentBridgeFactory";
/* [object, uuid("1D0934B8-C69B-5F16-983F-AC3C2D4AEE75"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CICompositor * compositor,
        /* [in] */__x_ABI_CWindows_CUI_CCore_CICoreWindow * coreWindow,
        /* [retval, out] */__x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridge * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactoryVtbl;

interface __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory_CreateInstance(This,compositor,coreWindow,value) \
    ( (This)->lpVtbl->CreateInstance(This,compositor,coreWindow,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory;
#endif /* !defined(____x_Microsoft_CUI_CInput_CICoreWindowLiftedContentBridgeFactory_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IDesktopWindowLiftedContentBridge
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.DesktopWindowLiftedContentBridge
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IDesktopWindowLiftedContentBridge[] = L"Microsoft.UI.Input.IDesktopWindowLiftedContentBridge";
/* [object, uuid("181527F2-756D-5B61-9420-0E6485581111"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppliedScaleFactor )(
        __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CompositionIsland )(
        __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CIVisualTreeIsland * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HwndAsWindowId )(
        __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge * This,
        /* [retval, out] */UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InputSite )(
        __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge * This,
        /* [retval, out] */__x_Microsoft_CUI_CInput_CIInputSite * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ScaleFactor )(
        __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge * This,
        /* [retval, out] */FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ScaleFactor )(
        __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge * This,
        /* [in] */FLOAT value
        );
    HRESULT ( STDMETHODCALLTYPE *Activate )(
        __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge * This,
        /* [in] */boolean active
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeVtbl;

interface __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge_get_AppliedScaleFactor(This,value) \
    ( (This)->lpVtbl->get_AppliedScaleFactor(This,value) )

#define __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge_get_CompositionIsland(This,value) \
    ( (This)->lpVtbl->get_CompositionIsland(This,value) )

#define __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge_get_HwndAsWindowId(This,value) \
    ( (This)->lpVtbl->get_HwndAsWindowId(This,value) )

#define __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge_get_InputSite(This,value) \
    ( (This)->lpVtbl->get_InputSite(This,value) )

#define __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge_get_ScaleFactor(This,value) \
    ( (This)->lpVtbl->get_ScaleFactor(This,value) )

#define __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge_put_ScaleFactor(This,value) \
    ( (This)->lpVtbl->put_ScaleFactor(This,value) )

#define __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge_Activate(This,active) \
    ( (This)->lpVtbl->Activate(This,active) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IDesktopWindowLiftedContentBridgeFactory
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.DesktopWindowLiftedContentBridge
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IDesktopWindowLiftedContentBridgeFactory[] = L"Microsoft.UI.Input.IDesktopWindowLiftedContentBridgeFactory";
/* [object, uuid("FCDDA493-1AB9-5E0C-945E-E55D218A6588"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CICompositor * compositor,
        /* [in] */UINT64 parentHwndAsWindowId,
        /* [retval, out] */__x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridge * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactoryVtbl;

interface __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory_CreateInstance(This,compositor,parentHwndAsWindowId,value) \
    ( (This)->lpVtbl->CreateInstance(This,compositor,parentHwndAsWindowId,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIDesktopWindowLiftedContentBridgeFactory_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IFocusChangedEventArgs
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.FocusChangedEventArgs
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIFocusChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIFocusChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IFocusChangedEventArgs[] = L"Microsoft.UI.Input.IFocusChangedEventArgs";
/* [object, uuid("69F37917-DB62-535C-9BD5-4A8298AC1B39"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CIFocusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CIFocusChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CIFocusChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CIFocusChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CIFocusChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CIFocusChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CIFocusChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Direction )(
        __x_Microsoft_CUI_CInput_CIFocusChangedEventArgs * This,
        /* [retval, out] */__x_Microsoft_CUI_CInput_CFocusChangedDirection * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CIFocusChangedEventArgsVtbl;

interface __x_Microsoft_CUI_CInput_CIFocusChangedEventArgs
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CIFocusChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CIFocusChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CIFocusChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CIFocusChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CIFocusChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CIFocusChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CIFocusChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CInput_CIFocusChangedEventArgs_get_Direction(This,value) \
    ( (This)->lpVtbl->get_Direction(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIFocusChangedEventArgs;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIFocusChangedEventArgs_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IFocusController
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.FocusController
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIFocusController_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIFocusController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IFocusController[] = L"Microsoft.UI.Input.IFocusController";
/* [object, uuid("443CDE2A-33D2-5FA9-8CB4-2BEA8978399A"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CIFocusControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CIFocusController * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CIFocusController * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CIFocusController * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CIFocusController * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CIFocusController * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CIFocusController * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TrySetFocus )(
        __x_Microsoft_CUI_CInput_CIFocusController * This,
        /* [retval, out] */boolean * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasFocus )(
        __x_Microsoft_CUI_CInput_CIFocusController * This,
        /* [retval, out] */boolean * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CIFocusControllerVtbl;

interface __x_Microsoft_CUI_CInput_CIFocusController
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CIFocusControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CIFocusController_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CIFocusController_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CIFocusController_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CIFocusController_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CIFocusController_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CIFocusController_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CInput_CIFocusController_TrySetFocus(This,result) \
    ( (This)->lpVtbl->TrySetFocus(This,result) )

#define __x_Microsoft_CUI_CInput_CIFocusController_get_HasFocus(This,value) \
    ( (This)->lpVtbl->get_HasFocus(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIFocusController;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIFocusController_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IFocusControllerStatics
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.FocusController
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIFocusControllerStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIFocusControllerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IFocusControllerStatics[] = L"Microsoft.UI.Input.IFocusControllerStatics";
/* [object, uuid("D40BF5B9-62C7-5BAD-8859-6DCD62CDCEDB"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CIFocusControllerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CIFocusControllerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CIFocusControllerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CIFocusControllerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CIFocusControllerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CIFocusControllerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CIFocusControllerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForInputSite )(
        __x_Microsoft_CUI_CInput_CIFocusControllerStatics * This,
        /* [in] */__x_Microsoft_CUI_CInput_CIInputSite * inputSite,
        /* [retval, out] */__x_Microsoft_CUI_CInput_CIFocusController * * result
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CIFocusControllerStaticsVtbl;

interface __x_Microsoft_CUI_CInput_CIFocusControllerStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CIFocusControllerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CIFocusControllerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CIFocusControllerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CIFocusControllerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CIFocusControllerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CIFocusControllerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CIFocusControllerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CInput_CIFocusControllerStatics_GetForInputSite(This,inputSite,result) \
    ( (This)->lpVtbl->GetForInputSite(This,inputSite,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIFocusControllerStatics;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIFocusControllerStatics_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IFocusObserver
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.FocusObserver
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIFocusObserver_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIFocusObserver_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IFocusObserver[] = L"Microsoft.UI.Input.IFocusObserver";
/* [object, uuid("93EC6858-E99B-5E80-A6CA-FD705FDC4E31"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CIFocusObserverVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CIFocusObserver * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CIFocusObserver * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CIFocusObserver * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CIFocusObserver * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CIFocusObserver * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CIFocusObserver * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasFocus )(
        __x_Microsoft_CUI_CInput_CIFocusObserver * This,
        /* [retval, out] */boolean * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_GotFocus )(
        __x_Microsoft_CUI_CInput_CIFocusObserver * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CFocusObserver_Microsoft__CUI__CInput__CFocusChangedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_GotFocus )(
        __x_Microsoft_CUI_CInput_CIFocusObserver * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_LostFocus )(
        __x_Microsoft_CUI_CInput_CIFocusObserver * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CFocusObserver_Microsoft__CUI__CInput__CFocusChangedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_LostFocus )(
        __x_Microsoft_CUI_CInput_CIFocusObserver * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CIFocusObserverVtbl;

interface __x_Microsoft_CUI_CInput_CIFocusObserver
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CIFocusObserverVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CIFocusObserver_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CIFocusObserver_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CIFocusObserver_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CIFocusObserver_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CIFocusObserver_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CIFocusObserver_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CInput_CIFocusObserver_get_HasFocus(This,value) \
    ( (This)->lpVtbl->get_HasFocus(This,value) )

#define __x_Microsoft_CUI_CInput_CIFocusObserver_add_GotFocus(This,handler,token) \
    ( (This)->lpVtbl->add_GotFocus(This,handler,token) )

#define __x_Microsoft_CUI_CInput_CIFocusObserver_remove_GotFocus(This,token) \
    ( (This)->lpVtbl->remove_GotFocus(This,token) )

#define __x_Microsoft_CUI_CInput_CIFocusObserver_add_LostFocus(This,handler,token) \
    ( (This)->lpVtbl->add_LostFocus(This,handler,token) )

#define __x_Microsoft_CUI_CInput_CIFocusObserver_remove_LostFocus(This,token) \
    ( (This)->lpVtbl->remove_LostFocus(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIFocusObserver;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIFocusObserver_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IFocusObserverFactory
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.FocusObserver
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIFocusObserverFactory_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIFocusObserverFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IFocusObserverFactory[] = L"Microsoft.UI.Input.IFocusObserverFactory";
/* [object, uuid("922AFDFE-99A1-5C98-8840-801E28C3D750"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CIFocusObserverFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CIFocusObserverFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CIFocusObserverFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CIFocusObserverFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CIFocusObserverFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CIFocusObserverFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CIFocusObserverFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_Microsoft_CUI_CInput_CIFocusObserverFactory * This,
        /* [in] */__x_Microsoft_CUI_CInput_CIInputSite * inputSite,
        /* [retval, out] */__x_Microsoft_CUI_CInput_CIFocusObserver * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CIFocusObserverFactoryVtbl;

interface __x_Microsoft_CUI_CInput_CIFocusObserverFactory
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CIFocusObserverFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CIFocusObserverFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CIFocusObserverFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CIFocusObserverFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CIFocusObserverFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CIFocusObserverFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CIFocusObserverFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CInput_CIFocusObserverFactory_CreateInstance(This,inputSite,value) \
    ( (This)->lpVtbl->CreateInstance(This,inputSite,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIFocusObserverFactory;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIFocusObserverFactory_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IInputActivationListener
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 8.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputActivationListener
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIInputActivationListener_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIInputActivationListener_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputActivationListener[] = L"Microsoft.UI.Input.IInputActivationListener";
/* [object, uuid("3B818627-6CE7-5E0D-A0F5-6684FD1AEC78"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CIInputActivationListenerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputActivationListener * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputActivationListener * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputActivationListener * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputActivationListener * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputActivationListener * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputActivationListener * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_Microsoft_CUI_CInput_CIInputActivationListener * This,
        /* [retval, out] */__x_Microsoft_CUI_CInput_CInputActivationState * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_InputActivationChanged )(
        __x_Microsoft_CUI_CInput_CIInputActivationListener * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_InputActivationChanged )(
        __x_Microsoft_CUI_CInput_CIInputActivationListener * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CIInputActivationListenerVtbl;

interface __x_Microsoft_CUI_CInput_CIInputActivationListener
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CIInputActivationListenerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CIInputActivationListener_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CIInputActivationListener_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CIInputActivationListener_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CIInputActivationListener_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CIInputActivationListener_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CIInputActivationListener_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CInput_CIInputActivationListener_get_State(This,value) \
    ( (This)->lpVtbl->get_State(This,value) )

#define __x_Microsoft_CUI_CInput_CIInputActivationListener_add_InputActivationChanged(This,handler,token) \
    ( (This)->lpVtbl->add_InputActivationChanged(This,handler,token) )

#define __x_Microsoft_CUI_CInput_CIInputActivationListener_remove_InputActivationChanged(This,token) \
    ( (This)->lpVtbl->remove_InputActivationChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIInputActivationListener;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIInputActivationListener_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


/*
 *
 * Interface Microsoft.UI.Input.IInputActivationListenerActivationChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 8.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputActivationListenerActivationChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputActivationListenerActivationChangedEventArgs[] = L"Microsoft.UI.Input.IInputActivationListenerActivationChangedEventArgs";
/* [object, uuid("381FCCE4-4C82-5CDF-B3AA-57A4276C1BEB"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs * This,
        /* [retval, out] */__x_Microsoft_CUI_CInput_CInputActivationState * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgsVtbl;

interface __x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_get_State(This,value) \
    ( (This)->lpVtbl->get_State(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


/*
 *
 * Interface Microsoft.UI.Input.IInputActivationListenerPartnerStatics
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputActivationListenerPartner
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputActivationListenerPartnerStatics[] = L"Microsoft.UI.Input.IInputActivationListenerPartnerStatics";
/* [object, uuid("C96DEF7F-201F-518B-9DAB-9F0F5DCF8730"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForInputSite )(
        __x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics * This,
        /* [in] */__x_Microsoft_CUI_CInput_CIInputSite * inputSite,
        /* [retval, out] */IInspectable * * result
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStaticsVtbl;

interface __x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics_GetForInputSite(This,inputSite,result) \
    ( (This)->lpVtbl->GetForInputSite(This,inputSite,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIInputActivationListenerPartnerStatics_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IInputObjectPartner
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputObjectPartner
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIInputObjectPartner_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIInputObjectPartner_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputObjectPartner[] = L"Microsoft.UI.Input.IInputObjectPartner";
/* [object, uuid("E8B4EEF6-932B-5DF4-B1AB-51D41EA33FE7"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CIInputObjectPartnerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputObjectPartner * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputObjectPartner * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputObjectPartner * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputObjectPartner * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputObjectPartner * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputObjectPartner * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InputSite )(
        __x_Microsoft_CUI_CInput_CIInputObjectPartner * This,
        /* [retval, out] */__x_Microsoft_CUI_CInput_CIInputSite * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DispatcherQueue )(
        __x_Microsoft_CUI_CInput_CIInputObjectPartner * This,
        /* [retval, out] */__x_Microsoft_CSystem_CIDispatcherQueue * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CIInputObjectPartnerVtbl;

interface __x_Microsoft_CUI_CInput_CIInputObjectPartner
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CIInputObjectPartnerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CIInputObjectPartner_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CIInputObjectPartner_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CIInputObjectPartner_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CIInputObjectPartner_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CIInputObjectPartner_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CIInputObjectPartner_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CInput_CIInputObjectPartner_get_InputSite(This,value) \
    ( (This)->lpVtbl->get_InputSite(This,value) )

#define __x_Microsoft_CUI_CInput_CIInputObjectPartner_get_DispatcherQueue(This,value) \
    ( (This)->lpVtbl->get_DispatcherQueue(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIInputObjectPartner;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIInputObjectPartner_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IInputObjectPartnerFactory
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputObjectPartner
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIInputObjectPartnerFactory_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIInputObjectPartnerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputObjectPartnerFactory[] = L"Microsoft.UI.Input.IInputObjectPartnerFactory";
/* [object, uuid("5C0D1330-E1B1-5449-AC76-1113D7791833"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CIInputObjectPartnerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputObjectPartnerFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputObjectPartnerFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputObjectPartnerFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputObjectPartnerFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputObjectPartnerFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputObjectPartnerFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CIInputObjectPartnerFactoryVtbl;

interface __x_Microsoft_CUI_CInput_CIInputObjectPartnerFactory
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CIInputObjectPartnerFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CIInputObjectPartnerFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CIInputObjectPartnerFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CIInputObjectPartnerFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CIInputObjectPartnerFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CIInputObjectPartnerFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CIInputObjectPartnerFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIInputObjectPartnerFactory;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIInputObjectPartnerFactory_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IInputSite
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputSite
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIInputSite_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIInputSite_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputSite[] = L"Microsoft.UI.Input.IInputSite";
/* [object, uuid("1C75759C-DE25-5BEB-B4CF-8C82909F3833"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CIInputSiteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputSite * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputSite * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputSite * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputSite * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputSite * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputSite * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CIInputSiteVtbl;

interface __x_Microsoft_CUI_CInput_CIInputSite
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CIInputSiteVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CIInputSite_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CIInputSite_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CIInputSite_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CIInputSite_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CIInputSite_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CIInputSite_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIInputSite;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIInputSite_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IInputSiteStatics
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputSite
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIInputSiteStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIInputSiteStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputSiteStatics[] = L"Microsoft.UI.Input.IInputSiteStatics";
/* [object, uuid("154D4A56-4AA0-5EE5-823C-02A8DD38EF05"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CIInputSiteStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputSiteStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputSiteStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputSiteStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputSiteStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputSiteStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CIInputSiteStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForVisual )(
        __x_Microsoft_CUI_CInput_CIInputSiteStatics * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CIVisual * visual,
        /* [retval, out] */__x_Microsoft_CUI_CInput_CIInputSite * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetForHwnd )(
        __x_Microsoft_CUI_CInput_CIInputSiteStatics * This,
        /* [in] */UINT64 hwndAsUInt64,
        /* [retval, out] */__x_Microsoft_CUI_CInput_CIInputSite * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateForIslandSite )(
        __x_Microsoft_CUI_CInput_CIInputSiteStatics * This,
        /* [in] */IInspectable * visualIslandSite,
        /* [in] */__x_Microsoft_CUI_CInput_CInputSiteForIslandSiteConfiguration configuration,
        /* [retval, out] */__x_Microsoft_CUI_CInput_CIInputSite * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetOrCreateForIsland )(
        __x_Microsoft_CUI_CInput_CIInputSiteStatics * This,
        /* [in] */IInspectable * visualTreeIsland,
        /* [retval, out] */__x_Microsoft_CUI_CInput_CIInputSite * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ConnectIsland )(
        __x_Microsoft_CUI_CInput_CIInputSiteStatics * This,
        /* [in] */__x_Microsoft_CUI_CInput_CIInputSite * islandSiteInputSite,
        /* [in] */__x_Microsoft_CUI_CInput_CIInputSite * islandInputSite
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CIInputSiteStaticsVtbl;

interface __x_Microsoft_CUI_CInput_CIInputSiteStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CIInputSiteStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CIInputSiteStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CIInputSiteStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CIInputSiteStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CIInputSiteStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CIInputSiteStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CIInputSiteStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CInput_CIInputSiteStatics_GetForVisual(This,visual,result) \
    ( (This)->lpVtbl->GetForVisual(This,visual,result) )

#define __x_Microsoft_CUI_CInput_CIInputSiteStatics_GetForHwnd(This,hwndAsUInt64,result) \
    ( (This)->lpVtbl->GetForHwnd(This,hwndAsUInt64,result) )

#define __x_Microsoft_CUI_CInput_CIInputSiteStatics_CreateForIslandSite(This,visualIslandSite,configuration,result) \
    ( (This)->lpVtbl->CreateForIslandSite(This,visualIslandSite,configuration,result) )

#define __x_Microsoft_CUI_CInput_CIInputSiteStatics_GetOrCreateForIsland(This,visualTreeIsland,result) \
    ( (This)->lpVtbl->GetOrCreateForIsland(This,visualTreeIsland,result) )

#define __x_Microsoft_CUI_CInput_CIInputSiteStatics_ConnectIsland(This,islandSiteInputSite,islandInputSite) \
    ( (This)->lpVtbl->ConnectIsland(This,islandSiteInputSite,islandInputSite) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIInputSiteStatics;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIInputSiteStatics_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IKeyboardInput
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.KeyboardInput
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIKeyboardInput_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIKeyboardInput_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IKeyboardInput[] = L"Microsoft.UI.Input.IKeyboardInput";
/* [object, uuid("A174DE40-8A3D-529D-9EDF-07EF7F5483C4"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CIKeyboardInputVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CIKeyboardInput * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CIKeyboardInput * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CIKeyboardInput * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CIKeyboardInput * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CIKeyboardInput * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CIKeyboardInput * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetKeyState )(
        __x_Microsoft_CUI_CInput_CIKeyboardInput * This,
        /* [in] */__x_ABI_CWindows_CSystem_CVirtualKey virtualKey,
        /* [retval, out] */__x_ABI_CWindows_CUI_CCore_CCoreVirtualKeyStates * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentKeyState )(
        __x_Microsoft_CUI_CInput_CIKeyboardInput * This,
        /* [in] */__x_ABI_CWindows_CSystem_CVirtualKey virtualKey,
        /* [retval, out] */__x_ABI_CWindows_CUI_CCore_CCoreVirtualKeyStates * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrentKeyEventDeviceId )(
        __x_Microsoft_CUI_CInput_CIKeyboardInput * This,
        /* [retval, out] */HSTRING * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_AcceleratorKeyActivated )(
        __x_Microsoft_CUI_CInput_CIKeyboardInput * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CAcceleratorKeyEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_AcceleratorKeyActivated )(
        __x_Microsoft_CUI_CInput_CIKeyboardInput * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CharacterReceived )(
        __x_Microsoft_CUI_CInput_CIKeyboardInput * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CCharacterReceivedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CharacterReceived )(
        __x_Microsoft_CUI_CInput_CIKeyboardInput * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_KeyDown )(
        __x_Microsoft_CUI_CInput_CIKeyboardInput * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_KeyDown )(
        __x_Microsoft_CUI_CInput_CIKeyboardInput * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_KeyUp )(
        __x_Microsoft_CUI_CInput_CIKeyboardInput * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_KeyUp )(
        __x_Microsoft_CUI_CInput_CIKeyboardInput * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_SysKeyDown )(
        __x_Microsoft_CUI_CInput_CIKeyboardInput * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_SysKeyDown )(
        __x_Microsoft_CUI_CInput_CIKeyboardInput * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_SysKeyUp )(
        __x_Microsoft_CUI_CInput_CIKeyboardInput * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Windows__CUI__CCore__CKeyEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_SysKeyUp )(
        __x_Microsoft_CUI_CInput_CIKeyboardInput * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ContextMenuKey )(
        __x_Microsoft_CUI_CInput_CIKeyboardInput * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CKeyboardInput_Microsoft__CUI__CInput__CContextMenuKeyEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ContextMenuKey )(
        __x_Microsoft_CUI_CInput_CIKeyboardInput * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CIKeyboardInputVtbl;

interface __x_Microsoft_CUI_CInput_CIKeyboardInput
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CIKeyboardInputVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CIKeyboardInput_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CIKeyboardInput_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CIKeyboardInput_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CIKeyboardInput_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CIKeyboardInput_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CIKeyboardInput_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CInput_CIKeyboardInput_GetKeyState(This,virtualKey,result) \
    ( (This)->lpVtbl->GetKeyState(This,virtualKey,result) )

#define __x_Microsoft_CUI_CInput_CIKeyboardInput_GetCurrentKeyState(This,virtualKey,result) \
    ( (This)->lpVtbl->GetCurrentKeyState(This,virtualKey,result) )

#define __x_Microsoft_CUI_CInput_CIKeyboardInput_get_CurrentKeyEventDeviceId(This,value) \
    ( (This)->lpVtbl->get_CurrentKeyEventDeviceId(This,value) )

#define __x_Microsoft_CUI_CInput_CIKeyboardInput_add_AcceleratorKeyActivated(This,handler,token) \
    ( (This)->lpVtbl->add_AcceleratorKeyActivated(This,handler,token) )

#define __x_Microsoft_CUI_CInput_CIKeyboardInput_remove_AcceleratorKeyActivated(This,token) \
    ( (This)->lpVtbl->remove_AcceleratorKeyActivated(This,token) )

#define __x_Microsoft_CUI_CInput_CIKeyboardInput_add_CharacterReceived(This,handler,token) \
    ( (This)->lpVtbl->add_CharacterReceived(This,handler,token) )

#define __x_Microsoft_CUI_CInput_CIKeyboardInput_remove_CharacterReceived(This,token) \
    ( (This)->lpVtbl->remove_CharacterReceived(This,token) )

#define __x_Microsoft_CUI_CInput_CIKeyboardInput_add_KeyDown(This,handler,token) \
    ( (This)->lpVtbl->add_KeyDown(This,handler,token) )

#define __x_Microsoft_CUI_CInput_CIKeyboardInput_remove_KeyDown(This,token) \
    ( (This)->lpVtbl->remove_KeyDown(This,token) )

#define __x_Microsoft_CUI_CInput_CIKeyboardInput_add_KeyUp(This,handler,token) \
    ( (This)->lpVtbl->add_KeyUp(This,handler,token) )

#define __x_Microsoft_CUI_CInput_CIKeyboardInput_remove_KeyUp(This,token) \
    ( (This)->lpVtbl->remove_KeyUp(This,token) )

#define __x_Microsoft_CUI_CInput_CIKeyboardInput_add_SysKeyDown(This,handler,token) \
    ( (This)->lpVtbl->add_SysKeyDown(This,handler,token) )

#define __x_Microsoft_CUI_CInput_CIKeyboardInput_remove_SysKeyDown(This,token) \
    ( (This)->lpVtbl->remove_SysKeyDown(This,token) )

#define __x_Microsoft_CUI_CInput_CIKeyboardInput_add_SysKeyUp(This,handler,token) \
    ( (This)->lpVtbl->add_SysKeyUp(This,handler,token) )

#define __x_Microsoft_CUI_CInput_CIKeyboardInput_remove_SysKeyUp(This,token) \
    ( (This)->lpVtbl->remove_SysKeyUp(This,token) )

#define __x_Microsoft_CUI_CInput_CIKeyboardInput_add_ContextMenuKey(This,handler,token) \
    ( (This)->lpVtbl->add_ContextMenuKey(This,handler,token) )

#define __x_Microsoft_CUI_CInput_CIKeyboardInput_remove_ContextMenuKey(This,token) \
    ( (This)->lpVtbl->remove_ContextMenuKey(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIKeyboardInput;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIKeyboardInput_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IKeyboardInputStatics
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.KeyboardInput
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIKeyboardInputStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIKeyboardInputStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IKeyboardInputStatics[] = L"Microsoft.UI.Input.IKeyboardInputStatics";
/* [object, uuid("3E2D115C-410F-5476-89F6-35693287CE01"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CIKeyboardInputStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CIKeyboardInputStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CIKeyboardInputStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CIKeyboardInputStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CIKeyboardInputStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CIKeyboardInputStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CIKeyboardInputStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForInputSite )(
        __x_Microsoft_CUI_CInput_CIKeyboardInputStatics * This,
        /* [in] */__x_Microsoft_CUI_CInput_CIInputSite * inputSite,
        /* [retval, out] */__x_Microsoft_CUI_CInput_CIKeyboardInput * * result
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CIKeyboardInputStaticsVtbl;

interface __x_Microsoft_CUI_CInput_CIKeyboardInputStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CIKeyboardInputStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CIKeyboardInputStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CIKeyboardInputStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CIKeyboardInputStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CIKeyboardInputStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CIKeyboardInputStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CIKeyboardInputStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CInput_CIKeyboardInputStatics_GetForInputSite(This,inputSite,result) \
    ( (This)->lpVtbl->GetForInputSite(This,inputSite,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIKeyboardInputStatics;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIKeyboardInputStatics_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IMouseCapture
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.MouseCapture
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIMouseCapture_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIMouseCapture_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IMouseCapture[] = L"Microsoft.UI.Input.IMouseCapture";
/* [object, uuid("3ED55268-E63E-5756-999D-0ACB7B39331D"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CIMouseCaptureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CIMouseCapture * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CIMouseCapture * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CIMouseCapture * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CIMouseCapture * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CIMouseCapture * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CIMouseCapture * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TrySetCapture )(
        __x_Microsoft_CUI_CInput_CIMouseCapture * This,
        /* [retval, out] */boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryReleaseCapture )(
        __x_Microsoft_CUI_CInput_CIMouseCapture * This,
        /* [retval, out] */boolean * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasCapture )(
        __x_Microsoft_CUI_CInput_CIMouseCapture * This,
        /* [retval, out] */boolean * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CIMouseCaptureVtbl;

interface __x_Microsoft_CUI_CInput_CIMouseCapture
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CIMouseCaptureVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CIMouseCapture_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CIMouseCapture_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CIMouseCapture_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CIMouseCapture_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CIMouseCapture_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CIMouseCapture_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CInput_CIMouseCapture_TrySetCapture(This,result) \
    ( (This)->lpVtbl->TrySetCapture(This,result) )

#define __x_Microsoft_CUI_CInput_CIMouseCapture_TryReleaseCapture(This,result) \
    ( (This)->lpVtbl->TryReleaseCapture(This,result) )

#define __x_Microsoft_CUI_CInput_CIMouseCapture_get_HasCapture(This,value) \
    ( (This)->lpVtbl->get_HasCapture(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIMouseCapture;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIMouseCapture_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IMouseCaptureStatics
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.MouseCapture
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIMouseCaptureStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIMouseCaptureStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IMouseCaptureStatics[] = L"Microsoft.UI.Input.IMouseCaptureStatics";
/* [object, uuid("B3EEB519-9B27-586E-B3DB-B8B948FE680B"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CIMouseCaptureStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CIMouseCaptureStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CIMouseCaptureStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CIMouseCaptureStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CIMouseCaptureStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CIMouseCaptureStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CIMouseCaptureStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForInputSite )(
        __x_Microsoft_CUI_CInput_CIMouseCaptureStatics * This,
        /* [in] */__x_Microsoft_CUI_CInput_CIInputSite * inputSite,
        /* [retval, out] */__x_Microsoft_CUI_CInput_CIMouseCapture * * result
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CIMouseCaptureStaticsVtbl;

interface __x_Microsoft_CUI_CInput_CIMouseCaptureStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CIMouseCaptureStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CIMouseCaptureStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CIMouseCaptureStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CIMouseCaptureStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CIMouseCaptureStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CIMouseCaptureStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CIMouseCaptureStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CInput_CIMouseCaptureStatics_GetForInputSite(This,inputSite,result) \
    ( (This)->lpVtbl->GetForInputSite(This,inputSite,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIMouseCaptureStatics;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIMouseCaptureStatics_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IPointerCursorController
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.PointerCursorController
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIPointerCursorController_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIPointerCursorController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IPointerCursorController[] = L"Microsoft.UI.Input.IPointerCursorController";
/* [object, uuid("959ABC0B-D3CA-56E9-ACED-DE1DF6029C2A"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CIPointerCursorControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CIPointerCursorController * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CIPointerCursorController * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CIPointerCursorController * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CIPointerCursorController * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CIPointerCursorController * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CIPointerCursorController * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_Microsoft_CUI_CInput_CIPointerCursorController * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Cursor )(
        __x_Microsoft_CUI_CInput_CIPointerCursorController * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CCore_CICoreCursor * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Cursor )(
        __x_Microsoft_CUI_CInput_CIPointerCursorController * This,
        /* [in] */__x_ABI_CWindows_CUI_CCore_CICoreCursor * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CIPointerCursorControllerVtbl;

interface __x_Microsoft_CUI_CInput_CIPointerCursorController
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CIPointerCursorControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CIPointerCursorController_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CIPointerCursorController_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CIPointerCursorController_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CIPointerCursorController_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CIPointerCursorController_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CIPointerCursorController_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CInput_CIPointerCursorController_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_Microsoft_CUI_CInput_CIPointerCursorController_get_Cursor(This,value) \
    ( (This)->lpVtbl->get_Cursor(This,value) )

#define __x_Microsoft_CUI_CInput_CIPointerCursorController_put_Cursor(This,value) \
    ( (This)->lpVtbl->put_Cursor(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIPointerCursorController;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIPointerCursorController_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IPointerCursorControllerStatics
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.PointerCursorController
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IPointerCursorControllerStatics[] = L"Microsoft.UI.Input.IPointerCursorControllerStatics";
/* [object, uuid("45CA99A8-7B4B-585C-80C6-4B7C261E4DAD"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CIPointerCursorControllerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForInputSite )(
        __x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics * This,
        /* [in] */__x_Microsoft_CUI_CInput_CIInputSite * inputSite,
        /* [retval, out] */__x_Microsoft_CUI_CInput_CIPointerCursorController * * result
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CIPointerCursorControllerStaticsVtbl;

interface __x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CIPointerCursorControllerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics_GetForInputSite(This,inputSite,result) \
    ( (This)->lpVtbl->GetForInputSite(This,inputSite,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIPointerCursorControllerStatics_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IPointerInputObserver
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.PointerInputObserver
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIPointerInputObserver_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIPointerInputObserver_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IPointerInputObserver[] = L"Microsoft.UI.Input.IPointerInputObserver";
/* [object, uuid("09A750C3-F303-573D-B6E0-0FDFD705DD86"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CIPointerInputObserverVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CIPointerInputObserver * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CIPointerInputObserver * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CIPointerInputObserver * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CIPointerInputObserver * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CIPointerInputObserver * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CIPointerInputObserver * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerCaptureLost )(
        __x_Microsoft_CUI_CInput_CIPointerInputObserver * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerCaptureLost )(
        __x_Microsoft_CUI_CInput_CIPointerInputObserver * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerEntered )(
        __x_Microsoft_CUI_CInput_CIPointerInputObserver * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerEntered )(
        __x_Microsoft_CUI_CInput_CIPointerInputObserver * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerExited )(
        __x_Microsoft_CUI_CInput_CIPointerInputObserver * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerExited )(
        __x_Microsoft_CUI_CInput_CIPointerInputObserver * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerMoved )(
        __x_Microsoft_CUI_CInput_CIPointerInputObserver * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerMoved )(
        __x_Microsoft_CUI_CInput_CIPointerInputObserver * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerPressed )(
        __x_Microsoft_CUI_CInput_CIPointerInputObserver * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerPressed )(
        __x_Microsoft_CUI_CInput_CIPointerInputObserver * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerReleased )(
        __x_Microsoft_CUI_CInput_CIPointerInputObserver * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerReleased )(
        __x_Microsoft_CUI_CInput_CIPointerInputObserver * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerRoutedAway )(
        __x_Microsoft_CUI_CInput_CIPointerInputObserver * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerRoutedAway )(
        __x_Microsoft_CUI_CInput_CIPointerInputObserver * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerRoutedReleased )(
        __x_Microsoft_CUI_CInput_CIPointerInputObserver * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerRoutedReleased )(
        __x_Microsoft_CUI_CInput_CIPointerInputObserver * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerRoutedTo )(
        __x_Microsoft_CUI_CInput_CIPointerInputObserver * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerRoutedTo )(
        __x_Microsoft_CUI_CInput_CIPointerInputObserver * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerWheelChanged )(
        __x_Microsoft_CUI_CInput_CIPointerInputObserver * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CPointerInputObserver_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerWheelChanged )(
        __x_Microsoft_CUI_CInput_CIPointerInputObserver * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CIPointerInputObserverVtbl;

interface __x_Microsoft_CUI_CInput_CIPointerInputObserver
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CIPointerInputObserverVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CIPointerInputObserver_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserver_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserver_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserver_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserver_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserver_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserver_add_PointerCaptureLost(This,handler,token) \
    ( (This)->lpVtbl->add_PointerCaptureLost(This,handler,token) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserver_remove_PointerCaptureLost(This,token) \
    ( (This)->lpVtbl->remove_PointerCaptureLost(This,token) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserver_add_PointerEntered(This,handler,token) \
    ( (This)->lpVtbl->add_PointerEntered(This,handler,token) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserver_remove_PointerEntered(This,token) \
    ( (This)->lpVtbl->remove_PointerEntered(This,token) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserver_add_PointerExited(This,handler,token) \
    ( (This)->lpVtbl->add_PointerExited(This,handler,token) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserver_remove_PointerExited(This,token) \
    ( (This)->lpVtbl->remove_PointerExited(This,token) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserver_add_PointerMoved(This,handler,token) \
    ( (This)->lpVtbl->add_PointerMoved(This,handler,token) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserver_remove_PointerMoved(This,token) \
    ( (This)->lpVtbl->remove_PointerMoved(This,token) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserver_add_PointerPressed(This,handler,token) \
    ( (This)->lpVtbl->add_PointerPressed(This,handler,token) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserver_remove_PointerPressed(This,token) \
    ( (This)->lpVtbl->remove_PointerPressed(This,token) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserver_add_PointerReleased(This,handler,token) \
    ( (This)->lpVtbl->add_PointerReleased(This,handler,token) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserver_remove_PointerReleased(This,token) \
    ( (This)->lpVtbl->remove_PointerReleased(This,token) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserver_add_PointerRoutedAway(This,handler,token) \
    ( (This)->lpVtbl->add_PointerRoutedAway(This,handler,token) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserver_remove_PointerRoutedAway(This,token) \
    ( (This)->lpVtbl->remove_PointerRoutedAway(This,token) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserver_add_PointerRoutedReleased(This,handler,token) \
    ( (This)->lpVtbl->add_PointerRoutedReleased(This,handler,token) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserver_remove_PointerRoutedReleased(This,token) \
    ( (This)->lpVtbl->remove_PointerRoutedReleased(This,token) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserver_add_PointerRoutedTo(This,handler,token) \
    ( (This)->lpVtbl->add_PointerRoutedTo(This,handler,token) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserver_remove_PointerRoutedTo(This,token) \
    ( (This)->lpVtbl->remove_PointerRoutedTo(This,token) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserver_add_PointerWheelChanged(This,handler,token) \
    ( (This)->lpVtbl->add_PointerWheelChanged(This,handler,token) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserver_remove_PointerWheelChanged(This,token) \
    ( (This)->lpVtbl->remove_PointerWheelChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIPointerInputObserver;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIPointerInputObserver_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IPointerInputObserverFactory
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.PointerInputObserver
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIPointerInputObserverFactory_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIPointerInputObserverFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IPointerInputObserverFactory[] = L"Microsoft.UI.Input.IPointerInputObserverFactory";
/* [object, uuid("C2FD90C9-DD14-554D-85E5-FA265FB73445"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CIPointerInputObserverFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CIPointerInputObserverFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CIPointerInputObserverFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CIPointerInputObserverFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CIPointerInputObserverFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CIPointerInputObserverFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CIPointerInputObserverFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_Microsoft_CUI_CInput_CIPointerInputObserverFactory * This,
        /* [in] */__x_Microsoft_CUI_CInput_CIInputSite * site,
        /* [retval, out] */__x_Microsoft_CUI_CInput_CIPointerInputObserver * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CIPointerInputObserverFactoryVtbl;

interface __x_Microsoft_CUI_CInput_CIPointerInputObserverFactory
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CIPointerInputObserverFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CIPointerInputObserverFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserverFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserverFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserverFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserverFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserverFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CInput_CIPointerInputObserverFactory_CreateInstance(This,site,value) \
    ( (This)->lpVtbl->CreateInstance(This,site,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIPointerInputObserverFactory;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIPointerInputObserverFactory_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.ITouchHitTestingProvider
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.TouchHitTestingProvider
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CITouchHitTestingProvider_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CITouchHitTestingProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_ITouchHitTestingProvider[] = L"Microsoft.UI.Input.ITouchHitTestingProvider";
/* [object, uuid("444B83DA-7A58-5BFD-A157-9F27ECB2BE60"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CITouchHitTestingProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CITouchHitTestingProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CITouchHitTestingProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CITouchHitTestingProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CITouchHitTestingProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CITouchHitTestingProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CITouchHitTestingProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_TouchHitTestRequested )(
        __x_Microsoft_CUI_CInput_CITouchHitTestingProvider * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CInput__CTouchHitTestingProvider_Windows__CUI__CCore__CTouchHitTestingEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_TouchHitTestRequested )(
        __x_Microsoft_CUI_CInput_CITouchHitTestingProvider * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CITouchHitTestingProviderVtbl;

interface __x_Microsoft_CUI_CInput_CITouchHitTestingProvider
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CITouchHitTestingProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CITouchHitTestingProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CITouchHitTestingProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CITouchHitTestingProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CITouchHitTestingProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CITouchHitTestingProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CITouchHitTestingProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CInput_CITouchHitTestingProvider_add_TouchHitTestRequested(This,handler,token) \
    ( (This)->lpVtbl->add_TouchHitTestRequested(This,handler,token) )

#define __x_Microsoft_CUI_CInput_CITouchHitTestingProvider_remove_TouchHitTestRequested(This,token) \
    ( (This)->lpVtbl->remove_TouchHitTestRequested(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CITouchHitTestingProvider;
#endif /* !defined(____x_Microsoft_CUI_CInput_CITouchHitTestingProvider_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.ITouchHitTestingProviderStatics
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.TouchHitTestingProvider
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_ITouchHitTestingProviderStatics[] = L"Microsoft.UI.Input.ITouchHitTestingProviderStatics";
/* [object, uuid("4D586F2A-8CD2-5D01-80E9-0D7D8BCEEB62"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CITouchHitTestingProviderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForInputSite )(
        __x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics * This,
        /* [in] */__x_Microsoft_CUI_CInput_CIInputSite * inputSite,
        /* [retval, out] */__x_Microsoft_CUI_CInput_CITouchHitTestingProvider * * result
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CITouchHitTestingProviderStaticsVtbl;

interface __x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CITouchHitTestingProviderStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics_GetForInputSite(This,inputSite,result) \
    ( (This)->lpVtbl->GetForInputSite(This,inputSite,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics;
#endif /* !defined(____x_Microsoft_CUI_CInput_CITouchHitTestingProviderStatics_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IWindowsMessageDelivery
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.WindowsMessageDelivery
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIWindowsMessageDelivery_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIWindowsMessageDelivery_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IWindowsMessageDelivery[] = L"Microsoft.UI.Input.IWindowsMessageDelivery";
/* [object, uuid("9DF77403-7D9E-50E8-AAFD-FA1164528E90"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CIWindowsMessageDelivery * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CIWindowsMessageDelivery * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CIWindowsMessageDelivery * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CIWindowsMessageDelivery * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CIWindowsMessageDelivery * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CIWindowsMessageDelivery * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WindowId )(
        __x_Microsoft_CUI_CInput_CIWindowsMessageDelivery * This,
        /* [retval, out] */UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_Microsoft_CUI_CInput_CIWindowsMessageDelivery * This,
        /* [retval, out] */__x_Microsoft_CUI_CInput_CWindowsMessageDeliveryType * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryVtbl;

interface __x_Microsoft_CUI_CInput_CIWindowsMessageDelivery
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CIWindowsMessageDelivery_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CIWindowsMessageDelivery_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CIWindowsMessageDelivery_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CIWindowsMessageDelivery_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CIWindowsMessageDelivery_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CIWindowsMessageDelivery_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CInput_CIWindowsMessageDelivery_get_WindowId(This,value) \
    ( (This)->lpVtbl->get_WindowId(This,value) )

#define __x_Microsoft_CUI_CInput_CIWindowsMessageDelivery_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIWindowsMessageDelivery;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIWindowsMessageDelivery_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Input.IWindowsMessageDeliveryStatics
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.WindowsMessageDelivery
 *
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IWindowsMessageDeliveryStatics[] = L"Microsoft.UI.Input.IWindowsMessageDeliveryStatics";
/* [object, uuid("03C77EDD-7940-5686-B356-6F64077D9261"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateForInputSite )(
        __x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics * This,
        /* [in] */__x_Microsoft_CUI_CInput_CIInputSite * inputSite,
        /* [in] */UINT64 windowId,
        /* [in] */__x_Microsoft_CUI_CInput_CWindowsMessageDeliveryType type,
        /* [retval, out] */__x_Microsoft_CUI_CInput_CIWindowsMessageDelivery * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetForInputSite )(
        __x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics * This,
        /* [in] */__x_Microsoft_CUI_CInput_CIInputSite * inputSite,
        /* [retval, out] */__x_Microsoft_CUI_CInput_CIWindowsMessageDelivery * * result
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStaticsVtbl;

interface __x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics_CreateForInputSite(This,inputSite,windowId,type,result) \
    ( (This)->lpVtbl->CreateForInputSite(This,inputSite,windowId,type,result) )

#define __x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics_TryGetForInputSite(This,inputSite,result) \
    ( (This)->lpVtbl->TryGetForInputSite(This,inputSite,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics;
#endif /* !defined(____x_Microsoft_CUI_CInput_CIWindowsMessageDeliveryStatics_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.AttachableInputObject
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 8.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IAttachableInputObject ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_AttachableInputObject_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_AttachableInputObject_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_AttachableInputObject[] = L"Microsoft.UI.Input.AttachableInputObject";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


/*
 *
 * Class Microsoft.UI.Input.ContextMenuKeyEventArgs
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IContextMenuKeyEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_ContextMenuKeyEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_ContextMenuKeyEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_ContextMenuKeyEventArgs[] = L"Microsoft.UI.Input.ContextMenuKeyEventArgs";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.CoreWindowLiftedContentBridge
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Microsoft.UI.Input.ICoreWindowLiftedContentBridgeFactory interface starting with version 1.0 of the Microsoft.UI.Input.ISMInternalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.ICoreWindowLiftedContentBridge ** Default Interface **
 *    Microsoft.UI.Input.IContentBridge
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_CoreWindowLiftedContentBridge_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_CoreWindowLiftedContentBridge_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_CoreWindowLiftedContentBridge[] = L"Microsoft.UI.Input.CoreWindowLiftedContentBridge";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.DesktopWindowLiftedContentBridge
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Microsoft.UI.Input.IDesktopWindowLiftedContentBridgeFactory interface starting with version 1.0 of the Microsoft.UI.Input.ISMInternalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IDesktopWindowLiftedContentBridge ** Default Interface **
 *    Microsoft.UI.Input.IContentBridge
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_DesktopWindowLiftedContentBridge_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_DesktopWindowLiftedContentBridge_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_DesktopWindowLiftedContentBridge[] = L"Microsoft.UI.Input.DesktopWindowLiftedContentBridge";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.FocusChangedEventArgs
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IFocusChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_FocusChangedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_FocusChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_FocusChangedEventArgs[] = L"Microsoft.UI.Input.FocusChangedEventArgs";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.FocusController
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.IFocusControllerStatics interface starting with version 1.0 of the Microsoft.UI.Input.ISMInternalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IFocusController ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_FocusController_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_FocusController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_FocusController[] = L"Microsoft.UI.Input.FocusController";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.FocusObserver
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Microsoft.UI.Input.IFocusObserverFactory interface starting with version 1.0 of the Microsoft.UI.Input.ISMInternalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IFocusObserver ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_FocusObserver_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_FocusObserver_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_FocusObserver[] = L"Microsoft.UI.Input.FocusObserver";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.InputActivationListener
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 8.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputActivationListener ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputActivationListener_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputActivationListener_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputActivationListener[] = L"Microsoft.UI.Input.InputActivationListener";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


/*
 *
 * Class Microsoft.UI.Input.InputActivationListenerActivationChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 8.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputActivationListenerActivationChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputActivationListenerActivationChangedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputActivationListenerActivationChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputActivationListenerActivationChangedEventArgs[] = L"Microsoft.UI.Input.InputActivationListenerActivationChangedEventArgs";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


/*
 *
 * Class Microsoft.UI.Input.InputActivationListenerPartner
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.IInputActivationListenerPartnerStatics interface starting with version 1.0 of the Microsoft.UI.Input.ISMInternalContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputActivationListenerPartner_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputActivationListenerPartner_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputActivationListenerPartner[] = L"Microsoft.UI.Input.InputActivationListenerPartner";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.InputObjectPartner
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputObjectPartner ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputObjectPartner_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputObjectPartner_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputObjectPartner[] = L"Microsoft.UI.Input.InputObjectPartner";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.InputSite
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.IInputSiteStatics interface starting with version 1.0 of the Microsoft.UI.Input.ISMInternalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputSite ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputSite_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputSite_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputSite[] = L"Microsoft.UI.Input.InputSite";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.KeyboardInput
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.IKeyboardInputStatics interface starting with version 1.0 of the Microsoft.UI.Input.ISMInternalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IKeyboardInput ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_KeyboardInput_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_KeyboardInput_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_KeyboardInput[] = L"Microsoft.UI.Input.KeyboardInput";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.MouseCapture
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.IMouseCaptureStatics interface starting with version 1.0 of the Microsoft.UI.Input.ISMInternalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IMouseCapture ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_MouseCapture_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_MouseCapture_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_MouseCapture[] = L"Microsoft.UI.Input.MouseCapture";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.PointerCursorController
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.IPointerCursorControllerStatics interface starting with version 1.0 of the Microsoft.UI.Input.ISMInternalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IPointerCursorController ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_PointerCursorController_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_PointerCursorController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_PointerCursorController[] = L"Microsoft.UI.Input.PointerCursorController";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.PointerInputObserver
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Microsoft.UI.Input.IPointerInputObserverFactory interface starting with version 1.0 of the Microsoft.UI.Input.ISMInternalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IPointerInputObserver ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_PointerInputObserver_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_PointerInputObserver_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_PointerInputObserver[] = L"Microsoft.UI.Input.PointerInputObserver";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.TouchHitTestingProvider
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.ITouchHitTestingProviderStatics interface starting with version 1.0 of the Microsoft.UI.Input.ISMInternalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.ITouchHitTestingProvider ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_TouchHitTestingProvider_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_TouchHitTestingProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_TouchHitTestingProvider[] = L"Microsoft.UI.Input.TouchHitTestingProvider";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Input.WindowsMessageDelivery
 *
 * Introduced to Microsoft.UI.Input.ISMInternalContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.IWindowsMessageDeliveryStatics interface starting with version 1.0 of the Microsoft.UI.Input.ISMInternalContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IWindowsMessageDelivery ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Input_WindowsMessageDelivery_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_WindowsMessageDelivery_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_WindowsMessageDelivery[] = L"Microsoft.UI.Input.WindowsMessageDelivery";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_INPUT_ISMINTERNALCONTRACT_VERSION >= 0x10000




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __Microsoft2EUI2EInput_p_h__

#endif // __Microsoft2EUI2EInput_h__
