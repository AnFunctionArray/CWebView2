/* Header file automatically generated from Microsoft.UI.Xaml.Automation.idl */
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
#ifndef __Microsoft2EUI2EXaml2EAutomation_h__
#define __Microsoft2EUI2EXaml2EAutomation_h__
#ifndef __Microsoft2EUI2EXaml2EAutomation_p_h__
#define __Microsoft2EUI2EXaml2EAutomation_p_h__


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
#include "Microsoft.UI.Xaml.h"
#include "Microsoft.UI.Xaml.Automation.Peers.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IAnnotationPatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers Microsoft::UI::Xaml::Automation::IAnnotationPatternIdentifiers

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IAnnotationPatternIdentifiersStatics;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics Microsoft::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IAutomationAnnotation;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation Microsoft::UI::Xaml::Automation::IAutomationAnnotation

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IAutomationAnnotationFactory;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory Microsoft::UI::Xaml::Automation::IAutomationAnnotationFactory

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IAutomationAnnotationStatics;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics Microsoft::UI::Xaml::Automation::IAutomationAnnotationStatics

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IAutomationElementIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers Microsoft::UI::Xaml::Automation::IAutomationElementIdentifiers

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IAutomationElementIdentifiersStatics;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics Microsoft::UI::Xaml::Automation::IAutomationElementIdentifiersStatics

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperties_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperties_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IAutomationProperties;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperties Microsoft::UI::Xaml::Automation::IAutomationProperties

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperties_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IAutomationPropertiesStatics;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics Microsoft::UI::Xaml::Automation::IAutomationPropertiesStatics

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IAutomationProperty;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty Microsoft::UI::Xaml::Automation::IAutomationProperty

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IComponentPropertyValue;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue Microsoft::UI::Xaml::Automation::IComponentPropertyValue

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IComponentPropertyValueFactory;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory Microsoft::UI::Xaml::Automation::IComponentPropertyValueFactory

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IComponentPropertyValueStatics;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics Microsoft::UI::Xaml::Automation::IComponentPropertyValueStatics

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IDockPatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiers Microsoft::UI::Xaml::Automation::IDockPatternIdentifiers

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IDockPatternIdentifiersStatics;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics Microsoft::UI::Xaml::Automation::IDockPatternIdentifiersStatics

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IDragPatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiers Microsoft::UI::Xaml::Automation::IDragPatternIdentifiers

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IDragPatternIdentifiersStatics;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics Microsoft::UI::Xaml::Automation::IDragPatternIdentifiersStatics

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IDropTargetPatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers Microsoft::UI::Xaml::Automation::IDropTargetPatternIdentifiers

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IDropTargetPatternIdentifiersStatics;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics Microsoft::UI::Xaml::Automation::IDropTargetPatternIdentifiersStatics

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IExpandCollapsePatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers Microsoft::UI::Xaml::Automation::IExpandCollapsePatternIdentifiers

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IExpandCollapsePatternIdentifiersStatics;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics Microsoft::UI::Xaml::Automation::IExpandCollapsePatternIdentifiersStatics

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IGridItemPatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers Microsoft::UI::Xaml::Automation::IGridItemPatternIdentifiers

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IGridItemPatternIdentifiersStatics;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics Microsoft::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IGridPatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiers Microsoft::UI::Xaml::Automation::IGridPatternIdentifiers

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IGridPatternIdentifiersStatics;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics Microsoft::UI::Xaml::Automation::IGridPatternIdentifiersStatics

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IMultipleViewPatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers Microsoft::UI::Xaml::Automation::IMultipleViewPatternIdentifiers

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IMultipleViewPatternIdentifiersStatics;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics Microsoft::UI::Xaml::Automation::IMultipleViewPatternIdentifiersStatics

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IRangeValuePatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers Microsoft::UI::Xaml::Automation::IRangeValuePatternIdentifiers

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IRangeValuePatternIdentifiersStatics;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics Microsoft::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IScrollPatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers Microsoft::UI::Xaml::Automation::IScrollPatternIdentifiers

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IScrollPatternIdentifiersStatics;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics Microsoft::UI::Xaml::Automation::IScrollPatternIdentifiersStatics

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface ISelectionItemPatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers Microsoft::UI::Xaml::Automation::ISelectionItemPatternIdentifiers

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface ISelectionItemPatternIdentifiersStatics;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics Microsoft::UI::Xaml::Automation::ISelectionItemPatternIdentifiersStatics

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface ISelectionPatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers Microsoft::UI::Xaml::Automation::ISelectionPatternIdentifiers

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface ISelectionPatternIdentifiersStatics;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics Microsoft::UI::Xaml::Automation::ISelectionPatternIdentifiersStatics

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface ISpreadsheetItemPatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers Microsoft::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiers

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface ISpreadsheetItemPatternIdentifiersStatics;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics Microsoft::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiersStatics

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IStylesPatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers Microsoft::UI::Xaml::Automation::IStylesPatternIdentifiers

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IStylesPatternIdentifiersStatics;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics Microsoft::UI::Xaml::Automation::IStylesPatternIdentifiersStatics

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface ITableItemPatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers Microsoft::UI::Xaml::Automation::ITableItemPatternIdentifiers

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface ITableItemPatternIdentifiersStatics;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics Microsoft::UI::Xaml::Automation::ITableItemPatternIdentifiersStatics

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiers_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface ITablePatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiers Microsoft::UI::Xaml::Automation::ITablePatternIdentifiers

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface ITablePatternIdentifiersStatics;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics Microsoft::UI::Xaml::Automation::ITablePatternIdentifiersStatics

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface ITogglePatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiers Microsoft::UI::Xaml::Automation::ITogglePatternIdentifiers

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface ITogglePatternIdentifiersStatics;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics Microsoft::UI::Xaml::Automation::ITogglePatternIdentifiersStatics

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface ITransformPattern2Identifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2Identifiers Microsoft::UI::Xaml::Automation::ITransformPattern2Identifiers

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface ITransformPattern2IdentifiersStatics;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics Microsoft::UI::Xaml::Automation::ITransformPattern2IdentifiersStatics

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface ITransformPatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiers Microsoft::UI::Xaml::Automation::ITransformPatternIdentifiers

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface ITransformPatternIdentifiersStatics;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics Microsoft::UI::Xaml::Automation::ITransformPatternIdentifiersStatics

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IValuePatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiers Microsoft::UI::Xaml::Automation::IValuePatternIdentifiers

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IValuePatternIdentifiersStatics;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics Microsoft::UI::Xaml::Automation::IValuePatternIdentifiersStatics

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IWindowPatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers Microsoft::UI::Xaml::Automation::IWindowPatternIdentifiers

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                interface IWindowPatternIdentifiersStatics;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics Microsoft::UI::Xaml::Automation::IWindowPatternIdentifiersStatics

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                class AutomationAnnotation;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */


#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_USE
#define DEF___FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c6650c15-8d09-53f4-8e6c-620bce4ff9ae"))
IIterator<Microsoft::UI::Xaml::Automation::AutomationAnnotation*> : IIterator_impl<Windows::Foundation::Internal::AggregateType<Microsoft::UI::Xaml::Automation::AutomationAnnotation*, Microsoft::UI::Xaml::Automation::IAutomationAnnotation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Microsoft.UI.Xaml.Automation.AutomationAnnotation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<Microsoft::UI::Xaml::Automation::AutomationAnnotation*> __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_t;
#define __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation Windows::Foundation::Collections::__FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation Windows::Foundation::Collections::IIterator<Microsoft::UI::Xaml::Automation::IAutomationAnnotation*>
//#define __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_t Windows::Foundation::Collections::IIterator<Microsoft::UI::Xaml::Automation::IAutomationAnnotation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_USE */


#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_USE
#define DEF___FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9ff9a2b0-9188-5bb1-8de7-81cdbb9facdf"))
IIterable<Microsoft::UI::Xaml::Automation::AutomationAnnotation*> : IIterable_impl<Windows::Foundation::Internal::AggregateType<Microsoft::UI::Xaml::Automation::AutomationAnnotation*, Microsoft::UI::Xaml::Automation::IAutomationAnnotation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Microsoft.UI.Xaml.Automation.AutomationAnnotation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<Microsoft::UI::Xaml::Automation::AutomationAnnotation*> __FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_t;
#define __FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation Windows::Foundation::Collections::__FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation Windows::Foundation::Collections::IIterable<Microsoft::UI::Xaml::Automation::IAutomationAnnotation*>
//#define __FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_t Windows::Foundation::Collections::IIterable<Microsoft::UI::Xaml::Automation::IAutomationAnnotation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_USE */


#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_USE
#define DEF___FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("15c04825-b975-5bc5-adf9-e3b6062a7afa"))
IVectorView<Microsoft::UI::Xaml::Automation::AutomationAnnotation*> : IVectorView_impl<Windows::Foundation::Internal::AggregateType<Microsoft::UI::Xaml::Automation::AutomationAnnotation*, Microsoft::UI::Xaml::Automation::IAutomationAnnotation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Microsoft.UI.Xaml.Automation.AutomationAnnotation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<Microsoft::UI::Xaml::Automation::AutomationAnnotation*> __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_t;
#define __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation Windows::Foundation::Collections::__FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation Windows::Foundation::Collections::IVectorView<Microsoft::UI::Xaml::Automation::IAutomationAnnotation*>
//#define __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_t Windows::Foundation::Collections::IVectorView<Microsoft::UI::Xaml::Automation::IAutomationAnnotation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_USE */


#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_USE
#define DEF___FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e047e428-66a6-5759-a751-84f2bf6fdb30"))
IVector<Microsoft::UI::Xaml::Automation::AutomationAnnotation*> : IVector_impl<Windows::Foundation::Internal::AggregateType<Microsoft::UI::Xaml::Automation::AutomationAnnotation*, Microsoft::UI::Xaml::Automation::IAutomationAnnotation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Microsoft.UI.Xaml.Automation.AutomationAnnotation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<Microsoft::UI::Xaml::Automation::AutomationAnnotation*> __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_t;
#define __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation Windows::Foundation::Collections::__FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation Windows::Foundation::Collections::IVector<Microsoft::UI::Xaml::Automation::IAutomationAnnotation*>
//#define __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_t Windows::Foundation::Collections::IVector<Microsoft::UI::Xaml::Automation::IAutomationAnnotation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_USE */


#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


namespace Microsoft {
    namespace UI {
        namespace Xaml {
            class UIElement;
        } /* Xaml */
    } /* UI */
} /* Microsoft */

#ifndef ____x_Microsoft_CUI_CXaml_CIUIElement_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CIUIElement_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            interface IUIElement;
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CIUIElement Microsoft::UI::Xaml::IUIElement

#endif // ____x_Microsoft_CUI_CXaml_CIUIElement_FWD_DEFINED__


#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Microsoft__CUI__CXaml__CUIElement_USE
#define DEF___FIIterator_1_Microsoft__CUI__CXaml__CUIElement_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bfb0697d-5e83-5397-becf-d15b3f89552d"))
IIterator<Microsoft::UI::Xaml::UIElement*> : IIterator_impl<Windows::Foundation::Internal::AggregateType<Microsoft::UI::Xaml::UIElement*, Microsoft::UI::Xaml::IUIElement*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Microsoft.UI.Xaml.UIElement>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<Microsoft::UI::Xaml::UIElement*> __FIIterator_1_Microsoft__CUI__CXaml__CUIElement_t;
#define __FIIterator_1_Microsoft__CUI__CXaml__CUIElement Windows::Foundation::Collections::__FIIterator_1_Microsoft__CUI__CXaml__CUIElement_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Microsoft__CUI__CXaml__CUIElement Windows::Foundation::Collections::IIterator<Microsoft::UI::Xaml::IUIElement*>
//#define __FIIterator_1_Microsoft__CUI__CXaml__CUIElement_t Windows::Foundation::Collections::IIterator<Microsoft::UI::Xaml::IUIElement*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Microsoft__CUI__CXaml__CUIElement_USE */


#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Microsoft__CUI__CXaml__CUIElement_USE
#define DEF___FIIterable_1_Microsoft__CUI__CXaml__CUIElement_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2a1b0809-f688-5aff-94a6-677eb0bc8884"))
IIterable<Microsoft::UI::Xaml::UIElement*> : IIterable_impl<Windows::Foundation::Internal::AggregateType<Microsoft::UI::Xaml::UIElement*, Microsoft::UI::Xaml::IUIElement*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Microsoft.UI.Xaml.UIElement>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<Microsoft::UI::Xaml::UIElement*> __FIIterable_1_Microsoft__CUI__CXaml__CUIElement_t;
#define __FIIterable_1_Microsoft__CUI__CXaml__CUIElement Windows::Foundation::Collections::__FIIterable_1_Microsoft__CUI__CXaml__CUIElement_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Microsoft__CUI__CXaml__CUIElement Windows::Foundation::Collections::IIterable<Microsoft::UI::Xaml::IUIElement*>
//#define __FIIterable_1_Microsoft__CUI__CXaml__CUIElement_t Windows::Foundation::Collections::IIterable<Microsoft::UI::Xaml::IUIElement*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Microsoft__CUI__CXaml__CUIElement_USE */


#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Microsoft__CUI__CXaml__CUIElement_USE
#define DEF___FIVectorView_1_Microsoft__CUI__CXaml__CUIElement_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("af80b81b-9c6e-5ac6-b425-801e81036ff9"))
IVectorView<Microsoft::UI::Xaml::UIElement*> : IVectorView_impl<Windows::Foundation::Internal::AggregateType<Microsoft::UI::Xaml::UIElement*, Microsoft::UI::Xaml::IUIElement*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Microsoft.UI.Xaml.UIElement>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<Microsoft::UI::Xaml::UIElement*> __FIVectorView_1_Microsoft__CUI__CXaml__CUIElement_t;
#define __FIVectorView_1_Microsoft__CUI__CXaml__CUIElement Windows::Foundation::Collections::__FIVectorView_1_Microsoft__CUI__CXaml__CUIElement_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Microsoft__CUI__CXaml__CUIElement Windows::Foundation::Collections::IVectorView<Microsoft::UI::Xaml::IUIElement*>
//#define __FIVectorView_1_Microsoft__CUI__CXaml__CUIElement_t Windows::Foundation::Collections::IVectorView<Microsoft::UI::Xaml::IUIElement*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Microsoft__CUI__CXaml__CUIElement_USE */


#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Microsoft__CUI__CXaml__CUIElement_USE
#define DEF___FIVector_1_Microsoft__CUI__CXaml__CUIElement_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("26919880-d3be-52c5-a150-76a6810a1346"))
IVector<Microsoft::UI::Xaml::UIElement*> : IVector_impl<Windows::Foundation::Internal::AggregateType<Microsoft::UI::Xaml::UIElement*, Microsoft::UI::Xaml::IUIElement*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Microsoft.UI.Xaml.UIElement>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<Microsoft::UI::Xaml::UIElement*> __FIVector_1_Microsoft__CUI__CXaml__CUIElement_t;
#define __FIVector_1_Microsoft__CUI__CXaml__CUIElement Windows::Foundation::Collections::__FIVector_1_Microsoft__CUI__CXaml__CUIElement_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Microsoft__CUI__CXaml__CUIElement Windows::Foundation::Collections::IVector<Microsoft::UI::Xaml::IUIElement*>
//#define __FIVector_1_Microsoft__CUI__CXaml__CUIElement_t Windows::Foundation::Collections::IVector<Microsoft::UI::Xaml::IUIElement*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Microsoft__CUI__CXaml__CUIElement_USE */


#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


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


#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject_USE
#define DEF___FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bb6cf1cd-b929-526d-a974-ec7dee468fc8"))
IIterator<Microsoft::UI::Xaml::DependencyObject*> : IIterator_impl<Windows::Foundation::Internal::AggregateType<Microsoft::UI::Xaml::DependencyObject*, Microsoft::UI::Xaml::IDependencyObject*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Microsoft.UI.Xaml.DependencyObject>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<Microsoft::UI::Xaml::DependencyObject*> __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject_t;
#define __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject Windows::Foundation::Collections::__FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject Windows::Foundation::Collections::IIterator<Microsoft::UI::Xaml::IDependencyObject*>
//#define __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject_t Windows::Foundation::Collections::IIterator<Microsoft::UI::Xaml::IDependencyObject*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject_USE */


#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Microsoft__CUI__CXaml__CDependencyObject_USE
#define DEF___FIIterable_1_Microsoft__CUI__CXaml__CDependencyObject_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e47eeac7-4045-5e48-a05b-8a1cc8d10d1b"))
IIterable<Microsoft::UI::Xaml::DependencyObject*> : IIterable_impl<Windows::Foundation::Internal::AggregateType<Microsoft::UI::Xaml::DependencyObject*, Microsoft::UI::Xaml::IDependencyObject*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Microsoft.UI.Xaml.DependencyObject>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<Microsoft::UI::Xaml::DependencyObject*> __FIIterable_1_Microsoft__CUI__CXaml__CDependencyObject_t;
#define __FIIterable_1_Microsoft__CUI__CXaml__CDependencyObject Windows::Foundation::Collections::__FIIterable_1_Microsoft__CUI__CXaml__CDependencyObject_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Microsoft__CUI__CXaml__CDependencyObject Windows::Foundation::Collections::IIterable<Microsoft::UI::Xaml::IDependencyObject*>
//#define __FIIterable_1_Microsoft__CUI__CXaml__CDependencyObject_t Windows::Foundation::Collections::IIterable<Microsoft::UI::Xaml::IDependencyObject*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Microsoft__CUI__CXaml__CDependencyObject_USE */


#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject_USE
#define DEF___FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("dd6705ee-fcea-5b4e-9d6e-ece0ee25f462"))
IVectorView<Microsoft::UI::Xaml::DependencyObject*> : IVectorView_impl<Windows::Foundation::Internal::AggregateType<Microsoft::UI::Xaml::DependencyObject*, Microsoft::UI::Xaml::IDependencyObject*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Microsoft.UI.Xaml.DependencyObject>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<Microsoft::UI::Xaml::DependencyObject*> __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject_t;
#define __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject Windows::Foundation::Collections::__FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject Windows::Foundation::Collections::IVectorView<Microsoft::UI::Xaml::IDependencyObject*>
//#define __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject_t Windows::Foundation::Collections::IVectorView<Microsoft::UI::Xaml::IDependencyObject*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject_USE */


