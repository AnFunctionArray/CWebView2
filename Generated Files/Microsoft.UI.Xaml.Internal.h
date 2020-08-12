/* Header file automatically generated from Microsoft.UI.Xaml.Internal.idl */
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
#ifndef __Microsoft2EUI2EXaml2EInternal_h__
#define __Microsoft2EUI2EXaml2EInternal_h__
#ifndef __Microsoft2EUI2EXaml2EInternal_p_h__
#define __Microsoft2EUI2EXaml2EInternal_p_h__


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

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Internal {
                interface ILayoutTransitionElementUtilitiesStatics;
            } /* Internal */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics Microsoft::UI::Xaml::Internal::ILayoutTransitionElementUtilitiesStatics

#endif // ____x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Internal {
                interface ISecondaryContentRelationship;
            } /* Internal */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship Microsoft::UI::Xaml::Internal::ISecondaryContentRelationship

#endif // ____x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Internal {
                interface ISecondaryContentRelationshipStatics;
            } /* Internal */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics Microsoft::UI::Xaml::Internal::ISecondaryContentRelationshipStatics

#endif // ____x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics_FWD_DEFINED__



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










namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Internal {
                class SecondaryContentRelationship;
            } /* Internal */
        } /* Xaml */
    } /* UI */
} /* Microsoft */







/*
 *
 * Interface Microsoft.UI.Xaml.Internal.ILayoutTransitionElementUtilitiesStatics
 *
 * Introduced to Microsoft.UI.Xaml.PrivateApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Internal.LayoutTransitionElementUtilities
 *
 *
 */