#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Microsoft__CUI__CXaml__CDependencyObject_USE
#define DEF___FIVector_1_Microsoft__CUI__CXaml__CDependencyObject_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4231226d-746b-5a0d-b6d4-cd1be7905a72"))
IVector<Microsoft::UI::Xaml::DependencyObject*> : IVector_impl<Windows::Foundation::Internal::AggregateType<Microsoft::UI::Xaml::DependencyObject*, Microsoft::UI::Xaml::IDependencyObject*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Microsoft.UI.Xaml.DependencyObject>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<Microsoft::UI::Xaml::DependencyObject*> __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject_t;
#define __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject Windows::Foundation::Collections::__FIVector_1_Microsoft__CUI__CXaml__CDependencyObject_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject Windows::Foundation::Collections::IVector<Microsoft::UI::Xaml::IDependencyObject*>
//#define __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject_t Windows::Foundation::Collections::IVector<Microsoft::UI::Xaml::IDependencyObject*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Microsoft__CUI__CXaml__CDependencyObject_USE */


#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000




namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                namespace Peers {
                    
                    typedef enum AccessibilityView : int AccessibilityView;
                    
                } /* Peers */
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                namespace Peers {
                    
                    typedef enum AutomationHeadingLevel : int AutomationHeadingLevel;
                    
                } /* Peers */
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                namespace Peers {
                    
                    typedef enum AutomationLandmarkType : int AutomationLandmarkType;
                    
                } /* Peers */
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                namespace Peers {
                    
                    typedef enum AutomationLiveSetting : int AutomationLiveSetting;
                    
                } /* Peers */
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */








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
            namespace Automation {
                
                typedef enum AnnotationType : int AnnotationType;
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                
                typedef enum AutomationActiveEnd : int AutomationActiveEnd;
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                
                typedef enum AutomationAnimationStyle : int AutomationAnimationStyle;
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                
                typedef enum AutomationBulletStyle : int AutomationBulletStyle;
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                
                typedef enum AutomationCaretBidiMode : int AutomationCaretBidiMode;
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                
                typedef enum AutomationCaretPosition : int AutomationCaretPosition;
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                
                typedef enum AutomationFlowDirections : int AutomationFlowDirections;
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                
                typedef enum AutomationOutlineStyles : int AutomationOutlineStyles;
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                
                typedef enum AutomationStyleId : int AutomationStyleId;
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                
                typedef enum AutomationTextDecorationLineStyle : int AutomationTextDecorationLineStyle;
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                
                typedef enum AutomationTextEditChangeType : int AutomationTextEditChangeType;
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                
                typedef enum DockPosition : int DockPosition;
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                
                typedef enum ExpandCollapseState : int ExpandCollapseState;
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                
                typedef enum RowOrColumnMajor : int RowOrColumnMajor;
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                
                typedef enum ScrollAmount : int ScrollAmount;
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                
                typedef enum SupportedTextSelection : int SupportedTextSelection;
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                
                typedef enum SynchronizedInputType : int SynchronizedInputType;
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                
                typedef enum ToggleState : int ToggleState;
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                
                typedef enum WindowInteractionState : int WindowInteractionState;
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                
                typedef enum WindowVisualState : int WindowVisualState;
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                
                typedef enum ZoomUnit : int ZoomUnit;
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */























































namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                class AnnotationPatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */




namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                class AutomationElementIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                class AutomationProperties;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                class AutomationProperty;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                class ComponentPropertyValue;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                class DockPatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                class DragPatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                class DropTargetPatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                class ExpandCollapsePatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                class GridItemPatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                class GridPatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                class MultipleViewPatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                class RangeValuePatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                class ScrollPatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                class SelectionItemPatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                class SelectionPatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                class SpreadsheetItemPatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                class StylesPatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                class TableItemPatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                class TablePatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                class TogglePatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                class TransformPattern2Identifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                class TransformPatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                class ValuePatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                class WindowPatternIdentifiers;
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */












/*
 *
 * Struct Microsoft.UI.Xaml.Automation.AnnotationType
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [v1_enum, contract] */
                enum AnnotationType : int
                {
                    AnnotationType_Unknown = 60000,
                    AnnotationType_SpellingError = 60001,
                    AnnotationType_GrammarError = 60002,
                    AnnotationType_Comment = 60003,
                    AnnotationType_FormulaError = 60004,
                    AnnotationType_TrackChanges = 60005,
                    AnnotationType_Header = 60006,
                    AnnotationType_Footer = 60007,
                    AnnotationType_Highlighted = 60008,
                    AnnotationType_Endnote = 60009,
                    AnnotationType_Footnote = 60010,
                    AnnotationType_InsertionChange = 60011,
                    AnnotationType_DeletionChange = 60012,
                    AnnotationType_MoveChange = 60013,
                    AnnotationType_FormatChange = 60014,
                    AnnotationType_UnsyncedChange = 60015,
                    AnnotationType_EditingLockedChange = 60016,
                    AnnotationType_ExternalChange = 60017,
                    AnnotationType_ConflictingChange = 60018,
                    AnnotationType_Author = 60019,
                    AnnotationType_AdvancedProofingIssue = 60020,
                    AnnotationType_DataValidationError = 60021,
                    AnnotationType_CircularReferenceError = 60022,
                };
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.AutomationActiveEnd
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [v1_enum, contract] */
                enum AutomationActiveEnd : int
                {
                    AutomationActiveEnd_None = 0,
                    AutomationActiveEnd_Start = 1,
                    AutomationActiveEnd_End = 2,
                };
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.AutomationAnimationStyle
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [v1_enum, contract] */
                enum AutomationAnimationStyle : int
                {
                    AutomationAnimationStyle_None = 0,
                    AutomationAnimationStyle_LasVegasLights = 1,
                    AutomationAnimationStyle_BlinkingBackground = 2,
                    AutomationAnimationStyle_SparkleText = 3,
                    AutomationAnimationStyle_MarchingBlackAnts = 4,
                    AutomationAnimationStyle_MarchingRedAnts = 5,
                    AutomationAnimationStyle_Shimmer = 6,
                    AutomationAnimationStyle_Other = 7,
                };
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.AutomationBulletStyle
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [v1_enum, contract] */
                enum AutomationBulletStyle : int
                {
                    AutomationBulletStyle_None = 0,
                    AutomationBulletStyle_HollowRoundBullet = 1,
                    AutomationBulletStyle_FilledRoundBullet = 2,
                    AutomationBulletStyle_HollowSquareBullet = 3,
                    AutomationBulletStyle_FilledSquareBullet = 4,
                    AutomationBulletStyle_DashBullet = 5,
                    AutomationBulletStyle_Other = 6,
                };
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.AutomationCaretBidiMode
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [v1_enum, contract] */
                enum AutomationCaretBidiMode : int
                {
                    AutomationCaretBidiMode_LTR = 0,
                    AutomationCaretBidiMode_RTL = 1,
                };
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.AutomationCaretPosition
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [v1_enum, contract] */
                enum AutomationCaretPosition : int
                {
                    AutomationCaretPosition_Unknown = 0,
                    AutomationCaretPosition_EndOfLine = 1,
                    AutomationCaretPosition_BeginningOfLine = 2,
                };
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.AutomationFlowDirections
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [v1_enum, contract] */
                enum AutomationFlowDirections : int
                {
                    AutomationFlowDirections_Default = 0,
                    AutomationFlowDirections_RightToLeft = 1,
                    AutomationFlowDirections_BottomToTop = 2,
                    AutomationFlowDirections_Vertical = 3,
                };
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.AutomationOutlineStyles
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [v1_enum, contract] */
                enum AutomationOutlineStyles : int
                {
                    AutomationOutlineStyles_None = 0,
                    AutomationOutlineStyles_Outline = 1,
                    AutomationOutlineStyles_Shadow = 2,
                    AutomationOutlineStyles_Engraved = 3,
                    AutomationOutlineStyles_Embossed = 4,
                };
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.AutomationStyleId
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [v1_enum, contract] */
                enum AutomationStyleId : int
                {
                    AutomationStyleId_Heading1 = 70001,
                    AutomationStyleId_Heading2 = 70002,
                    AutomationStyleId_Heading3 = 70003,
                    AutomationStyleId_Heading4 = 70004,
                    AutomationStyleId_Heading5 = 70005,
                    AutomationStyleId_Heading6 = 70006,
                    AutomationStyleId_Heading7 = 70007,
                    AutomationStyleId_Heading8 = 70008,
                    AutomationStyleId_Heading9 = 70009,
                    AutomationStyleId_Title = 70010,
                    AutomationStyleId_Subtitle = 70011,
                    AutomationStyleId_Normal = 70012,
                    AutomationStyleId_Emphasis = 70013,
                    AutomationStyleId_Quote = 70014,
                    AutomationStyleId_BulletedList = 70015,
                };
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.AutomationTextDecorationLineStyle
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [v1_enum, contract] */
                enum AutomationTextDecorationLineStyle : int
                {
                    AutomationTextDecorationLineStyle_None = 0,
                    AutomationTextDecorationLineStyle_Single = 1,
                    AutomationTextDecorationLineStyle_WordsOnly = 2,
                    AutomationTextDecorationLineStyle_Double = 3,
                    AutomationTextDecorationLineStyle_Dot = 4,
                    AutomationTextDecorationLineStyle_Dash = 5,
                    AutomationTextDecorationLineStyle_DashDot = 6,
                    AutomationTextDecorationLineStyle_DashDotDot = 7,
                    AutomationTextDecorationLineStyle_Wavy = 8,
                    AutomationTextDecorationLineStyle_ThickSingle = 9,
                    AutomationTextDecorationLineStyle_DoubleWavy = 10,
                    AutomationTextDecorationLineStyle_ThickWavy = 11,
                    AutomationTextDecorationLineStyle_LongDash = 12,
                    AutomationTextDecorationLineStyle_ThickDash = 13,
                    AutomationTextDecorationLineStyle_ThickDashDot = 14,
                    AutomationTextDecorationLineStyle_ThickDashDotDot = 15,
                    AutomationTextDecorationLineStyle_ThickDot = 16,
                    AutomationTextDecorationLineStyle_ThickLongDash = 17,
                    AutomationTextDecorationLineStyle_Other = 18,
                };
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.AutomationTextEditChangeType
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [v1_enum, contract] */
                enum AutomationTextEditChangeType : int
                {
                    AutomationTextEditChangeType_None = 0,
                    AutomationTextEditChangeType_AutoCorrect = 1,
                    AutomationTextEditChangeType_Composition = 2,
                    AutomationTextEditChangeType_CompositionFinalized = 3,
                };
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.DockPosition
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [v1_enum, contract] */
                enum DockPosition : int
                {
                    DockPosition_Top = 0,
                    DockPosition_Left = 1,
                    DockPosition_Bottom = 2,
                    DockPosition_Right = 3,
                    DockPosition_Fill = 4,
                    DockPosition_None = 5,
                };
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.ExpandCollapseState
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [v1_enum, contract] */
                enum ExpandCollapseState : int
                {
                    ExpandCollapseState_Collapsed = 0,
                    ExpandCollapseState_Expanded = 1,
                    ExpandCollapseState_PartiallyExpanded = 2,
                    ExpandCollapseState_LeafNode = 3,
                };
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.RowOrColumnMajor
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [v1_enum, contract] */
                enum RowOrColumnMajor : int
                {
                    RowOrColumnMajor_RowMajor = 0,
                    RowOrColumnMajor_ColumnMajor = 1,
                    RowOrColumnMajor_Indeterminate = 2,
                };
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.ScrollAmount
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [v1_enum, contract] */
                enum ScrollAmount : int
                {
                    ScrollAmount_LargeDecrement = 0,
                    ScrollAmount_SmallDecrement = 1,
                    ScrollAmount_NoAmount = 2,
                    ScrollAmount_LargeIncrement = 3,
                    ScrollAmount_SmallIncrement = 4,
                };
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.SupportedTextSelection
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [v1_enum, contract] */
                enum SupportedTextSelection : int
                {
                    SupportedTextSelection_None = 0,
                    SupportedTextSelection_Single = 1,
                    SupportedTextSelection_Multiple = 2,
                };
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.SynchronizedInputType
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [v1_enum, contract] */
                enum SynchronizedInputType : int
                {
                    SynchronizedInputType_KeyUp = 1,
                    SynchronizedInputType_KeyDown = 2,
                    SynchronizedInputType_LeftMouseUp = 4,
                    SynchronizedInputType_LeftMouseDown = 8,
                    SynchronizedInputType_RightMouseUp = 16,
                    SynchronizedInputType_RightMouseDown = 32,
                };
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.ToggleState
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [v1_enum, contract] */
                enum ToggleState : int
                {
                    ToggleState_Off = 0,
                    ToggleState_On = 1,
                    ToggleState_Indeterminate = 2,
                };
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.WindowInteractionState
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [v1_enum, contract] */
                enum WindowInteractionState : int
                {
                    WindowInteractionState_Running = 0,
                    WindowInteractionState_Closing = 1,
                    WindowInteractionState_ReadyForUserInteraction = 2,
                    WindowInteractionState_BlockedByModalWindow = 3,
                    WindowInteractionState_NotResponding = 4,
                };
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.WindowVisualState
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [v1_enum, contract] */
                enum WindowVisualState : int
                {
                    WindowVisualState_Normal = 0,
                    WindowVisualState_Maximized = 1,
                    WindowVisualState_Minimized = 2,
                };
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.ZoomUnit
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [v1_enum, contract] */
                enum ZoomUnit : int
                {
                    ZoomUnit_NoAmount = 0,
                    ZoomUnit_LargeDecrement = 1,
                    ZoomUnit_SmallDecrement = 2,
                    ZoomUnit_LargeIncrement = 3,
                    ZoomUnit_SmallIncrement = 4,
                };
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IAnnotationPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.AnnotationPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IAnnotationPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.IAnnotationPatternIdentifiers";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("92D76915-0CD3-59CD-8AE0-C9004628BA1E"), exclusiveto, contract] */
                MIDL_INTERFACE("92D76915-0CD3-59CD-8AE0-C9004628BA1E")
                IAnnotationPatternIdentifiers : public IInspectable
                {
                public:
                    
                };

                extern MIDL_CONST_ID IID & IID_IAnnotationPatternIdentifiers=_uuidof(IAnnotationPatternIdentifiers);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IAnnotationPatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.AnnotationPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IAnnotationPatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.IAnnotationPatternIdentifiersStatics";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("20A136E2-4A47-5DE5-9E1E-ECFC6D92F52A"), exclusiveto, contract] */
                MIDL_INTERFACE("20A136E2-4A47-5DE5-9E1E-ECFC6D92F52A")
                IAnnotationPatternIdentifiersStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AnnotationTypeIdProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AnnotationTypeNameProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AuthorProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DateTimeProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TargetProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAnnotationPatternIdentifiersStatics=_uuidof(IAnnotationPatternIdentifiersStatics);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IAutomationAnnotation
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.AutomationAnnotation
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IAutomationAnnotation[] = L"Microsoft.UI.Xaml.Automation.IAutomationAnnotation";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("C2CC46AD-1414-5F1B-808A-89E5D53D82FE"), exclusiveto, contract] */
                MIDL_INTERFACE("C2CC46AD-1414-5F1B-808A-89E5D53D82FE")
                IAutomationAnnotation : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::AnnotationType * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Type(
                        /* [in] */Microsoft::UI::Xaml::Automation::AnnotationType value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Element(
                        /* [retval, out] */Microsoft::UI::Xaml::IUIElement * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Element(
                        /* [in] */Microsoft::UI::Xaml::IUIElement * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAutomationAnnotation=_uuidof(IAutomationAnnotation);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IAutomationAnnotationFactory
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.AutomationAnnotation
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IAutomationAnnotationFactory[] = L"Microsoft.UI.Xaml.Automation.IAutomationAnnotationFactory";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("95F82773-EAC5-572E-87DE-24D9514B9A89"), exclusiveto, contract] */
                MIDL_INTERFACE("95F82773-EAC5-572E-87DE-24D9514B9A89")
                IAutomationAnnotationFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                        /* [in] */Microsoft::UI::Xaml::Automation::AnnotationType type,
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationAnnotation * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithElementParameter(
                        /* [in] */Microsoft::UI::Xaml::Automation::AnnotationType type,
                        /* [in] */Microsoft::UI::Xaml::IUIElement * element,
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationAnnotation * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAutomationAnnotationFactory=_uuidof(IAutomationAnnotationFactory);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IAutomationAnnotationStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.AutomationAnnotation
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IAutomationAnnotationStatics[] = L"Microsoft.UI.Xaml.Automation.IAutomationAnnotationStatics";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("C5ABDC1E-FC26-5444-A8B3-59B2C0A95578"), exclusiveto, contract] */
                MIDL_INTERFACE("C5ABDC1E-FC26-5444-A8B3-59B2C0A95578")
                IAutomationAnnotationStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TypeProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ElementProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAutomationAnnotationStatics=_uuidof(IAutomationAnnotationStatics);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IAutomationElementIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.AutomationElementIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IAutomationElementIdentifiers[] = L"Microsoft.UI.Xaml.Automation.IAutomationElementIdentifiers";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("2FB51A33-B0CF-5A4C-9ED3-267ECA7AEEFC"), exclusiveto, contract] */
                MIDL_INTERFACE("2FB51A33-B0CF-5A4C-9ED3-267ECA7AEEFC")
                IAutomationElementIdentifiers : public IInspectable
                {
                public:
                    
                };

                extern MIDL_CONST_ID IID & IID_IAutomationElementIdentifiers=_uuidof(IAutomationElementIdentifiers);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IAutomationElementIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.AutomationElementIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IAutomationElementIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.IAutomationElementIdentifiersStatics";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("72AF6B8C-3E12-5E7A-A2EC-26DC193F9DF9"), exclusiveto, contract] */
                MIDL_INTERFACE("72AF6B8C-3E12-5E7A-A2EC-26DC193F9DF9")
                IAutomationElementIdentifiersStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AcceleratorKeyProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AccessKeyProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutomationIdProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BoundingRectangleProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ClassNameProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ClickablePointProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ControlTypeProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasKeyboardFocusProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HelpTextProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsContentElementProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsControlElementProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsEnabledProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsKeyboardFocusableProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsOffscreenProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsPasswordProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsRequiredForFormProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ItemStatusProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ItemTypeProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LabeledByProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocalizedControlTypeProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NameProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OrientationProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LiveSettingProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ControlledPeersProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PositionInSetProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SizeOfSetProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LevelProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AnnotationsProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LandmarkTypeProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocalizedLandmarkTypeProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsPeripheralProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsDataValidForFormProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FullDescriptionProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DescribedByProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FlowsToProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FlowsFromProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CultureProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HeadingLevelProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsDialogProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAutomationElementIdentifiersStatics=_uuidof(IAutomationElementIdentifiersStatics);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IAutomationProperties
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.AutomationProperties
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperties_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IAutomationProperties[] = L"Microsoft.UI.Xaml.Automation.IAutomationProperties";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("525C6A71-DD8A-52A0-977B-DB1B02F8E896"), exclusiveto, contract] */
                MIDL_INTERFACE("525C6A71-DD8A-52A0-977B-DB1B02F8E896")
                IAutomationProperties : public IInspectable
                {
                public:
                    
                };

                extern MIDL_CONST_ID IID & IID_IAutomationProperties=_uuidof(IAutomationProperties);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperties;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperties_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IAutomationPropertiesStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.AutomationProperties
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IAutomationPropertiesStatics[] = L"Microsoft.UI.Xaml.Automation.IAutomationPropertiesStatics";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("B1E3E0F3-112F-5966-87DC-7862D4AD50E5"), exclusiveto, contract] */
                MIDL_INTERFACE("B1E3E0F3-112F-5966-87DC-7862D4AD50E5")
                IAutomationPropertiesStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AcceleratorKeyProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetAcceleratorKey(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [retval, out] */HSTRING * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetAcceleratorKey(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [in] */HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AccessKeyProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetAccessKey(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [retval, out] */HSTRING * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetAccessKey(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [in] */HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutomationIdProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetAutomationId(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [retval, out] */HSTRING * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetAutomationId(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [in] */HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HelpTextProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetHelpText(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [retval, out] */HSTRING * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetHelpText(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [in] */HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsRequiredForFormProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetIsRequiredForForm(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [retval, out] */::boolean * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetIsRequiredForForm(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [in] */::boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ItemStatusProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetItemStatus(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [retval, out] */HSTRING * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetItemStatus(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [in] */HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ItemTypeProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetItemType(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [retval, out] */HSTRING * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetItemType(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [in] */HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LabeledByProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetLabeledBy(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [retval, out] */Microsoft::UI::Xaml::IUIElement * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetLabeledBy(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [in] */Microsoft::UI::Xaml::IUIElement * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NameProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetName(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [retval, out] */HSTRING * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetName(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [in] */HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LiveSettingProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetLiveSetting(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::Peers::AutomationLiveSetting * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetLiveSetting(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [in] */Microsoft::UI::Xaml::Automation::Peers::AutomationLiveSetting value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AccessibilityViewProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetAccessibilityView(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::Peers::AccessibilityView * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetAccessibilityView(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [in] */Microsoft::UI::Xaml::Automation::Peers::AccessibilityView value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ControlledPeersProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetControlledPeers(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [retval, out] */__FIVector_1_Microsoft__CUI__CXaml__CUIElement * * result
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PositionInSetProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetPositionInSet(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [retval, out] */INT32 * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetPositionInSet(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [in] */INT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SizeOfSetProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetSizeOfSet(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [retval, out] */INT32 * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetSizeOfSet(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [in] */INT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LevelProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetLevel(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [retval, out] */INT32 * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetLevel(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [in] */INT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AnnotationsProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetAnnotations(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [retval, out] */__FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * * result
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LandmarkTypeProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetLandmarkType(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::Peers::AutomationLandmarkType * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetLandmarkType(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [in] */Microsoft::UI::Xaml::Automation::Peers::AutomationLandmarkType value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocalizedLandmarkTypeProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetLocalizedLandmarkType(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [retval, out] */HSTRING * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetLocalizedLandmarkType(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [in] */HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsPeripheralProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetIsPeripheral(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [retval, out] */::boolean * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetIsPeripheral(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [in] */::boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsDataValidForFormProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetIsDataValidForForm(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [retval, out] */::boolean * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetIsDataValidForForm(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [in] */::boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FullDescriptionProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetFullDescription(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [retval, out] */HSTRING * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetFullDescription(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [in] */HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocalizedControlTypeProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetLocalizedControlType(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [retval, out] */HSTRING * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetLocalizedControlType(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [in] */HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DescribedByProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDescribedBy(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [retval, out] */__FIVector_1_Microsoft__CUI__CXaml__CDependencyObject * * result
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FlowsToProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetFlowsTo(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [retval, out] */__FIVector_1_Microsoft__CUI__CXaml__CDependencyObject * * result
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FlowsFromProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetFlowsFrom(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [retval, out] */__FIVector_1_Microsoft__CUI__CXaml__CDependencyObject * * result
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CultureProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetCulture(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [retval, out] */INT32 * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetCulture(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [in] */INT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HeadingLevelProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetHeadingLevel(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::Peers::AutomationHeadingLevel * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetHeadingLevel(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [in] */Microsoft::UI::Xaml::Automation::Peers::AutomationHeadingLevel value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsDialogProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetIsDialog(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [retval, out] */::boolean * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetIsDialog(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * element,
                        /* [in] */::boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAutomationPropertiesStatics=_uuidof(IAutomationPropertiesStatics);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IAutomationProperty
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.AutomationProperty
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IAutomationProperty[] = L"Microsoft.UI.Xaml.Automation.IAutomationProperty";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("5CA6B2C8-FF86-5A41-AA18-6948FAE592CF"), exclusiveto, contract] */
                MIDL_INTERFACE("5CA6B2C8-FF86-5A41-AA18-6948FAE592CF")
                IAutomationProperty : public IInspectable
                {
                public:
                    
                };

                extern MIDL_CONST_ID IID & IID_IAutomationProperty=_uuidof(IAutomationProperty);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IComponentPropertyValue
 *
 * Introduced to Microsoft.UI.Xaml.PrivateApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.ComponentPropertyValue
 *
 *
 */
#if MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IComponentPropertyValue[] = L"Microsoft.UI.Xaml.Automation.IComponentPropertyValue";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("982C5FDC-F1BE-55E9-861E-B41906B3EA81"), exclusiveto, contract] */
                MIDL_INTERFACE("982C5FDC-F1BE-55E9-861E-B41906B3EA81")
                IComponentPropertyValue : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ElementId(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Site(
                        /* [retval, out] */Microsoft::UI::Xaml::IUIElement * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IComponentPropertyValue=_uuidof(IComponentPropertyValue);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IComponentPropertyValueFactory
 *
 * Introduced to Microsoft.UI.Xaml.PrivateApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.ComponentPropertyValue
 *
 *
 */
#if MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IComponentPropertyValueFactory[] = L"Microsoft.UI.Xaml.Automation.IComponentPropertyValueFactory";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("9AAB8357-5E64-58E7-BB8A-08EC774117A4"), exclusiveto, contract] */
                MIDL_INTERFACE("9AAB8357-5E64-58E7-BB8A-08EC774117A4")
                IComponentPropertyValueFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                        /* [in] */Microsoft::UI::Xaml::IUIElement * site,
                        /* [in] */HSTRING elementId,
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IComponentPropertyValue * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IComponentPropertyValueFactory=_uuidof(IComponentPropertyValueFactory);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IComponentPropertyValueStatics
 *
 * Introduced to Microsoft.UI.Xaml.PrivateApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.ComponentPropertyValue
 *
 *
 */
#if MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IComponentPropertyValueStatics[] = L"Microsoft.UI.Xaml.Automation.IComponentPropertyValueStatics";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("541BDD93-620C-58A4-A297-00411C146CA2"), exclusiveto, contract] */
                MIDL_INTERFACE("541BDD93-620C-58A4-A297-00411C146CA2")
                IComponentPropertyValueStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ElementIdProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SiteProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::IDependencyProperty * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IComponentPropertyValueStatics=_uuidof(IComponentPropertyValueStatics);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IDockPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.DockPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IDockPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.IDockPatternIdentifiers";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("75574F99-D145-547E-972B-7D879F93C03E"), exclusiveto, contract] */
                MIDL_INTERFACE("75574F99-D145-547E-972B-7D879F93C03E")
                IDockPatternIdentifiers : public IInspectable
                {
                public:
                    
                };

                extern MIDL_CONST_ID IID & IID_IDockPatternIdentifiers=_uuidof(IDockPatternIdentifiers);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IDockPatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.DockPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IDockPatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.IDockPatternIdentifiersStatics";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("02D5A72C-F49D-53A9-B9FB-AF2719D16CCF"), exclusiveto, contract] */
                MIDL_INTERFACE("02D5A72C-F49D-53A9-B9FB-AF2719D16CCF")
                IDockPatternIdentifiersStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DockPositionProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDockPatternIdentifiersStatics=_uuidof(IDockPatternIdentifiersStatics);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IDragPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.DragPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IDragPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.IDragPatternIdentifiers";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("AA2FDFD5-FB45-5D2B-8D92-A8E7B07061C2"), exclusiveto, contract] */
                MIDL_INTERFACE("AA2FDFD5-FB45-5D2B-8D92-A8E7B07061C2")
                IDragPatternIdentifiers : public IInspectable
                {
                public:
                    
                };

                extern MIDL_CONST_ID IID & IID_IDragPatternIdentifiers=_uuidof(IDragPatternIdentifiers);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IDragPatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.DragPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IDragPatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.IDragPatternIdentifiersStatics";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("482EEE70-0BFC-5552-9E7D-8DFFC526B2F7"), exclusiveto, contract] */
                MIDL_INTERFACE("482EEE70-0BFC-5552-9E7D-8DFFC526B2F7")
                IDragPatternIdentifiersStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DropEffectProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DropEffectsProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GrabbedItemsProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsGrabbedProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDragPatternIdentifiersStatics=_uuidof(IDragPatternIdentifiersStatics);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IDropTargetPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.DropTargetPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IDropTargetPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.IDropTargetPatternIdentifiers";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("133E8FF3-1DDD-5CBB-B908-1484D7C04DA7"), exclusiveto, contract] */
                MIDL_INTERFACE("133E8FF3-1DDD-5CBB-B908-1484D7C04DA7")
                IDropTargetPatternIdentifiers : public IInspectable
                {
                public:
                    
                };

                extern MIDL_CONST_ID IID & IID_IDropTargetPatternIdentifiers=_uuidof(IDropTargetPatternIdentifiers);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IDropTargetPatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.DropTargetPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IDropTargetPatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.IDropTargetPatternIdentifiersStatics";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("6DA6F0BD-B942-5283-BE35-501AE87F88C7"), exclusiveto, contract] */
                MIDL_INTERFACE("6DA6F0BD-B942-5283-BE35-501AE87F88C7")
                IDropTargetPatternIdentifiersStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DropTargetEffectProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DropTargetEffectsProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDropTargetPatternIdentifiersStatics=_uuidof(IDropTargetPatternIdentifiersStatics);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IExpandCollapsePatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.ExpandCollapsePatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IExpandCollapsePatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.IExpandCollapsePatternIdentifiers";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("CEC15D9F-8630-569A-86A0-524BBEA618FF"), exclusiveto, contract] */
                MIDL_INTERFACE("CEC15D9F-8630-569A-86A0-524BBEA618FF")
                IExpandCollapsePatternIdentifiers : public IInspectable
                {
                public:
                    
                };

                extern MIDL_CONST_ID IID & IID_IExpandCollapsePatternIdentifiers=_uuidof(IExpandCollapsePatternIdentifiers);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IExpandCollapsePatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.ExpandCollapsePatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IExpandCollapsePatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.IExpandCollapsePatternIdentifiersStatics";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("283101F4-C40C-55BF-A23B-D62B73B6AA35"), exclusiveto, contract] */
                MIDL_INTERFACE("283101F4-C40C-55BF-A23B-D62B73B6AA35")
                IExpandCollapsePatternIdentifiersStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExpandCollapseStateProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IExpandCollapsePatternIdentifiersStatics=_uuidof(IExpandCollapsePatternIdentifiersStatics);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IGridItemPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.GridItemPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IGridItemPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.IGridItemPatternIdentifiers";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("93609087-1114-557D-B17B-F801E41CEBBB"), exclusiveto, contract] */
                MIDL_INTERFACE("93609087-1114-557D-B17B-F801E41CEBBB")
                IGridItemPatternIdentifiers : public IInspectable
                {
                public:
                    
                };

                extern MIDL_CONST_ID IID & IID_IGridItemPatternIdentifiers=_uuidof(IGridItemPatternIdentifiers);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IGridItemPatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.GridItemPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IGridItemPatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.IGridItemPatternIdentifiersStatics";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("8072BC18-87D0-5A02-A0A1-F9AEC968C0E7"), exclusiveto, contract] */
                MIDL_INTERFACE("8072BC18-87D0-5A02-A0A1-F9AEC968C0E7")
                IGridItemPatternIdentifiersStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ColumnProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ColumnSpanProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContainingGridProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RowProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RowSpanProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGridItemPatternIdentifiersStatics=_uuidof(IGridItemPatternIdentifiersStatics);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IGridPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.GridPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IGridPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.IGridPatternIdentifiers";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("E5E1E250-C37C-54A2-8C61-1D9CCD3BB39C"), exclusiveto, contract] */
                MIDL_INTERFACE("E5E1E250-C37C-54A2-8C61-1D9CCD3BB39C")
                IGridPatternIdentifiers : public IInspectable
                {
                public:
                    
                };

                extern MIDL_CONST_ID IID & IID_IGridPatternIdentifiers=_uuidof(IGridPatternIdentifiers);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IGridPatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.GridPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IGridPatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.IGridPatternIdentifiersStatics";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("E861604C-101F-5A6D-A308-3714F510F744"), exclusiveto, contract] */
                MIDL_INTERFACE("E861604C-101F-5A6D-A308-3714F510F744")
                IGridPatternIdentifiersStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ColumnCountProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RowCountProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGridPatternIdentifiersStatics=_uuidof(IGridPatternIdentifiersStatics);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IMultipleViewPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.MultipleViewPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IMultipleViewPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.IMultipleViewPatternIdentifiers";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("70E4C847-2B82-5ECF-B808-E9D453C1FE53"), exclusiveto, contract] */
                MIDL_INTERFACE("70E4C847-2B82-5ECF-B808-E9D453C1FE53")
                IMultipleViewPatternIdentifiers : public IInspectable
                {
                public:
                    
                };

                extern MIDL_CONST_ID IID & IID_IMultipleViewPatternIdentifiers=_uuidof(IMultipleViewPatternIdentifiers);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IMultipleViewPatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.MultipleViewPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IMultipleViewPatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.IMultipleViewPatternIdentifiersStatics";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("AC71DAEF-D094-5C90-94AF-1FA474AB45FE"), exclusiveto, contract] */
                MIDL_INTERFACE("AC71DAEF-D094-5C90-94AF-1FA474AB45FE")
                IMultipleViewPatternIdentifiersStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrentViewProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedViewsProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMultipleViewPatternIdentifiersStatics=_uuidof(IMultipleViewPatternIdentifiersStatics);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IRangeValuePatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.RangeValuePatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IRangeValuePatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.IRangeValuePatternIdentifiers";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("C114DB37-6A75-5EF1-A542-D3B13F92CBFE"), exclusiveto, contract] */
                MIDL_INTERFACE("C114DB37-6A75-5EF1-A542-D3B13F92CBFE")
                IRangeValuePatternIdentifiers : public IInspectable
                {
                public:
                    
                };

                extern MIDL_CONST_ID IID & IID_IRangeValuePatternIdentifiers=_uuidof(IRangeValuePatternIdentifiers);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IRangeValuePatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.RangeValuePatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IRangeValuePatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.IRangeValuePatternIdentifiersStatics";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("0AAA9AD7-F9B8-52A1-BC96-2A97FE389ED0"), exclusiveto, contract] */
                MIDL_INTERFACE("0AAA9AD7-F9B8-52A1-BC96-2A97FE389ED0")
                IRangeValuePatternIdentifiersStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsReadOnlyProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LargeChangeProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaximumProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinimumProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SmallChangeProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ValueProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRangeValuePatternIdentifiersStatics=_uuidof(IRangeValuePatternIdentifiersStatics);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IScrollPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.ScrollPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IScrollPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.IScrollPatternIdentifiers";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("04F1A4B8-EDC7-55F2-96DF-A9C7E809372E"), exclusiveto, contract] */
                MIDL_INTERFACE("04F1A4B8-EDC7-55F2-96DF-A9C7E809372E")
                IScrollPatternIdentifiers : public IInspectable
                {
                public:
                    
                };

                extern MIDL_CONST_ID IID & IID_IScrollPatternIdentifiers=_uuidof(IScrollPatternIdentifiers);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IScrollPatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.ScrollPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IScrollPatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.IScrollPatternIdentifiersStatics";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("0F94F2F0-E0D2-5A24-B415-8D1506CE47AA"), exclusiveto, contract] */
                MIDL_INTERFACE("0F94F2F0-E0D2-5A24-B415-8D1506CE47AA")
                IScrollPatternIdentifiersStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HorizontallyScrollableProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HorizontalScrollPercentProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HorizontalViewSizeProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NoScroll(
                        /* [retval, out] */DOUBLE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VerticallyScrollableProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VerticalScrollPercentProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VerticalViewSizeProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IScrollPatternIdentifiersStatics=_uuidof(IScrollPatternIdentifiersStatics);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ISelectionItemPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.SelectionItemPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ISelectionItemPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.ISelectionItemPatternIdentifiers";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("CE3A549D-A2CB-594D-A2A4-44778C09CCA5"), exclusiveto, contract] */
                MIDL_INTERFACE("CE3A549D-A2CB-594D-A2A4-44778C09CCA5")
                ISelectionItemPatternIdentifiers : public IInspectable
                {
                public:
                    
                };

                extern MIDL_CONST_ID IID & IID_ISelectionItemPatternIdentifiers=_uuidof(ISelectionItemPatternIdentifiers);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ISelectionItemPatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.SelectionItemPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ISelectionItemPatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.ISelectionItemPatternIdentifiersStatics";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("2B8EAD7C-4E03-5B84-9E34-8B7384CBD862"), exclusiveto, contract] */
                MIDL_INTERFACE("2B8EAD7C-4E03-5B84-9E34-8B7384CBD862")
                ISelectionItemPatternIdentifiersStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsSelectedProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelectionContainerProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISelectionItemPatternIdentifiersStatics=_uuidof(ISelectionItemPatternIdentifiersStatics);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ISelectionPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.SelectionPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ISelectionPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.ISelectionPatternIdentifiers";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("401743D2-1FBA-5D05-B89F-631676453237"), exclusiveto, contract] */
                MIDL_INTERFACE("401743D2-1FBA-5D05-B89F-631676453237")
                ISelectionPatternIdentifiers : public IInspectable
                {
                public:
                    
                };

                extern MIDL_CONST_ID IID & IID_ISelectionPatternIdentifiers=_uuidof(ISelectionPatternIdentifiers);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ISelectionPatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.SelectionPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ISelectionPatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.ISelectionPatternIdentifiersStatics";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("F3ED111B-B20A-5E5E-A232-07F607FD5C07"), exclusiveto, contract] */
                MIDL_INTERFACE("F3ED111B-B20A-5E5E-A232-07F607FD5C07")
                ISelectionPatternIdentifiersStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanSelectMultipleProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsSelectionRequiredProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelectionProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISelectionPatternIdentifiersStatics=_uuidof(ISelectionPatternIdentifiersStatics);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ISpreadsheetItemPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.SpreadsheetItemPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ISpreadsheetItemPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.ISpreadsheetItemPatternIdentifiers";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("DCA2EC46-8564-5C9C-BA90-2C08455F697B"), exclusiveto, contract] */
                MIDL_INTERFACE("DCA2EC46-8564-5C9C-BA90-2C08455F697B")
                ISpreadsheetItemPatternIdentifiers : public IInspectable
                {
                public:
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpreadsheetItemPatternIdentifiers=_uuidof(ISpreadsheetItemPatternIdentifiers);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ISpreadsheetItemPatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.SpreadsheetItemPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ISpreadsheetItemPatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.ISpreadsheetItemPatternIdentifiersStatics";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("7EB10F80-8D3A-59AD-A2B9-05D8CECF18DB"), exclusiveto, contract] */
                MIDL_INTERFACE("7EB10F80-8D3A-59AD-A2B9-05D8CECF18DB")
                ISpreadsheetItemPatternIdentifiersStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FormulaProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpreadsheetItemPatternIdentifiersStatics=_uuidof(ISpreadsheetItemPatternIdentifiersStatics);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IStylesPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.StylesPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IStylesPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.IStylesPatternIdentifiers";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("13AECA5E-B496-5DF5-AEA5-330E1F0490EB"), exclusiveto, contract] */
                MIDL_INTERFACE("13AECA5E-B496-5DF5-AEA5-330E1F0490EB")
                IStylesPatternIdentifiers : public IInspectable
                {
                public:
                    
                };

                extern MIDL_CONST_ID IID & IID_IStylesPatternIdentifiers=_uuidof(IStylesPatternIdentifiers);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IStylesPatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.StylesPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IStylesPatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.IStylesPatternIdentifiersStatics";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("B232287A-BC4C-581E-A33C-3D6AEE10D04B"), exclusiveto, contract] */
                MIDL_INTERFACE("B232287A-BC4C-581E-A33C-3D6AEE10D04B")
                IStylesPatternIdentifiersStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExtendedPropertiesProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FillColorProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FillPatternColorProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FillPatternStyleProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShapeProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StyleIdProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StyleNameProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStylesPatternIdentifiersStatics=_uuidof(IStylesPatternIdentifiersStatics);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ITableItemPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.TableItemPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ITableItemPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.ITableItemPatternIdentifiers";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("B4DE5D03-A5B4-5CA1-8715-16C8C6A10FCC"), exclusiveto, contract] */
                MIDL_INTERFACE("B4DE5D03-A5B4-5CA1-8715-16C8C6A10FCC")
                ITableItemPatternIdentifiers : public IInspectable
                {
                public:
                    
                };

                extern MIDL_CONST_ID IID & IID_ITableItemPatternIdentifiers=_uuidof(ITableItemPatternIdentifiers);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ITableItemPatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.TableItemPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ITableItemPatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.ITableItemPatternIdentifiersStatics";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("81D24BD7-66FB-53EF-9B32-D00F9C240A14"), exclusiveto, contract] */
                MIDL_INTERFACE("81D24BD7-66FB-53EF-9B32-D00F9C240A14")
                ITableItemPatternIdentifiersStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ColumnHeaderItemsProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RowHeaderItemsProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ITableItemPatternIdentifiersStatics=_uuidof(ITableItemPatternIdentifiersStatics);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ITablePatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.TablePatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ITablePatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.ITablePatternIdentifiers";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("3D7F9C0B-FF8F-50FA-BC01-2CC3C2E06E2C"), exclusiveto, contract] */
                MIDL_INTERFACE("3D7F9C0B-FF8F-50FA-BC01-2CC3C2E06E2C")
                ITablePatternIdentifiers : public IInspectable
                {
                public:
                    
                };

                extern MIDL_CONST_ID IID & IID_ITablePatternIdentifiers=_uuidof(ITablePatternIdentifiers);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ITablePatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.TablePatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ITablePatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.ITablePatternIdentifiersStatics";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("3660935E-BCBB-5848-8E9A-264854F7A19A"), exclusiveto, contract] */
                MIDL_INTERFACE("3660935E-BCBB-5848-8E9A-264854F7A19A")
                ITablePatternIdentifiersStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ColumnHeadersProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RowHeadersProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RowOrColumnMajorProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ITablePatternIdentifiersStatics=_uuidof(ITablePatternIdentifiersStatics);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ITogglePatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.TogglePatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ITogglePatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.ITogglePatternIdentifiers";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("A0D2DF4C-BA59-51D9-9C01-034D7941C280"), exclusiveto, contract] */
                MIDL_INTERFACE("A0D2DF4C-BA59-51D9-9C01-034D7941C280")
                ITogglePatternIdentifiers : public IInspectable
                {
                public:
                    
                };

                extern MIDL_CONST_ID IID & IID_ITogglePatternIdentifiers=_uuidof(ITogglePatternIdentifiers);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ITogglePatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.TogglePatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ITogglePatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.ITogglePatternIdentifiersStatics";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("862920B5-DCB3-5691-A456-C2F15C476DFB"), exclusiveto, contract] */
                MIDL_INTERFACE("862920B5-DCB3-5691-A456-C2F15C476DFB")
                ITogglePatternIdentifiersStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ToggleStateProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ITogglePatternIdentifiersStatics=_uuidof(ITogglePatternIdentifiersStatics);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ITransformPattern2Identifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.TransformPattern2Identifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ITransformPattern2Identifiers[] = L"Microsoft.UI.Xaml.Automation.ITransformPattern2Identifiers";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("6EF7595C-DB8C-51B0-878B-34B7EF12F4DA"), exclusiveto, contract] */
                MIDL_INTERFACE("6EF7595C-DB8C-51B0-878B-34B7EF12F4DA")
                ITransformPattern2Identifiers : public IInspectable
                {
                public:
                    
                };

                extern MIDL_CONST_ID IID & IID_ITransformPattern2Identifiers=_uuidof(ITransformPattern2Identifiers);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2Identifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ITransformPattern2IdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.TransformPattern2Identifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ITransformPattern2IdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.ITransformPattern2IdentifiersStatics";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("D9876FF5-89ED-5333-8111-AD25A28BEE8B"), exclusiveto, contract] */
                MIDL_INTERFACE("D9876FF5-89ED-5333-8111-AD25A28BEE8B")
                ITransformPattern2IdentifiersStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanZoomProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ZoomLevelProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxZoomProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinZoomProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ITransformPattern2IdentifiersStatics=_uuidof(ITransformPattern2IdentifiersStatics);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ITransformPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.TransformPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ITransformPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.ITransformPatternIdentifiers";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("2348187B-C50F-5A0E-BC05-305AC71B3B6B"), exclusiveto, contract] */
                MIDL_INTERFACE("2348187B-C50F-5A0E-BC05-305AC71B3B6B")
                ITransformPatternIdentifiers : public IInspectable
                {
                public:
                    
                };

                extern MIDL_CONST_ID IID & IID_ITransformPatternIdentifiers=_uuidof(ITransformPatternIdentifiers);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ITransformPatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.TransformPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ITransformPatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.ITransformPatternIdentifiersStatics";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("CB7D84E4-5429-5188-8AA0-5F96558A8790"), exclusiveto, contract] */
                MIDL_INTERFACE("CB7D84E4-5429-5188-8AA0-5F96558A8790")
                ITransformPatternIdentifiersStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanMoveProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanResizeProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanRotateProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ITransformPatternIdentifiersStatics=_uuidof(ITransformPatternIdentifiersStatics);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IValuePatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.ValuePatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IValuePatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.IValuePatternIdentifiers";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("FB493395-FB97-59D5-9323-4651CE964B55"), exclusiveto, contract] */
                MIDL_INTERFACE("FB493395-FB97-59D5-9323-4651CE964B55")
                IValuePatternIdentifiers : public IInspectable
                {
                public:
                    
                };

                extern MIDL_CONST_ID IID & IID_IValuePatternIdentifiers=_uuidof(IValuePatternIdentifiers);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IValuePatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.ValuePatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IValuePatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.IValuePatternIdentifiersStatics";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("2019FAF5-CE64-59A7-BC13-0677C3146724"), exclusiveto, contract] */
                MIDL_INTERFACE("2019FAF5-CE64-59A7-BC13-0677C3146724")
                IValuePatternIdentifiersStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsReadOnlyProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ValueProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IValuePatternIdentifiersStatics=_uuidof(IValuePatternIdentifiersStatics);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IWindowPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.WindowPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IWindowPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.IWindowPatternIdentifiers";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("BEC579E1-91BE-5D8F-AACA-6AD8839872D2"), exclusiveto, contract] */
                MIDL_INTERFACE("BEC579E1-91BE-5D8F-AACA-6AD8839872D2")
                IWindowPatternIdentifiers : public IInspectable
                {
                public:
                    
                };

                extern MIDL_CONST_ID IID & IID_IWindowPatternIdentifiers=_uuidof(IWindowPatternIdentifiers);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IWindowPatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.WindowPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IWindowPatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.IWindowPatternIdentifiersStatics";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Automation {
                /* [object, uuid("06762744-D3D7-5441-B879-373681D47F64"), exclusiveto, contract] */
                MIDL_INTERFACE("06762744-D3D7-5441-B879-373681D47F64")
                IWindowPatternIdentifiersStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanMaximizeProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanMinimizeProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsModalProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsTopmostProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WindowInteractionStateProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WindowVisualStateProperty(
                        /* [retval, out] */Microsoft::UI::Xaml::Automation::IAutomationProperty * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWindowPatternIdentifiersStatics=_uuidof(IWindowPatternIdentifiersStatics);
                
            } /* Automation */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.AnnotationPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IAnnotationPatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IAnnotationPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_AnnotationPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_AnnotationPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_AnnotationPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.AnnotationPatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.AutomationAnnotation
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *   Type can be activated via the Microsoft.UI.Xaml.Automation.IAutomationAnnotationFactory interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IAutomationAnnotationStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IAutomationAnnotation ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_AutomationAnnotation_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_AutomationAnnotation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_AutomationAnnotation[] = L"Microsoft.UI.Xaml.Automation.AutomationAnnotation";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.AutomationElementIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IAutomationElementIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IAutomationElementIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_AutomationElementIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_AutomationElementIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_AutomationElementIdentifiers[] = L"Microsoft.UI.Xaml.Automation.AutomationElementIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.AutomationProperties
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IAutomationPropertiesStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IAutomationProperties ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_AutomationProperties_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_AutomationProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_AutomationProperties[] = L"Microsoft.UI.Xaml.Automation.AutomationProperties";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.AutomationProperty
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IAutomationProperty ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_AutomationProperty_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_AutomationProperty_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_AutomationProperty[] = L"Microsoft.UI.Xaml.Automation.AutomationProperty";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.ComponentPropertyValue
 *
 * Introduced to Microsoft.UI.Xaml.PrivateApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Microsoft.UI.Xaml.Automation.IComponentPropertyValueFactory interface starting with version 1.0 of the Microsoft.UI.Xaml.PrivateApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IComponentPropertyValueStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.PrivateApiContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IComponentPropertyValue ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_ComponentPropertyValue_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_ComponentPropertyValue_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_ComponentPropertyValue[] = L"Microsoft.UI.Xaml.Automation.ComponentPropertyValue";
#endif
#endif // MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.DockPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IDockPatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IDockPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_DockPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_DockPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_DockPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.DockPatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.DragPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IDragPatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IDragPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_DragPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_DragPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_DragPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.DragPatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.DropTargetPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IDropTargetPatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IDropTargetPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_DropTargetPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_DropTargetPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_DropTargetPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.DropTargetPatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.ExpandCollapsePatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IExpandCollapsePatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IExpandCollapsePatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_ExpandCollapsePatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_ExpandCollapsePatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_ExpandCollapsePatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.ExpandCollapsePatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.GridItemPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IGridItemPatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IGridItemPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_GridItemPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_GridItemPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_GridItemPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.GridItemPatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.GridPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IGridPatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IGridPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_GridPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_GridPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_GridPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.GridPatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.MultipleViewPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IMultipleViewPatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IMultipleViewPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_MultipleViewPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_MultipleViewPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_MultipleViewPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.MultipleViewPatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.RangeValuePatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IRangeValuePatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IRangeValuePatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_RangeValuePatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_RangeValuePatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_RangeValuePatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.RangeValuePatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.ScrollPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IScrollPatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IScrollPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_ScrollPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_ScrollPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_ScrollPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.ScrollPatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.SelectionItemPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.ISelectionItemPatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.ISelectionItemPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_SelectionItemPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_SelectionItemPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_SelectionItemPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.SelectionItemPatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.SelectionPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.ISelectionPatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.ISelectionPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_SelectionPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_SelectionPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_SelectionPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.SelectionPatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.SpreadsheetItemPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.ISpreadsheetItemPatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.ISpreadsheetItemPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_SpreadsheetItemPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_SpreadsheetItemPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_SpreadsheetItemPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.SpreadsheetItemPatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.StylesPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IStylesPatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IStylesPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_StylesPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_StylesPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_StylesPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.StylesPatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.TableItemPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.ITableItemPatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.ITableItemPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_TableItemPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_TableItemPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_TableItemPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.TableItemPatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.TablePatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.ITablePatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.ITablePatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_TablePatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_TablePatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_TablePatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.TablePatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.TogglePatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.ITogglePatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.ITogglePatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_TogglePatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_TogglePatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_TogglePatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.TogglePatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.TransformPattern2Identifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.ITransformPattern2IdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.ITransformPattern2Identifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_TransformPattern2Identifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_TransformPattern2Identifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_TransformPattern2Identifiers[] = L"Microsoft.UI.Xaml.Automation.TransformPattern2Identifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.TransformPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.ITransformPatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.ITransformPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_TransformPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_TransformPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_TransformPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.TransformPatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.ValuePatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IValuePatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IValuePatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_ValuePatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_ValuePatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_ValuePatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.ValuePatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.WindowPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IWindowPatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IWindowPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_WindowPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_WindowPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_WindowPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.WindowPatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperties_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperties_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperties __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperties;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperties_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiers __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiers;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiers __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiers;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiers __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiers;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiers_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiers __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiers;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiers __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiers;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2Identifiers __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2Identifiers;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiers __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiers;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiers __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiers;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics;

#endif // ____x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_INTERFACE_DEFINED__)
#define ____FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation;

typedef struct __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This, /* [retval][out] */ __RPC__out __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl;

interface __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation
{
    CONST_VTBL struct __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_INTERFACE_DEFINED__

#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_INTERFACE_DEFINED__)
#define ____FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation __FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation;

typedef  struct __FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation **first);

    END_INTERFACE
} __FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl;

interface __FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation
{
    CONST_VTBL struct __FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_INTERFACE_DEFINED__

#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation;

typedef struct __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
            /* [in] */ __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl;

interface __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation
{
    CONST_VTBL struct __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_INTERFACE_DEFINED__

#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_INTERFACE_DEFINED__)
#define ____FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_INTERFACE_DEFINED__

typedef interface __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation;

typedef struct __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This, /* [out] */ __RPC__deref_out_opt __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
        /* [in] */ __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This, /* [in] */ __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation * *value);

    END_INTERFACE
} __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl;

interface __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation
{
    CONST_VTBL struct __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation_INTERFACE_DEFINED__

#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef ____x_Microsoft_CUI_CXaml_CIUIElement_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CIUIElement_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CIUIElement __x_Microsoft_CUI_CXaml_CIUIElement;

#endif // ____x_Microsoft_CUI_CXaml_CIUIElement_FWD_DEFINED__


#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Microsoft__CUI__CXaml__CUIElement_INTERFACE_DEFINED__)
#define ____FIIterator_1_Microsoft__CUI__CXaml__CUIElement_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Microsoft__CUI__CXaml__CUIElement __FIIterator_1_Microsoft__CUI__CXaml__CUIElement;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Microsoft__CUI__CXaml__CUIElement;

typedef struct __FIIterator_1_Microsoft__CUI__CXaml__CUIElementVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CUIElement * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CUIElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CUIElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CUIElement * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CUIElement * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CUIElement * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CUIElement * This, /* [retval][out] */ __RPC__out __x_Microsoft_CUI_CXaml_CIUIElement * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CUIElement * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CUIElement * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CUIElement * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_Microsoft_CUI_CXaml_CIUIElement * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Microsoft__CUI__CXaml__CUIElementVtbl;

interface __FIIterator_1_Microsoft__CUI__CXaml__CUIElement
{
    CONST_VTBL struct __FIIterator_1_Microsoft__CUI__CXaml__CUIElementVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Microsoft__CUI__CXaml__CUIElement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CUIElement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CUIElement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Microsoft__CUI__CXaml__CUIElement_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CUIElement_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CUIElement_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Microsoft__CUI__CXaml__CUIElement_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CUIElement_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CUIElement_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CUIElement_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Microsoft__CUI__CXaml__CUIElement_INTERFACE_DEFINED__

#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Microsoft__CUI__CXaml__CUIElement_INTERFACE_DEFINED__)
#define ____FIIterable_1_Microsoft__CUI__CXaml__CUIElement_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Microsoft__CUI__CXaml__CUIElement __FIIterable_1_Microsoft__CUI__CXaml__CUIElement;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Microsoft__CUI__CXaml__CUIElement;

typedef  struct __FIIterable_1_Microsoft__CUI__CXaml__CUIElementVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CUIElement * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CUIElement * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CUIElement * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CUIElement * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CUIElement * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CUIElement * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CUIElement * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Microsoft__CUI__CXaml__CUIElement **first);

    END_INTERFACE
} __FIIterable_1_Microsoft__CUI__CXaml__CUIElementVtbl;

interface __FIIterable_1_Microsoft__CUI__CXaml__CUIElement
{
    CONST_VTBL struct __FIIterable_1_Microsoft__CUI__CXaml__CUIElementVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Microsoft__CUI__CXaml__CUIElement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Microsoft__CUI__CXaml__CUIElement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Microsoft__CUI__CXaml__CUIElement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Microsoft__CUI__CXaml__CUIElement_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Microsoft__CUI__CXaml__CUIElement_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Microsoft__CUI__CXaml__CUIElement_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Microsoft__CUI__CXaml__CUIElement_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Microsoft__CUI__CXaml__CUIElement_INTERFACE_DEFINED__

#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Microsoft__CUI__CXaml__CUIElement_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Microsoft__CUI__CXaml__CUIElement_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Microsoft__CUI__CXaml__CUIElement __FIVectorView_1_Microsoft__CUI__CXaml__CUIElement;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Microsoft__CUI__CXaml__CUIElement;

typedef struct __FIVectorView_1_Microsoft__CUI__CXaml__CUIElementVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CUIElement * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CUIElement * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CUIElement * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CUIElement * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CUIElement * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CUIElement * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CUIElement * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_Microsoft_CUI_CXaml_CIUIElement * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CUIElement * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CUIElement * This,
            /* [in] */ __x_Microsoft_CUI_CXaml_CIUIElement * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CUIElement * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_Microsoft_CUI_CXaml_CIUIElement * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Microsoft__CUI__CXaml__CUIElementVtbl;

interface __FIVectorView_1_Microsoft__CUI__CXaml__CUIElement
{
    CONST_VTBL struct __FIVectorView_1_Microsoft__CUI__CXaml__CUIElementVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Microsoft__CUI__CXaml__CUIElement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CUIElement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CUIElement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Microsoft__CUI__CXaml__CUIElement_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CUIElement_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CUIElement_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Microsoft__CUI__CXaml__CUIElement_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CUIElement_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CUIElement_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CUIElement_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Microsoft__CUI__CXaml__CUIElement_INTERFACE_DEFINED__

#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Microsoft__CUI__CXaml__CUIElement_INTERFACE_DEFINED__)
#define ____FIVector_1_Microsoft__CUI__CXaml__CUIElement_INTERFACE_DEFINED__

typedef interface __FIVector_1_Microsoft__CUI__CXaml__CUIElement __FIVector_1_Microsoft__CUI__CXaml__CUIElement;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Microsoft__CUI__CXaml__CUIElement;

typedef struct __FIVector_1_Microsoft__CUI__CXaml__CUIElementVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Microsoft__CUI__CXaml__CUIElement * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CUIElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CUIElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CUIElement * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CUIElement * This, /* [out] */ __RPC__deref_out_opt __x_Microsoft_CUI_CXaml_CIUIElement * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CUIElement * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CUIElement * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_Microsoft_CUI_CXaml_CIUIElement * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Microsoft__CUI__CXaml__CUIElement * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CUIElement * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Microsoft__CUI__CXaml__CUIElement **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CUIElement * This,
        /* [in] */ __RPC__in __x_Microsoft_CUI_CXaml_CIUIElement * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CUIElement * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_Microsoft_CUI_CXaml_CIUIElement * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CUIElement * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_Microsoft_CUI_CXaml_CIUIElement * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CUIElement * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CUIElement * This, /* [in] */ __RPC__in __x_Microsoft_CUI_CXaml_CIUIElement * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CUIElement * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CUIElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CUIElement * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_Microsoft_CUI_CXaml_CIUIElement * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CUIElement * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_Microsoft_CUI_CXaml_CIUIElement * *value);

    END_INTERFACE
} __FIVector_1_Microsoft__CUI__CXaml__CUIElementVtbl;

interface __FIVector_1_Microsoft__CUI__CXaml__CUIElement
{
    CONST_VTBL struct __FIVector_1_Microsoft__CUI__CXaml__CUIElementVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Microsoft__CUI__CXaml__CUIElement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CUIElement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CUIElement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Microsoft__CUI__CXaml__CUIElement_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CUIElement_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CUIElement_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Microsoft__CUI__CXaml__CUIElement_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CUIElement_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CUIElement_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CUIElement_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CUIElement_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CUIElement_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CUIElement_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CUIElement_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CUIElement_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CUIElement_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CUIElement_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CUIElement_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Microsoft__CUI__CXaml__CUIElement_INTERFACE_DEFINED__

#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef ____x_Microsoft_CUI_CXaml_CIDependencyObject_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CIDependencyObject_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CIDependencyObject __x_Microsoft_CUI_CXaml_CIDependencyObject;

#endif // ____x_Microsoft_CUI_CXaml_CIDependencyObject_FWD_DEFINED__


#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject_INTERFACE_DEFINED__)
#define ____FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject;

typedef struct __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObjectVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject * This, /* [retval][out] */ __RPC__out __x_Microsoft_CUI_CXaml_CIDependencyObject * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_Microsoft_CUI_CXaml_CIDependencyObject * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObjectVtbl;

interface __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject
{
    CONST_VTBL struct __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObjectVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject_INTERFACE_DEFINED__

#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Microsoft__CUI__CXaml__CDependencyObject_INTERFACE_DEFINED__)
#define ____FIIterable_1_Microsoft__CUI__CXaml__CDependencyObject_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Microsoft__CUI__CXaml__CDependencyObject __FIIterable_1_Microsoft__CUI__CXaml__CDependencyObject;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Microsoft__CUI__CXaml__CDependencyObject;

typedef  struct __FIIterable_1_Microsoft__CUI__CXaml__CDependencyObjectVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CDependencyObject * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CDependencyObject * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CDependencyObject * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CDependencyObject * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CDependencyObject * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CDependencyObject * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Microsoft__CUI__CXaml__CDependencyObject * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Microsoft__CUI__CXaml__CDependencyObject **first);

    END_INTERFACE
} __FIIterable_1_Microsoft__CUI__CXaml__CDependencyObjectVtbl;

interface __FIIterable_1_Microsoft__CUI__CXaml__CDependencyObject
{
    CONST_VTBL struct __FIIterable_1_Microsoft__CUI__CXaml__CDependencyObjectVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Microsoft__CUI__CXaml__CDependencyObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Microsoft__CUI__CXaml__CDependencyObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Microsoft__CUI__CXaml__CDependencyObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Microsoft__CUI__CXaml__CDependencyObject_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Microsoft__CUI__CXaml__CDependencyObject_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Microsoft__CUI__CXaml__CDependencyObject_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Microsoft__CUI__CXaml__CDependencyObject_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Microsoft__CUI__CXaml__CDependencyObject_INTERFACE_DEFINED__

#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject;

typedef struct __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObjectVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_Microsoft_CUI_CXaml_CIDependencyObject * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject * This,
            /* [in] */ __x_Microsoft_CUI_CXaml_CIDependencyObject * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_Microsoft_CUI_CXaml_CIDependencyObject * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObjectVtbl;

interface __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject
{
    CONST_VTBL struct __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObjectVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject_INTERFACE_DEFINED__

#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Microsoft__CUI__CXaml__CDependencyObject_INTERFACE_DEFINED__)
#define ____FIVector_1_Microsoft__CUI__CXaml__CDependencyObject_INTERFACE_DEFINED__

typedef interface __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Microsoft__CUI__CXaml__CDependencyObject;

typedef struct __FIVector_1_Microsoft__CUI__CXaml__CDependencyObjectVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject * This, /* [out] */ __RPC__deref_out_opt __x_Microsoft_CUI_CXaml_CIDependencyObject * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_Microsoft_CUI_CXaml_CIDependencyObject * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Microsoft__CUI__CXaml__CDependencyObject **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject * This,
        /* [in] */ __RPC__in __x_Microsoft_CUI_CXaml_CIDependencyObject * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_Microsoft_CUI_CXaml_CIDependencyObject * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_Microsoft_CUI_CXaml_CIDependencyObject * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject * This, /* [in] */ __RPC__in __x_Microsoft_CUI_CXaml_CIDependencyObject * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_Microsoft_CUI_CXaml_CIDependencyObject * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_Microsoft_CUI_CXaml_CIDependencyObject * *value);

    END_INTERFACE
} __FIVector_1_Microsoft__CUI__CXaml__CDependencyObjectVtbl;

interface __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject
{
    CONST_VTBL struct __FIVector_1_Microsoft__CUI__CXaml__CDependencyObjectVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Microsoft__CUI__CXaml__CDependencyObject_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Microsoft__CUI__CXaml__CDependencyObject_INTERFACE_DEFINED__

#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000



typedef enum __x_Microsoft_CUI_CXaml_CAutomation_CPeers_CAccessibilityView __x_Microsoft_CUI_CXaml_CAutomation_CPeers_CAccessibilityView;


typedef enum __x_Microsoft_CUI_CXaml_CAutomation_CPeers_CAutomationHeadingLevel __x_Microsoft_CUI_CXaml_CAutomation_CPeers_CAutomationHeadingLevel;


typedef enum __x_Microsoft_CUI_CXaml_CAutomation_CPeers_CAutomationLandmarkType __x_Microsoft_CUI_CXaml_CAutomation_CPeers_CAutomationLandmarkType;


typedef enum __x_Microsoft_CUI_CXaml_CAutomation_CPeers_CAutomationLiveSetting __x_Microsoft_CUI_CXaml_CAutomation_CPeers_CAutomationLiveSetting;







#ifndef ____x_Microsoft_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CIDependencyProperty __x_Microsoft_CUI_CXaml_CIDependencyProperty;

#endif // ____x_Microsoft_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__









typedef enum __x_Microsoft_CUI_CXaml_CAutomation_CAnnotationType __x_Microsoft_CUI_CXaml_CAutomation_CAnnotationType;


typedef enum __x_Microsoft_CUI_CXaml_CAutomation_CAutomationActiveEnd __x_Microsoft_CUI_CXaml_CAutomation_CAutomationActiveEnd;


typedef enum __x_Microsoft_CUI_CXaml_CAutomation_CAutomationAnimationStyle __x_Microsoft_CUI_CXaml_CAutomation_CAutomationAnimationStyle;


typedef enum __x_Microsoft_CUI_CXaml_CAutomation_CAutomationBulletStyle __x_Microsoft_CUI_CXaml_CAutomation_CAutomationBulletStyle;


typedef enum __x_Microsoft_CUI_CXaml_CAutomation_CAutomationCaretBidiMode __x_Microsoft_CUI_CXaml_CAutomation_CAutomationCaretBidiMode;


typedef enum __x_Microsoft_CUI_CXaml_CAutomation_CAutomationCaretPosition __x_Microsoft_CUI_CXaml_CAutomation_CAutomationCaretPosition;


typedef enum __x_Microsoft_CUI_CXaml_CAutomation_CAutomationFlowDirections __x_Microsoft_CUI_CXaml_CAutomation_CAutomationFlowDirections;


typedef enum __x_Microsoft_CUI_CXaml_CAutomation_CAutomationOutlineStyles __x_Microsoft_CUI_CXaml_CAutomation_CAutomationOutlineStyles;


typedef enum __x_Microsoft_CUI_CXaml_CAutomation_CAutomationStyleId __x_Microsoft_CUI_CXaml_CAutomation_CAutomationStyleId;


typedef enum __x_Microsoft_CUI_CXaml_CAutomation_CAutomationTextDecorationLineStyle __x_Microsoft_CUI_CXaml_CAutomation_CAutomationTextDecorationLineStyle;


typedef enum __x_Microsoft_CUI_CXaml_CAutomation_CAutomationTextEditChangeType __x_Microsoft_CUI_CXaml_CAutomation_CAutomationTextEditChangeType;


typedef enum __x_Microsoft_CUI_CXaml_CAutomation_CDockPosition __x_Microsoft_CUI_CXaml_CAutomation_CDockPosition;


typedef enum __x_Microsoft_CUI_CXaml_CAutomation_CExpandCollapseState __x_Microsoft_CUI_CXaml_CAutomation_CExpandCollapseState;


typedef enum __x_Microsoft_CUI_CXaml_CAutomation_CRowOrColumnMajor __x_Microsoft_CUI_CXaml_CAutomation_CRowOrColumnMajor;


typedef enum __x_Microsoft_CUI_CXaml_CAutomation_CScrollAmount __x_Microsoft_CUI_CXaml_CAutomation_CScrollAmount;


typedef enum __x_Microsoft_CUI_CXaml_CAutomation_CSupportedTextSelection __x_Microsoft_CUI_CXaml_CAutomation_CSupportedTextSelection;


typedef enum __x_Microsoft_CUI_CXaml_CAutomation_CSynchronizedInputType __x_Microsoft_CUI_CXaml_CAutomation_CSynchronizedInputType;


typedef enum __x_Microsoft_CUI_CXaml_CAutomation_CToggleState __x_Microsoft_CUI_CXaml_CAutomation_CToggleState;


typedef enum __x_Microsoft_CUI_CXaml_CAutomation_CWindowInteractionState __x_Microsoft_CUI_CXaml_CAutomation_CWindowInteractionState;


typedef enum __x_Microsoft_CUI_CXaml_CAutomation_CWindowVisualState __x_Microsoft_CUI_CXaml_CAutomation_CWindowVisualState;


typedef enum __x_Microsoft_CUI_CXaml_CAutomation_CZoomUnit __x_Microsoft_CUI_CXaml_CAutomation_CZoomUnit;


























































































/*
 *
 * Struct Microsoft.UI.Xaml.Automation.AnnotationType
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_Microsoft_CUI_CXaml_CAutomation_CAnnotationType
{
    Microsoft_UI_Xaml_Automation_AnnotationType_Unknown = 60000,
    Microsoft_UI_Xaml_Automation_AnnotationType_SpellingError = 60001,
    Microsoft_UI_Xaml_Automation_AnnotationType_GrammarError = 60002,
    Microsoft_UI_Xaml_Automation_AnnotationType_Comment = 60003,
    Microsoft_UI_Xaml_Automation_AnnotationType_FormulaError = 60004,
    Microsoft_UI_Xaml_Automation_AnnotationType_TrackChanges = 60005,
    Microsoft_UI_Xaml_Automation_AnnotationType_Header = 60006,
    Microsoft_UI_Xaml_Automation_AnnotationType_Footer = 60007,
    Microsoft_UI_Xaml_Automation_AnnotationType_Highlighted = 60008,
    Microsoft_UI_Xaml_Automation_AnnotationType_Endnote = 60009,
    Microsoft_UI_Xaml_Automation_AnnotationType_Footnote = 60010,
    Microsoft_UI_Xaml_Automation_AnnotationType_InsertionChange = 60011,
    Microsoft_UI_Xaml_Automation_AnnotationType_DeletionChange = 60012,
    Microsoft_UI_Xaml_Automation_AnnotationType_MoveChange = 60013,
    Microsoft_UI_Xaml_Automation_AnnotationType_FormatChange = 60014,
    Microsoft_UI_Xaml_Automation_AnnotationType_UnsyncedChange = 60015,
    Microsoft_UI_Xaml_Automation_AnnotationType_EditingLockedChange = 60016,
    Microsoft_UI_Xaml_Automation_AnnotationType_ExternalChange = 60017,
    Microsoft_UI_Xaml_Automation_AnnotationType_ConflictingChange = 60018,
    Microsoft_UI_Xaml_Automation_AnnotationType_Author = 60019,
    Microsoft_UI_Xaml_Automation_AnnotationType_AdvancedProofingIssue = 60020,
    Microsoft_UI_Xaml_Automation_AnnotationType_DataValidationError = 60021,
    Microsoft_UI_Xaml_Automation_AnnotationType_CircularReferenceError = 60022,
};
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.AutomationActiveEnd
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_Microsoft_CUI_CXaml_CAutomation_CAutomationActiveEnd
{
    Microsoft_UI_Xaml_Automation_AutomationActiveEnd_None = 0,
    Microsoft_UI_Xaml_Automation_AutomationActiveEnd_Start = 1,
    Microsoft_UI_Xaml_Automation_AutomationActiveEnd_End = 2,
};
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.AutomationAnimationStyle
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_Microsoft_CUI_CXaml_CAutomation_CAutomationAnimationStyle
{
    Microsoft_UI_Xaml_Automation_AutomationAnimationStyle_None = 0,
    Microsoft_UI_Xaml_Automation_AutomationAnimationStyle_LasVegasLights = 1,
    Microsoft_UI_Xaml_Automation_AutomationAnimationStyle_BlinkingBackground = 2,
    Microsoft_UI_Xaml_Automation_AutomationAnimationStyle_SparkleText = 3,
    Microsoft_UI_Xaml_Automation_AutomationAnimationStyle_MarchingBlackAnts = 4,
    Microsoft_UI_Xaml_Automation_AutomationAnimationStyle_MarchingRedAnts = 5,
    Microsoft_UI_Xaml_Automation_AutomationAnimationStyle_Shimmer = 6,
    Microsoft_UI_Xaml_Automation_AutomationAnimationStyle_Other = 7,
};
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.AutomationBulletStyle
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_Microsoft_CUI_CXaml_CAutomation_CAutomationBulletStyle
{
    Microsoft_UI_Xaml_Automation_AutomationBulletStyle_None = 0,
    Microsoft_UI_Xaml_Automation_AutomationBulletStyle_HollowRoundBullet = 1,
    Microsoft_UI_Xaml_Automation_AutomationBulletStyle_FilledRoundBullet = 2,
    Microsoft_UI_Xaml_Automation_AutomationBulletStyle_HollowSquareBullet = 3,
    Microsoft_UI_Xaml_Automation_AutomationBulletStyle_FilledSquareBullet = 4,
    Microsoft_UI_Xaml_Automation_AutomationBulletStyle_DashBullet = 5,
    Microsoft_UI_Xaml_Automation_AutomationBulletStyle_Other = 6,
};
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.AutomationCaretBidiMode
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_Microsoft_CUI_CXaml_CAutomation_CAutomationCaretBidiMode
{
    Microsoft_UI_Xaml_Automation_AutomationCaretBidiMode_LTR = 0,
    Microsoft_UI_Xaml_Automation_AutomationCaretBidiMode_RTL = 1,
};
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.AutomationCaretPosition
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_Microsoft_CUI_CXaml_CAutomation_CAutomationCaretPosition
{
    Microsoft_UI_Xaml_Automation_AutomationCaretPosition_Unknown = 0,
    Microsoft_UI_Xaml_Automation_AutomationCaretPosition_EndOfLine = 1,
    Microsoft_UI_Xaml_Automation_AutomationCaretPosition_BeginningOfLine = 2,
};
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.AutomationFlowDirections
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_Microsoft_CUI_CXaml_CAutomation_CAutomationFlowDirections
{
    Microsoft_UI_Xaml_Automation_AutomationFlowDirections_Default = 0,
    Microsoft_UI_Xaml_Automation_AutomationFlowDirections_RightToLeft = 1,
    Microsoft_UI_Xaml_Automation_AutomationFlowDirections_BottomToTop = 2,
    Microsoft_UI_Xaml_Automation_AutomationFlowDirections_Vertical = 3,
};
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.AutomationOutlineStyles
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_Microsoft_CUI_CXaml_CAutomation_CAutomationOutlineStyles
{
    Microsoft_UI_Xaml_Automation_AutomationOutlineStyles_None = 0,
    Microsoft_UI_Xaml_Automation_AutomationOutlineStyles_Outline = 1,
    Microsoft_UI_Xaml_Automation_AutomationOutlineStyles_Shadow = 2,
    Microsoft_UI_Xaml_Automation_AutomationOutlineStyles_Engraved = 3,
    Microsoft_UI_Xaml_Automation_AutomationOutlineStyles_Embossed = 4,
};
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.AutomationStyleId
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_Microsoft_CUI_CXaml_CAutomation_CAutomationStyleId
{
    Microsoft_UI_Xaml_Automation_AutomationStyleId_Heading1 = 70001,
    Microsoft_UI_Xaml_Automation_AutomationStyleId_Heading2 = 70002,
    Microsoft_UI_Xaml_Automation_AutomationStyleId_Heading3 = 70003,
    Microsoft_UI_Xaml_Automation_AutomationStyleId_Heading4 = 70004,
    Microsoft_UI_Xaml_Automation_AutomationStyleId_Heading5 = 70005,
    Microsoft_UI_Xaml_Automation_AutomationStyleId_Heading6 = 70006,
    Microsoft_UI_Xaml_Automation_AutomationStyleId_Heading7 = 70007,
    Microsoft_UI_Xaml_Automation_AutomationStyleId_Heading8 = 70008,
    Microsoft_UI_Xaml_Automation_AutomationStyleId_Heading9 = 70009,
    Microsoft_UI_Xaml_Automation_AutomationStyleId_Title = 70010,
    Microsoft_UI_Xaml_Automation_AutomationStyleId_Subtitle = 70011,
    Microsoft_UI_Xaml_Automation_AutomationStyleId_Normal = 70012,
    Microsoft_UI_Xaml_Automation_AutomationStyleId_Emphasis = 70013,
    Microsoft_UI_Xaml_Automation_AutomationStyleId_Quote = 70014,
    Microsoft_UI_Xaml_Automation_AutomationStyleId_BulletedList = 70015,
};
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.AutomationTextDecorationLineStyle
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_Microsoft_CUI_CXaml_CAutomation_CAutomationTextDecorationLineStyle
{
    Microsoft_UI_Xaml_Automation_AutomationTextDecorationLineStyle_None = 0,
    Microsoft_UI_Xaml_Automation_AutomationTextDecorationLineStyle_Single = 1,
    Microsoft_UI_Xaml_Automation_AutomationTextDecorationLineStyle_WordsOnly = 2,
    Microsoft_UI_Xaml_Automation_AutomationTextDecorationLineStyle_Double = 3,
    Microsoft_UI_Xaml_Automation_AutomationTextDecorationLineStyle_Dot = 4,
    Microsoft_UI_Xaml_Automation_AutomationTextDecorationLineStyle_Dash = 5,
    Microsoft_UI_Xaml_Automation_AutomationTextDecorationLineStyle_DashDot = 6,
    Microsoft_UI_Xaml_Automation_AutomationTextDecorationLineStyle_DashDotDot = 7,
    Microsoft_UI_Xaml_Automation_AutomationTextDecorationLineStyle_Wavy = 8,
    Microsoft_UI_Xaml_Automation_AutomationTextDecorationLineStyle_ThickSingle = 9,
    Microsoft_UI_Xaml_Automation_AutomationTextDecorationLineStyle_DoubleWavy = 10,
    Microsoft_UI_Xaml_Automation_AutomationTextDecorationLineStyle_ThickWavy = 11,
    Microsoft_UI_Xaml_Automation_AutomationTextDecorationLineStyle_LongDash = 12,
    Microsoft_UI_Xaml_Automation_AutomationTextDecorationLineStyle_ThickDash = 13,
    Microsoft_UI_Xaml_Automation_AutomationTextDecorationLineStyle_ThickDashDot = 14,
    Microsoft_UI_Xaml_Automation_AutomationTextDecorationLineStyle_ThickDashDotDot = 15,
    Microsoft_UI_Xaml_Automation_AutomationTextDecorationLineStyle_ThickDot = 16,
    Microsoft_UI_Xaml_Automation_AutomationTextDecorationLineStyle_ThickLongDash = 17,
    Microsoft_UI_Xaml_Automation_AutomationTextDecorationLineStyle_Other = 18,
};
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.AutomationTextEditChangeType
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_Microsoft_CUI_CXaml_CAutomation_CAutomationTextEditChangeType
{
    Microsoft_UI_Xaml_Automation_AutomationTextEditChangeType_None = 0,
    Microsoft_UI_Xaml_Automation_AutomationTextEditChangeType_AutoCorrect = 1,
    Microsoft_UI_Xaml_Automation_AutomationTextEditChangeType_Composition = 2,
    Microsoft_UI_Xaml_Automation_AutomationTextEditChangeType_CompositionFinalized = 3,
};
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.DockPosition
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_Microsoft_CUI_CXaml_CAutomation_CDockPosition
{
    Microsoft_UI_Xaml_Automation_DockPosition_Top = 0,
    Microsoft_UI_Xaml_Automation_DockPosition_Left = 1,
    Microsoft_UI_Xaml_Automation_DockPosition_Bottom = 2,
    Microsoft_UI_Xaml_Automation_DockPosition_Right = 3,
    Microsoft_UI_Xaml_Automation_DockPosition_Fill = 4,
    Microsoft_UI_Xaml_Automation_DockPosition_None = 5,
};
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.ExpandCollapseState
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_Microsoft_CUI_CXaml_CAutomation_CExpandCollapseState
{
    Microsoft_UI_Xaml_Automation_ExpandCollapseState_Collapsed = 0,
    Microsoft_UI_Xaml_Automation_ExpandCollapseState_Expanded = 1,
    Microsoft_UI_Xaml_Automation_ExpandCollapseState_PartiallyExpanded = 2,
    Microsoft_UI_Xaml_Automation_ExpandCollapseState_LeafNode = 3,
};
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.RowOrColumnMajor
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_Microsoft_CUI_CXaml_CAutomation_CRowOrColumnMajor
{
    Microsoft_UI_Xaml_Automation_RowOrColumnMajor_RowMajor = 0,
    Microsoft_UI_Xaml_Automation_RowOrColumnMajor_ColumnMajor = 1,
    Microsoft_UI_Xaml_Automation_RowOrColumnMajor_Indeterminate = 2,
};
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.ScrollAmount
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_Microsoft_CUI_CXaml_CAutomation_CScrollAmount
{
    Microsoft_UI_Xaml_Automation_ScrollAmount_LargeDecrement = 0,
    Microsoft_UI_Xaml_Automation_ScrollAmount_SmallDecrement = 1,
    Microsoft_UI_Xaml_Automation_ScrollAmount_NoAmount = 2,
    Microsoft_UI_Xaml_Automation_ScrollAmount_LargeIncrement = 3,
    Microsoft_UI_Xaml_Automation_ScrollAmount_SmallIncrement = 4,
};
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.SupportedTextSelection
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_Microsoft_CUI_CXaml_CAutomation_CSupportedTextSelection
{
    Microsoft_UI_Xaml_Automation_SupportedTextSelection_None = 0,
    Microsoft_UI_Xaml_Automation_SupportedTextSelection_Single = 1,
    Microsoft_UI_Xaml_Automation_SupportedTextSelection_Multiple = 2,
};
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.SynchronizedInputType
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_Microsoft_CUI_CXaml_CAutomation_CSynchronizedInputType
{
    Microsoft_UI_Xaml_Automation_SynchronizedInputType_KeyUp = 1,
    Microsoft_UI_Xaml_Automation_SynchronizedInputType_KeyDown = 2,
    Microsoft_UI_Xaml_Automation_SynchronizedInputType_LeftMouseUp = 4,
    Microsoft_UI_Xaml_Automation_SynchronizedInputType_LeftMouseDown = 8,
    Microsoft_UI_Xaml_Automation_SynchronizedInputType_RightMouseUp = 16,
    Microsoft_UI_Xaml_Automation_SynchronizedInputType_RightMouseDown = 32,
};
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.ToggleState
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_Microsoft_CUI_CXaml_CAutomation_CToggleState
{
    Microsoft_UI_Xaml_Automation_ToggleState_Off = 0,
    Microsoft_UI_Xaml_Automation_ToggleState_On = 1,
    Microsoft_UI_Xaml_Automation_ToggleState_Indeterminate = 2,
};
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.WindowInteractionState
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_Microsoft_CUI_CXaml_CAutomation_CWindowInteractionState
{
    Microsoft_UI_Xaml_Automation_WindowInteractionState_Running = 0,
    Microsoft_UI_Xaml_Automation_WindowInteractionState_Closing = 1,
    Microsoft_UI_Xaml_Automation_WindowInteractionState_ReadyForUserInteraction = 2,
    Microsoft_UI_Xaml_Automation_WindowInteractionState_BlockedByModalWindow = 3,
    Microsoft_UI_Xaml_Automation_WindowInteractionState_NotResponding = 4,
};
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.WindowVisualState
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_Microsoft_CUI_CXaml_CAutomation_CWindowVisualState
{
    Microsoft_UI_Xaml_Automation_WindowVisualState_Normal = 0,
    Microsoft_UI_Xaml_Automation_WindowVisualState_Maximized = 1,
    Microsoft_UI_Xaml_Automation_WindowVisualState_Minimized = 2,
};
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Automation.ZoomUnit
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_Microsoft_CUI_CXaml_CAutomation_CZoomUnit
{
    Microsoft_UI_Xaml_Automation_ZoomUnit_NoAmount = 0,
    Microsoft_UI_Xaml_Automation_ZoomUnit_LargeDecrement = 1,
    Microsoft_UI_Xaml_Automation_ZoomUnit_SmallDecrement = 2,
    Microsoft_UI_Xaml_Automation_ZoomUnit_LargeIncrement = 3,
    Microsoft_UI_Xaml_Automation_ZoomUnit_SmallIncrement = 4,
};
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IAnnotationPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.AnnotationPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IAnnotationPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.IAnnotationPatternIdentifiers";
/* [object, uuid("92D76915-0CD3-59CD-8AE0-C9004628BA1E"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IAnnotationPatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.AnnotationPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IAnnotationPatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.IAnnotationPatternIdentifiersStatics";
/* [object, uuid("20A136E2-4A47-5DE5-9E1E-ECFC6D92F52A"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AnnotationTypeIdProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AnnotationTypeNameProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AuthorProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DateTimeProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TargetProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStaticsVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_get_AnnotationTypeIdProperty(This,value) \
    ( (This)->lpVtbl->get_AnnotationTypeIdProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_get_AnnotationTypeNameProperty(This,value) \
    ( (This)->lpVtbl->get_AnnotationTypeNameProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_get_AuthorProperty(This,value) \
    ( (This)->lpVtbl->get_AuthorProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_get_DateTimeProperty(This,value) \
    ( (This)->lpVtbl->get_DateTimeProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_get_TargetProperty(This,value) \
    ( (This)->lpVtbl->get_TargetProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IAutomationAnnotation
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.AutomationAnnotation
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IAutomationAnnotation[] = L"Microsoft.UI.Xaml.Automation.IAutomationAnnotation";
/* [object, uuid("C2CC46AD-1414-5F1B-808A-89E5D53D82FE"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CAnnotationType * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Type )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CAutomation_CAnnotationType value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Element )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIUIElement * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Element )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIUIElement * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation_put_Type(This,value) \
    ( (This)->lpVtbl->put_Type(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation_get_Element(This,value) \
    ( (This)->lpVtbl->get_Element(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation_put_Element(This,value) \
    ( (This)->lpVtbl->put_Element(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IAutomationAnnotationFactory
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.AutomationAnnotation
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IAutomationAnnotationFactory[] = L"Microsoft.UI.Xaml.Automation.IAutomationAnnotationFactory";
/* [object, uuid("95F82773-EAC5-572E-87DE-24D9514B9A89"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CAutomation_CAnnotationType type,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithElementParameter )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CAutomation_CAnnotationType type,
        /* [in] */__x_Microsoft_CUI_CXaml_CIUIElement * element,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotation * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactoryVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_CreateInstance(This,type,value) \
    ( (This)->lpVtbl->CreateInstance(This,type,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_CreateWithElementParameter(This,type,element,value) \
    ( (This)->lpVtbl->CreateWithElementParameter(This,type,element,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IAutomationAnnotationStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.AutomationAnnotation
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IAutomationAnnotationStatics[] = L"Microsoft.UI.Xaml.Automation.IAutomationAnnotationStatics";
/* [object, uuid("C5ABDC1E-FC26-5444-A8B3-59B2C0A95578"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TypeProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ElementProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStaticsVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_get_TypeProperty(This,value) \
    ( (This)->lpVtbl->get_TypeProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_get_ElementProperty(This,value) \
    ( (This)->lpVtbl->get_ElementProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IAutomationElementIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.AutomationElementIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IAutomationElementIdentifiers[] = L"Microsoft.UI.Xaml.Automation.IAutomationElementIdentifiers";
/* [object, uuid("2FB51A33-B0CF-5A4C-9ED3-267ECA7AEEFC"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IAutomationElementIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.AutomationElementIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IAutomationElementIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.IAutomationElementIdentifiersStatics";
/* [object, uuid("72AF6B8C-3E12-5E7A-A2EC-26DC193F9DF9"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AcceleratorKeyProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AccessKeyProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutomationIdProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BoundingRectangleProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ClassNameProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ClickablePointProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ControlTypeProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasKeyboardFocusProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HelpTextProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsContentElementProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsControlElementProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsEnabledProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsKeyboardFocusableProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsOffscreenProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsPasswordProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsRequiredForFormProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ItemStatusProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ItemTypeProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LabeledByProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocalizedControlTypeProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NameProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OrientationProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LiveSettingProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ControlledPeersProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PositionInSetProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SizeOfSetProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LevelProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AnnotationsProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LandmarkTypeProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocalizedLandmarkTypeProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsPeripheralProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsDataValidForFormProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FullDescriptionProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DescribedByProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FlowsToProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FlowsFromProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CultureProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HeadingLevelProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsDialogProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStaticsVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_AcceleratorKeyProperty(This,value) \
    ( (This)->lpVtbl->get_AcceleratorKeyProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_AccessKeyProperty(This,value) \
    ( (This)->lpVtbl->get_AccessKeyProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_AutomationIdProperty(This,value) \
    ( (This)->lpVtbl->get_AutomationIdProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_BoundingRectangleProperty(This,value) \
    ( (This)->lpVtbl->get_BoundingRectangleProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_ClassNameProperty(This,value) \
    ( (This)->lpVtbl->get_ClassNameProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_ClickablePointProperty(This,value) \
    ( (This)->lpVtbl->get_ClickablePointProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_ControlTypeProperty(This,value) \
    ( (This)->lpVtbl->get_ControlTypeProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_HasKeyboardFocusProperty(This,value) \
    ( (This)->lpVtbl->get_HasKeyboardFocusProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_HelpTextProperty(This,value) \
    ( (This)->lpVtbl->get_HelpTextProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_IsContentElementProperty(This,value) \
    ( (This)->lpVtbl->get_IsContentElementProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_IsControlElementProperty(This,value) \
    ( (This)->lpVtbl->get_IsControlElementProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_IsEnabledProperty(This,value) \
    ( (This)->lpVtbl->get_IsEnabledProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_IsKeyboardFocusableProperty(This,value) \
    ( (This)->lpVtbl->get_IsKeyboardFocusableProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_IsOffscreenProperty(This,value) \
    ( (This)->lpVtbl->get_IsOffscreenProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_IsPasswordProperty(This,value) \
    ( (This)->lpVtbl->get_IsPasswordProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_IsRequiredForFormProperty(This,value) \
    ( (This)->lpVtbl->get_IsRequiredForFormProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_ItemStatusProperty(This,value) \
    ( (This)->lpVtbl->get_ItemStatusProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_ItemTypeProperty(This,value) \
    ( (This)->lpVtbl->get_ItemTypeProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_LabeledByProperty(This,value) \
    ( (This)->lpVtbl->get_LabeledByProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_LocalizedControlTypeProperty(This,value) \
    ( (This)->lpVtbl->get_LocalizedControlTypeProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_NameProperty(This,value) \
    ( (This)->lpVtbl->get_NameProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_OrientationProperty(This,value) \
    ( (This)->lpVtbl->get_OrientationProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_LiveSettingProperty(This,value) \
    ( (This)->lpVtbl->get_LiveSettingProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_ControlledPeersProperty(This,value) \
    ( (This)->lpVtbl->get_ControlledPeersProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_PositionInSetProperty(This,value) \
    ( (This)->lpVtbl->get_PositionInSetProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_SizeOfSetProperty(This,value) \
    ( (This)->lpVtbl->get_SizeOfSetProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_LevelProperty(This,value) \
    ( (This)->lpVtbl->get_LevelProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_AnnotationsProperty(This,value) \
    ( (This)->lpVtbl->get_AnnotationsProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_LandmarkTypeProperty(This,value) \
    ( (This)->lpVtbl->get_LandmarkTypeProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_LocalizedLandmarkTypeProperty(This,value) \
    ( (This)->lpVtbl->get_LocalizedLandmarkTypeProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_IsPeripheralProperty(This,value) \
    ( (This)->lpVtbl->get_IsPeripheralProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_IsDataValidForFormProperty(This,value) \
    ( (This)->lpVtbl->get_IsDataValidForFormProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_FullDescriptionProperty(This,value) \
    ( (This)->lpVtbl->get_FullDescriptionProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_DescribedByProperty(This,value) \
    ( (This)->lpVtbl->get_DescribedByProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_FlowsToProperty(This,value) \
    ( (This)->lpVtbl->get_FlowsToProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_FlowsFromProperty(This,value) \
    ( (This)->lpVtbl->get_FlowsFromProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_CultureProperty(This,value) \
    ( (This)->lpVtbl->get_CultureProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_HeadingLevelProperty(This,value) \
    ( (This)->lpVtbl->get_HeadingLevelProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_IsDialogProperty(This,value) \
    ( (This)->lpVtbl->get_IsDialogProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IAutomationProperties
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.AutomationProperties
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperties_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IAutomationProperties[] = L"Microsoft.UI.Xaml.Automation.IAutomationProperties";
/* [object, uuid("525C6A71-DD8A-52A0-977B-DB1B02F8E896"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperties * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperties * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperties * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperties * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperties * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperties * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperties
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperties_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperties_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperties_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperties_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperties_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperties_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperties;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperties_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IAutomationPropertiesStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.AutomationProperties
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IAutomationPropertiesStatics[] = L"Microsoft.UI.Xaml.Automation.IAutomationPropertiesStatics";
/* [object, uuid("B1E3E0F3-112F-5966-87DC-7862D4AD50E5"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AcceleratorKeyProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAcceleratorKey )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetAcceleratorKey )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [in] */HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AccessKeyProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAccessKey )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetAccessKey )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [in] */HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutomationIdProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAutomationId )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetAutomationId )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [in] */HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HelpTextProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetHelpText )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetHelpText )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [in] */HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsRequiredForFormProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsRequiredForForm )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetIsRequiredForForm )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ItemStatusProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetItemStatus )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetItemStatus )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [in] */HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ItemTypeProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetItemType )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetItemType )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [in] */HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LabeledByProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetLabeledBy )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIUIElement * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetLabeledBy )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [in] */__x_Microsoft_CUI_CXaml_CIUIElement * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NameProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetName )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetName )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [in] */HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LiveSettingProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetLiveSetting )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CPeers_CAutomationLiveSetting * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetLiveSetting )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [in] */__x_Microsoft_CUI_CXaml_CAutomation_CPeers_CAutomationLiveSetting value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AccessibilityViewProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAccessibilityView )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CPeers_CAccessibilityView * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetAccessibilityView )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [in] */__x_Microsoft_CUI_CXaml_CAutomation_CPeers_CAccessibilityView value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ControlledPeersProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetControlledPeers )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__FIVector_1_Microsoft__CUI__CXaml__CUIElement * * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PositionInSetProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPositionInSet )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetPositionInSet )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SizeOfSetProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetSizeOfSet )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetSizeOfSet )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LevelProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetLevel )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetLevel )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AnnotationsProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAnnotations )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__FIVector_1_Microsoft__CUI__CXaml__CAutomation__CAutomationAnnotation * * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LandmarkTypeProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetLandmarkType )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CPeers_CAutomationLandmarkType * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetLandmarkType )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [in] */__x_Microsoft_CUI_CXaml_CAutomation_CPeers_CAutomationLandmarkType value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocalizedLandmarkTypeProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetLocalizedLandmarkType )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetLocalizedLandmarkType )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [in] */HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsPeripheralProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsPeripheral )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetIsPeripheral )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsDataValidForFormProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsDataValidForForm )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetIsDataValidForForm )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FullDescriptionProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetFullDescription )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetFullDescription )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [in] */HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocalizedControlTypeProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetLocalizedControlType )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetLocalizedControlType )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [in] */HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DescribedByProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDescribedBy )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__FIVector_1_Microsoft__CUI__CXaml__CDependencyObject * * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FlowsToProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetFlowsTo )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__FIVector_1_Microsoft__CUI__CXaml__CDependencyObject * * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FlowsFromProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetFlowsFrom )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__FIVector_1_Microsoft__CUI__CXaml__CDependencyObject * * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CultureProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCulture )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetCulture )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HeadingLevelProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetHeadingLevel )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CPeers_CAutomationHeadingLevel * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetHeadingLevel )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [in] */__x_Microsoft_CUI_CXaml_CAutomation_CPeers_CAutomationHeadingLevel value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsDialogProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsDialog )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetIsDialog )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStaticsVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_AcceleratorKeyProperty(This,value) \
    ( (This)->lpVtbl->get_AcceleratorKeyProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetAcceleratorKey(This,element,result) \
    ( (This)->lpVtbl->GetAcceleratorKey(This,element,result) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetAcceleratorKey(This,element,value) \
    ( (This)->lpVtbl->SetAcceleratorKey(This,element,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_AccessKeyProperty(This,value) \
    ( (This)->lpVtbl->get_AccessKeyProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetAccessKey(This,element,result) \
    ( (This)->lpVtbl->GetAccessKey(This,element,result) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetAccessKey(This,element,value) \
    ( (This)->lpVtbl->SetAccessKey(This,element,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_AutomationIdProperty(This,value) \
    ( (This)->lpVtbl->get_AutomationIdProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetAutomationId(This,element,result) \
    ( (This)->lpVtbl->GetAutomationId(This,element,result) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetAutomationId(This,element,value) \
    ( (This)->lpVtbl->SetAutomationId(This,element,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_HelpTextProperty(This,value) \
    ( (This)->lpVtbl->get_HelpTextProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetHelpText(This,element,result) \
    ( (This)->lpVtbl->GetHelpText(This,element,result) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetHelpText(This,element,value) \
    ( (This)->lpVtbl->SetHelpText(This,element,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_IsRequiredForFormProperty(This,value) \
    ( (This)->lpVtbl->get_IsRequiredForFormProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetIsRequiredForForm(This,element,result) \
    ( (This)->lpVtbl->GetIsRequiredForForm(This,element,result) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetIsRequiredForForm(This,element,value) \
    ( (This)->lpVtbl->SetIsRequiredForForm(This,element,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_ItemStatusProperty(This,value) \
    ( (This)->lpVtbl->get_ItemStatusProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetItemStatus(This,element,result) \
    ( (This)->lpVtbl->GetItemStatus(This,element,result) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetItemStatus(This,element,value) \
    ( (This)->lpVtbl->SetItemStatus(This,element,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_ItemTypeProperty(This,value) \
    ( (This)->lpVtbl->get_ItemTypeProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetItemType(This,element,result) \
    ( (This)->lpVtbl->GetItemType(This,element,result) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetItemType(This,element,value) \
    ( (This)->lpVtbl->SetItemType(This,element,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_LabeledByProperty(This,value) \
    ( (This)->lpVtbl->get_LabeledByProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetLabeledBy(This,element,result) \
    ( (This)->lpVtbl->GetLabeledBy(This,element,result) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetLabeledBy(This,element,value) \
    ( (This)->lpVtbl->SetLabeledBy(This,element,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_NameProperty(This,value) \
    ( (This)->lpVtbl->get_NameProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetName(This,element,result) \
    ( (This)->lpVtbl->GetName(This,element,result) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetName(This,element,value) \
    ( (This)->lpVtbl->SetName(This,element,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_LiveSettingProperty(This,value) \
    ( (This)->lpVtbl->get_LiveSettingProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetLiveSetting(This,element,result) \
    ( (This)->lpVtbl->GetLiveSetting(This,element,result) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetLiveSetting(This,element,value) \
    ( (This)->lpVtbl->SetLiveSetting(This,element,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_AccessibilityViewProperty(This,value) \
    ( (This)->lpVtbl->get_AccessibilityViewProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetAccessibilityView(This,element,result) \
    ( (This)->lpVtbl->GetAccessibilityView(This,element,result) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetAccessibilityView(This,element,value) \
    ( (This)->lpVtbl->SetAccessibilityView(This,element,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_ControlledPeersProperty(This,value) \
    ( (This)->lpVtbl->get_ControlledPeersProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetControlledPeers(This,element,result) \
    ( (This)->lpVtbl->GetControlledPeers(This,element,result) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_PositionInSetProperty(This,value) \
    ( (This)->lpVtbl->get_PositionInSetProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetPositionInSet(This,element,result) \
    ( (This)->lpVtbl->GetPositionInSet(This,element,result) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetPositionInSet(This,element,value) \
    ( (This)->lpVtbl->SetPositionInSet(This,element,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_SizeOfSetProperty(This,value) \
    ( (This)->lpVtbl->get_SizeOfSetProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetSizeOfSet(This,element,result) \
    ( (This)->lpVtbl->GetSizeOfSet(This,element,result) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetSizeOfSet(This,element,value) \
    ( (This)->lpVtbl->SetSizeOfSet(This,element,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_LevelProperty(This,value) \
    ( (This)->lpVtbl->get_LevelProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetLevel(This,element,result) \
    ( (This)->lpVtbl->GetLevel(This,element,result) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetLevel(This,element,value) \
    ( (This)->lpVtbl->SetLevel(This,element,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_AnnotationsProperty(This,value) \
    ( (This)->lpVtbl->get_AnnotationsProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetAnnotations(This,element,result) \
    ( (This)->lpVtbl->GetAnnotations(This,element,result) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_LandmarkTypeProperty(This,value) \
    ( (This)->lpVtbl->get_LandmarkTypeProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetLandmarkType(This,element,result) \
    ( (This)->lpVtbl->GetLandmarkType(This,element,result) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetLandmarkType(This,element,value) \
    ( (This)->lpVtbl->SetLandmarkType(This,element,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_LocalizedLandmarkTypeProperty(This,value) \
    ( (This)->lpVtbl->get_LocalizedLandmarkTypeProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetLocalizedLandmarkType(This,element,result) \
    ( (This)->lpVtbl->GetLocalizedLandmarkType(This,element,result) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetLocalizedLandmarkType(This,element,value) \
    ( (This)->lpVtbl->SetLocalizedLandmarkType(This,element,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_IsPeripheralProperty(This,value) \
    ( (This)->lpVtbl->get_IsPeripheralProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetIsPeripheral(This,element,result) \
    ( (This)->lpVtbl->GetIsPeripheral(This,element,result) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetIsPeripheral(This,element,value) \
    ( (This)->lpVtbl->SetIsPeripheral(This,element,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_IsDataValidForFormProperty(This,value) \
    ( (This)->lpVtbl->get_IsDataValidForFormProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetIsDataValidForForm(This,element,result) \
    ( (This)->lpVtbl->GetIsDataValidForForm(This,element,result) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetIsDataValidForForm(This,element,value) \
    ( (This)->lpVtbl->SetIsDataValidForForm(This,element,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_FullDescriptionProperty(This,value) \
    ( (This)->lpVtbl->get_FullDescriptionProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetFullDescription(This,element,result) \
    ( (This)->lpVtbl->GetFullDescription(This,element,result) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetFullDescription(This,element,value) \
    ( (This)->lpVtbl->SetFullDescription(This,element,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_LocalizedControlTypeProperty(This,value) \
    ( (This)->lpVtbl->get_LocalizedControlTypeProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetLocalizedControlType(This,element,result) \
    ( (This)->lpVtbl->GetLocalizedControlType(This,element,result) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetLocalizedControlType(This,element,value) \
    ( (This)->lpVtbl->SetLocalizedControlType(This,element,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_DescribedByProperty(This,value) \
    ( (This)->lpVtbl->get_DescribedByProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetDescribedBy(This,element,result) \
    ( (This)->lpVtbl->GetDescribedBy(This,element,result) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_FlowsToProperty(This,value) \
    ( (This)->lpVtbl->get_FlowsToProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetFlowsTo(This,element,result) \
    ( (This)->lpVtbl->GetFlowsTo(This,element,result) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_FlowsFromProperty(This,value) \
    ( (This)->lpVtbl->get_FlowsFromProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetFlowsFrom(This,element,result) \
    ( (This)->lpVtbl->GetFlowsFrom(This,element,result) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_CultureProperty(This,value) \
    ( (This)->lpVtbl->get_CultureProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetCulture(This,element,result) \
    ( (This)->lpVtbl->GetCulture(This,element,result) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetCulture(This,element,value) \
    ( (This)->lpVtbl->SetCulture(This,element,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_HeadingLevelProperty(This,value) \
    ( (This)->lpVtbl->get_HeadingLevelProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetHeadingLevel(This,element,result) \
    ( (This)->lpVtbl->GetHeadingLevel(This,element,result) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetHeadingLevel(This,element,value) \
    ( (This)->lpVtbl->SetHeadingLevel(This,element,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_IsDialogProperty(This,value) \
    ( (This)->lpVtbl->get_IsDialogProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetIsDialog(This,element,result) \
    ( (This)->lpVtbl->GetIsDialog(This,element,result) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetIsDialog(This,element,value) \
    ( (This)->lpVtbl->SetIsDialog(This,element,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IAutomationProperty
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.AutomationProperty
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IAutomationProperty[] = L"Microsoft.UI.Xaml.Automation.IAutomationProperty";
/* [object, uuid("5CA6B2C8-FF86-5A41-AA18-6948FAE592CF"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertyVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationPropertyVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IComponentPropertyValue
 *
 * Introduced to Microsoft.UI.Xaml.PrivateApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.ComponentPropertyValue
 *
 *
 */
#if MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IComponentPropertyValue[] = L"Microsoft.UI.Xaml.Automation.IComponentPropertyValue";
/* [object, uuid("982C5FDC-F1BE-55E9-861E-B41906B3EA81"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ElementId )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Site )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIUIElement * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue_get_ElementId(This,value) \
    ( (This)->lpVtbl->get_ElementId(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue_get_Site(This,value) \
    ( (This)->lpVtbl->get_Site(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IComponentPropertyValueFactory
 *
 * Introduced to Microsoft.UI.Xaml.PrivateApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.ComponentPropertyValue
 *
 *
 */
#if MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IComponentPropertyValueFactory[] = L"Microsoft.UI.Xaml.Automation.IComponentPropertyValueFactory";
/* [object, uuid("9AAB8357-5E64-58E7-BB8A-08EC774117A4"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIUIElement * site,
        /* [in] */HSTRING elementId,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValue * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactoryVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory_CreateInstance(This,site,elementId,value) \
    ( (This)->lpVtbl->CreateInstance(This,site,elementId,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueFactory_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IComponentPropertyValueStatics
 *
 * Introduced to Microsoft.UI.Xaml.PrivateApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.ComponentPropertyValue
 *
 *
 */
#if MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IComponentPropertyValueStatics[] = L"Microsoft.UI.Xaml.Automation.IComponentPropertyValueStatics";
/* [object, uuid("541BDD93-620C-58A4-A297-00411C146CA2"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ElementIdProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SiteProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStaticsVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics_get_ElementIdProperty(This,value) \
    ( (This)->lpVtbl->get_ElementIdProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics_get_SiteProperty(This,value) \
    ( (This)->lpVtbl->get_SiteProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIComponentPropertyValueStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IDockPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.DockPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IDockPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.IDockPatternIdentifiers";
/* [object, uuid("75574F99-D145-547E-972B-7D879F93C03E"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiers
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IDockPatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.DockPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IDockPatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.IDockPatternIdentifiersStatics";
/* [object, uuid("02D5A72C-F49D-53A9-B9FB-AF2719D16CCF"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DockPositionProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStaticsVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_get_DockPositionProperty(This,value) \
    ( (This)->lpVtbl->get_DockPositionProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IDragPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.DragPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IDragPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.IDragPatternIdentifiers";
/* [object, uuid("AA2FDFD5-FB45-5D2B-8D92-A8E7B07061C2"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiers
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IDragPatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.DragPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IDragPatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.IDragPatternIdentifiersStatics";
/* [object, uuid("482EEE70-0BFC-5552-9E7D-8DFFC526B2F7"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DropEffectProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DropEffectsProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GrabbedItemsProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsGrabbedProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStaticsVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_get_DropEffectProperty(This,value) \
    ( (This)->lpVtbl->get_DropEffectProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_get_DropEffectsProperty(This,value) \
    ( (This)->lpVtbl->get_DropEffectsProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_get_GrabbedItemsProperty(This,value) \
    ( (This)->lpVtbl->get_GrabbedItemsProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_get_IsGrabbedProperty(This,value) \
    ( (This)->lpVtbl->get_IsGrabbedProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IDropTargetPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.DropTargetPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IDropTargetPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.IDropTargetPatternIdentifiers";
/* [object, uuid("133E8FF3-1DDD-5CBB-B908-1484D7C04DA7"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IDropTargetPatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.DropTargetPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IDropTargetPatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.IDropTargetPatternIdentifiersStatics";
/* [object, uuid("6DA6F0BD-B942-5283-BE35-501AE87F88C7"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DropTargetEffectProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DropTargetEffectsProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStaticsVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_get_DropTargetEffectProperty(This,value) \
    ( (This)->lpVtbl->get_DropTargetEffectProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_get_DropTargetEffectsProperty(This,value) \
    ( (This)->lpVtbl->get_DropTargetEffectsProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IExpandCollapsePatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.ExpandCollapsePatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IExpandCollapsePatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.IExpandCollapsePatternIdentifiers";
/* [object, uuid("CEC15D9F-8630-569A-86A0-524BBEA618FF"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IExpandCollapsePatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.ExpandCollapsePatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IExpandCollapsePatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.IExpandCollapsePatternIdentifiersStatics";
/* [object, uuid("283101F4-C40C-55BF-A23B-D62B73B6AA35"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExpandCollapseStateProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStaticsVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_get_ExpandCollapseStateProperty(This,value) \
    ( (This)->lpVtbl->get_ExpandCollapseStateProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IGridItemPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.GridItemPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IGridItemPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.IGridItemPatternIdentifiers";
/* [object, uuid("93609087-1114-557D-B17B-F801E41CEBBB"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IGridItemPatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.GridItemPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IGridItemPatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.IGridItemPatternIdentifiersStatics";
/* [object, uuid("8072BC18-87D0-5A02-A0A1-F9AEC968C0E7"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ColumnProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ColumnSpanProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContainingGridProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RowProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RowSpanProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStaticsVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_get_ColumnProperty(This,value) \
    ( (This)->lpVtbl->get_ColumnProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_get_ColumnSpanProperty(This,value) \
    ( (This)->lpVtbl->get_ColumnSpanProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_get_ContainingGridProperty(This,value) \
    ( (This)->lpVtbl->get_ContainingGridProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_get_RowProperty(This,value) \
    ( (This)->lpVtbl->get_RowProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_get_RowSpanProperty(This,value) \
    ( (This)->lpVtbl->get_RowSpanProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IGridPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.GridPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IGridPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.IGridPatternIdentifiers";
/* [object, uuid("E5E1E250-C37C-54A2-8C61-1D9CCD3BB39C"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiers
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IGridPatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.GridPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IGridPatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.IGridPatternIdentifiersStatics";
/* [object, uuid("E861604C-101F-5A6D-A308-3714F510F744"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ColumnCountProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RowCountProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStaticsVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_get_ColumnCountProperty(This,value) \
    ( (This)->lpVtbl->get_ColumnCountProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_get_RowCountProperty(This,value) \
    ( (This)->lpVtbl->get_RowCountProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IMultipleViewPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.MultipleViewPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IMultipleViewPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.IMultipleViewPatternIdentifiers";
/* [object, uuid("70E4C847-2B82-5ECF-B808-E9D453C1FE53"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IMultipleViewPatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.MultipleViewPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IMultipleViewPatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.IMultipleViewPatternIdentifiersStatics";
/* [object, uuid("AC71DAEF-D094-5C90-94AF-1FA474AB45FE"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrentViewProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedViewsProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStaticsVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_get_CurrentViewProperty(This,value) \
    ( (This)->lpVtbl->get_CurrentViewProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_get_SupportedViewsProperty(This,value) \
    ( (This)->lpVtbl->get_SupportedViewsProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IRangeValuePatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.RangeValuePatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IRangeValuePatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.IRangeValuePatternIdentifiers";
/* [object, uuid("C114DB37-6A75-5EF1-A542-D3B13F92CBFE"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IRangeValuePatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.RangeValuePatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IRangeValuePatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.IRangeValuePatternIdentifiersStatics";
/* [object, uuid("0AAA9AD7-F9B8-52A1-BC96-2A97FE389ED0"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsReadOnlyProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LargeChangeProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaximumProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinimumProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SmallChangeProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ValueProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStaticsVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_get_IsReadOnlyProperty(This,value) \
    ( (This)->lpVtbl->get_IsReadOnlyProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_get_LargeChangeProperty(This,value) \
    ( (This)->lpVtbl->get_LargeChangeProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_get_MaximumProperty(This,value) \
    ( (This)->lpVtbl->get_MaximumProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_get_MinimumProperty(This,value) \
    ( (This)->lpVtbl->get_MinimumProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_get_SmallChangeProperty(This,value) \
    ( (This)->lpVtbl->get_SmallChangeProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_get_ValueProperty(This,value) \
    ( (This)->lpVtbl->get_ValueProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IScrollPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.ScrollPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IScrollPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.IScrollPatternIdentifiers";
/* [object, uuid("04F1A4B8-EDC7-55F2-96DF-A9C7E809372E"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IScrollPatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.ScrollPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IScrollPatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.IScrollPatternIdentifiersStatics";
/* [object, uuid("0F94F2F0-E0D2-5A24-B415-8D1506CE47AA"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HorizontallyScrollableProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HorizontalScrollPercentProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HorizontalViewSizeProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NoScroll )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
        /* [retval, out] */DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VerticallyScrollableProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VerticalScrollPercentProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VerticalViewSizeProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStaticsVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_get_HorizontallyScrollableProperty(This,value) \
    ( (This)->lpVtbl->get_HorizontallyScrollableProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_get_HorizontalScrollPercentProperty(This,value) \
    ( (This)->lpVtbl->get_HorizontalScrollPercentProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_get_HorizontalViewSizeProperty(This,value) \
    ( (This)->lpVtbl->get_HorizontalViewSizeProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_get_NoScroll(This,value) \
    ( (This)->lpVtbl->get_NoScroll(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_get_VerticallyScrollableProperty(This,value) \
    ( (This)->lpVtbl->get_VerticallyScrollableProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_get_VerticalScrollPercentProperty(This,value) \
    ( (This)->lpVtbl->get_VerticalScrollPercentProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_get_VerticalViewSizeProperty(This,value) \
    ( (This)->lpVtbl->get_VerticalViewSizeProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ISelectionItemPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.SelectionItemPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ISelectionItemPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.ISelectionItemPatternIdentifiers";
/* [object, uuid("CE3A549D-A2CB-594D-A2A4-44778C09CCA5"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ISelectionItemPatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.SelectionItemPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ISelectionItemPatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.ISelectionItemPatternIdentifiersStatics";
/* [object, uuid("2B8EAD7C-4E03-5B84-9E34-8B7384CBD862"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsSelectedProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelectionContainerProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStaticsVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_get_IsSelectedProperty(This,value) \
    ( (This)->lpVtbl->get_IsSelectedProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_get_SelectionContainerProperty(This,value) \
    ( (This)->lpVtbl->get_SelectionContainerProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ISelectionPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.SelectionPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ISelectionPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.ISelectionPatternIdentifiers";
/* [object, uuid("401743D2-1FBA-5D05-B89F-631676453237"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ISelectionPatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.SelectionPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ISelectionPatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.ISelectionPatternIdentifiersStatics";
/* [object, uuid("F3ED111B-B20A-5E5E-A232-07F607FD5C07"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanSelectMultipleProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsSelectionRequiredProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelectionProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStaticsVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_get_CanSelectMultipleProperty(This,value) \
    ( (This)->lpVtbl->get_CanSelectMultipleProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_get_IsSelectionRequiredProperty(This,value) \
    ( (This)->lpVtbl->get_IsSelectionRequiredProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_get_SelectionProperty(This,value) \
    ( (This)->lpVtbl->get_SelectionProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ISpreadsheetItemPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.SpreadsheetItemPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ISpreadsheetItemPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.ISpreadsheetItemPatternIdentifiers";
/* [object, uuid("DCA2EC46-8564-5C9C-BA90-2C08455F697B"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ISpreadsheetItemPatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.SpreadsheetItemPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ISpreadsheetItemPatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.ISpreadsheetItemPatternIdentifiersStatics";
/* [object, uuid("7EB10F80-8D3A-59AD-A2B9-05D8CECF18DB"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FormulaProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStaticsVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_get_FormulaProperty(This,value) \
    ( (This)->lpVtbl->get_FormulaProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IStylesPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.StylesPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IStylesPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.IStylesPatternIdentifiers";
/* [object, uuid("13AECA5E-B496-5DF5-AEA5-330E1F0490EB"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IStylesPatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.StylesPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IStylesPatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.IStylesPatternIdentifiersStatics";
/* [object, uuid("B232287A-BC4C-581E-A33C-3D6AEE10D04B"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExtendedPropertiesProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FillColorProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FillPatternColorProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FillPatternStyleProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShapeProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StyleIdProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StyleNameProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStaticsVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_get_ExtendedPropertiesProperty(This,value) \
    ( (This)->lpVtbl->get_ExtendedPropertiesProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_get_FillColorProperty(This,value) \
    ( (This)->lpVtbl->get_FillColorProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_get_FillPatternColorProperty(This,value) \
    ( (This)->lpVtbl->get_FillPatternColorProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_get_FillPatternStyleProperty(This,value) \
    ( (This)->lpVtbl->get_FillPatternStyleProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_get_ShapeProperty(This,value) \
    ( (This)->lpVtbl->get_ShapeProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_get_StyleIdProperty(This,value) \
    ( (This)->lpVtbl->get_StyleIdProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_get_StyleNameProperty(This,value) \
    ( (This)->lpVtbl->get_StyleNameProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ITableItemPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.TableItemPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ITableItemPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.ITableItemPatternIdentifiers";
/* [object, uuid("B4DE5D03-A5B4-5CA1-8715-16C8C6A10FCC"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ITableItemPatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.TableItemPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ITableItemPatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.ITableItemPatternIdentifiersStatics";
/* [object, uuid("81D24BD7-66FB-53EF-9B32-D00F9C240A14"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ColumnHeaderItemsProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RowHeaderItemsProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStaticsVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_get_ColumnHeaderItemsProperty(This,value) \
    ( (This)->lpVtbl->get_ColumnHeaderItemsProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_get_RowHeaderItemsProperty(This,value) \
    ( (This)->lpVtbl->get_RowHeaderItemsProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ITablePatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.TablePatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ITablePatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.ITablePatternIdentifiers";
/* [object, uuid("3D7F9C0B-FF8F-50FA-BC01-2CC3C2E06E2C"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiers
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ITablePatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.TablePatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ITablePatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.ITablePatternIdentifiersStatics";
/* [object, uuid("3660935E-BCBB-5848-8E9A-264854F7A19A"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ColumnHeadersProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RowHeadersProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RowOrColumnMajorProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStaticsVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_get_ColumnHeadersProperty(This,value) \
    ( (This)->lpVtbl->get_ColumnHeadersProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_get_RowHeadersProperty(This,value) \
    ( (This)->lpVtbl->get_RowHeadersProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_get_RowOrColumnMajorProperty(This,value) \
    ( (This)->lpVtbl->get_RowOrColumnMajorProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ITogglePatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.TogglePatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ITogglePatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.ITogglePatternIdentifiers";
/* [object, uuid("A0D2DF4C-BA59-51D9-9C01-034D7941C280"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiers
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ITogglePatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.TogglePatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ITogglePatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.ITogglePatternIdentifiersStatics";
/* [object, uuid("862920B5-DCB3-5691-A456-C2F15C476DFB"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ToggleStateProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStaticsVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_get_ToggleStateProperty(This,value) \
    ( (This)->lpVtbl->get_ToggleStateProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ITransformPattern2Identifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.TransformPattern2Identifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ITransformPattern2Identifiers[] = L"Microsoft.UI.Xaml.Automation.ITransformPattern2Identifiers";
/* [object, uuid("6EF7595C-DB8C-51B0-878B-34B7EF12F4DA"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2Identifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2Identifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2Identifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2Identifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2Identifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2Identifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2Identifiers
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2Identifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ITransformPattern2IdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.TransformPattern2Identifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ITransformPattern2IdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.ITransformPattern2IdentifiersStatics";
/* [object, uuid("D9876FF5-89ED-5333-8111-AD25A28BEE8B"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanZoomProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ZoomLevelProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxZoomProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinZoomProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStaticsVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_get_CanZoomProperty(This,value) \
    ( (This)->lpVtbl->get_CanZoomProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_get_ZoomLevelProperty(This,value) \
    ( (This)->lpVtbl->get_ZoomLevelProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_get_MaxZoomProperty(This,value) \
    ( (This)->lpVtbl->get_MaxZoomProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_get_MinZoomProperty(This,value) \
    ( (This)->lpVtbl->get_MinZoomProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ITransformPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.TransformPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ITransformPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.ITransformPatternIdentifiers";
/* [object, uuid("2348187B-C50F-5A0E-BC05-305AC71B3B6B"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiers
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.ITransformPatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.TransformPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_ITransformPatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.ITransformPatternIdentifiersStatics";
/* [object, uuid("CB7D84E4-5429-5188-8AA0-5F96558A8790"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanMoveProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanResizeProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanRotateProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStaticsVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_get_CanMoveProperty(This,value) \
    ( (This)->lpVtbl->get_CanMoveProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_get_CanResizeProperty(This,value) \
    ( (This)->lpVtbl->get_CanResizeProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_get_CanRotateProperty(This,value) \
    ( (This)->lpVtbl->get_CanRotateProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IValuePatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.ValuePatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IValuePatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.IValuePatternIdentifiers";
/* [object, uuid("FB493395-FB97-59D5-9323-4651CE964B55"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiers
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IValuePatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.ValuePatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IValuePatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.IValuePatternIdentifiersStatics";
/* [object, uuid("2019FAF5-CE64-59A7-BC13-0677C3146724"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsReadOnlyProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ValueProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStaticsVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_get_IsReadOnlyProperty(This,value) \
    ( (This)->lpVtbl->get_IsReadOnlyProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_get_ValueProperty(This,value) \
    ( (This)->lpVtbl->get_ValueProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IWindowPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.WindowPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IWindowPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.IWindowPatternIdentifiers";
/* [object, uuid("BEC579E1-91BE-5D8F-AACA-6AD8839872D2"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Automation.IWindowPatternIdentifiersStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Automation.WindowPatternIdentifiers
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Automation_IWindowPatternIdentifiersStatics[] = L"Microsoft.UI.Xaml.Automation.IWindowPatternIdentifiersStatics";
/* [object, uuid("06762744-D3D7-5441-B879-373681D47F64"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanMaximizeProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanMinimizeProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsModalProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsTopmostProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WindowInteractionStateProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WindowVisualStateProperty )(
        __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStaticsVtbl;

interface __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_get_CanMaximizeProperty(This,value) \
    ( (This)->lpVtbl->get_CanMaximizeProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_get_CanMinimizeProperty(This,value) \
    ( (This)->lpVtbl->get_CanMinimizeProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_get_IsModalProperty(This,value) \
    ( (This)->lpVtbl->get_IsModalProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_get_IsTopmostProperty(This,value) \
    ( (This)->lpVtbl->get_IsTopmostProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_get_WindowInteractionStateProperty(This,value) \
    ( (This)->lpVtbl->get_WindowInteractionStateProperty(This,value) )

#define __x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_get_WindowVisualStateProperty(This,value) \
    ( (This)->lpVtbl->get_WindowVisualStateProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.AnnotationPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IAnnotationPatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IAnnotationPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_AnnotationPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_AnnotationPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_AnnotationPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.AnnotationPatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.AutomationAnnotation
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *   Type can be activated via the Microsoft.UI.Xaml.Automation.IAutomationAnnotationFactory interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IAutomationAnnotationStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IAutomationAnnotation ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_AutomationAnnotation_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_AutomationAnnotation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_AutomationAnnotation[] = L"Microsoft.UI.Xaml.Automation.AutomationAnnotation";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.AutomationElementIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IAutomationElementIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IAutomationElementIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_AutomationElementIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_AutomationElementIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_AutomationElementIdentifiers[] = L"Microsoft.UI.Xaml.Automation.AutomationElementIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.AutomationProperties
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IAutomationPropertiesStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IAutomationProperties ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_AutomationProperties_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_AutomationProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_AutomationProperties[] = L"Microsoft.UI.Xaml.Automation.AutomationProperties";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.AutomationProperty
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IAutomationProperty ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_AutomationProperty_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_AutomationProperty_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_AutomationProperty[] = L"Microsoft.UI.Xaml.Automation.AutomationProperty";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.ComponentPropertyValue
 *
 * Introduced to Microsoft.UI.Xaml.PrivateApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Microsoft.UI.Xaml.Automation.IComponentPropertyValueFactory interface starting with version 1.0 of the Microsoft.UI.Xaml.PrivateApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IComponentPropertyValueStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.PrivateApiContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IComponentPropertyValue ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_ComponentPropertyValue_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_ComponentPropertyValue_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_ComponentPropertyValue[] = L"Microsoft.UI.Xaml.Automation.ComponentPropertyValue";
#endif
#endif // MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.DockPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IDockPatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IDockPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_DockPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_DockPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_DockPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.DockPatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.DragPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IDragPatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IDragPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_DragPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_DragPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_DragPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.DragPatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.DropTargetPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IDropTargetPatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IDropTargetPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_DropTargetPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_DropTargetPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_DropTargetPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.DropTargetPatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.ExpandCollapsePatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IExpandCollapsePatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IExpandCollapsePatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_ExpandCollapsePatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_ExpandCollapsePatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_ExpandCollapsePatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.ExpandCollapsePatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.GridItemPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IGridItemPatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IGridItemPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_GridItemPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_GridItemPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_GridItemPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.GridItemPatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.GridPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IGridPatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IGridPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_GridPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_GridPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_GridPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.GridPatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.MultipleViewPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IMultipleViewPatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IMultipleViewPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_MultipleViewPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_MultipleViewPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_MultipleViewPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.MultipleViewPatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.RangeValuePatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IRangeValuePatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IRangeValuePatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_RangeValuePatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_RangeValuePatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_RangeValuePatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.RangeValuePatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.ScrollPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IScrollPatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IScrollPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_ScrollPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_ScrollPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_ScrollPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.ScrollPatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.SelectionItemPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.ISelectionItemPatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.ISelectionItemPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_SelectionItemPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_SelectionItemPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_SelectionItemPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.SelectionItemPatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.SelectionPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.ISelectionPatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.ISelectionPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_SelectionPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_SelectionPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_SelectionPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.SelectionPatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.SpreadsheetItemPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.ISpreadsheetItemPatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.ISpreadsheetItemPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_SpreadsheetItemPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_SpreadsheetItemPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_SpreadsheetItemPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.SpreadsheetItemPatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.StylesPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IStylesPatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IStylesPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_StylesPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_StylesPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_StylesPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.StylesPatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.TableItemPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.ITableItemPatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.ITableItemPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_TableItemPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_TableItemPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_TableItemPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.TableItemPatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.TablePatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.ITablePatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.ITablePatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_TablePatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_TablePatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_TablePatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.TablePatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.TogglePatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.ITogglePatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.ITogglePatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_TogglePatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_TogglePatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_TogglePatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.TogglePatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.TransformPattern2Identifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.ITransformPattern2IdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.ITransformPattern2Identifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_TransformPattern2Identifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_TransformPattern2Identifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_TransformPattern2Identifiers[] = L"Microsoft.UI.Xaml.Automation.TransformPattern2Identifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.TransformPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.ITransformPatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.ITransformPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_TransformPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_TransformPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_TransformPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.TransformPatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.ValuePatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IValuePatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IValuePatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_ValuePatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_ValuePatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_ValuePatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.ValuePatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Automation.WindowPatternIdentifiers
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Automation.IWindowPatternIdentifiersStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Automation.IWindowPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Automation_WindowPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Automation_WindowPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Automation_WindowPatternIdentifiers[] = L"Microsoft.UI.Xaml.Automation.WindowPatternIdentifiers";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __Microsoft2EUI2EXaml2EAutomation_p_h__

#endif // __Microsoft2EUI2EXaml2EAutomation_h__