#if MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Internal_ILayoutTransitionElementUtilitiesStatics[] = L"Microsoft.UI.Xaml.Internal.ILayoutTransitionElementUtilitiesStatics";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Internal {
                /* [object, uuid("434F0C36-4674-59A5-BC20-A9E55B7F3D6C"), exclusiveto, contract] */
                MIDL_INTERFACE("434F0C36-4674-59A5-BC20-A9E55B7F3D6C")
                ILayoutTransitionElementUtilitiesStatics : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE CreateLayoutTransitionElement(
                        /* [in] */Microsoft::UI::Xaml::IUIElement * source,
                        /* [in] */Microsoft::UI::Xaml::IUIElement * parent,
                        /* [retval, out] */Microsoft::UI::Xaml::IUIElement * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DestroyLayoutTransitionElement(
                        /* [in] */Microsoft::UI::Xaml::IUIElement * source,
                        /* [in] */Microsoft::UI::Xaml::IUIElement * parent,
                        /* [in] */Microsoft::UI::Xaml::IUIElement * layoutTransitionElement
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILayoutTransitionElementUtilitiesStatics=_uuidof(ILayoutTransitionElementUtilitiesStatics);
                
            } /* Internal */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Internal.ISecondaryContentRelationship
 *
 * Introduced to Microsoft.UI.Xaml.PrivateApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Internal.SecondaryContentRelationship
 *
 *
 */
#if MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Internal_ISecondaryContentRelationship[] = L"Microsoft.UI.Xaml.Internal.ISecondaryContentRelationship";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Internal {
                /* [object, uuid("D891C269-9DCA-52D4-A6C3-ADB1C0C96D3C"), exclusiveto, contract] */
                MIDL_INTERFACE("D891C269-9DCA-52D4-A6C3-ADB1C0C96D3C")
                ISecondaryContentRelationship : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE SetAuxiliaryDependencyPropertyHolder(
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * auxiliaryDependencyPropertyHolder
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE PrepareForCurveUpdate(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Apply(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Remove(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE UpdateDependencyProperties(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISecondaryContentRelationship=_uuidof(ISecondaryContentRelationship);
                
            } /* Internal */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Internal.ISecondaryContentRelationshipStatics
 *
 * Introduced to Microsoft.UI.Xaml.PrivateApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Internal.SecondaryContentRelationship
 *
 *
 */
#if MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Internal_ISecondaryContentRelationshipStatics[] = L"Microsoft.UI.Xaml.Internal.ISecondaryContentRelationshipStatics";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Internal {
                /* [object, uuid("235826C9-DFF5-586A-8FAF-F2DD17EAA39A"), exclusiveto, contract] */
                MIDL_INTERFACE("235826C9-DFF5-586A-8FAF-F2DD17EAA39A")
                ISecondaryContentRelationshipStatics : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE CreateStickyHeaderRelationship(
                        /* [in] */Microsoft::UI::Xaml::IUIElement * scrollViewer,
                        /* [in] */Microsoft::UI::Xaml::IUIElement * panelObject,
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * panelTransform,
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * headerTransform,
                        /* [in] */DOUBLE groupTopY,
                        /* [in] */DOUBLE groupBottomY,
                        /* [in] */DOUBLE headerHeight,
                        /* [retval, out] */Microsoft::UI::Xaml::Internal::ISecondaryContentRelationship * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateClipTransformRelationship(
                        /* [in] */Microsoft::UI::Xaml::IUIElement * scrollViewer,
                        /* [in] */Microsoft::UI::Xaml::IUIElement * clipOwner,
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * clipTransform,
                        /* [in] */DOUBLE listExtentHeight,
                        /* [in] */DOUBLE listViewportHeight,
                        /* [retval, out] */Microsoft::UI::Xaml::Internal::ISecondaryContentRelationship * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateParallaxRelationship(
                        /* [in] */Microsoft::UI::Xaml::IUIElement * scrollViewer,
                        /* [in] */Microsoft::UI::Xaml::IUIElement * headerObject,
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * headerTransform,
                        /* [in] */UINT32 __primaryOffsetsSize,
                        /* [size_is(__primaryOffsetsSize), in] */DOUBLE * primaryOffsets,
                        /* [in] */UINT32 __secondaryOffsetsSize,
                        /* [size_is(__secondaryOffsetsSize), in] */DOUBLE * secondaryOffsets,
                        /* [retval, out] */Microsoft::UI::Xaml::Internal::ISecondaryContentRelationship * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateStaticElementRelationship(
                        /* [in] */Microsoft::UI::Xaml::IUIElement * scrollViewer,
                        /* [in] */Microsoft::UI::Xaml::IUIElement * staticElement,
                        /* [in] */Microsoft::UI::Xaml::IDependencyObject * elementTransform,
                        /* [in] */::boolean isHorizontallyStatic,
                        /* [in] */::boolean isInverted,
                        /* [retval, out] */Microsoft::UI::Xaml::Internal::ISecondaryContentRelationship * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISecondaryContentRelationshipStatics=_uuidof(ISecondaryContentRelationshipStatics);
                
            } /* Internal */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Internal.LayoutTransitionElementUtilities
 *
 * Introduced to Microsoft.UI.Xaml.PrivateApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Internal.ILayoutTransitionElementUtilitiesStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.PrivateApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Internal_LayoutTransitionElementUtilities_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Internal_LayoutTransitionElementUtilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Internal_LayoutTransitionElementUtilities[] = L"Microsoft.UI.Xaml.Internal.LayoutTransitionElementUtilities";
#endif
#endif // MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Internal.SecondaryContentRelationship
 *
 * Introduced to Microsoft.UI.Xaml.PrivateApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Internal.ISecondaryContentRelationshipStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.PrivateApiContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Internal.ISecondaryContentRelationship ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Internal_SecondaryContentRelationship_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Internal_SecondaryContentRelationship_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Internal_SecondaryContentRelationship[] = L"Microsoft.UI.Xaml.Internal.SecondaryContentRelationship";
#endif
#endif // MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics __x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics;

#endif // ____x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship;

#endif // ____x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics;

#endif // ____x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CIDependencyObject_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CIDependencyObject_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CIDependencyObject __x_Microsoft_CUI_CXaml_CIDependencyObject;

#endif // ____x_Microsoft_CUI_CXaml_CIDependencyObject_FWD_DEFINED__



#ifndef ____x_Microsoft_CUI_CXaml_CIUIElement_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CIUIElement_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CIUIElement __x_Microsoft_CUI_CXaml_CIUIElement;

#endif // ____x_Microsoft_CUI_CXaml_CIUIElement_FWD_DEFINED__















/*
 *
 * Interface Microsoft.UI.Xaml.Internal.ILayoutTransitionElementUtilitiesStatics
 *
 * Introduced to Microsoft.UI.Xaml.PrivateApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Internal.LayoutTransitionElementUtilities
 *
 *
 */
#if MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Internal_ILayoutTransitionElementUtilitiesStatics[] = L"Microsoft.UI.Xaml.Internal.ILayoutTransitionElementUtilitiesStatics";
/* [object, uuid("434F0C36-4674-59A5-BC20-A9E55B7F3D6C"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateLayoutTransitionElement )(
        __x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIUIElement * source,
        /* [in] */__x_Microsoft_CUI_CXaml_CIUIElement * parent,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CIUIElement * * result
        );
    HRESULT ( STDMETHODCALLTYPE *DestroyLayoutTransitionElement )(
        __x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIUIElement * source,
        /* [in] */__x_Microsoft_CUI_CXaml_CIUIElement * parent,
        /* [in] */__x_Microsoft_CUI_CXaml_CIUIElement * layoutTransitionElement
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStaticsVtbl;

interface __x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics_CreateLayoutTransitionElement(This,source,parent,result) \
    ( (This)->lpVtbl->CreateLayoutTransitionElement(This,source,parent,result) )

#define __x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics_DestroyLayoutTransitionElement(This,source,parent,layoutTransitionElement) \
    ( (This)->lpVtbl->DestroyLayoutTransitionElement(This,source,parent,layoutTransitionElement) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CInternal_CILayoutTransitionElementUtilitiesStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Internal.ISecondaryContentRelationship
 *
 * Introduced to Microsoft.UI.Xaml.PrivateApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Internal.SecondaryContentRelationship
 *
 *
 */
#if MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Internal_ISecondaryContentRelationship[] = L"Microsoft.UI.Xaml.Internal.ISecondaryContentRelationship";
/* [object, uuid("D891C269-9DCA-52D4-A6C3-ADB1C0C96D3C"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetAuxiliaryDependencyPropertyHolder )(
        __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * auxiliaryDependencyPropertyHolder
        );
    HRESULT ( STDMETHODCALLTYPE *PrepareForCurveUpdate )(
        __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship * This
        );
    HRESULT ( STDMETHODCALLTYPE *Apply )(
        __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship * This
        );
    HRESULT ( STDMETHODCALLTYPE *Remove )(
        __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship * This
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateDependencyProperties )(
        __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship * This
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipVtbl;

interface __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship_SetAuxiliaryDependencyPropertyHolder(This,auxiliaryDependencyPropertyHolder) \
    ( (This)->lpVtbl->SetAuxiliaryDependencyPropertyHolder(This,auxiliaryDependencyPropertyHolder) )

#define __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship_PrepareForCurveUpdate(This) \
    ( (This)->lpVtbl->PrepareForCurveUpdate(This) )

#define __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship_Apply(This) \
    ( (This)->lpVtbl->Apply(This) )

#define __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship_Remove(This) \
    ( (This)->lpVtbl->Remove(This) )

#define __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship_UpdateDependencyProperties(This) \
    ( (This)->lpVtbl->UpdateDependencyProperties(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Internal.ISecondaryContentRelationshipStatics
 *
 * Introduced to Microsoft.UI.Xaml.PrivateApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Internal.SecondaryContentRelationship
 *
 *
 */
#if MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Internal_ISecondaryContentRelationshipStatics[] = L"Microsoft.UI.Xaml.Internal.ISecondaryContentRelationshipStatics";
/* [object, uuid("235826C9-DFF5-586A-8FAF-F2DD17EAA39A"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateStickyHeaderRelationship )(
        __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIUIElement * scrollViewer,
        /* [in] */__x_Microsoft_CUI_CXaml_CIUIElement * panelObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * panelTransform,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * headerTransform,
        /* [in] */DOUBLE groupTopY,
        /* [in] */DOUBLE groupBottomY,
        /* [in] */DOUBLE headerHeight,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateClipTransformRelationship )(
        __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIUIElement * scrollViewer,
        /* [in] */__x_Microsoft_CUI_CXaml_CIUIElement * clipOwner,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * clipTransform,
        /* [in] */DOUBLE listExtentHeight,
        /* [in] */DOUBLE listViewportHeight,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateParallaxRelationship )(
        __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIUIElement * scrollViewer,
        /* [in] */__x_Microsoft_CUI_CXaml_CIUIElement * headerObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * headerTransform,
        /* [in] */UINT32 __primaryOffsetsSize,
        /* [size_is(__primaryOffsetsSize), in] */DOUBLE * primaryOffsets,
        /* [in] */UINT32 __secondaryOffsetsSize,
        /* [size_is(__secondaryOffsetsSize), in] */DOUBLE * secondaryOffsets,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateStaticElementRelationship )(
        __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CIUIElement * scrollViewer,
        /* [in] */__x_Microsoft_CUI_CXaml_CIUIElement * staticElement,
        /* [in] */__x_Microsoft_CUI_CXaml_CIDependencyObject * elementTransform,
        /* [in] */boolean isHorizontallyStatic,
        /* [in] */boolean isInverted,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationship * * result
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStaticsVtbl;

interface __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics_CreateStickyHeaderRelationship(This,scrollViewer,panelObject,panelTransform,headerTransform,groupTopY,groupBottomY,headerHeight,result) \
    ( (This)->lpVtbl->CreateStickyHeaderRelationship(This,scrollViewer,panelObject,panelTransform,headerTransform,groupTopY,groupBottomY,headerHeight,result) )

#define __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics_CreateClipTransformRelationship(This,scrollViewer,clipOwner,clipTransform,listExtentHeight,listViewportHeight,result) \
    ( (This)->lpVtbl->CreateClipTransformRelationship(This,scrollViewer,clipOwner,clipTransform,listExtentHeight,listViewportHeight,result) )

#define __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics_CreateParallaxRelationship(This,scrollViewer,headerObject,headerTransform,__primaryOffsetsSize,primaryOffsets,__secondaryOffsetsSize,secondaryOffsets,result) \
    ( (This)->lpVtbl->CreateParallaxRelationship(This,scrollViewer,headerObject,headerTransform,__primaryOffsetsSize,primaryOffsets,__secondaryOffsetsSize,secondaryOffsets,result) )

#define __x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics_CreateStaticElementRelationship(This,scrollViewer,staticElement,elementTransform,isHorizontallyStatic,isInverted,result) \
    ( (This)->lpVtbl->CreateStaticElementRelationship(This,scrollViewer,staticElement,elementTransform,isHorizontallyStatic,isInverted,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CInternal_CISecondaryContentRelationshipStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Internal.LayoutTransitionElementUtilities
 *
 * Introduced to Microsoft.UI.Xaml.PrivateApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Internal.ILayoutTransitionElementUtilitiesStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.PrivateApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Internal_LayoutTransitionElementUtilities_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Internal_LayoutTransitionElementUtilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Internal_LayoutTransitionElementUtilities[] = L"Microsoft.UI.Xaml.Internal.LayoutTransitionElementUtilities";
#endif
#endif // MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Internal.SecondaryContentRelationship
 *
 * Introduced to Microsoft.UI.Xaml.PrivateApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Internal.ISecondaryContentRelationshipStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.PrivateApiContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Internal.ISecondaryContentRelationship ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Internal_SecondaryContentRelationship_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Internal_SecondaryContentRelationship_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Internal_SecondaryContentRelationship[] = L"Microsoft.UI.Xaml.Internal.SecondaryContentRelationship";
#endif
#endif // MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION >= 0x10000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __Microsoft2EUI2EXaml2EInternal_p_h__

#endif // __Microsoft2EUI2EXaml2EInternal_h__
