/* Header file automatically generated from Microsoft.UI.Xaml.Core.Direct.idl */
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
#ifndef __Microsoft2EUI2EXaml2ECore2EDirect_h__
#define __Microsoft2EUI2EXaml2ECore2EDirect_h__
#ifndef __Microsoft2EUI2EXaml2ECore2EDirect_p_h__
#define __Microsoft2EUI2EXaml2ECore2EDirect_p_h__


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

#if !defined(MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION)
#define MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION)

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
#include "Microsoft.UI.Xaml.Media.h"
#include "Microsoft.UI.Xaml.Media.Media3D.h"
#include "Windows.UI.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Core {
                namespace Direct {
                    interface IXamlDirect;
                } /* Direct */
            } /* Core */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect Microsoft::UI::Xaml::Core::Direct::IXamlDirect

#endif // ____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Core {
                namespace Direct {
                    interface IXamlDirectObject;
                } /* Direct */
            } /* Core */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject

#endif // ____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Core {
                namespace Direct {
                    interface IXamlDirectStatics;
                } /* Direct */
            } /* Core */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics Microsoft::UI::Xaml::Core::Direct::IXamlDirectStatics

#endif // ____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics_FWD_DEFINED__



namespace Microsoft {
    namespace UI {
        namespace Xaml {
            
            typedef struct CornerRadius CornerRadius;
            
        } /* Xaml */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Xaml {
            
            typedef struct Duration Duration;
            
        } /* Xaml */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Xaml {
            
            typedef struct GridLength GridLength;
            
        } /* Xaml */
    } /* UI */
} /* Microsoft */





namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Media {
                
                typedef struct Matrix Matrix;
                
            } /* Media */
        } /* Xaml */
    } /* UI */
} /* Microsoft */






namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Media {
                namespace Media3D {
                    
                    typedef struct Matrix3D Matrix3D;
                    
                } /* Media3D */
            } /* Media */
        } /* Xaml */
    } /* UI */
} /* Microsoft */







namespace Microsoft {
    namespace UI {
        namespace Xaml {
            
            typedef struct Thickness Thickness;
            
        } /* Xaml */
    } /* UI */
} /* Microsoft */






namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Core {
                namespace Direct {
                    
                    typedef enum XamlEventIndex : int XamlEventIndex;
                    
                } /* Direct */
            } /* Core */
        } /* Xaml */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Core {
                namespace Direct {
                    
                    typedef enum XamlPropertyIndex : int XamlPropertyIndex;
                    
                } /* Direct */
            } /* Core */
        } /* Xaml */
    } /* UI */
} /* Microsoft */


namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Core {
                namespace Direct {
                    
                    typedef enum XamlTypeIndex : int XamlTypeIndex;
                    
                } /* Direct */
            } /* Core */
        } /* Xaml */
    } /* UI */
} /* Microsoft */





namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Core {
                namespace Direct {
                    class XamlDirect;
                } /* Direct */
            } /* Core */
        } /* Xaml */
    } /* UI */
} /* Microsoft */









/*
 *
 * Struct Microsoft.UI.Xaml.Core.Direct.XamlEventIndex
 *
 * Introduced to Microsoft.UI.Xaml.Core.Direct.XamlDirectContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION >= 0x10000

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Core {
                namespace Direct {
                    /* [v1_enum, contract] */
                    enum XamlEventIndex : int
                    {
                        XamlEventIndex_FrameworkElement_DataContextChanged = 16,
                        XamlEventIndex_FrameworkElement_SizeChanged = 17,
                        XamlEventIndex_FrameworkElement_LayoutUpdated = 18,
                        XamlEventIndex_UIElement_KeyUp = 22,
                        XamlEventIndex_UIElement_KeyDown = 23,
                        XamlEventIndex_UIElement_GotFocus = 24,
                        XamlEventIndex_UIElement_LostFocus = 25,
                        XamlEventIndex_UIElement_DragStarting = 26,
                        XamlEventIndex_UIElement_DropCompleted = 27,
                        XamlEventIndex_UIElement_CharacterReceived = 28,
                        XamlEventIndex_UIElement_DragEnter = 29,
                        XamlEventIndex_UIElement_DragLeave = 30,
                        XamlEventIndex_UIElement_DragOver = 31,
                        XamlEventIndex_UIElement_Drop = 32,
                        XamlEventIndex_UIElement_PointerPressed = 38,
                        XamlEventIndex_UIElement_PointerMoved = 39,
                        XamlEventIndex_UIElement_PointerReleased = 40,
                        XamlEventIndex_UIElement_PointerEntered = 41,
                        XamlEventIndex_UIElement_PointerExited = 42,
                        XamlEventIndex_UIElement_PointerCaptureLost = 43,
                        XamlEventIndex_UIElement_PointerCanceled = 44,
                        XamlEventIndex_UIElement_PointerWheelChanged = 45,
                        XamlEventIndex_UIElement_Tapped = 46,
                        XamlEventIndex_UIElement_DoubleTapped = 47,
                        XamlEventIndex_UIElement_Holding = 48,
                        XamlEventIndex_UIElement_ContextRequested = 49,
                        XamlEventIndex_UIElement_ContextCanceled = 50,
                        XamlEventIndex_UIElement_RightTapped = 51,
                        XamlEventIndex_UIElement_ManipulationStarting = 52,
                        XamlEventIndex_UIElement_ManipulationInertiaStarting = 53,
                        XamlEventIndex_UIElement_ManipulationStarted = 54,
                        XamlEventIndex_UIElement_ManipulationDelta = 55,
                        XamlEventIndex_UIElement_ManipulationCompleted = 56,
                        XamlEventIndex_UIElement_ProcessKeyboardAccelerators = 60,
                        XamlEventIndex_UIElement_GettingFocus = 61,
                        XamlEventIndex_UIElement_LosingFocus = 62,
                        XamlEventIndex_UIElement_NoFocusCandidateFound = 63,
                        XamlEventIndex_UIElement_PreviewKeyDown = 64,
                        XamlEventIndex_UIElement_PreviewKeyUp = 65,
                        XamlEventIndex_UIElement_BringIntoViewRequested = 66,
                        XamlEventIndex_AppBar_Opening = 109,
                        XamlEventIndex_AppBar_Opened = 110,
                        XamlEventIndex_AppBar_Closing = 111,
                        XamlEventIndex_AppBar_Closed = 112,
                        XamlEventIndex_AutoSuggestBox_SuggestionChosen = 113,
                        XamlEventIndex_AutoSuggestBox_TextChanged = 114,
                        XamlEventIndex_AutoSuggestBox_QuerySubmitted = 115,
                        XamlEventIndex_CalendarDatePicker_CalendarViewDayItemChanging = 116,
                        XamlEventIndex_CalendarDatePicker_DateChanged = 117,
                        XamlEventIndex_CalendarDatePicker_Opened = 118,
                        XamlEventIndex_CalendarDatePicker_Closed = 119,
                        XamlEventIndex_CalendarView_CalendarViewDayItemChanging = 120,
                        XamlEventIndex_CalendarView_SelectedDatesChanged = 121,
                        XamlEventIndex_ComboBox_DropDownClosed = 122,
                        XamlEventIndex_ComboBox_DropDownOpened = 123,
                        XamlEventIndex_CommandBar_DynamicOverflowItemsChanging = 124,
                        XamlEventIndex_ContentDialog_Closing = 126,
                        XamlEventIndex_ContentDialog_Closed = 127,
                        XamlEventIndex_ContentDialog_Opened = 128,
                        XamlEventIndex_ContentDialog_PrimaryButtonClick = 129,
                        XamlEventIndex_ContentDialog_SecondaryButtonClick = 130,
                        XamlEventIndex_ContentDialog_CloseButtonClick = 131,
                        XamlEventIndex_Control_FocusEngaged = 132,
                        XamlEventIndex_Control_FocusDisengaged = 133,
                        XamlEventIndex_DatePicker_DateChanged = 135,
                        XamlEventIndex_Frame_Navigated = 136,
                        XamlEventIndex_Frame_Navigating = 137,
                        XamlEventIndex_Frame_NavigationFailed = 138,
                        XamlEventIndex_Frame_NavigationStopped = 139,
                        XamlEventIndex_Hub_SectionHeaderClick = 143,
                        XamlEventIndex_Hub_SectionsInViewChanged = 144,
                        XamlEventIndex_ItemsPresenter_HorizontalSnapPointsChanged = 148,
                        XamlEventIndex_ItemsPresenter_VerticalSnapPointsChanged = 149,
                        XamlEventIndex_ListViewBase_ItemClick = 150,
                        XamlEventIndex_ListViewBase_DragItemsStarting = 151,
                        XamlEventIndex_ListViewBase_DragItemsCompleted = 152,
                        XamlEventIndex_ListViewBase_ContainerContentChanging = 153,
                        XamlEventIndex_ListViewBase_ChoosingItemContainer = 154,
                        XamlEventIndex_ListViewBase_ChoosingGroupHeaderContainer = 155,
                        XamlEventIndex_MenuFlyoutItem_Click = 168,
                        XamlEventIndex_RichEditBox_TextChanging = 177,
                        XamlEventIndex_ScrollViewer_ViewChanging = 192,
                        XamlEventIndex_ScrollViewer_ViewChanged = 193,
                        XamlEventIndex_ScrollViewer_DirectManipulationStarted = 194,
                        XamlEventIndex_ScrollViewer_DirectManipulationCompleted = 195,
                        XamlEventIndex_SemanticZoom_ViewChangeStarted = 201,
                        XamlEventIndex_SemanticZoom_ViewChangeCompleted = 202,
                        XamlEventIndex_StackPanel_HorizontalSnapPointsChanged = 208,
                        XamlEventIndex_StackPanel_VerticalSnapPointsChanged = 209,
                        XamlEventIndex_TimePicker_TimeChanged = 227,
                        XamlEventIndex_ToggleSwitch_Toggled = 228,
                        XamlEventIndex_ToolTip_Closed = 229,
                        XamlEventIndex_ToolTip_Opened = 230,
                        XamlEventIndex_VirtualizingStackPanel_CleanUpVirtualizedItemEvent = 231,
                        XamlEventIndex_ButtonBase_Click = 256,
                        XamlEventIndex_CarouselPanel_HorizontalSnapPointsChanged = 257,
                        XamlEventIndex_CarouselPanel_VerticalSnapPointsChanged = 258,
                        XamlEventIndex_OrientedVirtualizingPanel_HorizontalSnapPointsChanged = 263,
                        XamlEventIndex_OrientedVirtualizingPanel_VerticalSnapPointsChanged = 264,
                        XamlEventIndex_RangeBase_ValueChanged = 267,
                        XamlEventIndex_ScrollBar_Scroll = 268,
                        XamlEventIndex_Selector_SelectionChanged = 269,
                        XamlEventIndex_Thumb_DragStarted = 270,
                        XamlEventIndex_Thumb_DragDelta = 271,
                        XamlEventIndex_Thumb_DragCompleted = 272,
                        XamlEventIndex_ToggleButton_Checked = 273,
                        XamlEventIndex_ToggleButton_Unchecked = 274,
                        XamlEventIndex_ToggleButton_Indeterminate = 275,
                        XamlEventIndex_ScrollViewer_AnchorRequested = 291,
                        XamlEventIndex_AutoSuggestBox_HasValidationErrorsChanged = 306,
                        XamlEventIndex_ComboBox_HasValidationErrorsChanged = 308,
                        XamlEventIndex_PasswordBox_HasValidationErrorsChanged = 309,
                        XamlEventIndex_TextBox_HasValidationErrorsChanged = 311,
                        XamlEventIndex_DatePicker_SelectedDateChanged = 322,
                        XamlEventIndex_TimePicker_SelectedTimeChanged = 323,
                    };
                    
                } /* Direct */
            } /* Core */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#endif // MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Core.Direct.XamlPropertyIndex
 *
 * Introduced to Microsoft.UI.Xaml.Core.Direct.XamlDirectContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION >= 0x10000

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Core {
                namespace Direct {
                    /* [v1_enum, contract] */
                    enum XamlPropertyIndex : int
                    {
                        XamlPropertyIndex_AutomationProperties_AcceleratorKey = 5,
                        XamlPropertyIndex_AutomationProperties_AccessibilityView = 6,
                        XamlPropertyIndex_AutomationProperties_AccessKey = 7,
                        XamlPropertyIndex_AutomationProperties_AutomationId = 8,
                        XamlPropertyIndex_AutomationProperties_ControlledPeers = 9,
                        XamlPropertyIndex_AutomationProperties_HelpText = 10,
                        XamlPropertyIndex_AutomationProperties_IsRequiredForForm = 11,
                        XamlPropertyIndex_AutomationProperties_ItemStatus = 12,
                        XamlPropertyIndex_AutomationProperties_ItemType = 13,
                        XamlPropertyIndex_AutomationProperties_LabeledBy = 14,
                        XamlPropertyIndex_AutomationProperties_LiveSetting = 15,
                        XamlPropertyIndex_AutomationProperties_Name = 16,
                        XamlPropertyIndex_ToolTipService_Placement = 24,
                        XamlPropertyIndex_ToolTipService_PlacementTarget = 25,
                        XamlPropertyIndex_ToolTipService_ToolTip = 26,
                        XamlPropertyIndex_Typography_AnnotationAlternates = 28,
                        XamlPropertyIndex_Typography_Capitals = 29,
                        XamlPropertyIndex_Typography_CapitalSpacing = 30,
                        XamlPropertyIndex_Typography_CaseSensitiveForms = 31,
                        XamlPropertyIndex_Typography_ContextualAlternates = 32,
                        XamlPropertyIndex_Typography_ContextualLigatures = 33,
                        XamlPropertyIndex_Typography_ContextualSwashes = 34,
                        XamlPropertyIndex_Typography_DiscretionaryLigatures = 35,
                        XamlPropertyIndex_Typography_EastAsianExpertForms = 36,
                        XamlPropertyIndex_Typography_EastAsianLanguage = 37,
                        XamlPropertyIndex_Typography_EastAsianWidths = 38,
                        XamlPropertyIndex_Typography_Fraction = 39,
                        XamlPropertyIndex_Typography_HistoricalForms = 40,
                        XamlPropertyIndex_Typography_HistoricalLigatures = 41,
                        XamlPropertyIndex_Typography_Kerning = 42,
                        XamlPropertyIndex_Typography_MathematicalGreek = 43,
                        XamlPropertyIndex_Typography_NumeralAlignment = 44,
                        XamlPropertyIndex_Typography_NumeralStyle = 45,
                        XamlPropertyIndex_Typography_SlashedZero = 46,
                        XamlPropertyIndex_Typography_StandardLigatures = 47,
                        XamlPropertyIndex_Typography_StandardSwashes = 48,
                        XamlPropertyIndex_Typography_StylisticAlternates = 49,
                        XamlPropertyIndex_Typography_StylisticSet1 = 50,
                        XamlPropertyIndex_Typography_StylisticSet10 = 51,
                        XamlPropertyIndex_Typography_StylisticSet11 = 52,
                        XamlPropertyIndex_Typography_StylisticSet12 = 53,
                        XamlPropertyIndex_Typography_StylisticSet13 = 54,
                        XamlPropertyIndex_Typography_StylisticSet14 = 55,
                        XamlPropertyIndex_Typography_StylisticSet15 = 56,
                        XamlPropertyIndex_Typography_StylisticSet16 = 57,
                        XamlPropertyIndex_Typography_StylisticSet17 = 58,
                        XamlPropertyIndex_Typography_StylisticSet18 = 59,
                        XamlPropertyIndex_Typography_StylisticSet19 = 60,
                        XamlPropertyIndex_Typography_StylisticSet2 = 61,
                        XamlPropertyIndex_Typography_StylisticSet20 = 62,
                        XamlPropertyIndex_Typography_StylisticSet3 = 63,
                        XamlPropertyIndex_Typography_StylisticSet4 = 64,
                        XamlPropertyIndex_Typography_StylisticSet5 = 65,
                        XamlPropertyIndex_Typography_StylisticSet6 = 66,
                        XamlPropertyIndex_Typography_StylisticSet7 = 67,
                        XamlPropertyIndex_Typography_StylisticSet8 = 68,
                        XamlPropertyIndex_Typography_StylisticSet9 = 69,
                        XamlPropertyIndex_Typography_Variants = 70,
                        XamlPropertyIndex_AutomationPeer_EventsSource = 75,
                        XamlPropertyIndex_AutoSuggestBoxSuggestionChosenEventArgs_SelectedItem = 76,
                        XamlPropertyIndex_AutoSuggestBoxTextChangedEventArgs_Reason = 77,
                        XamlPropertyIndex_Brush_Opacity = 78,
                        XamlPropertyIndex_Brush_RelativeTransform = 79,
                        XamlPropertyIndex_Brush_Transform = 80,
                        XamlPropertyIndex_CollectionViewSource_IsSourceGrouped = 81,
                        XamlPropertyIndex_CollectionViewSource_ItemsPath = 82,
                        XamlPropertyIndex_CollectionViewSource_Source = 83,
                        XamlPropertyIndex_CollectionViewSource_View = 84,
                        XamlPropertyIndex_ColorKeyFrame_KeyTime = 90,
                        XamlPropertyIndex_ColorKeyFrame_Value = 91,
                        XamlPropertyIndex_ColumnDefinition_ActualWidth = 92,
                        XamlPropertyIndex_ColumnDefinition_MaxWidth = 93,
                        XamlPropertyIndex_ColumnDefinition_MinWidth = 94,
                        XamlPropertyIndex_ColumnDefinition_Width = 95,
                        XamlPropertyIndex_ComboBoxTemplateSettings_DropDownClosedHeight = 96,
                        XamlPropertyIndex_ComboBoxTemplateSettings_DropDownOffset = 97,
                        XamlPropertyIndex_ComboBoxTemplateSettings_DropDownOpenedHeight = 98,
                        XamlPropertyIndex_ComboBoxTemplateSettings_SelectedItemDirection = 99,
                        XamlPropertyIndex_DoubleKeyFrame_KeyTime = 107,
                        XamlPropertyIndex_DoubleKeyFrame_Value = 108,
                        XamlPropertyIndex_EasingFunctionBase_EasingMode = 111,
                        XamlPropertyIndex_FlyoutBase_AttachedFlyout = 114,
                        XamlPropertyIndex_FlyoutBase_Placement = 115,
                        XamlPropertyIndex_Geometry_Bounds = 118,
                        XamlPropertyIndex_Geometry_Transform = 119,
                        XamlPropertyIndex_GradientStop_Color = 120,
                        XamlPropertyIndex_GradientStop_Offset = 121,
                        XamlPropertyIndex_GroupStyle_ContainerStyle = 124,
                        XamlPropertyIndex_GroupStyle_ContainerStyleSelector = 125,
                        XamlPropertyIndex_GroupStyle_HeaderContainerStyle = 126,
                        XamlPropertyIndex_GroupStyle_HeaderTemplate = 127,
                        XamlPropertyIndex_GroupStyle_HeaderTemplateSelector = 128,
                        XamlPropertyIndex_GroupStyle_HidesIfEmpty = 129,
                        XamlPropertyIndex_GroupStyle_Panel = 130,
                        XamlPropertyIndex_InertiaExpansionBehavior_DesiredDeceleration = 144,
                        XamlPropertyIndex_InertiaExpansionBehavior_DesiredExpansion = 145,
                        XamlPropertyIndex_InertiaRotationBehavior_DesiredDeceleration = 146,
                        XamlPropertyIndex_InertiaRotationBehavior_DesiredRotation = 147,
                        XamlPropertyIndex_InertiaTranslationBehavior_DesiredDeceleration = 148,
                        XamlPropertyIndex_InertiaTranslationBehavior_DesiredDisplacement = 149,
                        XamlPropertyIndex_InputScope_Names = 150,
                        XamlPropertyIndex_InputScopeName_NameValue = 151,
                        XamlPropertyIndex_KeySpline_ControlPoint1 = 153,
                        XamlPropertyIndex_KeySpline_ControlPoint2 = 154,
                        XamlPropertyIndex_ManipulationPivot_Center = 159,
                        XamlPropertyIndex_ManipulationPivot_Radius = 160,
                        XamlPropertyIndex_ObjectKeyFrame_KeyTime = 183,
                        XamlPropertyIndex_ObjectKeyFrame_Value = 184,
                        XamlPropertyIndex_PageStackEntry_SourcePageType = 185,
                        XamlPropertyIndex_PathFigure_IsClosed = 192,
                        XamlPropertyIndex_PathFigure_IsFilled = 193,
                        XamlPropertyIndex_PathFigure_Segments = 194,
                        XamlPropertyIndex_PathFigure_StartPoint = 195,
                        XamlPropertyIndex_Pointer_IsInContact = 199,
                        XamlPropertyIndex_Pointer_IsInRange = 200,
                        XamlPropertyIndex_Pointer_PointerDeviceType = 201,
                        XamlPropertyIndex_Pointer_PointerId = 202,
                        XamlPropertyIndex_PointKeyFrame_KeyTime = 205,
                        XamlPropertyIndex_PointKeyFrame_Value = 206,
                        XamlPropertyIndex_PrintDocument_DocumentSource = 209,
                        XamlPropertyIndex_ProgressBarTemplateSettings_ContainerAnimationEndPosition = 211,
                        XamlPropertyIndex_ProgressBarTemplateSettings_ContainerAnimationStartPosition = 212,
                        XamlPropertyIndex_ProgressBarTemplateSettings_EllipseAnimationEndPosition = 213,
                        XamlPropertyIndex_ProgressBarTemplateSettings_EllipseAnimationWellPosition = 214,
                        XamlPropertyIndex_ProgressBarTemplateSettings_EllipseDiameter = 215,
                        XamlPropertyIndex_ProgressBarTemplateSettings_EllipseOffset = 216,
                        XamlPropertyIndex_ProgressBarTemplateSettings_IndicatorLengthDelta = 217,
                        XamlPropertyIndex_ProgressRingTemplateSettings_EllipseDiameter = 218,
                        XamlPropertyIndex_ProgressRingTemplateSettings_EllipseOffset = 219,
                        XamlPropertyIndex_ProgressRingTemplateSettings_MaxSideLength = 220,
                        XamlPropertyIndex_PropertyPath_Path = 221,
                        XamlPropertyIndex_RowDefinition_ActualHeight = 226,
                        XamlPropertyIndex_RowDefinition_Height = 227,
                        XamlPropertyIndex_RowDefinition_MaxHeight = 228,
                        XamlPropertyIndex_RowDefinition_MinHeight = 229,
                        XamlPropertyIndex_SetterBase_IsSealed = 233,
                        XamlPropertyIndex_Style_BasedOn = 244,
                        XamlPropertyIndex_Style_IsSealed = 245,
                        XamlPropertyIndex_Style_Setters = 246,
                        XamlPropertyIndex_Style_TargetType = 247,
                        XamlPropertyIndex_TextElement_CharacterSpacing = 249,
                        XamlPropertyIndex_TextElement_FontFamily = 250,
                        XamlPropertyIndex_TextElement_FontSize = 251,
                        XamlPropertyIndex_TextElement_FontStretch = 252,
                        XamlPropertyIndex_TextElement_FontStyle = 253,
                        XamlPropertyIndex_TextElement_FontWeight = 254,
                        XamlPropertyIndex_TextElement_Foreground = 255,
                        XamlPropertyIndex_TextElement_IsTextScaleFactorEnabled = 256,
                        XamlPropertyIndex_TextElement_Language = 257,
                        XamlPropertyIndex_Timeline_AutoReverse = 263,
                        XamlPropertyIndex_Timeline_BeginTime = 264,
                        XamlPropertyIndex_Timeline_Duration = 265,
                        XamlPropertyIndex_Timeline_FillBehavior = 266,
                        XamlPropertyIndex_Timeline_RepeatBehavior = 267,
                        XamlPropertyIndex_Timeline_SpeedRatio = 268,
                        XamlPropertyIndex_ToggleSwitchTemplateSettings_CurtainCurrentToOffOffset = 273,
                        XamlPropertyIndex_ToggleSwitchTemplateSettings_CurtainCurrentToOnOffset = 274,
                        XamlPropertyIndex_ToggleSwitchTemplateSettings_CurtainOffToOnOffset = 275,
                        XamlPropertyIndex_ToggleSwitchTemplateSettings_CurtainOnToOffOffset = 276,
                        XamlPropertyIndex_ToggleSwitchTemplateSettings_KnobCurrentToOffOffset = 277,
                        XamlPropertyIndex_ToggleSwitchTemplateSettings_KnobCurrentToOnOffset = 278,
                        XamlPropertyIndex_ToggleSwitchTemplateSettings_KnobOffToOnOffset = 279,
                        XamlPropertyIndex_ToggleSwitchTemplateSettings_KnobOnToOffOffset = 280,
                        XamlPropertyIndex_ToolTipTemplateSettings_FromHorizontalOffset = 281,
                        XamlPropertyIndex_ToolTipTemplateSettings_FromVerticalOffset = 282,
                        XamlPropertyIndex_UIElement_AllowDrop = 292,
                        XamlPropertyIndex_UIElement_CacheMode = 293,
                        XamlPropertyIndex_UIElement_Clip = 295,
                        XamlPropertyIndex_UIElement_CompositeMode = 296,
                        XamlPropertyIndex_UIElement_IsDoubleTapEnabled = 297,
                        XamlPropertyIndex_UIElement_IsHitTestVisible = 298,
                        XamlPropertyIndex_UIElement_IsHoldingEnabled = 299,
                        XamlPropertyIndex_UIElement_IsRightTapEnabled = 300,
                        XamlPropertyIndex_UIElement_IsTapEnabled = 301,
                        XamlPropertyIndex_UIElement_ManipulationMode = 302,
                        XamlPropertyIndex_UIElement_Opacity = 303,
                        XamlPropertyIndex_UIElement_PointerCaptures = 304,
                        XamlPropertyIndex_UIElement_Projection = 305,
                        XamlPropertyIndex_UIElement_RenderSize = 306,
                        XamlPropertyIndex_UIElement_RenderTransform = 307,
                        XamlPropertyIndex_UIElement_RenderTransformOrigin = 308,
                        XamlPropertyIndex_UIElement_Transitions = 309,
                        XamlPropertyIndex_UIElement_UseLayoutRounding = 311,
                        XamlPropertyIndex_UIElement_Visibility = 312,
                        XamlPropertyIndex_VisualState_Storyboard = 322,
                        XamlPropertyIndex_VisualStateGroup_States = 323,
                        XamlPropertyIndex_VisualStateGroup_Transitions = 324,
                        XamlPropertyIndex_VisualStateManager_CustomVisualStateManager = 325,
                        XamlPropertyIndex_VisualStateManager_VisualStateGroups = 326,
                        XamlPropertyIndex_VisualTransition_From = 327,
                        XamlPropertyIndex_VisualTransition_GeneratedDuration = 328,
                        XamlPropertyIndex_VisualTransition_GeneratedEasingFunction = 329,
                        XamlPropertyIndex_VisualTransition_Storyboard = 330,
                        XamlPropertyIndex_VisualTransition_To = 331,
                        XamlPropertyIndex_ArcSegment_IsLargeArc = 332,
                        XamlPropertyIndex_ArcSegment_Point = 333,
                        XamlPropertyIndex_ArcSegment_RotationAngle = 334,
                        XamlPropertyIndex_ArcSegment_Size = 335,
                        XamlPropertyIndex_ArcSegment_SweepDirection = 336,
                        XamlPropertyIndex_BackEase_Amplitude = 337,
                        XamlPropertyIndex_BeginStoryboard_Storyboard = 338,
                        XamlPropertyIndex_BezierSegment_Point1 = 339,
                        XamlPropertyIndex_BezierSegment_Point2 = 340,
                        XamlPropertyIndex_BezierSegment_Point3 = 341,
                        XamlPropertyIndex_BitmapSource_PixelHeight = 342,
                        XamlPropertyIndex_BitmapSource_PixelWidth = 343,
                        XamlPropertyIndex_Block_LineHeight = 344,
                        XamlPropertyIndex_Block_LineStackingStrategy = 345,
                        XamlPropertyIndex_Block_Margin = 346,
                        XamlPropertyIndex_Block_TextAlignment = 347,
                        XamlPropertyIndex_BounceEase_Bounces = 348,
                        XamlPropertyIndex_BounceEase_Bounciness = 349,
                        XamlPropertyIndex_ColorAnimation_By = 350,
                        XamlPropertyIndex_ColorAnimation_EasingFunction = 351,
                        XamlPropertyIndex_ColorAnimation_EnableDependentAnimation = 352,
                        XamlPropertyIndex_ColorAnimation_From = 353,
                        XamlPropertyIndex_ColorAnimation_To = 354,
                        XamlPropertyIndex_ColorAnimationUsingKeyFrames_EnableDependentAnimation = 355,
                        XamlPropertyIndex_ColorAnimationUsingKeyFrames_KeyFrames = 356,
                        XamlPropertyIndex_ContentThemeTransition_HorizontalOffset = 357,
                        XamlPropertyIndex_ContentThemeTransition_VerticalOffset = 358,
                        XamlPropertyIndex_ControlTemplate_TargetType = 359,
                        XamlPropertyIndex_DispatcherTimer_Interval = 362,
                        XamlPropertyIndex_DoubleAnimation_By = 363,
                        XamlPropertyIndex_DoubleAnimation_EasingFunction = 364,
                        XamlPropertyIndex_DoubleAnimation_EnableDependentAnimation = 365,
                        XamlPropertyIndex_DoubleAnimation_From = 366,
                        XamlPropertyIndex_DoubleAnimation_To = 367,
                        XamlPropertyIndex_DoubleAnimationUsingKeyFrames_EnableDependentAnimation = 368,
                        XamlPropertyIndex_DoubleAnimationUsingKeyFrames_KeyFrames = 369,
                        XamlPropertyIndex_EasingColorKeyFrame_EasingFunction = 372,
                        XamlPropertyIndex_EasingDoubleKeyFrame_EasingFunction = 373,
                        XamlPropertyIndex_EasingPointKeyFrame_EasingFunction = 374,
                        XamlPropertyIndex_EdgeUIThemeTransition_Edge = 375,
                        XamlPropertyIndex_ElasticEase_Oscillations = 376,
                        XamlPropertyIndex_ElasticEase_Springiness = 377,
                        XamlPropertyIndex_EllipseGeometry_Center = 378,
                        XamlPropertyIndex_EllipseGeometry_RadiusX = 379,
                        XamlPropertyIndex_EllipseGeometry_RadiusY = 380,
                        XamlPropertyIndex_EntranceThemeTransition_FromHorizontalOffset = 381,
                        XamlPropertyIndex_EntranceThemeTransition_FromVerticalOffset = 382,
                        XamlPropertyIndex_EntranceThemeTransition_IsStaggeringEnabled = 383,
                        XamlPropertyIndex_EventTrigger_Actions = 384,
                        XamlPropertyIndex_EventTrigger_RoutedEvent = 385,
                        XamlPropertyIndex_ExponentialEase_Exponent = 386,
                        XamlPropertyIndex_Flyout_Content = 387,
                        XamlPropertyIndex_Flyout_FlyoutPresenterStyle = 388,
                        XamlPropertyIndex_FrameworkElement_ActualHeight = 389,
                        XamlPropertyIndex_FrameworkElement_ActualWidth = 390,
                        XamlPropertyIndex_FrameworkElement_DataContext = 391,
                        XamlPropertyIndex_FrameworkElement_FlowDirection = 392,
                        XamlPropertyIndex_FrameworkElement_Height = 393,
                        XamlPropertyIndex_FrameworkElement_HorizontalAlignment = 394,
                        XamlPropertyIndex_FrameworkElement_Language = 396,
                        XamlPropertyIndex_FrameworkElement_Margin = 397,
                        XamlPropertyIndex_FrameworkElement_MaxHeight = 398,
                        XamlPropertyIndex_FrameworkElement_MaxWidth = 399,
                        XamlPropertyIndex_FrameworkElement_MinHeight = 400,
                        XamlPropertyIndex_FrameworkElement_MinWidth = 401,
                        XamlPropertyIndex_FrameworkElement_Parent = 402,
                        XamlPropertyIndex_FrameworkElement_RequestedTheme = 403,
                        XamlPropertyIndex_FrameworkElement_Resources = 404,
                        XamlPropertyIndex_FrameworkElement_Style = 405,
                        XamlPropertyIndex_FrameworkElement_Tag = 406,
                        XamlPropertyIndex_FrameworkElement_Triggers = 407,
                        XamlPropertyIndex_FrameworkElement_VerticalAlignment = 408,
                        XamlPropertyIndex_FrameworkElement_Width = 409,
                        XamlPropertyIndex_FrameworkElementAutomationPeer_Owner = 410,
                        XamlPropertyIndex_GeometryGroup_Children = 411,
                        XamlPropertyIndex_GeometryGroup_FillRule = 412,
                        XamlPropertyIndex_GradientBrush_ColorInterpolationMode = 413,
                        XamlPropertyIndex_GradientBrush_GradientStops = 414,
                        XamlPropertyIndex_GradientBrush_MappingMode = 415,
                        XamlPropertyIndex_GradientBrush_SpreadMethod = 416,
                        XamlPropertyIndex_GridViewItemTemplateSettings_DragItemsCount = 417,
                        XamlPropertyIndex_ItemAutomationPeer_Item = 419,
                        XamlPropertyIndex_ItemAutomationPeer_ItemsControlAutomationPeer = 420,
                        XamlPropertyIndex_LineGeometry_EndPoint = 422,
                        XamlPropertyIndex_LineGeometry_StartPoint = 423,
                        XamlPropertyIndex_LineSegment_Point = 424,
                        XamlPropertyIndex_ListViewItemTemplateSettings_DragItemsCount = 425,
                        XamlPropertyIndex_Matrix3DProjection_ProjectionMatrix = 426,
                        XamlPropertyIndex_MenuFlyout_Items = 427,
                        XamlPropertyIndex_MenuFlyout_MenuFlyoutPresenterStyle = 428,
                        XamlPropertyIndex_ObjectAnimationUsingKeyFrames_EnableDependentAnimation = 429,
                        XamlPropertyIndex_ObjectAnimationUsingKeyFrames_KeyFrames = 430,
                        XamlPropertyIndex_PaneThemeTransition_Edge = 431,
                        XamlPropertyIndex_PathGeometry_Figures = 432,
                        XamlPropertyIndex_PathGeometry_FillRule = 433,
                        XamlPropertyIndex_PlaneProjection_CenterOfRotationX = 434,
                        XamlPropertyIndex_PlaneProjection_CenterOfRotationY = 435,
                        XamlPropertyIndex_PlaneProjection_CenterOfRotationZ = 436,
                        XamlPropertyIndex_PlaneProjection_GlobalOffsetX = 437,
                        XamlPropertyIndex_PlaneProjection_GlobalOffsetY = 438,
                        XamlPropertyIndex_PlaneProjection_GlobalOffsetZ = 439,
                        XamlPropertyIndex_PlaneProjection_LocalOffsetX = 440,
                        XamlPropertyIndex_PlaneProjection_LocalOffsetY = 441,
                        XamlPropertyIndex_PlaneProjection_LocalOffsetZ = 442,
                        XamlPropertyIndex_PlaneProjection_ProjectionMatrix = 443,
                        XamlPropertyIndex_PlaneProjection_RotationX = 444,
                        XamlPropertyIndex_PlaneProjection_RotationY = 445,
                        XamlPropertyIndex_PlaneProjection_RotationZ = 446,
                        XamlPropertyIndex_PointAnimation_By = 447,
                        XamlPropertyIndex_PointAnimation_EasingFunction = 448,
                        XamlPropertyIndex_PointAnimation_EnableDependentAnimation = 449,
                        XamlPropertyIndex_PointAnimation_From = 450,
                        XamlPropertyIndex_PointAnimation_To = 451,
                        XamlPropertyIndex_PointAnimationUsingKeyFrames_EnableDependentAnimation = 452,
                        XamlPropertyIndex_PointAnimationUsingKeyFrames_KeyFrames = 453,
                        XamlPropertyIndex_PolyBezierSegment_Points = 456,
                        XamlPropertyIndex_PolyLineSegment_Points = 457,
                        XamlPropertyIndex_PolyQuadraticBezierSegment_Points = 458,
                        XamlPropertyIndex_PopupThemeTransition_FromHorizontalOffset = 459,
                        XamlPropertyIndex_PopupThemeTransition_FromVerticalOffset = 460,
                        XamlPropertyIndex_PowerEase_Power = 461,
                        XamlPropertyIndex_QuadraticBezierSegment_Point1 = 466,
                        XamlPropertyIndex_QuadraticBezierSegment_Point2 = 467,
                        XamlPropertyIndex_RectangleGeometry_Rect = 470,
                        XamlPropertyIndex_RelativeSource_Mode = 471,
                        XamlPropertyIndex_RenderTargetBitmap_PixelHeight = 472,
                        XamlPropertyIndex_RenderTargetBitmap_PixelWidth = 473,
                        XamlPropertyIndex_Setter_Property = 474,
                        XamlPropertyIndex_Setter_Value = 475,
                        XamlPropertyIndex_SolidColorBrush_Color = 476,
                        XamlPropertyIndex_SplineColorKeyFrame_KeySpline = 477,
                        XamlPropertyIndex_SplineDoubleKeyFrame_KeySpline = 478,
                        XamlPropertyIndex_SplinePointKeyFrame_KeySpline = 479,
                        XamlPropertyIndex_TileBrush_AlignmentX = 483,
                        XamlPropertyIndex_TileBrush_AlignmentY = 484,
                        XamlPropertyIndex_TileBrush_Stretch = 485,
                        XamlPropertyIndex_Binding_Converter = 487,
                        XamlPropertyIndex_Binding_ConverterLanguage = 488,
                        XamlPropertyIndex_Binding_ConverterParameter = 489,
                        XamlPropertyIndex_Binding_ElementName = 490,
                        XamlPropertyIndex_Binding_FallbackValue = 491,
                        XamlPropertyIndex_Binding_Mode = 492,
                        XamlPropertyIndex_Binding_Path = 493,
                        XamlPropertyIndex_Binding_RelativeSource = 494,
                        XamlPropertyIndex_Binding_Source = 495,
                        XamlPropertyIndex_Binding_TargetNullValue = 496,
                        XamlPropertyIndex_Binding_UpdateSourceTrigger = 497,
                        XamlPropertyIndex_BitmapImage_CreateOptions = 498,
                        XamlPropertyIndex_BitmapImage_DecodePixelHeight = 499,
                        XamlPropertyIndex_BitmapImage_DecodePixelType = 500,
                        XamlPropertyIndex_BitmapImage_DecodePixelWidth = 501,
                        XamlPropertyIndex_BitmapImage_UriSource = 502,
                        XamlPropertyIndex_Border_Background = 503,
                        XamlPropertyIndex_Border_BorderBrush = 504,
                        XamlPropertyIndex_Border_BorderThickness = 505,
                        XamlPropertyIndex_Border_Child = 506,
                        XamlPropertyIndex_Border_ChildTransitions = 507,
                        XamlPropertyIndex_Border_CornerRadius = 508,
                        XamlPropertyIndex_Border_Padding = 509,
                        XamlPropertyIndex_CompositeTransform_CenterX = 514,
                        XamlPropertyIndex_CompositeTransform_CenterY = 515,
                        XamlPropertyIndex_CompositeTransform_Rotation = 516,
                        XamlPropertyIndex_CompositeTransform_ScaleX = 517,
                        XamlPropertyIndex_CompositeTransform_ScaleY = 518,
                        XamlPropertyIndex_CompositeTransform_SkewX = 519,
                        XamlPropertyIndex_CompositeTransform_SkewY = 520,
                        XamlPropertyIndex_CompositeTransform_TranslateX = 521,
                        XamlPropertyIndex_CompositeTransform_TranslateY = 522,
                        XamlPropertyIndex_ContentPresenter_CharacterSpacing = 523,
                        XamlPropertyIndex_ContentPresenter_Content = 524,
                        XamlPropertyIndex_ContentPresenter_ContentTemplate = 525,
                        XamlPropertyIndex_ContentPresenter_ContentTemplateSelector = 526,
                        XamlPropertyIndex_ContentPresenter_ContentTransitions = 527,
                        XamlPropertyIndex_ContentPresenter_FontFamily = 528,
                        XamlPropertyIndex_ContentPresenter_FontSize = 529,
                        XamlPropertyIndex_ContentPresenter_FontStretch = 530,
                        XamlPropertyIndex_ContentPresenter_FontStyle = 531,
                        XamlPropertyIndex_ContentPresenter_FontWeight = 532,
                        XamlPropertyIndex_ContentPresenter_Foreground = 533,
                        XamlPropertyIndex_ContentPresenter_IsTextScaleFactorEnabled = 534,
                        XamlPropertyIndex_ContentPresenter_LineStackingStrategy = 535,
                        XamlPropertyIndex_ContentPresenter_MaxLines = 536,
                        XamlPropertyIndex_ContentPresenter_OpticalMarginAlignment = 537,
                        XamlPropertyIndex_ContentPresenter_TextLineBounds = 539,
                        XamlPropertyIndex_ContentPresenter_TextWrapping = 540,
                        XamlPropertyIndex_Control_Background = 541,
                        XamlPropertyIndex_Control_BorderBrush = 542,
                        XamlPropertyIndex_Control_BorderThickness = 543,
                        XamlPropertyIndex_Control_CharacterSpacing = 544,
                        XamlPropertyIndex_Control_FontFamily = 547,
                        XamlPropertyIndex_Control_FontSize = 548,
                        XamlPropertyIndex_Control_FontStretch = 549,
                        XamlPropertyIndex_Control_FontStyle = 550,
                        XamlPropertyIndex_Control_FontWeight = 551,
                        XamlPropertyIndex_Control_Foreground = 552,
                        XamlPropertyIndex_Control_HorizontalContentAlignment = 553,
                        XamlPropertyIndex_Control_IsEnabled = 554,
                        XamlPropertyIndex_Control_IsTextScaleFactorEnabled = 556,
                        XamlPropertyIndex_Control_Padding = 557,
                        XamlPropertyIndex_Control_TabNavigation = 559,
                        XamlPropertyIndex_Control_Template = 560,
                        XamlPropertyIndex_Control_VerticalContentAlignment = 561,
                        XamlPropertyIndex_DragItemThemeAnimation_TargetName = 565,
                        XamlPropertyIndex_DragOverThemeAnimation_Direction = 566,
                        XamlPropertyIndex_DragOverThemeAnimation_TargetName = 567,
                        XamlPropertyIndex_DragOverThemeAnimation_ToOffset = 568,
                        XamlPropertyIndex_DropTargetItemThemeAnimation_TargetName = 569,
                        XamlPropertyIndex_FadeInThemeAnimation_TargetName = 570,
                        XamlPropertyIndex_FadeOutThemeAnimation_TargetName = 571,
                        XamlPropertyIndex_Glyphs_Fill = 574,
                        XamlPropertyIndex_Glyphs_FontRenderingEmSize = 575,
                        XamlPropertyIndex_Glyphs_FontUri = 576,
                        XamlPropertyIndex_Glyphs_Indices = 577,
                        XamlPropertyIndex_Glyphs_OriginX = 578,
                        XamlPropertyIndex_Glyphs_OriginY = 579,
                        XamlPropertyIndex_Glyphs_StyleSimulations = 580,
                        XamlPropertyIndex_Glyphs_UnicodeString = 581,
                        XamlPropertyIndex_IconElement_Foreground = 584,
                        XamlPropertyIndex_Image_NineGrid = 586,
                        XamlPropertyIndex_Image_Source = 588,
                        XamlPropertyIndex_Image_Stretch = 589,
                        XamlPropertyIndex_ImageBrush_ImageSource = 591,
                        XamlPropertyIndex_InlineUIContainer_Child = 592,
                        XamlPropertyIndex_ItemsPresenter_Footer = 594,
                        XamlPropertyIndex_ItemsPresenter_FooterTemplate = 595,
                        XamlPropertyIndex_ItemsPresenter_FooterTransitions = 596,
                        XamlPropertyIndex_ItemsPresenter_Header = 597,
                        XamlPropertyIndex_ItemsPresenter_HeaderTemplate = 598,
                        XamlPropertyIndex_ItemsPresenter_HeaderTransitions = 599,
                        XamlPropertyIndex_ItemsPresenter_Padding = 601,
                        XamlPropertyIndex_LinearGradientBrush_EndPoint = 602,
                        XamlPropertyIndex_LinearGradientBrush_StartPoint = 603,
                        XamlPropertyIndex_MatrixTransform_Matrix = 604,
                        XamlPropertyIndex_Panel_Background = 647,
                        XamlPropertyIndex_Panel_Children = 648,
                        XamlPropertyIndex_Panel_ChildrenTransitions = 649,
                        XamlPropertyIndex_Panel_IsItemsHost = 651,
                        XamlPropertyIndex_Paragraph_Inlines = 652,
                        XamlPropertyIndex_Paragraph_TextIndent = 653,
                        XamlPropertyIndex_PointerDownThemeAnimation_TargetName = 660,
                        XamlPropertyIndex_PointerUpThemeAnimation_TargetName = 662,
                        XamlPropertyIndex_PopInThemeAnimation_FromHorizontalOffset = 664,
                        XamlPropertyIndex_PopInThemeAnimation_FromVerticalOffset = 665,
                        XamlPropertyIndex_PopInThemeAnimation_TargetName = 666,
                        XamlPropertyIndex_PopOutThemeAnimation_TargetName = 667,
                        XamlPropertyIndex_Popup_Child = 668,
                        XamlPropertyIndex_Popup_ChildTransitions = 669,
                        XamlPropertyIndex_Popup_HorizontalOffset = 670,
                        XamlPropertyIndex_Popup_IsLightDismissEnabled = 673,
                        XamlPropertyIndex_Popup_IsOpen = 674,
                        XamlPropertyIndex_Popup_VerticalOffset = 676,
                        XamlPropertyIndex_RepositionThemeAnimation_FromHorizontalOffset = 683,
                        XamlPropertyIndex_RepositionThemeAnimation_FromVerticalOffset = 684,
                        XamlPropertyIndex_RepositionThemeAnimation_TargetName = 685,
                        XamlPropertyIndex_ResourceDictionary_MergedDictionaries = 687,
                        XamlPropertyIndex_ResourceDictionary_Source = 688,
                        XamlPropertyIndex_ResourceDictionary_ThemeDictionaries = 689,
                        XamlPropertyIndex_RichTextBlock_Blocks = 691,
                        XamlPropertyIndex_RichTextBlock_CharacterSpacing = 692,
                        XamlPropertyIndex_RichTextBlock_FontFamily = 693,
                        XamlPropertyIndex_RichTextBlock_FontSize = 694,
                        XamlPropertyIndex_RichTextBlock_FontStretch = 695,
                        XamlPropertyIndex_RichTextBlock_FontStyle = 696,
                        XamlPropertyIndex_RichTextBlock_FontWeight = 697,
                        XamlPropertyIndex_RichTextBlock_Foreground = 698,
                        XamlPropertyIndex_RichTextBlock_HasOverflowContent = 699,
                        XamlPropertyIndex_RichTextBlock_IsColorFontEnabled = 700,
                        XamlPropertyIndex_RichTextBlock_IsTextScaleFactorEnabled = 701,
                        XamlPropertyIndex_RichTextBlock_IsTextSelectionEnabled = 702,
                        XamlPropertyIndex_RichTextBlock_LineHeight = 703,
                        XamlPropertyIndex_RichTextBlock_LineStackingStrategy = 704,
                        XamlPropertyIndex_RichTextBlock_MaxLines = 705,
                        XamlPropertyIndex_RichTextBlock_OpticalMarginAlignment = 706,
                        XamlPropertyIndex_RichTextBlock_OverflowContentTarget = 707,
                        XamlPropertyIndex_RichTextBlock_Padding = 708,
                        XamlPropertyIndex_RichTextBlock_SelectedText = 709,
                        XamlPropertyIndex_RichTextBlock_SelectionHighlightColor = 710,
                        XamlPropertyIndex_RichTextBlock_TextAlignment = 711,
                        XamlPropertyIndex_RichTextBlock_TextIndent = 712,
                        XamlPropertyIndex_RichTextBlock_TextLineBounds = 713,
                        XamlPropertyIndex_RichTextBlock_TextReadingOrder = 714,
                        XamlPropertyIndex_RichTextBlock_TextTrimming = 715,
                        XamlPropertyIndex_RichTextBlock_TextWrapping = 716,
                        XamlPropertyIndex_RichTextBlockOverflow_HasOverflowContent = 717,
                        XamlPropertyIndex_RichTextBlockOverflow_MaxLines = 718,
                        XamlPropertyIndex_RichTextBlockOverflow_OverflowContentTarget = 719,
                        XamlPropertyIndex_RichTextBlockOverflow_Padding = 720,
                        XamlPropertyIndex_RotateTransform_Angle = 721,
                        XamlPropertyIndex_RotateTransform_CenterX = 722,
                        XamlPropertyIndex_RotateTransform_CenterY = 723,
                        XamlPropertyIndex_Run_FlowDirection = 725,
                        XamlPropertyIndex_Run_Text = 726,
                        XamlPropertyIndex_ScaleTransform_CenterX = 727,
                        XamlPropertyIndex_ScaleTransform_CenterY = 728,
                        XamlPropertyIndex_ScaleTransform_ScaleX = 729,
                        XamlPropertyIndex_ScaleTransform_ScaleY = 730,
                        XamlPropertyIndex_SetterBaseCollection_IsSealed = 732,
                        XamlPropertyIndex_Shape_Fill = 733,
                        XamlPropertyIndex_Shape_GeometryTransform = 734,
                        XamlPropertyIndex_Shape_Stretch = 735,
                        XamlPropertyIndex_Shape_Stroke = 736,
                        XamlPropertyIndex_Shape_StrokeDashArray = 737,
                        XamlPropertyIndex_Shape_StrokeDashCap = 738,
                        XamlPropertyIndex_Shape_StrokeDashOffset = 739,
                        XamlPropertyIndex_Shape_StrokeEndLineCap = 740,
                        XamlPropertyIndex_Shape_StrokeLineJoin = 741,
                        XamlPropertyIndex_Shape_StrokeMiterLimit = 742,
                        XamlPropertyIndex_Shape_StrokeStartLineCap = 743,
                        XamlPropertyIndex_Shape_StrokeThickness = 744,
                        XamlPropertyIndex_SkewTransform_AngleX = 745,
                        XamlPropertyIndex_SkewTransform_AngleY = 746,
                        XamlPropertyIndex_SkewTransform_CenterX = 747,
                        XamlPropertyIndex_SkewTransform_CenterY = 748,
                        XamlPropertyIndex_Span_Inlines = 749,
                        XamlPropertyIndex_SplitCloseThemeAnimation_ClosedLength = 750,
                        XamlPropertyIndex_SplitCloseThemeAnimation_ClosedTarget = 751,
                        XamlPropertyIndex_SplitCloseThemeAnimation_ClosedTargetName = 752,
                        XamlPropertyIndex_SplitCloseThemeAnimation_ContentTarget = 753,
                        XamlPropertyIndex_SplitCloseThemeAnimation_ContentTargetName = 754,
                        XamlPropertyIndex_SplitCloseThemeAnimation_ContentTranslationDirection = 755,
                        XamlPropertyIndex_SplitCloseThemeAnimation_ContentTranslationOffset = 756,
                        XamlPropertyIndex_SplitCloseThemeAnimation_OffsetFromCenter = 757,
                        XamlPropertyIndex_SplitCloseThemeAnimation_OpenedLength = 758,
                        XamlPropertyIndex_SplitCloseThemeAnimation_OpenedTarget = 759,
                        XamlPropertyIndex_SplitCloseThemeAnimation_OpenedTargetName = 760,
                        XamlPropertyIndex_SplitOpenThemeAnimation_ClosedLength = 761,
                        XamlPropertyIndex_SplitOpenThemeAnimation_ClosedTarget = 762,
                        XamlPropertyIndex_SplitOpenThemeAnimation_ClosedTargetName = 763,
                        XamlPropertyIndex_SplitOpenThemeAnimation_ContentTarget = 764,
                        XamlPropertyIndex_SplitOpenThemeAnimation_ContentTargetName = 765,
                        XamlPropertyIndex_SplitOpenThemeAnimation_ContentTranslationDirection = 766,
                        XamlPropertyIndex_SplitOpenThemeAnimation_ContentTranslationOffset = 767,
                        XamlPropertyIndex_SplitOpenThemeAnimation_OffsetFromCenter = 768,
                        XamlPropertyIndex_SplitOpenThemeAnimation_OpenedLength = 769,
                        XamlPropertyIndex_SplitOpenThemeAnimation_OpenedTarget = 770,
                        XamlPropertyIndex_SplitOpenThemeAnimation_OpenedTargetName = 771,
                        XamlPropertyIndex_Storyboard_Children = 772,
                        XamlPropertyIndex_Storyboard_TargetName = 774,
                        XamlPropertyIndex_Storyboard_TargetProperty = 775,
                        XamlPropertyIndex_SwipeBackThemeAnimation_FromHorizontalOffset = 776,
                        XamlPropertyIndex_SwipeBackThemeAnimation_FromVerticalOffset = 777,
                        XamlPropertyIndex_SwipeBackThemeAnimation_TargetName = 778,
                        XamlPropertyIndex_SwipeHintThemeAnimation_TargetName = 779,
                        XamlPropertyIndex_SwipeHintThemeAnimation_ToHorizontalOffset = 780,
                        XamlPropertyIndex_SwipeHintThemeAnimation_ToVerticalOffset = 781,
                        XamlPropertyIndex_TextBlock_CharacterSpacing = 782,
                        XamlPropertyIndex_TextBlock_FontFamily = 783,
                        XamlPropertyIndex_TextBlock_FontSize = 784,
                        XamlPropertyIndex_TextBlock_FontStretch = 785,
                        XamlPropertyIndex_TextBlock_FontStyle = 786,
                        XamlPropertyIndex_TextBlock_FontWeight = 787,
                        XamlPropertyIndex_TextBlock_Foreground = 788,
                        XamlPropertyIndex_TextBlock_Inlines = 789,
                        XamlPropertyIndex_TextBlock_IsColorFontEnabled = 790,
                        XamlPropertyIndex_TextBlock_IsTextScaleFactorEnabled = 791,
                        XamlPropertyIndex_TextBlock_IsTextSelectionEnabled = 792,
                        XamlPropertyIndex_TextBlock_LineHeight = 793,
                        XamlPropertyIndex_TextBlock_LineStackingStrategy = 794,
                        XamlPropertyIndex_TextBlock_MaxLines = 795,
                        XamlPropertyIndex_TextBlock_OpticalMarginAlignment = 796,
                        XamlPropertyIndex_TextBlock_Padding = 797,
                        XamlPropertyIndex_TextBlock_SelectedText = 798,
                        XamlPropertyIndex_TextBlock_SelectionHighlightColor = 799,
                        XamlPropertyIndex_TextBlock_Text = 800,
                        XamlPropertyIndex_TextBlock_TextAlignment = 801,
                        XamlPropertyIndex_TextBlock_TextDecorations = 802,
                        XamlPropertyIndex_TextBlock_TextLineBounds = 803,
                        XamlPropertyIndex_TextBlock_TextReadingOrder = 804,
                        XamlPropertyIndex_TextBlock_TextTrimming = 805,
                        XamlPropertyIndex_TextBlock_TextWrapping = 806,
                        XamlPropertyIndex_TransformGroup_Children = 811,
                        XamlPropertyIndex_TransformGroup_Value = 812,
                        XamlPropertyIndex_TranslateTransform_X = 814,
                        XamlPropertyIndex_TranslateTransform_Y = 815,
                        XamlPropertyIndex_Viewbox_Child = 819,
                        XamlPropertyIndex_Viewbox_Stretch = 820,
                        XamlPropertyIndex_Viewbox_StretchDirection = 821,
                        XamlPropertyIndex_AppBarSeparator_IsCompact = 826,
                        XamlPropertyIndex_BitmapIcon_UriSource = 827,
                        XamlPropertyIndex_Canvas_Left = 828,
                        XamlPropertyIndex_Canvas_Top = 829,
                        XamlPropertyIndex_Canvas_ZIndex = 830,
                        XamlPropertyIndex_ContentControl_Content = 832,
                        XamlPropertyIndex_ContentControl_ContentTemplate = 833,
                        XamlPropertyIndex_ContentControl_ContentTemplateSelector = 834,
                        XamlPropertyIndex_ContentControl_ContentTransitions = 835,
                        XamlPropertyIndex_DatePicker_CalendarIdentifier = 837,
                        XamlPropertyIndex_DatePicker_Date = 838,
                        XamlPropertyIndex_DatePicker_DayFormat = 839,
                        XamlPropertyIndex_DatePicker_DayVisible = 840,
                        XamlPropertyIndex_DatePicker_Header = 841,
                        XamlPropertyIndex_DatePicker_HeaderTemplate = 842,
                        XamlPropertyIndex_DatePicker_MaxYear = 843,
                        XamlPropertyIndex_DatePicker_MinYear = 844,
                        XamlPropertyIndex_DatePicker_MonthFormat = 845,
                        XamlPropertyIndex_DatePicker_MonthVisible = 846,
                        XamlPropertyIndex_DatePicker_Orientation = 847,
                        XamlPropertyIndex_DatePicker_YearFormat = 848,
                        XamlPropertyIndex_DatePicker_YearVisible = 849,
                        XamlPropertyIndex_FontIcon_FontFamily = 851,
                        XamlPropertyIndex_FontIcon_FontSize = 852,
                        XamlPropertyIndex_FontIcon_FontStyle = 853,
                        XamlPropertyIndex_FontIcon_FontWeight = 854,
                        XamlPropertyIndex_FontIcon_Glyph = 855,
                        XamlPropertyIndex_FontIcon_IsTextScaleFactorEnabled = 856,
                        XamlPropertyIndex_Grid_Column = 857,
                        XamlPropertyIndex_Grid_ColumnDefinitions = 858,
                        XamlPropertyIndex_Grid_ColumnSpan = 859,
                        XamlPropertyIndex_Grid_Row = 860,
                        XamlPropertyIndex_Grid_RowDefinitions = 861,
                        XamlPropertyIndex_Grid_RowSpan = 862,
                        XamlPropertyIndex_Hub_DefaultSectionIndex = 863,
                        XamlPropertyIndex_Hub_Header = 864,
                        XamlPropertyIndex_Hub_HeaderTemplate = 865,
                        XamlPropertyIndex_Hub_IsActiveView = 866,
                        XamlPropertyIndex_Hub_IsZoomedInView = 867,
                        XamlPropertyIndex_Hub_Orientation = 868,
                        XamlPropertyIndex_Hub_SectionHeaders = 869,
                        XamlPropertyIndex_Hub_Sections = 870,
                        XamlPropertyIndex_Hub_SectionsInView = 871,
                        XamlPropertyIndex_Hub_SemanticZoomOwner = 872,
                        XamlPropertyIndex_HubSection_ContentTemplate = 873,
                        XamlPropertyIndex_HubSection_Header = 874,
                        XamlPropertyIndex_HubSection_HeaderTemplate = 875,
                        XamlPropertyIndex_HubSection_IsHeaderInteractive = 876,
                        XamlPropertyIndex_Hyperlink_NavigateUri = 877,
                        XamlPropertyIndex_ItemsControl_DisplayMemberPath = 879,
                        XamlPropertyIndex_ItemsControl_GroupStyle = 880,
                        XamlPropertyIndex_ItemsControl_GroupStyleSelector = 881,
                        XamlPropertyIndex_ItemsControl_IsGrouping = 882,
                        XamlPropertyIndex_ItemsControl_ItemContainerStyle = 884,
                        XamlPropertyIndex_ItemsControl_ItemContainerStyleSelector = 885,
                        XamlPropertyIndex_ItemsControl_ItemContainerTransitions = 886,
                        XamlPropertyIndex_ItemsControl_Items = 887,
                        XamlPropertyIndex_ItemsControl_ItemsPanel = 889,
                        XamlPropertyIndex_ItemsControl_ItemsSource = 890,
                        XamlPropertyIndex_ItemsControl_ItemTemplate = 891,
                        XamlPropertyIndex_ItemsControl_ItemTemplateSelector = 892,
                        XamlPropertyIndex_Line_X1 = 893,
                        XamlPropertyIndex_Line_X2 = 894,
                        XamlPropertyIndex_Line_Y1 = 895,
                        XamlPropertyIndex_Line_Y2 = 896,
                        XamlPropertyIndex_PasswordBox_Header = 913,
                        XamlPropertyIndex_PasswordBox_HeaderTemplate = 914,
                        XamlPropertyIndex_PasswordBox_IsPasswordRevealButtonEnabled = 915,
                        XamlPropertyIndex_PasswordBox_MaxLength = 916,
                        XamlPropertyIndex_PasswordBox_Password = 917,
                        XamlPropertyIndex_PasswordBox_PasswordChar = 918,
                        XamlPropertyIndex_PasswordBox_PlaceholderText = 919,
                        XamlPropertyIndex_PasswordBox_PreventKeyboardDisplayOnProgrammaticFocus = 920,
                        XamlPropertyIndex_PasswordBox_SelectionHighlightColor = 921,
                        XamlPropertyIndex_Path_Data = 922,
                        XamlPropertyIndex_PathIcon_Data = 923,
                        XamlPropertyIndex_Polygon_FillRule = 924,
                        XamlPropertyIndex_Polygon_Points = 925,
                        XamlPropertyIndex_Polyline_FillRule = 926,
                        XamlPropertyIndex_Polyline_Points = 927,
                        XamlPropertyIndex_ProgressRing_IsActive = 928,
                        XamlPropertyIndex_ProgressRing_TemplateSettings = 929,
                        XamlPropertyIndex_RangeBase_LargeChange = 930,
                        XamlPropertyIndex_RangeBase_Maximum = 931,
                        XamlPropertyIndex_RangeBase_Minimum = 932,
                        XamlPropertyIndex_RangeBase_SmallChange = 933,
                        XamlPropertyIndex_RangeBase_Value = 934,
                        XamlPropertyIndex_Rectangle_RadiusX = 935,
                        XamlPropertyIndex_Rectangle_RadiusY = 936,
                        XamlPropertyIndex_RichEditBox_AcceptsReturn = 937,
                        XamlPropertyIndex_RichEditBox_Header = 938,
                        XamlPropertyIndex_RichEditBox_HeaderTemplate = 939,
                        XamlPropertyIndex_RichEditBox_InputScope = 940,
                        XamlPropertyIndex_RichEditBox_IsColorFontEnabled = 941,
                        XamlPropertyIndex_RichEditBox_IsReadOnly = 942,
                        XamlPropertyIndex_RichEditBox_IsSpellCheckEnabled = 943,
                        XamlPropertyIndex_RichEditBox_IsTextPredictionEnabled = 944,
                        XamlPropertyIndex_RichEditBox_PlaceholderText = 945,
                        XamlPropertyIndex_RichEditBox_PreventKeyboardDisplayOnProgrammaticFocus = 946,
                        XamlPropertyIndex_RichEditBox_SelectionHighlightColor = 947,
                        XamlPropertyIndex_RichEditBox_TextAlignment = 948,
                        XamlPropertyIndex_RichEditBox_TextWrapping = 949,
                        XamlPropertyIndex_SemanticZoom_CanChangeViews = 956,
                        XamlPropertyIndex_SemanticZoom_IsZoomedInViewActive = 957,
                        XamlPropertyIndex_SemanticZoom_IsZoomOutButtonEnabled = 958,
                        XamlPropertyIndex_SemanticZoom_ZoomedInView = 959,
                        XamlPropertyIndex_SemanticZoom_ZoomedOutView = 960,
                        XamlPropertyIndex_StackPanel_AreScrollSnapPointsRegular = 961,
                        XamlPropertyIndex_StackPanel_Orientation = 962,
                        XamlPropertyIndex_SymbolIcon_Symbol = 963,
                        XamlPropertyIndex_TextBox_AcceptsReturn = 964,
                        XamlPropertyIndex_TextBox_Header = 965,
                        XamlPropertyIndex_TextBox_HeaderTemplate = 966,
                        XamlPropertyIndex_TextBox_InputScope = 967,
                        XamlPropertyIndex_TextBox_IsColorFontEnabled = 968,
                        XamlPropertyIndex_TextBox_IsReadOnly = 971,
                        XamlPropertyIndex_TextBox_IsSpellCheckEnabled = 972,
                        XamlPropertyIndex_TextBox_IsTextPredictionEnabled = 973,
                        XamlPropertyIndex_TextBox_MaxLength = 974,
                        XamlPropertyIndex_TextBox_PlaceholderText = 975,
                        XamlPropertyIndex_TextBox_PreventKeyboardDisplayOnProgrammaticFocus = 976,
                        XamlPropertyIndex_TextBox_SelectedText = 977,
                        XamlPropertyIndex_TextBox_SelectionHighlightColor = 978,
                        XamlPropertyIndex_TextBox_SelectionLength = 979,
                        XamlPropertyIndex_TextBox_SelectionStart = 980,
                        XamlPropertyIndex_TextBox_Text = 981,
                        XamlPropertyIndex_TextBox_TextAlignment = 982,
                        XamlPropertyIndex_TextBox_TextWrapping = 983,
                        XamlPropertyIndex_Thumb_IsDragging = 984,
                        XamlPropertyIndex_TickBar_Fill = 985,
                        XamlPropertyIndex_TimePicker_ClockIdentifier = 986,
                        XamlPropertyIndex_TimePicker_Header = 987,
                        XamlPropertyIndex_TimePicker_HeaderTemplate = 988,
                        XamlPropertyIndex_TimePicker_MinuteIncrement = 989,
                        XamlPropertyIndex_TimePicker_Time = 990,
                        XamlPropertyIndex_ToggleSwitch_Header = 991,
                        XamlPropertyIndex_ToggleSwitch_HeaderTemplate = 992,
                        XamlPropertyIndex_ToggleSwitch_IsOn = 993,
                        XamlPropertyIndex_ToggleSwitch_OffContent = 994,
                        XamlPropertyIndex_ToggleSwitch_OffContentTemplate = 995,
                        XamlPropertyIndex_ToggleSwitch_OnContent = 996,
                        XamlPropertyIndex_ToggleSwitch_OnContentTemplate = 997,
                        XamlPropertyIndex_ToggleSwitch_TemplateSettings = 998,
                        XamlPropertyIndex_UserControl_Content = 999,
                        XamlPropertyIndex_VariableSizedWrapGrid_ColumnSpan = 1000,
                        XamlPropertyIndex_VariableSizedWrapGrid_HorizontalChildrenAlignment = 1001,
                        XamlPropertyIndex_VariableSizedWrapGrid_ItemHeight = 1002,
                        XamlPropertyIndex_VariableSizedWrapGrid_ItemWidth = 1003,
                        XamlPropertyIndex_VariableSizedWrapGrid_MaximumRowsOrColumns = 1004,
                        XamlPropertyIndex_VariableSizedWrapGrid_Orientation = 1005,
                        XamlPropertyIndex_VariableSizedWrapGrid_RowSpan = 1006,
                        XamlPropertyIndex_VariableSizedWrapGrid_VerticalChildrenAlignment = 1007,
                        XamlPropertyIndex_AppBar_ClosedDisplayMode = 1016,
                        XamlPropertyIndex_AppBar_IsOpen = 1017,
                        XamlPropertyIndex_AppBar_IsSticky = 1018,
                        XamlPropertyIndex_AutoSuggestBox_AutoMaximizeSuggestionArea = 1019,
                        XamlPropertyIndex_AutoSuggestBox_Header = 1020,
                        XamlPropertyIndex_AutoSuggestBox_IsSuggestionListOpen = 1021,
                        XamlPropertyIndex_AutoSuggestBox_MaxSuggestionListHeight = 1022,
                        XamlPropertyIndex_AutoSuggestBox_PlaceholderText = 1023,
                        XamlPropertyIndex_AutoSuggestBox_Text = 1024,
                        XamlPropertyIndex_AutoSuggestBox_TextBoxStyle = 1025,
                        XamlPropertyIndex_AutoSuggestBox_TextMemberPath = 1026,
                        XamlPropertyIndex_AutoSuggestBox_UpdateTextOnSelect = 1027,
                        XamlPropertyIndex_ButtonBase_ClickMode = 1029,
                        XamlPropertyIndex_ButtonBase_Command = 1030,
                        XamlPropertyIndex_ButtonBase_CommandParameter = 1031,
                        XamlPropertyIndex_ButtonBase_IsPointerOver = 1032,
                        XamlPropertyIndex_ButtonBase_IsPressed = 1033,
                        XamlPropertyIndex_ContentDialog_FullSizeDesired = 1034,
                        XamlPropertyIndex_ContentDialog_IsPrimaryButtonEnabled = 1035,
                        XamlPropertyIndex_ContentDialog_IsSecondaryButtonEnabled = 1036,
                        XamlPropertyIndex_ContentDialog_PrimaryButtonCommand = 1037,
                        XamlPropertyIndex_ContentDialog_PrimaryButtonCommandParameter = 1038,
                        XamlPropertyIndex_ContentDialog_PrimaryButtonText = 1039,
                        XamlPropertyIndex_ContentDialog_SecondaryButtonCommand = 1040,
                        XamlPropertyIndex_ContentDialog_SecondaryButtonCommandParameter = 1041,
                        XamlPropertyIndex_ContentDialog_SecondaryButtonText = 1042,
                        XamlPropertyIndex_ContentDialog_Title = 1043,
                        XamlPropertyIndex_ContentDialog_TitleTemplate = 1044,
                        XamlPropertyIndex_Frame_BackStack = 1045,
                        XamlPropertyIndex_Frame_BackStackDepth = 1046,
                        XamlPropertyIndex_Frame_CacheSize = 1047,
                        XamlPropertyIndex_Frame_CanGoBack = 1048,
                        XamlPropertyIndex_Frame_CanGoForward = 1049,
                        XamlPropertyIndex_Frame_CurrentSourcePageType = 1050,
                        XamlPropertyIndex_Frame_ForwardStack = 1051,
                        XamlPropertyIndex_Frame_SourcePageType = 1052,
                        XamlPropertyIndex_GridViewItemPresenter_CheckBrush = 1053,
                        XamlPropertyIndex_GridViewItemPresenter_CheckHintBrush = 1054,
                        XamlPropertyIndex_GridViewItemPresenter_CheckSelectingBrush = 1055,
                        XamlPropertyIndex_GridViewItemPresenter_ContentMargin = 1056,
                        XamlPropertyIndex_GridViewItemPresenter_DisabledOpacity = 1057,
                        XamlPropertyIndex_GridViewItemPresenter_DragBackground = 1058,
                        XamlPropertyIndex_GridViewItemPresenter_DragForeground = 1059,
                        XamlPropertyIndex_GridViewItemPresenter_DragOpacity = 1060,
                        XamlPropertyIndex_GridViewItemPresenter_FocusBorderBrush = 1061,
                        XamlPropertyIndex_GridViewItemPresenter_GridViewItemPresenterHorizontalContentAlignment = 1062,
                        XamlPropertyIndex_GridViewItemPresenter_GridViewItemPresenterPadding = 1063,
                        XamlPropertyIndex_GridViewItemPresenter_PlaceholderBackground = 1064,
                        XamlPropertyIndex_GridViewItemPresenter_PointerOverBackground = 1065,
                        XamlPropertyIndex_GridViewItemPresenter_PointerOverBackgroundMargin = 1066,
                        XamlPropertyIndex_GridViewItemPresenter_ReorderHintOffset = 1067,
                        XamlPropertyIndex_GridViewItemPresenter_SelectedBackground = 1068,
                        XamlPropertyIndex_GridViewItemPresenter_SelectedBorderThickness = 1069,
                        XamlPropertyIndex_GridViewItemPresenter_SelectedForeground = 1070,
                        XamlPropertyIndex_GridViewItemPresenter_SelectedPointerOverBackground = 1071,
                        XamlPropertyIndex_GridViewItemPresenter_SelectedPointerOverBorderBrush = 1072,
                        XamlPropertyIndex_GridViewItemPresenter_SelectionCheckMarkVisualEnabled = 1073,
                        XamlPropertyIndex_GridViewItemPresenter_GridViewItemPresenterVerticalContentAlignment = 1074,
                        XamlPropertyIndex_ItemsStackPanel_CacheLength = 1076,
                        XamlPropertyIndex_ItemsStackPanel_GroupHeaderPlacement = 1077,
                        XamlPropertyIndex_ItemsStackPanel_GroupPadding = 1078,
                        XamlPropertyIndex_ItemsStackPanel_ItemsUpdatingScrollMode = 1079,
                        XamlPropertyIndex_ItemsStackPanel_Orientation = 1080,
                        XamlPropertyIndex_ItemsWrapGrid_CacheLength = 1081,
                        XamlPropertyIndex_ItemsWrapGrid_GroupHeaderPlacement = 1082,
                        XamlPropertyIndex_ItemsWrapGrid_GroupPadding = 1083,
                        XamlPropertyIndex_ItemsWrapGrid_ItemHeight = 1084,
                        XamlPropertyIndex_ItemsWrapGrid_ItemWidth = 1085,
                        XamlPropertyIndex_ItemsWrapGrid_MaximumRowsOrColumns = 1086,
                        XamlPropertyIndex_ItemsWrapGrid_Orientation = 1087,
                        XamlPropertyIndex_ListViewItemPresenter_CheckBrush = 1088,
                        XamlPropertyIndex_ListViewItemPresenter_CheckHintBrush = 1089,
                        XamlPropertyIndex_ListViewItemPresenter_CheckSelectingBrush = 1090,
                        XamlPropertyIndex_ListViewItemPresenter_ContentMargin = 1091,
                        XamlPropertyIndex_ListViewItemPresenter_DisabledOpacity = 1092,
                        XamlPropertyIndex_ListViewItemPresenter_DragBackground = 1093,
                        XamlPropertyIndex_ListViewItemPresenter_DragForeground = 1094,
                        XamlPropertyIndex_ListViewItemPresenter_DragOpacity = 1095,
                        XamlPropertyIndex_ListViewItemPresenter_FocusBorderBrush = 1096,
                        XamlPropertyIndex_ListViewItemPresenter_ListViewItemPresenterHorizontalContentAlignment = 1097,
                        XamlPropertyIndex_ListViewItemPresenter_ListViewItemPresenterPadding = 1098,
                        XamlPropertyIndex_ListViewItemPresenter_PlaceholderBackground = 1099,
                        XamlPropertyIndex_ListViewItemPresenter_PointerOverBackground = 1100,
                        XamlPropertyIndex_ListViewItemPresenter_PointerOverBackgroundMargin = 1101,
                        XamlPropertyIndex_ListViewItemPresenter_ReorderHintOffset = 1102,
                        XamlPropertyIndex_ListViewItemPresenter_SelectedBackground = 1103,
                        XamlPropertyIndex_ListViewItemPresenter_SelectedBorderThickness = 1104,
                        XamlPropertyIndex_ListViewItemPresenter_SelectedForeground = 1105,
                        XamlPropertyIndex_ListViewItemPresenter_SelectedPointerOverBackground = 1106,
                        XamlPropertyIndex_ListViewItemPresenter_SelectedPointerOverBorderBrush = 1107,
                        XamlPropertyIndex_ListViewItemPresenter_SelectionCheckMarkVisualEnabled = 1108,
                        XamlPropertyIndex_ListViewItemPresenter_ListViewItemPresenterVerticalContentAlignment = 1109,
                        XamlPropertyIndex_MenuFlyoutItem_Command = 1110,
                        XamlPropertyIndex_MenuFlyoutItem_CommandParameter = 1111,
                        XamlPropertyIndex_MenuFlyoutItem_Text = 1112,
                        XamlPropertyIndex_Page_BottomAppBar = 1114,
                        XamlPropertyIndex_Page_Frame = 1115,
                        XamlPropertyIndex_Page_NavigationCacheMode = 1116,
                        XamlPropertyIndex_Page_TopAppBar = 1117,
                        XamlPropertyIndex_ProgressBar_IsIndeterminate = 1118,
                        XamlPropertyIndex_ProgressBar_ShowError = 1119,
                        XamlPropertyIndex_ProgressBar_ShowPaused = 1120,
                        XamlPropertyIndex_ProgressBar_TemplateSettings = 1121,
                        XamlPropertyIndex_ScrollBar_IndicatorMode = 1122,
                        XamlPropertyIndex_ScrollBar_Orientation = 1123,
                        XamlPropertyIndex_ScrollBar_ViewportSize = 1124,
                        XamlPropertyIndex_Selector_IsSynchronizedWithCurrentItem = 1126,
                        XamlPropertyIndex_Selector_SelectedIndex = 1127,
                        XamlPropertyIndex_Selector_SelectedItem = 1128,
                        XamlPropertyIndex_Selector_SelectedValue = 1129,
                        XamlPropertyIndex_Selector_SelectedValuePath = 1130,
                        XamlPropertyIndex_SelectorItem_IsSelected = 1131,
                        XamlPropertyIndex_Slider_Header = 1137,
                        XamlPropertyIndex_Slider_HeaderTemplate = 1138,
                        XamlPropertyIndex_Slider_IntermediateValue = 1139,
                        XamlPropertyIndex_Slider_IsDirectionReversed = 1140,
                        XamlPropertyIndex_Slider_IsThumbToolTipEnabled = 1141,
                        XamlPropertyIndex_Slider_Orientation = 1142,
                        XamlPropertyIndex_Slider_SnapsTo = 1143,
                        XamlPropertyIndex_Slider_StepFrequency = 1144,
                        XamlPropertyIndex_Slider_ThumbToolTipValueConverter = 1145,
                        XamlPropertyIndex_Slider_TickFrequency = 1146,
                        XamlPropertyIndex_Slider_TickPlacement = 1147,
                        XamlPropertyIndex_SwapChainPanel_CompositionScaleX = 1148,
                        XamlPropertyIndex_SwapChainPanel_CompositionScaleY = 1149,
                        XamlPropertyIndex_ToolTip_HorizontalOffset = 1150,
                        XamlPropertyIndex_ToolTip_IsOpen = 1151,
                        XamlPropertyIndex_ToolTip_Placement = 1152,
                        XamlPropertyIndex_ToolTip_PlacementTarget = 1153,
                        XamlPropertyIndex_ToolTip_TemplateSettings = 1154,
                        XamlPropertyIndex_ToolTip_VerticalOffset = 1155,
                        XamlPropertyIndex_Button_Flyout = 1156,
                        XamlPropertyIndex_ComboBox_Header = 1157,
                        XamlPropertyIndex_ComboBox_HeaderTemplate = 1158,
                        XamlPropertyIndex_ComboBox_IsDropDownOpen = 1159,
                        XamlPropertyIndex_ComboBox_IsEditable = 1160,
                        XamlPropertyIndex_ComboBox_IsSelectionBoxHighlighted = 1161,
                        XamlPropertyIndex_ComboBox_MaxDropDownHeight = 1162,
                        XamlPropertyIndex_ComboBox_PlaceholderText = 1163,
                        XamlPropertyIndex_ComboBox_SelectionBoxItem = 1164,
                        XamlPropertyIndex_ComboBox_SelectionBoxItemTemplate = 1165,
                        XamlPropertyIndex_ComboBox_TemplateSettings = 1166,
                        XamlPropertyIndex_CommandBar_PrimaryCommands = 1167,
                        XamlPropertyIndex_CommandBar_SecondaryCommands = 1168,
                        XamlPropertyIndex_FlipView_UseTouchAnimationsForAllNavigation = 1169,
                        XamlPropertyIndex_HyperlinkButton_NavigateUri = 1170,
                        XamlPropertyIndex_ListBox_SelectedItems = 1171,
                        XamlPropertyIndex_ListBox_SelectionMode = 1172,
                        XamlPropertyIndex_ListViewBase_CanDragItems = 1173,
                        XamlPropertyIndex_ListViewBase_CanReorderItems = 1174,
                        XamlPropertyIndex_ListViewBase_DataFetchSize = 1175,
                        XamlPropertyIndex_ListViewBase_Footer = 1176,
                        XamlPropertyIndex_ListViewBase_FooterTemplate = 1177,
                        XamlPropertyIndex_ListViewBase_FooterTransitions = 1178,
                        XamlPropertyIndex_ListViewBase_Header = 1179,
                        XamlPropertyIndex_ListViewBase_HeaderTemplate = 1180,
                        XamlPropertyIndex_ListViewBase_HeaderTransitions = 1181,
                        XamlPropertyIndex_ListViewBase_IncrementalLoadingThreshold = 1182,
                        XamlPropertyIndex_ListViewBase_IncrementalLoadingTrigger = 1183,
                        XamlPropertyIndex_ListViewBase_IsActiveView = 1184,
                        XamlPropertyIndex_ListViewBase_IsItemClickEnabled = 1185,
                        XamlPropertyIndex_ListViewBase_IsSwipeEnabled = 1186,
                        XamlPropertyIndex_ListViewBase_IsZoomedInView = 1187,
                        XamlPropertyIndex_ListViewBase_ReorderMode = 1188,
                        XamlPropertyIndex_ListViewBase_SelectedItems = 1189,
                        XamlPropertyIndex_ListViewBase_SelectionMode = 1190,
                        XamlPropertyIndex_ListViewBase_SemanticZoomOwner = 1191,
                        XamlPropertyIndex_ListViewBase_ShowsScrollingPlaceholders = 1192,
                        XamlPropertyIndex_RepeatButton_Delay = 1193,
                        XamlPropertyIndex_RepeatButton_Interval = 1194,
                        XamlPropertyIndex_ScrollViewer_BringIntoViewOnFocusChange = 1195,
                        XamlPropertyIndex_ScrollViewer_ComputedHorizontalScrollBarVisibility = 1196,
                        XamlPropertyIndex_ScrollViewer_ComputedVerticalScrollBarVisibility = 1197,
                        XamlPropertyIndex_ScrollViewer_ExtentHeight = 1198,
                        XamlPropertyIndex_ScrollViewer_ExtentWidth = 1199,
                        XamlPropertyIndex_ScrollViewer_HorizontalOffset = 1200,
                        XamlPropertyIndex_ScrollViewer_HorizontalScrollBarVisibility = 1201,
                        XamlPropertyIndex_ScrollViewer_HorizontalScrollMode = 1202,
                        XamlPropertyIndex_ScrollViewer_HorizontalSnapPointsAlignment = 1203,
                        XamlPropertyIndex_ScrollViewer_HorizontalSnapPointsType = 1204,
                        XamlPropertyIndex_ScrollViewer_IsDeferredScrollingEnabled = 1205,
                        XamlPropertyIndex_ScrollViewer_IsHorizontalRailEnabled = 1206,
                        XamlPropertyIndex_ScrollViewer_IsHorizontalScrollChainingEnabled = 1207,
                        XamlPropertyIndex_ScrollViewer_IsScrollInertiaEnabled = 1208,
                        XamlPropertyIndex_ScrollViewer_IsVerticalRailEnabled = 1209,
                        XamlPropertyIndex_ScrollViewer_IsVerticalScrollChainingEnabled = 1210,
                        XamlPropertyIndex_ScrollViewer_IsZoomChainingEnabled = 1211,
                        XamlPropertyIndex_ScrollViewer_IsZoomInertiaEnabled = 1212,
                        XamlPropertyIndex_ScrollViewer_LeftHeader = 1213,
                        XamlPropertyIndex_ScrollViewer_MaxZoomFactor = 1214,
                        XamlPropertyIndex_ScrollViewer_MinZoomFactor = 1215,
                        XamlPropertyIndex_ScrollViewer_ScrollableHeight = 1216,
                        XamlPropertyIndex_ScrollViewer_ScrollableWidth = 1217,
                        XamlPropertyIndex_ScrollViewer_TopHeader = 1218,
                        XamlPropertyIndex_ScrollViewer_TopLeftHeader = 1219,
                        XamlPropertyIndex_ScrollViewer_VerticalOffset = 1220,
                        XamlPropertyIndex_ScrollViewer_VerticalScrollBarVisibility = 1221,
                        XamlPropertyIndex_ScrollViewer_VerticalScrollMode = 1222,
                        XamlPropertyIndex_ScrollViewer_VerticalSnapPointsAlignment = 1223,
                        XamlPropertyIndex_ScrollViewer_VerticalSnapPointsType = 1224,
                        XamlPropertyIndex_ScrollViewer_ViewportHeight = 1225,
                        XamlPropertyIndex_ScrollViewer_ViewportWidth = 1226,
                        XamlPropertyIndex_ScrollViewer_ZoomFactor = 1227,
                        XamlPropertyIndex_ScrollViewer_ZoomMode = 1228,
                        XamlPropertyIndex_ScrollViewer_ZoomSnapPoints = 1229,
                        XamlPropertyIndex_ScrollViewer_ZoomSnapPointsType = 1230,
                        XamlPropertyIndex_ToggleButton_IsChecked = 1231,
                        XamlPropertyIndex_ToggleButton_IsThreeState = 1232,
                        XamlPropertyIndex_ToggleMenuFlyoutItem_IsChecked = 1233,
                        XamlPropertyIndex_VirtualizingStackPanel_AreScrollSnapPointsRegular = 1234,
                        XamlPropertyIndex_VirtualizingStackPanel_IsVirtualizing = 1236,
                        XamlPropertyIndex_VirtualizingStackPanel_Orientation = 1237,
                        XamlPropertyIndex_VirtualizingStackPanel_VirtualizationMode = 1238,
                        XamlPropertyIndex_WrapGrid_HorizontalChildrenAlignment = 1239,
                        XamlPropertyIndex_WrapGrid_ItemHeight = 1240,
                        XamlPropertyIndex_WrapGrid_ItemWidth = 1241,
                        XamlPropertyIndex_WrapGrid_MaximumRowsOrColumns = 1242,
                        XamlPropertyIndex_WrapGrid_Orientation = 1243,
                        XamlPropertyIndex_WrapGrid_VerticalChildrenAlignment = 1244,
                        XamlPropertyIndex_AppBarButton_Icon = 1245,
                        XamlPropertyIndex_AppBarButton_IsCompact = 1246,
                        XamlPropertyIndex_AppBarButton_Label = 1247,
                        XamlPropertyIndex_AppBarToggleButton_Icon = 1248,
                        XamlPropertyIndex_AppBarToggleButton_IsCompact = 1249,
                        XamlPropertyIndex_AppBarToggleButton_Label = 1250,
                        XamlPropertyIndex_GridViewItem_TemplateSettings = 1251,
                        XamlPropertyIndex_ListViewItem_TemplateSettings = 1252,
                        XamlPropertyIndex_RadioButton_GroupName = 1253,
                        XamlPropertyIndex_Glyphs_ColorFontPaletteIndex = 1267,
                        XamlPropertyIndex_Glyphs_IsColorFontEnabled = 1268,
                        XamlPropertyIndex_CalendarViewTemplateSettings_HasMoreContentAfter = 1274,
                        XamlPropertyIndex_CalendarViewTemplateSettings_HasMoreContentBefore = 1275,
                        XamlPropertyIndex_CalendarViewTemplateSettings_HasMoreViews = 1276,
                        XamlPropertyIndex_CalendarViewTemplateSettings_HeaderText = 1277,
                        XamlPropertyIndex_CalendarViewTemplateSettings_WeekDay1 = 1280,
                        XamlPropertyIndex_CalendarViewTemplateSettings_WeekDay2 = 1281,
                        XamlPropertyIndex_CalendarViewTemplateSettings_WeekDay3 = 1282,
                        XamlPropertyIndex_CalendarViewTemplateSettings_WeekDay4 = 1283,
                        XamlPropertyIndex_CalendarViewTemplateSettings_WeekDay5 = 1284,
                        XamlPropertyIndex_CalendarViewTemplateSettings_WeekDay6 = 1285,
                        XamlPropertyIndex_CalendarViewTemplateSettings_WeekDay7 = 1286,
                        XamlPropertyIndex_CalendarView_CalendarIdentifier = 1291,
                        XamlPropertyIndex_CalendarView_DayOfWeekFormat = 1299,
                        XamlPropertyIndex_CalendarView_DisplayMode = 1302,
                        XamlPropertyIndex_CalendarView_FirstDayOfWeek = 1303,
                        XamlPropertyIndex_CalendarView_IsOutOfScopeEnabled = 1317,
                        XamlPropertyIndex_CalendarView_IsTodayHighlighted = 1318,
                        XamlPropertyIndex_CalendarView_MaxDate = 1320,
                        XamlPropertyIndex_CalendarView_MinDate = 1321,
                        XamlPropertyIndex_CalendarView_NumberOfWeeksInView = 1327,
                        XamlPropertyIndex_CalendarView_SelectedDates = 1333,
                        XamlPropertyIndex_CalendarView_SelectionMode = 1335,
                        XamlPropertyIndex_CalendarView_TemplateSettings = 1336,
                        XamlPropertyIndex_CalendarViewDayItem_Date = 1339,
                        XamlPropertyIndex_CalendarViewDayItem_IsBlackout = 1340,
                        XamlPropertyIndex_ContentPresenter_LineHeight = 1425,
                        XamlPropertyIndex_CalendarViewTemplateSettings_MinViewWidth = 1435,
                        XamlPropertyIndex_ListViewBase_SelectedRanges = 1459,
                        XamlPropertyIndex_SplitViewTemplateSettings_CompactPaneGridLength = 1462,
                        XamlPropertyIndex_SplitViewTemplateSettings_NegativeOpenPaneLength = 1463,
                        XamlPropertyIndex_SplitViewTemplateSettings_NegativeOpenPaneLengthMinusCompactLength = 1464,
                        XamlPropertyIndex_SplitViewTemplateSettings_OpenPaneGridLength = 1465,
                        XamlPropertyIndex_SplitViewTemplateSettings_OpenPaneLengthMinusCompactLength = 1466,
                        XamlPropertyIndex_SplitView_CompactPaneLength = 1467,
                        XamlPropertyIndex_SplitView_Content = 1468,
                        XamlPropertyIndex_SplitView_DisplayMode = 1469,
                        XamlPropertyIndex_SplitView_IsPaneOpen = 1470,
                        XamlPropertyIndex_SplitView_OpenPaneLength = 1471,
                        XamlPropertyIndex_SplitView_Pane = 1472,
                        XamlPropertyIndex_SplitView_PanePlacement = 1473,
                        XamlPropertyIndex_SplitView_TemplateSettings = 1474,
                        XamlPropertyIndex_UIElement_Transform3D = 1475,
                        XamlPropertyIndex_CompositeTransform3D_CenterX = 1476,
                        XamlPropertyIndex_CompositeTransform3D_CenterY = 1478,
                        XamlPropertyIndex_CompositeTransform3D_CenterZ = 1480,
                        XamlPropertyIndex_CompositeTransform3D_RotationX = 1482,
                        XamlPropertyIndex_CompositeTransform3D_RotationY = 1484,
                        XamlPropertyIndex_CompositeTransform3D_RotationZ = 1486,
                        XamlPropertyIndex_CompositeTransform3D_ScaleX = 1488,
                        XamlPropertyIndex_CompositeTransform3D_ScaleY = 1490,
                        XamlPropertyIndex_CompositeTransform3D_ScaleZ = 1492,
                        XamlPropertyIndex_CompositeTransform3D_TranslateX = 1494,
                        XamlPropertyIndex_CompositeTransform3D_TranslateY = 1496,
                        XamlPropertyIndex_CompositeTransform3D_TranslateZ = 1498,
                        XamlPropertyIndex_PerspectiveTransform3D_Depth = 1500,
                        XamlPropertyIndex_PerspectiveTransform3D_OffsetX = 1501,
                        XamlPropertyIndex_PerspectiveTransform3D_OffsetY = 1502,
                        XamlPropertyIndex_RelativePanel_Above = 1508,
                        XamlPropertyIndex_RelativePanel_AlignBottomWith = 1509,
                        XamlPropertyIndex_RelativePanel_AlignLeftWith = 1510,
                        XamlPropertyIndex_RelativePanel_AlignRightWith = 1515,
                        XamlPropertyIndex_RelativePanel_AlignTopWith = 1516,
                        XamlPropertyIndex_RelativePanel_Below = 1517,
                        XamlPropertyIndex_RelativePanel_LeftOf = 1520,
                        XamlPropertyIndex_RelativePanel_RightOf = 1521,
                        XamlPropertyIndex_SplitViewTemplateSettings_OpenPaneLength = 1524,
                        XamlPropertyIndex_PasswordBox_PasswordRevealMode = 1527,
                        XamlPropertyIndex_SplitView_PaneBackground = 1528,
                        XamlPropertyIndex_ItemsStackPanel_AreStickyGroupHeadersEnabled = 1529,
                        XamlPropertyIndex_ItemsWrapGrid_AreStickyGroupHeadersEnabled = 1530,
                        XamlPropertyIndex_MenuFlyoutSubItem_Items = 1531,
                        XamlPropertyIndex_MenuFlyoutSubItem_Text = 1532,
                        XamlPropertyIndex_UIElement_CanDrag = 1534,
                        XamlPropertyIndex_DataTemplate_ExtensionInstance = 1535,
                        XamlPropertyIndex_RelativePanel_AlignHorizontalCenterWith = 1552,
                        XamlPropertyIndex_RelativePanel_AlignVerticalCenterWith = 1553,
                        XamlPropertyIndex_TargetPropertyPath_Path = 1555,
                        XamlPropertyIndex_TargetPropertyPath_Target = 1556,
                        XamlPropertyIndex_VisualState_Setters = 1558,
                        XamlPropertyIndex_VisualState_StateTriggers = 1559,
                        XamlPropertyIndex_AdaptiveTrigger_MinWindowHeight = 1560,
                        XamlPropertyIndex_AdaptiveTrigger_MinWindowWidth = 1561,
                        XamlPropertyIndex_Setter_Target = 1562,
                        XamlPropertyIndex_CalendarView_BlackoutForeground = 1565,
                        XamlPropertyIndex_CalendarView_CalendarItemBackground = 1566,
                        XamlPropertyIndex_CalendarView_CalendarItemBorderBrush = 1567,
                        XamlPropertyIndex_CalendarView_CalendarItemBorderThickness = 1568,
                        XamlPropertyIndex_CalendarView_CalendarItemForeground = 1569,
                        XamlPropertyIndex_CalendarView_CalendarViewDayItemStyle = 1570,
                        XamlPropertyIndex_CalendarView_DayItemFontFamily = 1571,
                        XamlPropertyIndex_CalendarView_DayItemFontSize = 1572,
                        XamlPropertyIndex_CalendarView_DayItemFontStyle = 1573,
                        XamlPropertyIndex_CalendarView_DayItemFontWeight = 1574,
                        XamlPropertyIndex_CalendarView_FirstOfMonthLabelFontFamily = 1575,
                        XamlPropertyIndex_CalendarView_FirstOfMonthLabelFontSize = 1576,
                        XamlPropertyIndex_CalendarView_FirstOfMonthLabelFontStyle = 1577,
                        XamlPropertyIndex_CalendarView_FirstOfMonthLabelFontWeight = 1578,
                        XamlPropertyIndex_CalendarView_FirstOfYearDecadeLabelFontFamily = 1579,
                        XamlPropertyIndex_CalendarView_FirstOfYearDecadeLabelFontSize = 1580,
                        XamlPropertyIndex_CalendarView_FirstOfYearDecadeLabelFontStyle = 1581,
                        XamlPropertyIndex_CalendarView_FirstOfYearDecadeLabelFontWeight = 1582,
                        XamlPropertyIndex_CalendarView_FocusBorderBrush = 1583,
                        XamlPropertyIndex_CalendarView_HorizontalDayItemAlignment = 1584,
                        XamlPropertyIndex_CalendarView_HorizontalFirstOfMonthLabelAlignment = 1585,
                        XamlPropertyIndex_CalendarView_HoverBorderBrush = 1586,
                        XamlPropertyIndex_CalendarView_MonthYearItemFontFamily = 1588,
                        XamlPropertyIndex_CalendarView_MonthYearItemFontSize = 1589,
                        XamlPropertyIndex_CalendarView_MonthYearItemFontStyle = 1590,
                        XamlPropertyIndex_CalendarView_MonthYearItemFontWeight = 1591,
                        XamlPropertyIndex_CalendarView_OutOfScopeBackground = 1592,
                        XamlPropertyIndex_CalendarView_OutOfScopeForeground = 1593,
                        XamlPropertyIndex_CalendarView_PressedBorderBrush = 1594,
                        XamlPropertyIndex_CalendarView_PressedForeground = 1595,
                        XamlPropertyIndex_CalendarView_SelectedBorderBrush = 1596,
                        XamlPropertyIndex_CalendarView_SelectedForeground = 1597,
                        XamlPropertyIndex_CalendarView_SelectedHoverBorderBrush = 1598,
                        XamlPropertyIndex_CalendarView_SelectedPressedBorderBrush = 1599,
                        XamlPropertyIndex_CalendarView_TodayFontWeight = 1600,
                        XamlPropertyIndex_CalendarView_TodayForeground = 1601,
                        XamlPropertyIndex_CalendarView_VerticalDayItemAlignment = 1602,
                        XamlPropertyIndex_CalendarView_VerticalFirstOfMonthLabelAlignment = 1603,
                        XamlPropertyIndex_RelativePanel_AlignBottomWithPanel = 1606,
                        XamlPropertyIndex_RelativePanel_AlignHorizontalCenterWithPanel = 1607,
                        XamlPropertyIndex_RelativePanel_AlignLeftWithPanel = 1608,
                        XamlPropertyIndex_RelativePanel_AlignRightWithPanel = 1609,
                        XamlPropertyIndex_RelativePanel_AlignTopWithPanel = 1610,
                        XamlPropertyIndex_RelativePanel_AlignVerticalCenterWithPanel = 1611,
                        XamlPropertyIndex_ListViewBase_IsMultiSelectCheckBoxEnabled = 1612,
                        XamlPropertyIndex_AutomationProperties_Level = 1614,
                        XamlPropertyIndex_AutomationProperties_PositionInSet = 1615,
                        XamlPropertyIndex_AutomationProperties_SizeOfSet = 1616,
                        XamlPropertyIndex_ListViewItemPresenter_CheckBoxBrush = 1617,
                        XamlPropertyIndex_ListViewItemPresenter_CheckMode = 1618,
                        XamlPropertyIndex_ListViewItemPresenter_PressedBackground = 1620,
                        XamlPropertyIndex_ListViewItemPresenter_SelectedPressedBackground = 1621,
                        XamlPropertyIndex_Control_IsTemplateFocusTarget = 1623,
                        XamlPropertyIndex_ListViewItemPresenter_FocusSecondaryBorderBrush = 1628,
                        XamlPropertyIndex_ListViewItemPresenter_PointerOverForeground = 1630,
                        XamlPropertyIndex_FontIcon_MirroredWhenRightToLeft = 1631,
                        XamlPropertyIndex_CalendarViewTemplateSettings_CenterX = 1632,
                        XamlPropertyIndex_CalendarViewTemplateSettings_CenterY = 1633,
                        XamlPropertyIndex_CalendarViewTemplateSettings_ClipRect = 1634,
                        XamlPropertyIndex_PasswordBox_TextReadingOrder = 1650,
                        XamlPropertyIndex_RichEditBox_TextReadingOrder = 1651,
                        XamlPropertyIndex_TextBox_TextReadingOrder = 1652,
                        XamlPropertyIndex_RichEditBox_DesiredCandidateWindowAlignment = 1660,
                        XamlPropertyIndex_TextBox_DesiredCandidateWindowAlignment = 1662,
                        XamlPropertyIndex_CalendarDatePicker_CalendarIdentifier = 1663,
                        XamlPropertyIndex_CalendarDatePicker_CalendarViewStyle = 1664,
                        XamlPropertyIndex_CalendarDatePicker_Date = 1665,
                        XamlPropertyIndex_CalendarDatePicker_DateFormat = 1666,
                        XamlPropertyIndex_CalendarDatePicker_DayOfWeekFormat = 1667,
                        XamlPropertyIndex_CalendarDatePicker_DisplayMode = 1668,
                        XamlPropertyIndex_CalendarDatePicker_FirstDayOfWeek = 1669,
                        XamlPropertyIndex_CalendarDatePicker_Header = 1670,
                        XamlPropertyIndex_CalendarDatePicker_HeaderTemplate = 1671,
                        XamlPropertyIndex_CalendarDatePicker_IsCalendarOpen = 1672,
                        XamlPropertyIndex_CalendarDatePicker_IsGroupLabelVisible = 1673,
                        XamlPropertyIndex_CalendarDatePicker_IsOutOfScopeEnabled = 1674,
                        XamlPropertyIndex_CalendarDatePicker_IsTodayHighlighted = 1675,
                        XamlPropertyIndex_CalendarDatePicker_MaxDate = 1676,
                        XamlPropertyIndex_CalendarDatePicker_MinDate = 1677,
                        XamlPropertyIndex_CalendarDatePicker_PlaceholderText = 1678,
                        XamlPropertyIndex_CalendarView_IsGroupLabelVisible = 1679,
                        XamlPropertyIndex_ContentPresenter_Background = 1680,
                        XamlPropertyIndex_ContentPresenter_BorderBrush = 1681,
                        XamlPropertyIndex_ContentPresenter_BorderThickness = 1682,
                        XamlPropertyIndex_ContentPresenter_CornerRadius = 1683,
                        XamlPropertyIndex_ContentPresenter_Padding = 1684,
                        XamlPropertyIndex_Grid_BorderBrush = 1685,
                        XamlPropertyIndex_Grid_BorderThickness = 1686,
                        XamlPropertyIndex_Grid_CornerRadius = 1687,
                        XamlPropertyIndex_Grid_Padding = 1688,
                        XamlPropertyIndex_RelativePanel_BorderBrush = 1689,
                        XamlPropertyIndex_RelativePanel_BorderThickness = 1690,
                        XamlPropertyIndex_RelativePanel_CornerRadius = 1691,
                        XamlPropertyIndex_RelativePanel_Padding = 1692,
                        XamlPropertyIndex_StackPanel_BorderBrush = 1693,
                        XamlPropertyIndex_StackPanel_BorderThickness = 1694,
                        XamlPropertyIndex_StackPanel_CornerRadius = 1695,
                        XamlPropertyIndex_StackPanel_Padding = 1696,
                        XamlPropertyIndex_PasswordBox_InputScope = 1697,
                        XamlPropertyIndex_AutoSuggestBoxQuerySubmittedEventArgs_ChosenSuggestion = 1699,
                        XamlPropertyIndex_AutoSuggestBoxQuerySubmittedEventArgs_QueryText = 1700,
                        XamlPropertyIndex_AutoSuggestBox_QueryIcon = 1701,
                        XamlPropertyIndex_StateTrigger_IsActive = 1702,
                        XamlPropertyIndex_ContentPresenter_HorizontalContentAlignment = 1703,
                        XamlPropertyIndex_ContentPresenter_VerticalContentAlignment = 1704,
                        XamlPropertyIndex_AppBarTemplateSettings_ClipRect = 1705,
                        XamlPropertyIndex_AppBarTemplateSettings_CompactRootMargin = 1706,
                        XamlPropertyIndex_AppBarTemplateSettings_CompactVerticalDelta = 1707,
                        XamlPropertyIndex_AppBarTemplateSettings_HiddenRootMargin = 1708,
                        XamlPropertyIndex_AppBarTemplateSettings_HiddenVerticalDelta = 1709,
                        XamlPropertyIndex_AppBarTemplateSettings_MinimalRootMargin = 1710,
                        XamlPropertyIndex_AppBarTemplateSettings_MinimalVerticalDelta = 1711,
                        XamlPropertyIndex_CommandBarTemplateSettings_ContentHeight = 1712,
                        XamlPropertyIndex_CommandBarTemplateSettings_NegativeOverflowContentHeight = 1713,
                        XamlPropertyIndex_CommandBarTemplateSettings_OverflowContentClipRect = 1714,
                        XamlPropertyIndex_CommandBarTemplateSettings_OverflowContentHeight = 1715,
                        XamlPropertyIndex_CommandBarTemplateSettings_OverflowContentHorizontalOffset = 1716,
                        XamlPropertyIndex_CommandBarTemplateSettings_OverflowContentMaxHeight = 1717,
                        XamlPropertyIndex_CommandBarTemplateSettings_OverflowContentMinWidth = 1718,
                        XamlPropertyIndex_AppBar_TemplateSettings = 1719,
                        XamlPropertyIndex_CommandBar_CommandBarOverflowPresenterStyle = 1720,
                        XamlPropertyIndex_CommandBar_CommandBarTemplateSettings = 1721,
                        XamlPropertyIndex_DrillInThemeAnimation_EntranceTarget = 1722,
                        XamlPropertyIndex_DrillInThemeAnimation_EntranceTargetName = 1723,
                        XamlPropertyIndex_DrillInThemeAnimation_ExitTarget = 1724,
                        XamlPropertyIndex_DrillInThemeAnimation_ExitTargetName = 1725,
                        XamlPropertyIndex_DrillOutThemeAnimation_EntranceTarget = 1726,
                        XamlPropertyIndex_DrillOutThemeAnimation_EntranceTargetName = 1727,
                        XamlPropertyIndex_DrillOutThemeAnimation_ExitTarget = 1728,
                        XamlPropertyIndex_DrillOutThemeAnimation_ExitTargetName = 1729,
                        XamlPropertyIndex_XamlBindingHelper_DataTemplateComponent = 1730,
                        XamlPropertyIndex_AutomationProperties_Annotations = 1732,
                        XamlPropertyIndex_AutomationAnnotation_Element = 1733,
                        XamlPropertyIndex_AutomationAnnotation_Type = 1734,
                        XamlPropertyIndex_AutomationPeerAnnotation_Peer = 1735,
                        XamlPropertyIndex_AutomationPeerAnnotation_Type = 1736,
                        XamlPropertyIndex_Hyperlink_UnderlineStyle = 1741,
                        XamlPropertyIndex_Control_IsFocusEngaged = 1749,
                        XamlPropertyIndex_Control_IsFocusEngagementEnabled = 1752,
                        XamlPropertyIndex_RichEditBox_ClipboardCopyFormat = 1754,
                        XamlPropertyIndex_CommandBarTemplateSettings_OverflowContentMaxWidth = 1757,
                        XamlPropertyIndex_ComboBoxTemplateSettings_DropDownContentMinWidth = 1758,
                        XamlPropertyIndex_MenuFlyoutPresenterTemplateSettings_FlyoutContentMinWidth = 1762,
                        XamlPropertyIndex_MenuFlyoutPresenter_TemplateSettings = 1763,
                        XamlPropertyIndex_AutomationProperties_LandmarkType = 1766,
                        XamlPropertyIndex_AutomationProperties_LocalizedLandmarkType = 1767,
                        XamlPropertyIndex_RepositionThemeTransition_IsStaggeringEnabled = 1769,
                        XamlPropertyIndex_ListBox_SingleSelectionFollowsFocus = 1770,
                        XamlPropertyIndex_ListViewBase_SingleSelectionFollowsFocus = 1771,
                        XamlPropertyIndex_BitmapImage_AutoPlay = 1773,
                        XamlPropertyIndex_BitmapImage_IsAnimatedBitmap = 1774,
                        XamlPropertyIndex_BitmapImage_IsPlaying = 1775,
                        XamlPropertyIndex_AutomationProperties_FullDescription = 1776,
                        XamlPropertyIndex_AutomationProperties_IsDataValidForForm = 1777,
                        XamlPropertyIndex_AutomationProperties_IsPeripheral = 1778,
                        XamlPropertyIndex_AutomationProperties_LocalizedControlType = 1779,
                        XamlPropertyIndex_FlyoutBase_AllowFocusOnInteraction = 1780,
                        XamlPropertyIndex_TextElement_AllowFocusOnInteraction = 1781,
                        XamlPropertyIndex_FrameworkElement_AllowFocusOnInteraction = 1782,
                        XamlPropertyIndex_Control_RequiresPointer = 1783,
                        XamlPropertyIndex_UIElement_ContextFlyout = 1785,
                        XamlPropertyIndex_TextElement_AccessKey = 1786,
                        XamlPropertyIndex_UIElement_AccessKeyScopeOwner = 1787,
                        XamlPropertyIndex_UIElement_IsAccessKeyScope = 1788,
                        XamlPropertyIndex_AutomationProperties_DescribedBy = 1790,
                        XamlPropertyIndex_UIElement_AccessKey = 1803,
                        XamlPropertyIndex_Hyperlink_XYFocusDown = 1808,
                        XamlPropertyIndex_Hyperlink_XYFocusLeft = 1809,
                        XamlPropertyIndex_Hyperlink_XYFocusRight = 1810,
                        XamlPropertyIndex_Hyperlink_XYFocusUp = 1811,
                        XamlPropertyIndex_CommandBarTemplateSettings_EffectiveOverflowButtonVisibility = 1816,
                        XamlPropertyIndex_AppBarSeparator_IsInOverflow = 1817,
                        XamlPropertyIndex_CommandBar_DefaultLabelPosition = 1818,
                        XamlPropertyIndex_CommandBar_IsDynamicOverflowEnabled = 1819,
                        XamlPropertyIndex_CommandBar_OverflowButtonVisibility = 1820,
                        XamlPropertyIndex_AppBarButton_IsInOverflow = 1821,
                        XamlPropertyIndex_AppBarButton_LabelPosition = 1822,
                        XamlPropertyIndex_AppBarToggleButton_IsInOverflow = 1823,
                        XamlPropertyIndex_AppBarToggleButton_LabelPosition = 1824,
                        XamlPropertyIndex_FlyoutBase_LightDismissOverlayMode = 1825,
                        XamlPropertyIndex_Popup_LightDismissOverlayMode = 1827,
                        XamlPropertyIndex_CalendarDatePicker_LightDismissOverlayMode = 1829,
                        XamlPropertyIndex_DatePicker_LightDismissOverlayMode = 1830,
                        XamlPropertyIndex_SplitView_LightDismissOverlayMode = 1831,
                        XamlPropertyIndex_TimePicker_LightDismissOverlayMode = 1832,
                        XamlPropertyIndex_AppBar_LightDismissOverlayMode = 1833,
                        XamlPropertyIndex_AutoSuggestBox_LightDismissOverlayMode = 1834,
                        XamlPropertyIndex_ComboBox_LightDismissOverlayMode = 1835,
                        XamlPropertyIndex_AppBarSeparator_DynamicOverflowOrder = 1836,
                        XamlPropertyIndex_AppBarButton_DynamicOverflowOrder = 1837,
                        XamlPropertyIndex_AppBarToggleButton_DynamicOverflowOrder = 1838,
                        XamlPropertyIndex_FrameworkElement_FocusVisualMargin = 1839,
                        XamlPropertyIndex_FrameworkElement_FocusVisualPrimaryBrush = 1840,
                        XamlPropertyIndex_FrameworkElement_FocusVisualPrimaryThickness = 1841,
                        XamlPropertyIndex_FrameworkElement_FocusVisualSecondaryBrush = 1842,
                        XamlPropertyIndex_FrameworkElement_FocusVisualSecondaryThickness = 1843,
                        XamlPropertyIndex_FlyoutBase_AllowFocusWhenDisabled = 1846,
                        XamlPropertyIndex_FrameworkElement_AllowFocusWhenDisabled = 1847,
                        XamlPropertyIndex_ComboBox_IsTextSearchEnabled = 1848,
                        XamlPropertyIndex_TextElement_ExitDisplayModeOnAccessKeyInvoked = 1849,
                        XamlPropertyIndex_UIElement_ExitDisplayModeOnAccessKeyInvoked = 1850,
                        XamlPropertyIndex_FlyoutBase_ElementSoundMode = 1869,
                        XamlPropertyIndex_Control_ElementSoundMode = 1870,
                        XamlPropertyIndex_Hyperlink_ElementSoundMode = 1871,
                        XamlPropertyIndex_AutomationProperties_FlowsFrom = 1876,
                        XamlPropertyIndex_AutomationProperties_FlowsTo = 1877,
                        XamlPropertyIndex_TextElement_TextDecorations = 1879,
                        XamlPropertyIndex_RichTextBlock_TextDecorations = 1881,
                        XamlPropertyIndex_Control_DefaultStyleResourceUri = 1882,
                        XamlPropertyIndex_ContentDialog_PrimaryButtonStyle = 1884,
                        XamlPropertyIndex_ContentDialog_SecondaryButtonStyle = 1885,
                        XamlPropertyIndex_TextElement_KeyTipHorizontalOffset = 1890,
                        XamlPropertyIndex_TextElement_KeyTipPlacementMode = 1891,
                        XamlPropertyIndex_TextElement_KeyTipVerticalOffset = 1892,
                        XamlPropertyIndex_UIElement_KeyTipHorizontalOffset = 1893,
                        XamlPropertyIndex_UIElement_KeyTipPlacementMode = 1894,
                        XamlPropertyIndex_UIElement_KeyTipVerticalOffset = 1895,
                        XamlPropertyIndex_FlyoutBase_OverlayInputPassThroughElement = 1896,
                        XamlPropertyIndex_UIElement_XYFocusKeyboardNavigation = 1897,
                        XamlPropertyIndex_AutomationProperties_Culture = 1898,
                        XamlPropertyIndex_UIElement_XYFocusDownNavigationStrategy = 1918,
                        XamlPropertyIndex_UIElement_XYFocusLeftNavigationStrategy = 1919,
                        XamlPropertyIndex_UIElement_XYFocusRightNavigationStrategy = 1920,
                        XamlPropertyIndex_UIElement_XYFocusUpNavigationStrategy = 1921,
                        XamlPropertyIndex_Hyperlink_XYFocusDownNavigationStrategy = 1922,
                        XamlPropertyIndex_Hyperlink_XYFocusLeftNavigationStrategy = 1923,
                        XamlPropertyIndex_Hyperlink_XYFocusRightNavigationStrategy = 1924,
                        XamlPropertyIndex_Hyperlink_XYFocusUpNavigationStrategy = 1925,
                        XamlPropertyIndex_TextElement_AccessKeyScopeOwner = 1926,
                        XamlPropertyIndex_TextElement_IsAccessKeyScope = 1927,
                        XamlPropertyIndex_Hyperlink_FocusState = 1934,
                        XamlPropertyIndex_ContentDialog_CloseButtonCommand = 1936,
                        XamlPropertyIndex_ContentDialog_CloseButtonCommandParameter = 1937,
                        XamlPropertyIndex_ContentDialog_CloseButtonStyle = 1938,
                        XamlPropertyIndex_ContentDialog_CloseButtonText = 1939,
                        XamlPropertyIndex_ContentDialog_DefaultButton = 1940,
                        XamlPropertyIndex_RichEditBox_SelectionHighlightColorWhenNotFocused = 1941,
                        XamlPropertyIndex_TextBox_SelectionHighlightColorWhenNotFocused = 1942,
                        XamlPropertyIndex_SvgImageSource_RasterizePixelHeight = 1948,
                        XamlPropertyIndex_SvgImageSource_RasterizePixelWidth = 1949,
                        XamlPropertyIndex_SvgImageSource_UriSource = 1950,
                        XamlPropertyIndex_LoadedImageSurface_DecodedPhysicalSize = 1955,
                        XamlPropertyIndex_LoadedImageSurface_DecodedSize = 1956,
                        XamlPropertyIndex_LoadedImageSurface_NaturalSize = 1957,
                        XamlPropertyIndex_ComboBox_SelectionChangedTrigger = 1958,
                        XamlPropertyIndex_XamlCompositionBrushBase_FallbackColor = 1960,
                        XamlPropertyIndex_UIElement_Lights = 1962,
                        XamlPropertyIndex_MenuFlyoutItem_Icon = 1963,
                        XamlPropertyIndex_MenuFlyoutSubItem_Icon = 1964,
                        XamlPropertyIndex_BitmapIcon_ShowAsMonochrome = 1965,
                        XamlPropertyIndex_UIElement_HighContrastAdjustment = 1967,
                        XamlPropertyIndex_RichEditBox_MaxLength = 1968,
                        XamlPropertyIndex_UIElement_TabFocusNavigation = 1969,
                        XamlPropertyIndex_Control_IsTemplateKeyTipTarget = 1970,
                        XamlPropertyIndex_Hyperlink_IsTabStop = 1972,
                        XamlPropertyIndex_Hyperlink_TabIndex = 1973,
                        XamlPropertyIndex_RichEditBox_DisabledFormattingAccelerators = 1977,
                        XamlPropertyIndex_RichEditBox_CharacterCasing = 1978,
                        XamlPropertyIndex_TextBox_CharacterCasing = 1979,
                        XamlPropertyIndex_RichTextBlock_IsTextTrimmed = 1980,
                        XamlPropertyIndex_RichTextBlockOverflow_IsTextTrimmed = 1981,
                        XamlPropertyIndex_TextBlock_IsTextTrimmed = 1982,
                        XamlPropertyIndex_TextHighlighter_Background = 1985,
                        XamlPropertyIndex_TextHighlighter_Foreground = 1986,
                        XamlPropertyIndex_TextHighlighter_Ranges = 1987,
                        XamlPropertyIndex_RichTextBlock_TextHighlighters = 1988,
                        XamlPropertyIndex_TextBlock_TextHighlighters = 1989,
                        XamlPropertyIndex_FrameworkElement_ActualTheme = 1992,
                        XamlPropertyIndex_Grid_ColumnSpacing = 1993,
                        XamlPropertyIndex_Grid_RowSpacing = 1994,
                        XamlPropertyIndex_StackPanel_Spacing = 1995,
                        XamlPropertyIndex_Block_HorizontalTextAlignment = 1996,
                        XamlPropertyIndex_RichTextBlock_HorizontalTextAlignment = 1997,
                        XamlPropertyIndex_TextBlock_HorizontalTextAlignment = 1998,
                        XamlPropertyIndex_RichEditBox_HorizontalTextAlignment = 1999,
                        XamlPropertyIndex_TextBox_HorizontalTextAlignment = 2000,
                        XamlPropertyIndex_TextBox_PlaceholderForeground = 2001,
                        XamlPropertyIndex_ComboBox_PlaceholderForeground = 2002,
                        XamlPropertyIndex_KeyboardAccelerator_IsEnabled = 2003,
                        XamlPropertyIndex_KeyboardAccelerator_Key = 2004,
                        XamlPropertyIndex_KeyboardAccelerator_Modifiers = 2005,
                        XamlPropertyIndex_KeyboardAccelerator_ScopeOwner = 2006,
                        XamlPropertyIndex_UIElement_KeyboardAccelerators = 2007,
                        XamlPropertyIndex_ListViewItemPresenter_RevealBackground = 2009,
                        XamlPropertyIndex_ListViewItemPresenter_RevealBackgroundShowsAboveContent = 2010,
                        XamlPropertyIndex_ListViewItemPresenter_RevealBorderBrush = 2011,
                        XamlPropertyIndex_ListViewItemPresenter_RevealBorderThickness = 2012,
                        XamlPropertyIndex_UIElement_KeyTipTarget = 2014,
                        XamlPropertyIndex_AppBarButtonTemplateSettings_KeyboardAcceleratorTextMinWidth = 2015,
                        XamlPropertyIndex_AppBarToggleButtonTemplateSettings_KeyboardAcceleratorTextMinWidth = 2016,
                        XamlPropertyIndex_MenuFlyoutItemTemplateSettings_KeyboardAcceleratorTextMinWidth = 2017,
                        XamlPropertyIndex_MenuFlyoutItem_TemplateSettings = 2019,
                        XamlPropertyIndex_AppBarButton_TemplateSettings = 2021,
                        XamlPropertyIndex_AppBarToggleButton_TemplateSettings = 2023,
                        XamlPropertyIndex_UIElement_KeyboardAcceleratorPlacementMode = 2028,
                        XamlPropertyIndex_UIElement_KeyboardAcceleratorPlacementTarget = 2061,
                        XamlPropertyIndex_UIElement_CenterPoint = 2062,
                        XamlPropertyIndex_UIElement_Rotation = 2063,
                        XamlPropertyIndex_UIElement_RotationAxis = 2064,
                        XamlPropertyIndex_UIElement_Scale = 2065,
                        XamlPropertyIndex_UIElement_TransformMatrix = 2066,
                        XamlPropertyIndex_UIElement_Translation = 2067,
                        XamlPropertyIndex_AutomationProperties_HeadingLevel = 2069,
                        XamlPropertyIndex_MenuFlyoutItem_KeyboardAcceleratorTextOverride = 2090,
                        XamlPropertyIndex_AppBarButton_KeyboardAcceleratorTextOverride = 2091,
                        XamlPropertyIndex_AppBarToggleButton_KeyboardAcceleratorTextOverride = 2092,
                        XamlPropertyIndex_IconSource_Foreground = 2112,
                        XamlPropertyIndex_BitmapIconSource_ShowAsMonochrome = 2113,
                        XamlPropertyIndex_BitmapIconSource_UriSource = 2114,
                        XamlPropertyIndex_FontIconSource_FontFamily = 2115,
                        XamlPropertyIndex_FontIconSource_FontSize = 2116,
                        XamlPropertyIndex_FontIconSource_FontStyle = 2117,
                        XamlPropertyIndex_FontIconSource_FontWeight = 2118,
                        XamlPropertyIndex_FontIconSource_Glyph = 2119,
                        XamlPropertyIndex_FontIconSource_IsTextScaleFactorEnabled = 2120,
                        XamlPropertyIndex_FontIconSource_MirroredWhenRightToLeft = 2121,
                        XamlPropertyIndex_PathIconSource_Data = 2122,
                        XamlPropertyIndex_SymbolIconSource_Symbol = 2123,
                        XamlPropertyIndex_UIElement_Shadow = 2130,
                        XamlPropertyIndex_IconSourceElement_IconSource = 2131,
                        XamlPropertyIndex_PasswordBox_CanPasteClipboardContent = 2137,
                        XamlPropertyIndex_TextBox_CanPasteClipboardContent = 2138,
                        XamlPropertyIndex_TextBox_CanRedo = 2139,
                        XamlPropertyIndex_TextBox_CanUndo = 2140,
                        XamlPropertyIndex_FlyoutBase_ShowMode = 2141,
                        XamlPropertyIndex_FlyoutBase_Target = 2142,
                        XamlPropertyIndex_Control_CornerRadius = 2143,
                        XamlPropertyIndex_AutomationProperties_IsDialog = 2149,
                        XamlPropertyIndex_AppBarElementContainer_DynamicOverflowOrder = 2150,
                        XamlPropertyIndex_AppBarElementContainer_IsCompact = 2151,
                        XamlPropertyIndex_AppBarElementContainer_IsInOverflow = 2152,
                        XamlPropertyIndex_ScrollContentPresenter_CanContentRenderOutsideBounds = 2157,
                        XamlPropertyIndex_ScrollViewer_CanContentRenderOutsideBounds = 2158,
                        XamlPropertyIndex_RichEditBox_SelectionFlyout = 2159,
                        XamlPropertyIndex_TextBox_SelectionFlyout = 2160,
                        XamlPropertyIndex_Border_BackgroundSizing = 2161,
                        XamlPropertyIndex_ContentPresenter_BackgroundSizing = 2162,
                        XamlPropertyIndex_Control_BackgroundSizing = 2163,
                        XamlPropertyIndex_Grid_BackgroundSizing = 2164,
                        XamlPropertyIndex_RelativePanel_BackgroundSizing = 2165,
                        XamlPropertyIndex_StackPanel_BackgroundSizing = 2166,
                        XamlPropertyIndex_ScrollViewer_HorizontalAnchorRatio = 2170,
                        XamlPropertyIndex_ScrollViewer_VerticalAnchorRatio = 2171,
                        XamlPropertyIndex_ComboBox_Text = 2208,
                        XamlPropertyIndex_TextBox_Description = 2217,
                        XamlPropertyIndex_ToolTip_PlacementRect = 2218,
                        XamlPropertyIndex_RichTextBlock_SelectionFlyout = 2219,
                        XamlPropertyIndex_TextBlock_SelectionFlyout = 2220,
                        XamlPropertyIndex_PasswordBox_SelectionFlyout = 2221,
                        XamlPropertyIndex_Border_BackgroundTransition = 2222,
                        XamlPropertyIndex_ContentPresenter_BackgroundTransition = 2223,
                        XamlPropertyIndex_Panel_BackgroundTransition = 2224,
                        XamlPropertyIndex_ColorPaletteResources_Accent = 2227,
                        XamlPropertyIndex_ColorPaletteResources_AltHigh = 2228,
                        XamlPropertyIndex_ColorPaletteResources_AltLow = 2229,
                        XamlPropertyIndex_ColorPaletteResources_AltMedium = 2230,
                        XamlPropertyIndex_ColorPaletteResources_AltMediumHigh = 2231,
                        XamlPropertyIndex_ColorPaletteResources_AltMediumLow = 2232,
                        XamlPropertyIndex_ColorPaletteResources_BaseHigh = 2233,
                        XamlPropertyIndex_ColorPaletteResources_BaseLow = 2234,
                        XamlPropertyIndex_ColorPaletteResources_BaseMedium = 2235,
                        XamlPropertyIndex_ColorPaletteResources_BaseMediumHigh = 2236,
                        XamlPropertyIndex_ColorPaletteResources_BaseMediumLow = 2237,
                        XamlPropertyIndex_ColorPaletteResources_ChromeAltLow = 2238,
                        XamlPropertyIndex_ColorPaletteResources_ChromeBlackHigh = 2239,
                        XamlPropertyIndex_ColorPaletteResources_ChromeBlackLow = 2240,
                        XamlPropertyIndex_ColorPaletteResources_ChromeBlackMedium = 2241,
                        XamlPropertyIndex_ColorPaletteResources_ChromeBlackMediumLow = 2242,
                        XamlPropertyIndex_ColorPaletteResources_ChromeDisabledHigh = 2243,
                        XamlPropertyIndex_ColorPaletteResources_ChromeDisabledLow = 2244,
                        XamlPropertyIndex_ColorPaletteResources_ChromeGray = 2245,
                        XamlPropertyIndex_ColorPaletteResources_ChromeHigh = 2246,
                        XamlPropertyIndex_ColorPaletteResources_ChromeLow = 2247,
                        XamlPropertyIndex_ColorPaletteResources_ChromeMedium = 2248,
                        XamlPropertyIndex_ColorPaletteResources_ChromeMediumLow = 2249,
                        XamlPropertyIndex_ColorPaletteResources_ChromeWhite = 2250,
                        XamlPropertyIndex_ColorPaletteResources_ErrorText = 2252,
                        XamlPropertyIndex_ColorPaletteResources_ListLow = 2253,
                        XamlPropertyIndex_ColorPaletteResources_ListMedium = 2254,
                        XamlPropertyIndex_UIElement_TranslationTransition = 2255,
                        XamlPropertyIndex_UIElement_OpacityTransition = 2256,
                        XamlPropertyIndex_UIElement_RotationTransition = 2257,
                        XamlPropertyIndex_UIElement_ScaleTransition = 2258,
                        XamlPropertyIndex_BrushTransition_Duration = 2261,
                        XamlPropertyIndex_ScalarTransition_Duration = 2262,
                        XamlPropertyIndex_Vector3Transition_Duration = 2263,
                        XamlPropertyIndex_Vector3Transition_Components = 2266,
                        XamlPropertyIndex_FlyoutBase_IsOpen = 2267,
                        XamlPropertyIndex_StandardUICommand_Kind = 2275,
                        XamlPropertyIndex_UIElement_CanBeScrollAnchor = 2276,
                        XamlPropertyIndex_ThemeShadow_Receivers = 2279,
                        XamlPropertyIndex_ScrollContentPresenter_SizesContentToTemplatedParent = 2280,
                        XamlPropertyIndex_ComboBox_TextBoxStyle = 2281,
                        XamlPropertyIndex_Frame_IsNavigationStackEnabled = 2282,
                        XamlPropertyIndex_RichEditBox_ProofingMenuFlyout = 2283,
                        XamlPropertyIndex_TextBox_ProofingMenuFlyout = 2284,
                        XamlPropertyIndex_ScrollViewer_ReduceViewportForCoreInputViewOcclusions = 2295,
                        XamlPropertyIndex_FlyoutBase_AreOpenCloseAnimationsEnabled = 2296,
                        XamlPropertyIndex_FlyoutBase_InputDevicePrefersPrimaryCommands = 2297,
                        XamlPropertyIndex_CalendarDatePicker_Description = 2300,
                        XamlPropertyIndex_PasswordBox_Description = 2308,
                        XamlPropertyIndex_PasswordBox_ErrorTemplate = 2309,
                        XamlPropertyIndex_PasswordBox_HasValidationErrors = 2310,
                        XamlPropertyIndex_PasswordBox_InputValidationKind = 2311,
                        XamlPropertyIndex_PasswordBox_InputValidationMode = 2312,
                        XamlPropertyIndex_PasswordBox_ValidationContext = 2314,
                        XamlPropertyIndex_PasswordBox_ValidationErrors = 2315,
                        XamlPropertyIndex_RichEditBox_Description = 2316,
                        XamlPropertyIndex_TextBox_ErrorTemplate = 2324,
                        XamlPropertyIndex_TextBox_HasValidationErrors = 2325,
                        XamlPropertyIndex_TextBox_InputValidationKind = 2326,
                        XamlPropertyIndex_TextBox_InputValidationMode = 2327,
                        XamlPropertyIndex_TextBox_ValidationContext = 2329,
                        XamlPropertyIndex_TextBox_ValidationErrors = 2330,
                        XamlPropertyIndex_AutoSuggestBox_Description = 2331,
                        XamlPropertyIndex_AutoSuggestBox_ErrorTemplate = 2332,
                        XamlPropertyIndex_AutoSuggestBox_HasValidationErrors = 2333,
                        XamlPropertyIndex_AutoSuggestBox_InputValidationKind = 2334,
                        XamlPropertyIndex_AutoSuggestBox_InputValidationMode = 2335,
                        XamlPropertyIndex_AutoSuggestBox_ValidationContext = 2337,
                        XamlPropertyIndex_AutoSuggestBox_ValidationErrors = 2338,
                        XamlPropertyIndex_ComboBox_Description = 2339,
                        XamlPropertyIndex_ComboBox_ErrorTemplate = 2340,
                        XamlPropertyIndex_ComboBox_HasValidationErrors = 2341,
                        XamlPropertyIndex_ComboBox_InputValidationKind = 2342,
                        XamlPropertyIndex_ComboBox_InputValidationMode = 2343,
                        XamlPropertyIndex_ComboBox_ValidationContext = 2345,
                        XamlPropertyIndex_ComboBox_ValidationErrors = 2346,
                        XamlPropertyIndex_XamlUICommand_AccessKey = 2347,
                        XamlPropertyIndex_XamlUICommand_Command = 2348,
                        XamlPropertyIndex_XamlUICommand_Description = 2349,
                        XamlPropertyIndex_XamlUICommand_IconSource = 2350,
                        XamlPropertyIndex_XamlUICommand_KeyboardAccelerators = 2351,
                        XamlPropertyIndex_XamlUICommand_Label = 2352,
                        XamlPropertyIndex_DatePicker_SelectedDate = 2355,
                        XamlPropertyIndex_TimePicker_SelectedTime = 2356,
                        XamlPropertyIndex_AppBarTemplateSettings_NegativeCompactVerticalDelta = 2367,
                        XamlPropertyIndex_AppBarTemplateSettings_NegativeHiddenVerticalDelta = 2368,
                        XamlPropertyIndex_AppBarTemplateSettings_NegativeMinimalVerticalDelta = 2369,
                        XamlPropertyIndex_FlyoutBase_ShouldConstrainToRootBounds = 2378,
                        XamlPropertyIndex_Popup_ShouldConstrainToRootBounds = 2379,
                        XamlPropertyIndex_FlyoutPresenter_IsDefaultShadowEnabled = 2380,
                        XamlPropertyIndex_MenuFlyoutPresenter_IsDefaultShadowEnabled = 2381,
                        XamlPropertyIndex_UIElement_ActualOffset = 2382,
                        XamlPropertyIndex_UIElement_ActualSize = 2383,
                        XamlPropertyIndex_CommandBarTemplateSettings_OverflowContentCompactYTranslation = 2384,
                        XamlPropertyIndex_CommandBarTemplateSettings_OverflowContentHiddenYTranslation = 2385,
                        XamlPropertyIndex_CommandBarTemplateSettings_OverflowContentMinimalYTranslation = 2386,
                        XamlPropertyIndex_UIElement_RasterizationScale = 2394,
                    };
                    
                } /* Direct */
            } /* Core */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#endif // MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Core.Direct.XamlTypeIndex
 *
 * Introduced to Microsoft.UI.Xaml.Core.Direct.XamlDirectContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION >= 0x10000

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Core {
                namespace Direct {
                    /* [v1_enum, contract] */
                    enum XamlTypeIndex : int
                    {
                        XamlTypeIndex_AutoSuggestBoxSuggestionChosenEventArgs = 34,
                        XamlTypeIndex_AutoSuggestBoxTextChangedEventArgs = 35,
                        XamlTypeIndex_CollectionViewSource = 41,
                        XamlTypeIndex_ColumnDefinition = 44,
                        XamlTypeIndex_GradientStop = 64,
                        XamlTypeIndex_InputScope = 74,
                        XamlTypeIndex_InputScopeName = 75,
                        XamlTypeIndex_KeySpline = 78,
                        XamlTypeIndex_PathFigure = 93,
                        XamlTypeIndex_PrintDocument = 100,
                        XamlTypeIndex_RowDefinition = 106,
                        XamlTypeIndex_Style = 114,
                        XamlTypeIndex_VisualState = 137,
                        XamlTypeIndex_VisualStateGroup = 138,
                        XamlTypeIndex_VisualStateManager = 139,
                        XamlTypeIndex_VisualTransition = 140,
                        XamlTypeIndex_AddDeleteThemeTransition = 177,
                        XamlTypeIndex_ArcSegment = 178,
                        XamlTypeIndex_BackEase = 179,
                        XamlTypeIndex_BeginStoryboard = 180,
                        XamlTypeIndex_BezierSegment = 181,
                        XamlTypeIndex_BindingBase = 182,
                        XamlTypeIndex_BitmapCache = 183,
                        XamlTypeIndex_BounceEase = 186,
                        XamlTypeIndex_CircleEase = 187,
                        XamlTypeIndex_ColorAnimation = 188,
                        XamlTypeIndex_ColorAnimationUsingKeyFrames = 189,
                        XamlTypeIndex_ContentThemeTransition = 190,
                        XamlTypeIndex_ControlTemplate = 191,
                        XamlTypeIndex_CubicEase = 192,
                        XamlTypeIndex_DataTemplate = 194,
                        XamlTypeIndex_DiscreteColorKeyFrame = 195,
                        XamlTypeIndex_DiscreteDoubleKeyFrame = 196,
                        XamlTypeIndex_DiscreteObjectKeyFrame = 197,
                        XamlTypeIndex_DiscretePointKeyFrame = 198,
                        XamlTypeIndex_DoubleAnimation = 200,
                        XamlTypeIndex_DoubleAnimationUsingKeyFrames = 201,
                        XamlTypeIndex_EasingColorKeyFrame = 204,
                        XamlTypeIndex_EasingDoubleKeyFrame = 205,
                        XamlTypeIndex_EasingPointKeyFrame = 206,
                        XamlTypeIndex_EdgeUIThemeTransition = 207,
                        XamlTypeIndex_ElasticEase = 208,
                        XamlTypeIndex_EllipseGeometry = 209,
                        XamlTypeIndex_EntranceThemeTransition = 210,
                        XamlTypeIndex_EventTrigger = 211,
                        XamlTypeIndex_ExponentialEase = 212,
                        XamlTypeIndex_Flyout = 213,
                        XamlTypeIndex_GeometryGroup = 216,
                        XamlTypeIndex_ItemsPanelTemplate = 227,
                        XamlTypeIndex_LinearColorKeyFrame = 230,
                        XamlTypeIndex_LinearDoubleKeyFrame = 231,
                        XamlTypeIndex_LinearPointKeyFrame = 232,
                        XamlTypeIndex_LineGeometry = 233,
                        XamlTypeIndex_LineSegment = 234,
                        XamlTypeIndex_Matrix3DProjection = 236,
                        XamlTypeIndex_MenuFlyout = 238,
                        XamlTypeIndex_ObjectAnimationUsingKeyFrames = 240,
                        XamlTypeIndex_PaneThemeTransition = 241,
                        XamlTypeIndex_PathGeometry = 243,
                        XamlTypeIndex_PlaneProjection = 244,
                        XamlTypeIndex_PointAnimation = 245,
                        XamlTypeIndex_PointAnimationUsingKeyFrames = 246,
                        XamlTypeIndex_PolyBezierSegment = 248,
                        XamlTypeIndex_PolyLineSegment = 249,
                        XamlTypeIndex_PolyQuadraticBezierSegment = 250,
                        XamlTypeIndex_PopupThemeTransition = 251,
                        XamlTypeIndex_PowerEase = 252,
                        XamlTypeIndex_QuadraticBezierSegment = 254,
                        XamlTypeIndex_QuadraticEase = 255,
                        XamlTypeIndex_QuarticEase = 256,
                        XamlTypeIndex_QuinticEase = 257,
                        XamlTypeIndex_RectangleGeometry = 258,
                        XamlTypeIndex_RelativeSource = 259,
                        XamlTypeIndex_RenderTargetBitmap = 260,
                        XamlTypeIndex_ReorderThemeTransition = 261,
                        XamlTypeIndex_RepositionThemeTransition = 262,
                        XamlTypeIndex_Setter = 263,
                        XamlTypeIndex_SineEase = 264,
                        XamlTypeIndex_SolidColorBrush = 265,
                        XamlTypeIndex_SplineColorKeyFrame = 266,
                        XamlTypeIndex_SplineDoubleKeyFrame = 267,
                        XamlTypeIndex_SplinePointKeyFrame = 268,
                        XamlTypeIndex_BitmapImage = 285,
                        XamlTypeIndex_Border = 286,
                        XamlTypeIndex_CompositeTransform = 295,
                        XamlTypeIndex_ContentPresenter = 296,
                        XamlTypeIndex_DragItemThemeAnimation = 302,
                        XamlTypeIndex_DragOverThemeAnimation = 303,
                        XamlTypeIndex_DropTargetItemThemeAnimation = 304,
                        XamlTypeIndex_FadeInThemeAnimation = 306,
                        XamlTypeIndex_FadeOutThemeAnimation = 307,
                        XamlTypeIndex_Glyphs = 312,
                        XamlTypeIndex_Image = 326,
                        XamlTypeIndex_ImageBrush = 328,
                        XamlTypeIndex_InlineUIContainer = 329,
                        XamlTypeIndex_ItemsPresenter = 332,
                        XamlTypeIndex_LinearGradientBrush = 334,
                        XamlTypeIndex_LineBreak = 335,
                        XamlTypeIndex_MatrixTransform = 340,
                        XamlTypeIndex_Paragraph = 349,
                        XamlTypeIndex_PointerDownThemeAnimation = 357,
                        XamlTypeIndex_PointerUpThemeAnimation = 359,
                        XamlTypeIndex_PopInThemeAnimation = 361,
                        XamlTypeIndex_PopOutThemeAnimation = 362,
                        XamlTypeIndex_Popup = 363,
                        XamlTypeIndex_RepositionThemeAnimation = 370,
                        XamlTypeIndex_ResourceDictionary = 371,
                        XamlTypeIndex_RichTextBlock = 374,
                        XamlTypeIndex_RichTextBlockOverflow = 376,
                        XamlTypeIndex_RotateTransform = 378,
                        XamlTypeIndex_Run = 380,
                        XamlTypeIndex_ScaleTransform = 381,
                        XamlTypeIndex_SkewTransform = 389,
                        XamlTypeIndex_Span = 390,
                        XamlTypeIndex_SplitCloseThemeAnimation = 391,
                        XamlTypeIndex_SplitOpenThemeAnimation = 392,
                        XamlTypeIndex_Storyboard = 393,
                        XamlTypeIndex_SwipeBackThemeAnimation = 394,
                        XamlTypeIndex_SwipeHintThemeAnimation = 395,
                        XamlTypeIndex_TextBlock = 396,
                        XamlTypeIndex_TransformGroup = 411,
                        XamlTypeIndex_TranslateTransform = 413,
                        XamlTypeIndex_Viewbox = 417,
                        XamlTypeIndex_AppBarSeparator = 427,
                        XamlTypeIndex_BitmapIcon = 429,
                        XamlTypeIndex_Bold = 430,
                        XamlTypeIndex_Canvas = 432,
                        XamlTypeIndex_ContentControl = 435,
                        XamlTypeIndex_DatePicker = 436,
                        XamlTypeIndex_DependencyObjectCollection = 437,
                        XamlTypeIndex_Ellipse = 438,
                        XamlTypeIndex_FontIcon = 440,
                        XamlTypeIndex_Grid = 442,
                        XamlTypeIndex_Hub = 445,
                        XamlTypeIndex_HubSection = 446,
                        XamlTypeIndex_Hyperlink = 447,
                        XamlTypeIndex_Italic = 449,
                        XamlTypeIndex_ItemsControl = 451,
                        XamlTypeIndex_Line = 452,
                        XamlTypeIndex_PasswordBox = 462,
                        XamlTypeIndex_Path = 463,
                        XamlTypeIndex_PathIcon = 464,
                        XamlTypeIndex_Polygon = 465,
                        XamlTypeIndex_Polyline = 466,
                        XamlTypeIndex_ProgressRing = 468,
                        XamlTypeIndex_Rectangle = 470,
                        XamlTypeIndex_RichEditBox = 473,
                        XamlTypeIndex_ScrollContentPresenter = 476,
                        XamlTypeIndex_SemanticZoom = 479,
                        XamlTypeIndex_StackPanel = 481,
                        XamlTypeIndex_SymbolIcon = 482,
                        XamlTypeIndex_TextBox = 483,
                        XamlTypeIndex_Thumb = 485,
                        XamlTypeIndex_TickBar = 486,
                        XamlTypeIndex_TimePicker = 487,
                        XamlTypeIndex_ToggleSwitch = 489,
                        XamlTypeIndex_Underline = 490,
                        XamlTypeIndex_UserControl = 491,
                        XamlTypeIndex_VariableSizedWrapGrid = 492,
                        XamlTypeIndex_AppBar = 495,
                        XamlTypeIndex_AutoSuggestBox = 499,
                        XamlTypeIndex_CarouselPanel = 502,
                        XamlTypeIndex_ContentDialog = 506,
                        XamlTypeIndex_FlyoutPresenter = 508,
                        XamlTypeIndex_Frame = 509,
                        XamlTypeIndex_GridViewItemPresenter = 511,
                        XamlTypeIndex_GroupItem = 512,
                        XamlTypeIndex_ItemsStackPanel = 514,
                        XamlTypeIndex_ItemsWrapGrid = 515,
                        XamlTypeIndex_ListViewItemPresenter = 520,
                        XamlTypeIndex_MenuFlyoutItem = 521,
                        XamlTypeIndex_MenuFlyoutPresenter = 522,
                        XamlTypeIndex_MenuFlyoutSeparator = 523,
                        XamlTypeIndex_Page = 525,
                        XamlTypeIndex_ProgressBar = 528,
                        XamlTypeIndex_ScrollBar = 530,
                        XamlTypeIndex_Slider = 534,
                        XamlTypeIndex_SwapChainBackgroundPanel = 535,
                        XamlTypeIndex_SwapChainPanel = 536,
                        XamlTypeIndex_ToolTip = 538,
                        XamlTypeIndex_Button = 540,
                        XamlTypeIndex_ComboBoxItem = 541,
                        XamlTypeIndex_CommandBar = 542,
                        XamlTypeIndex_FlipViewItem = 543,
                        XamlTypeIndex_GridViewHeaderItem = 545,
                        XamlTypeIndex_HyperlinkButton = 546,
                        XamlTypeIndex_ListBoxItem = 547,
                        XamlTypeIndex_ListViewHeaderItem = 550,
                        XamlTypeIndex_RepeatButton = 551,
                        XamlTypeIndex_ScrollViewer = 552,
                        XamlTypeIndex_ToggleButton = 553,
                        XamlTypeIndex_ToggleMenuFlyoutItem = 554,
                        XamlTypeIndex_VirtualizingStackPanel = 555,
                        XamlTypeIndex_WrapGrid = 556,
                        XamlTypeIndex_AppBarButton = 557,
                        XamlTypeIndex_AppBarToggleButton = 558,
                        XamlTypeIndex_CheckBox = 559,
                        XamlTypeIndex_GridViewItem = 560,
                        XamlTypeIndex_ListViewItem = 561,
                        XamlTypeIndex_RadioButton = 562,
                        XamlTypeIndex_Binding = 564,
                        XamlTypeIndex_ComboBox = 566,
                        XamlTypeIndex_FlipView = 567,
                        XamlTypeIndex_ListBox = 568,
                        XamlTypeIndex_GridView = 570,
                        XamlTypeIndex_ListView = 571,
                        XamlTypeIndex_CalendarView = 707,
                        XamlTypeIndex_CalendarViewDayItem = 709,
                        XamlTypeIndex_CalendarPanel = 723,
                        XamlTypeIndex_SplitView = 728,
                        XamlTypeIndex_CompositeTransform3D = 732,
                        XamlTypeIndex_PerspectiveTransform3D = 733,
                        XamlTypeIndex_RelativePanel = 744,
                        XamlTypeIndex_MenuFlyoutSubItem = 749,
                        XamlTypeIndex_AdaptiveTrigger = 757,
                        XamlTypeIndex_SoftwareBitmapSource = 761,
                        XamlTypeIndex_StateTrigger = 767,
                        XamlTypeIndex_CalendarDatePicker = 774,
                        XamlTypeIndex_AutoSuggestBoxQuerySubmittedEventArgs = 778,
                        XamlTypeIndex_CommandBarOverflowPresenter = 781,
                        XamlTypeIndex_DrillInThemeAnimation = 782,
                        XamlTypeIndex_DrillOutThemeAnimation = 783,
                        XamlTypeIndex_AutomationAnnotation = 789,
                        XamlTypeIndex_AutomationPeerAnnotation = 790,
                        XamlTypeIndex_XamlLight = 855,
                        XamlTypeIndex_SvgImageSource = 860,
                        XamlTypeIndex_KeyboardAccelerator = 897,
                        XamlTypeIndex_BitmapIconSource = 929,
                        XamlTypeIndex_FontIconSource = 930,
                        XamlTypeIndex_PathIconSource = 931,
                        XamlTypeIndex_SymbolIconSource = 933,
                        XamlTypeIndex_IconSourceElement = 939,
                        XamlTypeIndex_AppBarElementContainer = 945,
                        XamlTypeIndex_ColorPaletteResources = 952,
                        XamlTypeIndex_StandardUICommand = 961,
                        XamlTypeIndex_ThemeShadow = 964,
                        XamlTypeIndex_XamlUICommand = 969,
                    };
                    
                } /* Direct */
            } /* Core */
        } /* Xaml */
    } /* UI */
} /* Microsoft */
#endif // MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Core.Direct.IXamlDirect
 *
 * Introduced to Microsoft.UI.Xaml.Core.Direct.XamlDirectContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Core.Direct.XamlDirect
 *
 *
 */
#if MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Core_Direct_IXamlDirect[] = L"Microsoft.UI.Xaml.Core.Direct.IXamlDirect";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Core {
                namespace Direct {
                    /* [object, uuid("44B58E13-87E1-5843-AC21-C51D6321C7FB"), exclusiveto, contract] */
                    MIDL_INTERFACE("44B58E13-87E1-5843-AC21-C51D6321C7FB")
                    IXamlDirect : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetObject(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [retval, out] */IInspectable * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetXamlDirectObject(
                            /* [in] */IInspectable * object,
                            /* [retval, out] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlTypeIndex typeIndex,
                            /* [retval, out] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetObjectProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [in] */IInspectable * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetXamlDirectObjectProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetBooleanProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [in] */::boolean value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetDoubleProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [in] */DOUBLE value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetInt32Property(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [in] */INT32 value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetStringProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [in] */HSTRING value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetDateTimeProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [in] */Windows::Foundation::DateTime value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetPointProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [in] */Windows::Foundation::Point value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetRectProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [in] */Windows::Foundation::Rect value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetSizeProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [in] */Windows::Foundation::Size value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetTimeSpanProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [in] */Windows::Foundation::TimeSpan value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetColorProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [in] */Windows::UI::Color value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetCornerRadiusProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [in] */Microsoft::UI::Xaml::CornerRadius value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetDurationProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [in] */Microsoft::UI::Xaml::Duration value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetGridLengthProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [in] */Microsoft::UI::Xaml::GridLength value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetThicknessProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [in] */Microsoft::UI::Xaml::Thickness value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetMatrixProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [in] */Microsoft::UI::Xaml::Media::Matrix value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetMatrix3DProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [in] */Microsoft::UI::Xaml::Media::Media3D::Matrix3D value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetEnumProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [in] */UINT32 value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetObjectProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [retval, out] */IInspectable * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetXamlDirectObjectProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [retval, out] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetBooleanProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [retval, out] */::boolean * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDoubleProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [retval, out] */DOUBLE * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetInt32Property(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [retval, out] */INT32 * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStringProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [retval, out] */HSTRING * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDateTimeProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [retval, out] */Windows::Foundation::DateTime * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetPointProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [retval, out] */Windows::Foundation::Point * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetRectProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [retval, out] */Windows::Foundation::Rect * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetSizeProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [retval, out] */Windows::Foundation::Size * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetTimeSpanProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [retval, out] */Windows::Foundation::TimeSpan * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetColorProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [retval, out] */Windows::UI::Color * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetCornerRadiusProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [retval, out] */Microsoft::UI::Xaml::CornerRadius * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDurationProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [retval, out] */Microsoft::UI::Xaml::Duration * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetGridLengthProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [retval, out] */Microsoft::UI::Xaml::GridLength * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetThicknessProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [retval, out] */Microsoft::UI::Xaml::Thickness * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetMatrixProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [retval, out] */Microsoft::UI::Xaml::Media::Matrix * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetMatrix3DProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [retval, out] */Microsoft::UI::Xaml::Media::Media3D::Matrix3D * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetEnumProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex,
                            /* [retval, out] */UINT32 * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ClearProperty(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlPropertyIndex propertyIndex
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetCollectionCount(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [retval, out] */UINT32 * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetXamlDirectObjectFromCollectionAt(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */UINT32 index,
                            /* [retval, out] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE AddToCollection(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE InsertIntoCollectionAt(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */UINT32 index,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RemoveFromCollection(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * value,
                            /* [retval, out] */::boolean * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RemoveFromCollectionAt(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */UINT32 index
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ClearCollection(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject
                            ) = 0;
                        /* [overload, default_overload] */virtual HRESULT STDMETHODCALLTYPE AddEventHandler(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlEventIndex eventIndex,
                            /* [in] */IInspectable * handler
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddEventHandler_HandledEventsToo(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlEventIndex eventIndex,
                            /* [in] */IInspectable * handler,
                            /* [in] */::boolean handledEventsToo
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RemoveEventHandler(
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::IXamlDirectObject * xamlDirectObject,
                            /* [in] */Microsoft::UI::Xaml::Core::Direct::XamlEventIndex eventIndex,
                            /* [in] */IInspectable * handler
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXamlDirect=_uuidof(IXamlDirect);
                    
                } /* Direct */
            } /* Core */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Core.Direct.IXamlDirectObject
 *
 * Introduced to Microsoft.UI.Xaml.Core.Direct.XamlDirectContract in version 1.0
 *
 *
 */
#if MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Core_Direct_IXamlDirectObject[] = L"Microsoft.UI.Xaml.Core.Direct.IXamlDirectObject";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Core {
                namespace Direct {
                    /* [object, uuid("F94D4EA9-E795-4425-A8C8-498990FCE9C7"), contract] */
                    MIDL_INTERFACE("F94D4EA9-E795-4425-A8C8-498990FCE9C7")
                    IXamlDirectObject : public IInspectable
                    {
                    public:
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXamlDirectObject=_uuidof(IXamlDirectObject);
                    
                } /* Direct */
            } /* Core */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Core.Direct.IXamlDirectStatics
 *
 * Introduced to Microsoft.UI.Xaml.Core.Direct.XamlDirectContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Core.Direct.XamlDirect
 *
 *
 */
#if MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Core_Direct_IXamlDirectStatics[] = L"Microsoft.UI.Xaml.Core.Direct.IXamlDirectStatics";

namespace Microsoft {
    namespace UI {
        namespace Xaml {
            namespace Core {
                namespace Direct {
                    /* [object, uuid("D43D0831-1CC6-5D08-8D2C-20FC338E8545"), exclusiveto, contract] */
                    MIDL_INTERFACE("D43D0831-1CC6-5D08-8D2C-20FC338E8545")
                    IXamlDirectStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetDefault(
                            /* [retval, out] */Microsoft::UI::Xaml::Core::Direct::IXamlDirect * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXamlDirectStatics=_uuidof(IXamlDirectStatics);
                    
                } /* Direct */
            } /* Core */
        } /* Xaml */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Core.Direct.XamlDirect
 *
 * Introduced to Microsoft.UI.Xaml.Core.Direct.XamlDirectContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Core.Direct.IXamlDirectStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.Core.Direct.XamlDirectContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Core.Direct.IXamlDirect ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Core_Direct_XamlDirect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Core_Direct_XamlDirect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Core_Direct_XamlDirect[] = L"Microsoft.UI.Xaml.Core.Direct.XamlDirect";
#endif
#endif // MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION >= 0x10000






#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect;

#endif // ____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject;

#endif // ____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics;

#endif // ____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics_FWD_DEFINED__


typedef struct __x_Microsoft_CUI_CXaml_CCornerRadius __x_Microsoft_CUI_CXaml_CCornerRadius;


typedef struct __x_Microsoft_CUI_CXaml_CDuration __x_Microsoft_CUI_CXaml_CDuration;


typedef struct __x_Microsoft_CUI_CXaml_CGridLength __x_Microsoft_CUI_CXaml_CGridLength;





typedef struct __x_Microsoft_CUI_CXaml_CMedia_CMatrix __x_Microsoft_CUI_CXaml_CMedia_CMatrix;






typedef struct __x_Microsoft_CUI_CXaml_CMedia_CMedia3D_CMatrix3D __x_Microsoft_CUI_CXaml_CMedia_CMedia3D_CMatrix3D;







typedef struct __x_Microsoft_CUI_CXaml_CThickness __x_Microsoft_CUI_CXaml_CThickness;






typedef enum __x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlEventIndex __x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlEventIndex;


typedef enum __x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex __x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex;


typedef enum __x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlTypeIndex __x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlTypeIndex;












/*
 *
 * Struct Microsoft.UI.Xaml.Core.Direct.XamlEventIndex
 *
 * Introduced to Microsoft.UI.Xaml.Core.Direct.XamlDirectContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlEventIndex
{
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_FrameworkElement_DataContextChanged = 16,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_FrameworkElement_SizeChanged = 17,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_FrameworkElement_LayoutUpdated = 18,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_KeyUp = 22,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_KeyDown = 23,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_GotFocus = 24,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_LostFocus = 25,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_DragStarting = 26,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_DropCompleted = 27,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_CharacterReceived = 28,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_DragEnter = 29,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_DragLeave = 30,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_DragOver = 31,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_Drop = 32,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_PointerPressed = 38,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_PointerMoved = 39,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_PointerReleased = 40,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_PointerEntered = 41,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_PointerExited = 42,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_PointerCaptureLost = 43,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_PointerCanceled = 44,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_PointerWheelChanged = 45,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_Tapped = 46,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_DoubleTapped = 47,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_Holding = 48,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_ContextRequested = 49,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_ContextCanceled = 50,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_RightTapped = 51,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_ManipulationStarting = 52,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_ManipulationInertiaStarting = 53,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_ManipulationStarted = 54,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_ManipulationDelta = 55,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_ManipulationCompleted = 56,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_ProcessKeyboardAccelerators = 60,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_GettingFocus = 61,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_LosingFocus = 62,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_NoFocusCandidateFound = 63,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_PreviewKeyDown = 64,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_PreviewKeyUp = 65,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_UIElement_BringIntoViewRequested = 66,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_AppBar_Opening = 109,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_AppBar_Opened = 110,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_AppBar_Closing = 111,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_AppBar_Closed = 112,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_AutoSuggestBox_SuggestionChosen = 113,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_AutoSuggestBox_TextChanged = 114,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_AutoSuggestBox_QuerySubmitted = 115,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_CalendarDatePicker_CalendarViewDayItemChanging = 116,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_CalendarDatePicker_DateChanged = 117,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_CalendarDatePicker_Opened = 118,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_CalendarDatePicker_Closed = 119,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_CalendarView_CalendarViewDayItemChanging = 120,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_CalendarView_SelectedDatesChanged = 121,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_ComboBox_DropDownClosed = 122,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_ComboBox_DropDownOpened = 123,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_CommandBar_DynamicOverflowItemsChanging = 124,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_ContentDialog_Closing = 126,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_ContentDialog_Closed = 127,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_ContentDialog_Opened = 128,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_ContentDialog_PrimaryButtonClick = 129,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_ContentDialog_SecondaryButtonClick = 130,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_ContentDialog_CloseButtonClick = 131,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_Control_FocusEngaged = 132,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_Control_FocusDisengaged = 133,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_DatePicker_DateChanged = 135,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_Frame_Navigated = 136,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_Frame_Navigating = 137,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_Frame_NavigationFailed = 138,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_Frame_NavigationStopped = 139,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_Hub_SectionHeaderClick = 143,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_Hub_SectionsInViewChanged = 144,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_ItemsPresenter_HorizontalSnapPointsChanged = 148,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_ItemsPresenter_VerticalSnapPointsChanged = 149,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_ListViewBase_ItemClick = 150,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_ListViewBase_DragItemsStarting = 151,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_ListViewBase_DragItemsCompleted = 152,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_ListViewBase_ContainerContentChanging = 153,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_ListViewBase_ChoosingItemContainer = 154,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_ListViewBase_ChoosingGroupHeaderContainer = 155,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_MenuFlyoutItem_Click = 168,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_RichEditBox_TextChanging = 177,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_ScrollViewer_ViewChanging = 192,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_ScrollViewer_ViewChanged = 193,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_ScrollViewer_DirectManipulationStarted = 194,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_ScrollViewer_DirectManipulationCompleted = 195,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_SemanticZoom_ViewChangeStarted = 201,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_SemanticZoom_ViewChangeCompleted = 202,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_StackPanel_HorizontalSnapPointsChanged = 208,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_StackPanel_VerticalSnapPointsChanged = 209,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_TimePicker_TimeChanged = 227,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_ToggleSwitch_Toggled = 228,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_ToolTip_Closed = 229,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_ToolTip_Opened = 230,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_VirtualizingStackPanel_CleanUpVirtualizedItemEvent = 231,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_ButtonBase_Click = 256,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_CarouselPanel_HorizontalSnapPointsChanged = 257,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_CarouselPanel_VerticalSnapPointsChanged = 258,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_OrientedVirtualizingPanel_HorizontalSnapPointsChanged = 263,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_OrientedVirtualizingPanel_VerticalSnapPointsChanged = 264,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_RangeBase_ValueChanged = 267,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_ScrollBar_Scroll = 268,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_Selector_SelectionChanged = 269,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_Thumb_DragStarted = 270,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_Thumb_DragDelta = 271,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_Thumb_DragCompleted = 272,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_ToggleButton_Checked = 273,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_ToggleButton_Unchecked = 274,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_ToggleButton_Indeterminate = 275,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_ScrollViewer_AnchorRequested = 291,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_AutoSuggestBox_HasValidationErrorsChanged = 306,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_ComboBox_HasValidationErrorsChanged = 308,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_PasswordBox_HasValidationErrorsChanged = 309,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_TextBox_HasValidationErrorsChanged = 311,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_DatePicker_SelectedDateChanged = 322,
    Microsoft_UI_Xaml_Core_Direct_XamlEventIndex_TimePicker_SelectedTimeChanged = 323,
};
#endif // MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Core.Direct.XamlPropertyIndex
 *
 * Introduced to Microsoft.UI.Xaml.Core.Direct.XamlDirectContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex
{
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationProperties_AcceleratorKey = 5,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationProperties_AccessibilityView = 6,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationProperties_AccessKey = 7,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationProperties_AutomationId = 8,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationProperties_ControlledPeers = 9,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationProperties_HelpText = 10,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationProperties_IsRequiredForForm = 11,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationProperties_ItemStatus = 12,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationProperties_ItemType = 13,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationProperties_LabeledBy = 14,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationProperties_LiveSetting = 15,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationProperties_Name = 16,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToolTipService_Placement = 24,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToolTipService_PlacementTarget = 25,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToolTipService_ToolTip = 26,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_AnnotationAlternates = 28,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_Capitals = 29,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_CapitalSpacing = 30,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_CaseSensitiveForms = 31,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_ContextualAlternates = 32,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_ContextualLigatures = 33,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_ContextualSwashes = 34,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_DiscretionaryLigatures = 35,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_EastAsianExpertForms = 36,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_EastAsianLanguage = 37,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_EastAsianWidths = 38,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_Fraction = 39,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_HistoricalForms = 40,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_HistoricalLigatures = 41,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_Kerning = 42,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_MathematicalGreek = 43,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_NumeralAlignment = 44,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_NumeralStyle = 45,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_SlashedZero = 46,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_StandardLigatures = 47,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_StandardSwashes = 48,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_StylisticAlternates = 49,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_StylisticSet1 = 50,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_StylisticSet10 = 51,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_StylisticSet11 = 52,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_StylisticSet12 = 53,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_StylisticSet13 = 54,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_StylisticSet14 = 55,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_StylisticSet15 = 56,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_StylisticSet16 = 57,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_StylisticSet17 = 58,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_StylisticSet18 = 59,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_StylisticSet19 = 60,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_StylisticSet2 = 61,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_StylisticSet20 = 62,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_StylisticSet3 = 63,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_StylisticSet4 = 64,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_StylisticSet5 = 65,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_StylisticSet6 = 66,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_StylisticSet7 = 67,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_StylisticSet8 = 68,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_StylisticSet9 = 69,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Typography_Variants = 70,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationPeer_EventsSource = 75,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutoSuggestBoxSuggestionChosenEventArgs_SelectedItem = 76,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutoSuggestBoxTextChangedEventArgs_Reason = 77,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Brush_Opacity = 78,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Brush_RelativeTransform = 79,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Brush_Transform = 80,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CollectionViewSource_IsSourceGrouped = 81,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CollectionViewSource_ItemsPath = 82,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CollectionViewSource_Source = 83,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CollectionViewSource_View = 84,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorKeyFrame_KeyTime = 90,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorKeyFrame_Value = 91,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColumnDefinition_ActualWidth = 92,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColumnDefinition_MaxWidth = 93,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColumnDefinition_MinWidth = 94,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColumnDefinition_Width = 95,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ComboBoxTemplateSettings_DropDownClosedHeight = 96,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ComboBoxTemplateSettings_DropDownOffset = 97,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ComboBoxTemplateSettings_DropDownOpenedHeight = 98,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ComboBoxTemplateSettings_SelectedItemDirection = 99,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DoubleKeyFrame_KeyTime = 107,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DoubleKeyFrame_Value = 108,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_EasingFunctionBase_EasingMode = 111,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FlyoutBase_AttachedFlyout = 114,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FlyoutBase_Placement = 115,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Geometry_Bounds = 118,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Geometry_Transform = 119,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GradientStop_Color = 120,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GradientStop_Offset = 121,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GroupStyle_ContainerStyle = 124,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GroupStyle_ContainerStyleSelector = 125,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GroupStyle_HeaderContainerStyle = 126,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GroupStyle_HeaderTemplate = 127,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GroupStyle_HeaderTemplateSelector = 128,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GroupStyle_HidesIfEmpty = 129,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GroupStyle_Panel = 130,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_InertiaExpansionBehavior_DesiredDeceleration = 144,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_InertiaExpansionBehavior_DesiredExpansion = 145,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_InertiaRotationBehavior_DesiredDeceleration = 146,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_InertiaRotationBehavior_DesiredRotation = 147,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_InertiaTranslationBehavior_DesiredDeceleration = 148,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_InertiaTranslationBehavior_DesiredDisplacement = 149,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_InputScope_Names = 150,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_InputScopeName_NameValue = 151,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_KeySpline_ControlPoint1 = 153,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_KeySpline_ControlPoint2 = 154,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ManipulationPivot_Center = 159,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ManipulationPivot_Radius = 160,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ObjectKeyFrame_KeyTime = 183,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ObjectKeyFrame_Value = 184,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PageStackEntry_SourcePageType = 185,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PathFigure_IsClosed = 192,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PathFigure_IsFilled = 193,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PathFigure_Segments = 194,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PathFigure_StartPoint = 195,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Pointer_IsInContact = 199,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Pointer_IsInRange = 200,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Pointer_PointerDeviceType = 201,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Pointer_PointerId = 202,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PointKeyFrame_KeyTime = 205,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PointKeyFrame_Value = 206,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PrintDocument_DocumentSource = 209,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ProgressBarTemplateSettings_ContainerAnimationEndPosition = 211,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ProgressBarTemplateSettings_ContainerAnimationStartPosition = 212,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ProgressBarTemplateSettings_EllipseAnimationEndPosition = 213,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ProgressBarTemplateSettings_EllipseAnimationWellPosition = 214,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ProgressBarTemplateSettings_EllipseDiameter = 215,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ProgressBarTemplateSettings_EllipseOffset = 216,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ProgressBarTemplateSettings_IndicatorLengthDelta = 217,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ProgressRingTemplateSettings_EllipseDiameter = 218,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ProgressRingTemplateSettings_EllipseOffset = 219,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ProgressRingTemplateSettings_MaxSideLength = 220,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PropertyPath_Path = 221,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RowDefinition_ActualHeight = 226,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RowDefinition_Height = 227,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RowDefinition_MaxHeight = 228,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RowDefinition_MinHeight = 229,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SetterBase_IsSealed = 233,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Style_BasedOn = 244,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Style_IsSealed = 245,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Style_Setters = 246,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Style_TargetType = 247,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextElement_CharacterSpacing = 249,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextElement_FontFamily = 250,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextElement_FontSize = 251,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextElement_FontStretch = 252,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextElement_FontStyle = 253,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextElement_FontWeight = 254,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextElement_Foreground = 255,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextElement_IsTextScaleFactorEnabled = 256,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextElement_Language = 257,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Timeline_AutoReverse = 263,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Timeline_BeginTime = 264,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Timeline_Duration = 265,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Timeline_FillBehavior = 266,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Timeline_RepeatBehavior = 267,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Timeline_SpeedRatio = 268,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToggleSwitchTemplateSettings_CurtainCurrentToOffOffset = 273,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToggleSwitchTemplateSettings_CurtainCurrentToOnOffset = 274,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToggleSwitchTemplateSettings_CurtainOffToOnOffset = 275,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToggleSwitchTemplateSettings_CurtainOnToOffOffset = 276,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToggleSwitchTemplateSettings_KnobCurrentToOffOffset = 277,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToggleSwitchTemplateSettings_KnobCurrentToOnOffset = 278,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToggleSwitchTemplateSettings_KnobOffToOnOffset = 279,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToggleSwitchTemplateSettings_KnobOnToOffOffset = 280,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToolTipTemplateSettings_FromHorizontalOffset = 281,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToolTipTemplateSettings_FromVerticalOffset = 282,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_AllowDrop = 292,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_CacheMode = 293,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_Clip = 295,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_CompositeMode = 296,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_IsDoubleTapEnabled = 297,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_IsHitTestVisible = 298,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_IsHoldingEnabled = 299,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_IsRightTapEnabled = 300,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_IsTapEnabled = 301,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_ManipulationMode = 302,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_Opacity = 303,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_PointerCaptures = 304,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_Projection = 305,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_RenderSize = 306,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_RenderTransform = 307,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_RenderTransformOrigin = 308,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_Transitions = 309,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_UseLayoutRounding = 311,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_Visibility = 312,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_VisualState_Storyboard = 322,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_VisualStateGroup_States = 323,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_VisualStateGroup_Transitions = 324,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_VisualStateManager_CustomVisualStateManager = 325,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_VisualStateManager_VisualStateGroups = 326,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_VisualTransition_From = 327,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_VisualTransition_GeneratedDuration = 328,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_VisualTransition_GeneratedEasingFunction = 329,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_VisualTransition_Storyboard = 330,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_VisualTransition_To = 331,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ArcSegment_IsLargeArc = 332,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ArcSegment_Point = 333,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ArcSegment_RotationAngle = 334,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ArcSegment_Size = 335,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ArcSegment_SweepDirection = 336,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_BackEase_Amplitude = 337,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_BeginStoryboard_Storyboard = 338,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_BezierSegment_Point1 = 339,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_BezierSegment_Point2 = 340,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_BezierSegment_Point3 = 341,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_BitmapSource_PixelHeight = 342,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_BitmapSource_PixelWidth = 343,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Block_LineHeight = 344,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Block_LineStackingStrategy = 345,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Block_Margin = 346,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Block_TextAlignment = 347,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_BounceEase_Bounces = 348,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_BounceEase_Bounciness = 349,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorAnimation_By = 350,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorAnimation_EasingFunction = 351,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorAnimation_EnableDependentAnimation = 352,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorAnimation_From = 353,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorAnimation_To = 354,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorAnimationUsingKeyFrames_EnableDependentAnimation = 355,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorAnimationUsingKeyFrames_KeyFrames = 356,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentThemeTransition_HorizontalOffset = 357,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentThemeTransition_VerticalOffset = 358,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ControlTemplate_TargetType = 359,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DispatcherTimer_Interval = 362,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DoubleAnimation_By = 363,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DoubleAnimation_EasingFunction = 364,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DoubleAnimation_EnableDependentAnimation = 365,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DoubleAnimation_From = 366,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DoubleAnimation_To = 367,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DoubleAnimationUsingKeyFrames_EnableDependentAnimation = 368,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DoubleAnimationUsingKeyFrames_KeyFrames = 369,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_EasingColorKeyFrame_EasingFunction = 372,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_EasingDoubleKeyFrame_EasingFunction = 373,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_EasingPointKeyFrame_EasingFunction = 374,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_EdgeUIThemeTransition_Edge = 375,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ElasticEase_Oscillations = 376,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ElasticEase_Springiness = 377,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_EllipseGeometry_Center = 378,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_EllipseGeometry_RadiusX = 379,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_EllipseGeometry_RadiusY = 380,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_EntranceThemeTransition_FromHorizontalOffset = 381,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_EntranceThemeTransition_FromVerticalOffset = 382,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_EntranceThemeTransition_IsStaggeringEnabled = 383,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_EventTrigger_Actions = 384,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_EventTrigger_RoutedEvent = 385,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ExponentialEase_Exponent = 386,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Flyout_Content = 387,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Flyout_FlyoutPresenterStyle = 388,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FrameworkElement_ActualHeight = 389,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FrameworkElement_ActualWidth = 390,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FrameworkElement_DataContext = 391,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FrameworkElement_FlowDirection = 392,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FrameworkElement_Height = 393,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FrameworkElement_HorizontalAlignment = 394,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FrameworkElement_Language = 396,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FrameworkElement_Margin = 397,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FrameworkElement_MaxHeight = 398,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FrameworkElement_MaxWidth = 399,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FrameworkElement_MinHeight = 400,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FrameworkElement_MinWidth = 401,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FrameworkElement_Parent = 402,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FrameworkElement_RequestedTheme = 403,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FrameworkElement_Resources = 404,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FrameworkElement_Style = 405,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FrameworkElement_Tag = 406,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FrameworkElement_Triggers = 407,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FrameworkElement_VerticalAlignment = 408,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FrameworkElement_Width = 409,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FrameworkElementAutomationPeer_Owner = 410,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GeometryGroup_Children = 411,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GeometryGroup_FillRule = 412,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GradientBrush_ColorInterpolationMode = 413,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GradientBrush_GradientStops = 414,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GradientBrush_MappingMode = 415,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GradientBrush_SpreadMethod = 416,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GridViewItemTemplateSettings_DragItemsCount = 417,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemAutomationPeer_Item = 419,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemAutomationPeer_ItemsControlAutomationPeer = 420,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_LineGeometry_EndPoint = 422,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_LineGeometry_StartPoint = 423,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_LineSegment_Point = 424,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemTemplateSettings_DragItemsCount = 425,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Matrix3DProjection_ProjectionMatrix = 426,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_MenuFlyout_Items = 427,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_MenuFlyout_MenuFlyoutPresenterStyle = 428,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ObjectAnimationUsingKeyFrames_EnableDependentAnimation = 429,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ObjectAnimationUsingKeyFrames_KeyFrames = 430,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PaneThemeTransition_Edge = 431,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PathGeometry_Figures = 432,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PathGeometry_FillRule = 433,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PlaneProjection_CenterOfRotationX = 434,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PlaneProjection_CenterOfRotationY = 435,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PlaneProjection_CenterOfRotationZ = 436,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PlaneProjection_GlobalOffsetX = 437,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PlaneProjection_GlobalOffsetY = 438,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PlaneProjection_GlobalOffsetZ = 439,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PlaneProjection_LocalOffsetX = 440,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PlaneProjection_LocalOffsetY = 441,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PlaneProjection_LocalOffsetZ = 442,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PlaneProjection_ProjectionMatrix = 443,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PlaneProjection_RotationX = 444,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PlaneProjection_RotationY = 445,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PlaneProjection_RotationZ = 446,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PointAnimation_By = 447,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PointAnimation_EasingFunction = 448,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PointAnimation_EnableDependentAnimation = 449,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PointAnimation_From = 450,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PointAnimation_To = 451,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PointAnimationUsingKeyFrames_EnableDependentAnimation = 452,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PointAnimationUsingKeyFrames_KeyFrames = 453,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PolyBezierSegment_Points = 456,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PolyLineSegment_Points = 457,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PolyQuadraticBezierSegment_Points = 458,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PopupThemeTransition_FromHorizontalOffset = 459,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PopupThemeTransition_FromVerticalOffset = 460,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PowerEase_Power = 461,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_QuadraticBezierSegment_Point1 = 466,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_QuadraticBezierSegment_Point2 = 467,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RectangleGeometry_Rect = 470,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RelativeSource_Mode = 471,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RenderTargetBitmap_PixelHeight = 472,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RenderTargetBitmap_PixelWidth = 473,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Setter_Property = 474,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Setter_Value = 475,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SolidColorBrush_Color = 476,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplineColorKeyFrame_KeySpline = 477,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplineDoubleKeyFrame_KeySpline = 478,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplinePointKeyFrame_KeySpline = 479,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TileBrush_AlignmentX = 483,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TileBrush_AlignmentY = 484,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TileBrush_Stretch = 485,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Binding_Converter = 487,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Binding_ConverterLanguage = 488,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Binding_ConverterParameter = 489,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Binding_ElementName = 490,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Binding_FallbackValue = 491,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Binding_Mode = 492,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Binding_Path = 493,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Binding_RelativeSource = 494,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Binding_Source = 495,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Binding_TargetNullValue = 496,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Binding_UpdateSourceTrigger = 497,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_BitmapImage_CreateOptions = 498,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_BitmapImage_DecodePixelHeight = 499,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_BitmapImage_DecodePixelType = 500,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_BitmapImage_DecodePixelWidth = 501,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_BitmapImage_UriSource = 502,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Border_Background = 503,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Border_BorderBrush = 504,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Border_BorderThickness = 505,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Border_Child = 506,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Border_ChildTransitions = 507,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Border_CornerRadius = 508,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Border_Padding = 509,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CompositeTransform_CenterX = 514,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CompositeTransform_CenterY = 515,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CompositeTransform_Rotation = 516,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CompositeTransform_ScaleX = 517,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CompositeTransform_ScaleY = 518,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CompositeTransform_SkewX = 519,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CompositeTransform_SkewY = 520,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CompositeTransform_TranslateX = 521,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CompositeTransform_TranslateY = 522,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentPresenter_CharacterSpacing = 523,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentPresenter_Content = 524,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentPresenter_ContentTemplate = 525,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentPresenter_ContentTemplateSelector = 526,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentPresenter_ContentTransitions = 527,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentPresenter_FontFamily = 528,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentPresenter_FontSize = 529,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentPresenter_FontStretch = 530,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentPresenter_FontStyle = 531,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentPresenter_FontWeight = 532,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentPresenter_Foreground = 533,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentPresenter_IsTextScaleFactorEnabled = 534,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentPresenter_LineStackingStrategy = 535,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentPresenter_MaxLines = 536,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentPresenter_OpticalMarginAlignment = 537,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentPresenter_TextLineBounds = 539,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentPresenter_TextWrapping = 540,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Control_Background = 541,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Control_BorderBrush = 542,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Control_BorderThickness = 543,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Control_CharacterSpacing = 544,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Control_FontFamily = 547,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Control_FontSize = 548,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Control_FontStretch = 549,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Control_FontStyle = 550,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Control_FontWeight = 551,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Control_Foreground = 552,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Control_HorizontalContentAlignment = 553,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Control_IsEnabled = 554,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Control_IsTextScaleFactorEnabled = 556,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Control_Padding = 557,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Control_TabNavigation = 559,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Control_Template = 560,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Control_VerticalContentAlignment = 561,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DragItemThemeAnimation_TargetName = 565,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DragOverThemeAnimation_Direction = 566,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DragOverThemeAnimation_TargetName = 567,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DragOverThemeAnimation_ToOffset = 568,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DropTargetItemThemeAnimation_TargetName = 569,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FadeInThemeAnimation_TargetName = 570,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FadeOutThemeAnimation_TargetName = 571,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Glyphs_Fill = 574,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Glyphs_FontRenderingEmSize = 575,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Glyphs_FontUri = 576,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Glyphs_Indices = 577,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Glyphs_OriginX = 578,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Glyphs_OriginY = 579,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Glyphs_StyleSimulations = 580,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Glyphs_UnicodeString = 581,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_IconElement_Foreground = 584,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Image_NineGrid = 586,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Image_Source = 588,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Image_Stretch = 589,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ImageBrush_ImageSource = 591,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_InlineUIContainer_Child = 592,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsPresenter_Footer = 594,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsPresenter_FooterTemplate = 595,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsPresenter_FooterTransitions = 596,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsPresenter_Header = 597,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsPresenter_HeaderTemplate = 598,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsPresenter_HeaderTransitions = 599,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsPresenter_Padding = 601,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_LinearGradientBrush_EndPoint = 602,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_LinearGradientBrush_StartPoint = 603,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_MatrixTransform_Matrix = 604,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Panel_Background = 647,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Panel_Children = 648,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Panel_ChildrenTransitions = 649,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Panel_IsItemsHost = 651,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Paragraph_Inlines = 652,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Paragraph_TextIndent = 653,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PointerDownThemeAnimation_TargetName = 660,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PointerUpThemeAnimation_TargetName = 662,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PopInThemeAnimation_FromHorizontalOffset = 664,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PopInThemeAnimation_FromVerticalOffset = 665,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PopInThemeAnimation_TargetName = 666,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PopOutThemeAnimation_TargetName = 667,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Popup_Child = 668,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Popup_ChildTransitions = 669,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Popup_HorizontalOffset = 670,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Popup_IsLightDismissEnabled = 673,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Popup_IsOpen = 674,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Popup_VerticalOffset = 676,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RepositionThemeAnimation_FromHorizontalOffset = 683,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RepositionThemeAnimation_FromVerticalOffset = 684,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RepositionThemeAnimation_TargetName = 685,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ResourceDictionary_MergedDictionaries = 687,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ResourceDictionary_Source = 688,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ResourceDictionary_ThemeDictionaries = 689,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_Blocks = 691,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_CharacterSpacing = 692,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_FontFamily = 693,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_FontSize = 694,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_FontStretch = 695,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_FontStyle = 696,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_FontWeight = 697,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_Foreground = 698,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_HasOverflowContent = 699,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_IsColorFontEnabled = 700,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_IsTextScaleFactorEnabled = 701,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_IsTextSelectionEnabled = 702,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_LineHeight = 703,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_LineStackingStrategy = 704,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_MaxLines = 705,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_OpticalMarginAlignment = 706,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_OverflowContentTarget = 707,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_Padding = 708,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_SelectedText = 709,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_SelectionHighlightColor = 710,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_TextAlignment = 711,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_TextIndent = 712,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_TextLineBounds = 713,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_TextReadingOrder = 714,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_TextTrimming = 715,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_TextWrapping = 716,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlockOverflow_HasOverflowContent = 717,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlockOverflow_MaxLines = 718,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlockOverflow_OverflowContentTarget = 719,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlockOverflow_Padding = 720,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RotateTransform_Angle = 721,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RotateTransform_CenterX = 722,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RotateTransform_CenterY = 723,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Run_FlowDirection = 725,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Run_Text = 726,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScaleTransform_CenterX = 727,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScaleTransform_CenterY = 728,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScaleTransform_ScaleX = 729,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScaleTransform_ScaleY = 730,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SetterBaseCollection_IsSealed = 732,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Shape_Fill = 733,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Shape_GeometryTransform = 734,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Shape_Stretch = 735,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Shape_Stroke = 736,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Shape_StrokeDashArray = 737,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Shape_StrokeDashCap = 738,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Shape_StrokeDashOffset = 739,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Shape_StrokeEndLineCap = 740,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Shape_StrokeLineJoin = 741,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Shape_StrokeMiterLimit = 742,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Shape_StrokeStartLineCap = 743,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Shape_StrokeThickness = 744,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SkewTransform_AngleX = 745,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SkewTransform_AngleY = 746,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SkewTransform_CenterX = 747,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SkewTransform_CenterY = 748,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Span_Inlines = 749,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitCloseThemeAnimation_ClosedLength = 750,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitCloseThemeAnimation_ClosedTarget = 751,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitCloseThemeAnimation_ClosedTargetName = 752,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitCloseThemeAnimation_ContentTarget = 753,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitCloseThemeAnimation_ContentTargetName = 754,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitCloseThemeAnimation_ContentTranslationDirection = 755,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitCloseThemeAnimation_ContentTranslationOffset = 756,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitCloseThemeAnimation_OffsetFromCenter = 757,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitCloseThemeAnimation_OpenedLength = 758,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitCloseThemeAnimation_OpenedTarget = 759,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitCloseThemeAnimation_OpenedTargetName = 760,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitOpenThemeAnimation_ClosedLength = 761,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitOpenThemeAnimation_ClosedTarget = 762,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitOpenThemeAnimation_ClosedTargetName = 763,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitOpenThemeAnimation_ContentTarget = 764,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitOpenThemeAnimation_ContentTargetName = 765,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitOpenThemeAnimation_ContentTranslationDirection = 766,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitOpenThemeAnimation_ContentTranslationOffset = 767,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitOpenThemeAnimation_OffsetFromCenter = 768,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitOpenThemeAnimation_OpenedLength = 769,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitOpenThemeAnimation_OpenedTarget = 770,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitOpenThemeAnimation_OpenedTargetName = 771,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Storyboard_Children = 772,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Storyboard_TargetName = 774,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Storyboard_TargetProperty = 775,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SwipeBackThemeAnimation_FromHorizontalOffset = 776,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SwipeBackThemeAnimation_FromVerticalOffset = 777,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SwipeBackThemeAnimation_TargetName = 778,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SwipeHintThemeAnimation_TargetName = 779,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SwipeHintThemeAnimation_ToHorizontalOffset = 780,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SwipeHintThemeAnimation_ToVerticalOffset = 781,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBlock_CharacterSpacing = 782,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBlock_FontFamily = 783,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBlock_FontSize = 784,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBlock_FontStretch = 785,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBlock_FontStyle = 786,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBlock_FontWeight = 787,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBlock_Foreground = 788,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBlock_Inlines = 789,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBlock_IsColorFontEnabled = 790,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBlock_IsTextScaleFactorEnabled = 791,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBlock_IsTextSelectionEnabled = 792,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBlock_LineHeight = 793,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBlock_LineStackingStrategy = 794,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBlock_MaxLines = 795,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBlock_OpticalMarginAlignment = 796,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBlock_Padding = 797,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBlock_SelectedText = 798,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBlock_SelectionHighlightColor = 799,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBlock_Text = 800,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBlock_TextAlignment = 801,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBlock_TextDecorations = 802,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBlock_TextLineBounds = 803,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBlock_TextReadingOrder = 804,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBlock_TextTrimming = 805,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBlock_TextWrapping = 806,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TransformGroup_Children = 811,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TransformGroup_Value = 812,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TranslateTransform_X = 814,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TranslateTransform_Y = 815,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Viewbox_Child = 819,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Viewbox_Stretch = 820,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Viewbox_StretchDirection = 821,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarSeparator_IsCompact = 826,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_BitmapIcon_UriSource = 827,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Canvas_Left = 828,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Canvas_Top = 829,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Canvas_ZIndex = 830,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentControl_Content = 832,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentControl_ContentTemplate = 833,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentControl_ContentTemplateSelector = 834,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentControl_ContentTransitions = 835,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DatePicker_CalendarIdentifier = 837,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DatePicker_Date = 838,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DatePicker_DayFormat = 839,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DatePicker_DayVisible = 840,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DatePicker_Header = 841,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DatePicker_HeaderTemplate = 842,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DatePicker_MaxYear = 843,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DatePicker_MinYear = 844,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DatePicker_MonthFormat = 845,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DatePicker_MonthVisible = 846,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DatePicker_Orientation = 847,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DatePicker_YearFormat = 848,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DatePicker_YearVisible = 849,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FontIcon_FontFamily = 851,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FontIcon_FontSize = 852,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FontIcon_FontStyle = 853,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FontIcon_FontWeight = 854,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FontIcon_Glyph = 855,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FontIcon_IsTextScaleFactorEnabled = 856,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Grid_Column = 857,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Grid_ColumnDefinitions = 858,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Grid_ColumnSpan = 859,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Grid_Row = 860,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Grid_RowDefinitions = 861,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Grid_RowSpan = 862,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Hub_DefaultSectionIndex = 863,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Hub_Header = 864,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Hub_HeaderTemplate = 865,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Hub_IsActiveView = 866,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Hub_IsZoomedInView = 867,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Hub_Orientation = 868,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Hub_SectionHeaders = 869,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Hub_Sections = 870,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Hub_SectionsInView = 871,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Hub_SemanticZoomOwner = 872,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_HubSection_ContentTemplate = 873,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_HubSection_Header = 874,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_HubSection_HeaderTemplate = 875,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_HubSection_IsHeaderInteractive = 876,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Hyperlink_NavigateUri = 877,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsControl_DisplayMemberPath = 879,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsControl_GroupStyle = 880,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsControl_GroupStyleSelector = 881,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsControl_IsGrouping = 882,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsControl_ItemContainerStyle = 884,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsControl_ItemContainerStyleSelector = 885,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsControl_ItemContainerTransitions = 886,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsControl_Items = 887,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsControl_ItemsPanel = 889,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsControl_ItemsSource = 890,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsControl_ItemTemplate = 891,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsControl_ItemTemplateSelector = 892,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Line_X1 = 893,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Line_X2 = 894,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Line_Y1 = 895,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Line_Y2 = 896,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PasswordBox_Header = 913,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PasswordBox_HeaderTemplate = 914,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PasswordBox_IsPasswordRevealButtonEnabled = 915,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PasswordBox_MaxLength = 916,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PasswordBox_Password = 917,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PasswordBox_PasswordChar = 918,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PasswordBox_PlaceholderText = 919,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PasswordBox_PreventKeyboardDisplayOnProgrammaticFocus = 920,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PasswordBox_SelectionHighlightColor = 921,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Path_Data = 922,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PathIcon_Data = 923,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Polygon_FillRule = 924,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Polygon_Points = 925,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Polyline_FillRule = 926,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Polyline_Points = 927,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ProgressRing_IsActive = 928,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ProgressRing_TemplateSettings = 929,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RangeBase_LargeChange = 930,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RangeBase_Maximum = 931,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RangeBase_Minimum = 932,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RangeBase_SmallChange = 933,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RangeBase_Value = 934,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Rectangle_RadiusX = 935,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Rectangle_RadiusY = 936,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichEditBox_AcceptsReturn = 937,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichEditBox_Header = 938,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichEditBox_HeaderTemplate = 939,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichEditBox_InputScope = 940,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichEditBox_IsColorFontEnabled = 941,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichEditBox_IsReadOnly = 942,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichEditBox_IsSpellCheckEnabled = 943,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichEditBox_IsTextPredictionEnabled = 944,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichEditBox_PlaceholderText = 945,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichEditBox_PreventKeyboardDisplayOnProgrammaticFocus = 946,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichEditBox_SelectionHighlightColor = 947,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichEditBox_TextAlignment = 948,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichEditBox_TextWrapping = 949,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SemanticZoom_CanChangeViews = 956,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SemanticZoom_IsZoomedInViewActive = 957,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SemanticZoom_IsZoomOutButtonEnabled = 958,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SemanticZoom_ZoomedInView = 959,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SemanticZoom_ZoomedOutView = 960,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_StackPanel_AreScrollSnapPointsRegular = 961,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_StackPanel_Orientation = 962,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SymbolIcon_Symbol = 963,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_AcceptsReturn = 964,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_Header = 965,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_HeaderTemplate = 966,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_InputScope = 967,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_IsColorFontEnabled = 968,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_IsReadOnly = 971,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_IsSpellCheckEnabled = 972,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_IsTextPredictionEnabled = 973,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_MaxLength = 974,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_PlaceholderText = 975,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_PreventKeyboardDisplayOnProgrammaticFocus = 976,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_SelectedText = 977,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_SelectionHighlightColor = 978,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_SelectionLength = 979,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_SelectionStart = 980,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_Text = 981,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_TextAlignment = 982,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_TextWrapping = 983,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Thumb_IsDragging = 984,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TickBar_Fill = 985,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TimePicker_ClockIdentifier = 986,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TimePicker_Header = 987,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TimePicker_HeaderTemplate = 988,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TimePicker_MinuteIncrement = 989,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TimePicker_Time = 990,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToggleSwitch_Header = 991,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToggleSwitch_HeaderTemplate = 992,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToggleSwitch_IsOn = 993,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToggleSwitch_OffContent = 994,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToggleSwitch_OffContentTemplate = 995,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToggleSwitch_OnContent = 996,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToggleSwitch_OnContentTemplate = 997,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToggleSwitch_TemplateSettings = 998,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UserControl_Content = 999,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_VariableSizedWrapGrid_ColumnSpan = 1000,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_VariableSizedWrapGrid_HorizontalChildrenAlignment = 1001,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_VariableSizedWrapGrid_ItemHeight = 1002,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_VariableSizedWrapGrid_ItemWidth = 1003,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_VariableSizedWrapGrid_MaximumRowsOrColumns = 1004,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_VariableSizedWrapGrid_Orientation = 1005,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_VariableSizedWrapGrid_RowSpan = 1006,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_VariableSizedWrapGrid_VerticalChildrenAlignment = 1007,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBar_ClosedDisplayMode = 1016,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBar_IsOpen = 1017,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBar_IsSticky = 1018,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutoSuggestBox_AutoMaximizeSuggestionArea = 1019,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutoSuggestBox_Header = 1020,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutoSuggestBox_IsSuggestionListOpen = 1021,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutoSuggestBox_MaxSuggestionListHeight = 1022,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutoSuggestBox_PlaceholderText = 1023,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutoSuggestBox_Text = 1024,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutoSuggestBox_TextBoxStyle = 1025,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutoSuggestBox_TextMemberPath = 1026,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutoSuggestBox_UpdateTextOnSelect = 1027,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ButtonBase_ClickMode = 1029,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ButtonBase_Command = 1030,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ButtonBase_CommandParameter = 1031,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ButtonBase_IsPointerOver = 1032,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ButtonBase_IsPressed = 1033,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentDialog_FullSizeDesired = 1034,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentDialog_IsPrimaryButtonEnabled = 1035,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentDialog_IsSecondaryButtonEnabled = 1036,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentDialog_PrimaryButtonCommand = 1037,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentDialog_PrimaryButtonCommandParameter = 1038,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentDialog_PrimaryButtonText = 1039,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentDialog_SecondaryButtonCommand = 1040,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentDialog_SecondaryButtonCommandParameter = 1041,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentDialog_SecondaryButtonText = 1042,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentDialog_Title = 1043,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentDialog_TitleTemplate = 1044,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Frame_BackStack = 1045,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Frame_BackStackDepth = 1046,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Frame_CacheSize = 1047,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Frame_CanGoBack = 1048,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Frame_CanGoForward = 1049,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Frame_CurrentSourcePageType = 1050,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Frame_ForwardStack = 1051,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Frame_SourcePageType = 1052,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GridViewItemPresenter_CheckBrush = 1053,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GridViewItemPresenter_CheckHintBrush = 1054,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GridViewItemPresenter_CheckSelectingBrush = 1055,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GridViewItemPresenter_ContentMargin = 1056,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GridViewItemPresenter_DisabledOpacity = 1057,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GridViewItemPresenter_DragBackground = 1058,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GridViewItemPresenter_DragForeground = 1059,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GridViewItemPresenter_DragOpacity = 1060,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GridViewItemPresenter_FocusBorderBrush = 1061,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GridViewItemPresenter_GridViewItemPresenterHorizontalContentAlignment = 1062,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GridViewItemPresenter_GridViewItemPresenterPadding = 1063,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GridViewItemPresenter_PlaceholderBackground = 1064,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GridViewItemPresenter_PointerOverBackground = 1065,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GridViewItemPresenter_PointerOverBackgroundMargin = 1066,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GridViewItemPresenter_ReorderHintOffset = 1067,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GridViewItemPresenter_SelectedBackground = 1068,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GridViewItemPresenter_SelectedBorderThickness = 1069,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GridViewItemPresenter_SelectedForeground = 1070,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GridViewItemPresenter_SelectedPointerOverBackground = 1071,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GridViewItemPresenter_SelectedPointerOverBorderBrush = 1072,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GridViewItemPresenter_SelectionCheckMarkVisualEnabled = 1073,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GridViewItemPresenter_GridViewItemPresenterVerticalContentAlignment = 1074,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsStackPanel_CacheLength = 1076,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsStackPanel_GroupHeaderPlacement = 1077,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsStackPanel_GroupPadding = 1078,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsStackPanel_ItemsUpdatingScrollMode = 1079,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsStackPanel_Orientation = 1080,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsWrapGrid_CacheLength = 1081,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsWrapGrid_GroupHeaderPlacement = 1082,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsWrapGrid_GroupPadding = 1083,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsWrapGrid_ItemHeight = 1084,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsWrapGrid_ItemWidth = 1085,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsWrapGrid_MaximumRowsOrColumns = 1086,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsWrapGrid_Orientation = 1087,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_CheckBrush = 1088,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_CheckHintBrush = 1089,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_CheckSelectingBrush = 1090,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_ContentMargin = 1091,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_DisabledOpacity = 1092,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_DragBackground = 1093,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_DragForeground = 1094,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_DragOpacity = 1095,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_FocusBorderBrush = 1096,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_ListViewItemPresenterHorizontalContentAlignment = 1097,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_ListViewItemPresenterPadding = 1098,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_PlaceholderBackground = 1099,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_PointerOverBackground = 1100,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_PointerOverBackgroundMargin = 1101,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_ReorderHintOffset = 1102,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_SelectedBackground = 1103,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_SelectedBorderThickness = 1104,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_SelectedForeground = 1105,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_SelectedPointerOverBackground = 1106,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_SelectedPointerOverBorderBrush = 1107,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_SelectionCheckMarkVisualEnabled = 1108,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_ListViewItemPresenterVerticalContentAlignment = 1109,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_MenuFlyoutItem_Command = 1110,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_MenuFlyoutItem_CommandParameter = 1111,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_MenuFlyoutItem_Text = 1112,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Page_BottomAppBar = 1114,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Page_Frame = 1115,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Page_NavigationCacheMode = 1116,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Page_TopAppBar = 1117,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ProgressBar_IsIndeterminate = 1118,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ProgressBar_ShowError = 1119,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ProgressBar_ShowPaused = 1120,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ProgressBar_TemplateSettings = 1121,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollBar_IndicatorMode = 1122,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollBar_Orientation = 1123,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollBar_ViewportSize = 1124,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Selector_IsSynchronizedWithCurrentItem = 1126,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Selector_SelectedIndex = 1127,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Selector_SelectedItem = 1128,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Selector_SelectedValue = 1129,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Selector_SelectedValuePath = 1130,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SelectorItem_IsSelected = 1131,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Slider_Header = 1137,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Slider_HeaderTemplate = 1138,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Slider_IntermediateValue = 1139,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Slider_IsDirectionReversed = 1140,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Slider_IsThumbToolTipEnabled = 1141,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Slider_Orientation = 1142,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Slider_SnapsTo = 1143,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Slider_StepFrequency = 1144,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Slider_ThumbToolTipValueConverter = 1145,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Slider_TickFrequency = 1146,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Slider_TickPlacement = 1147,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SwapChainPanel_CompositionScaleX = 1148,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SwapChainPanel_CompositionScaleY = 1149,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToolTip_HorizontalOffset = 1150,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToolTip_IsOpen = 1151,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToolTip_Placement = 1152,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToolTip_PlacementTarget = 1153,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToolTip_TemplateSettings = 1154,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToolTip_VerticalOffset = 1155,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Button_Flyout = 1156,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ComboBox_Header = 1157,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ComboBox_HeaderTemplate = 1158,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ComboBox_IsDropDownOpen = 1159,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ComboBox_IsEditable = 1160,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ComboBox_IsSelectionBoxHighlighted = 1161,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ComboBox_MaxDropDownHeight = 1162,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ComboBox_PlaceholderText = 1163,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ComboBox_SelectionBoxItem = 1164,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ComboBox_SelectionBoxItemTemplate = 1165,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ComboBox_TemplateSettings = 1166,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CommandBar_PrimaryCommands = 1167,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CommandBar_SecondaryCommands = 1168,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FlipView_UseTouchAnimationsForAllNavigation = 1169,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_HyperlinkButton_NavigateUri = 1170,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListBox_SelectedItems = 1171,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListBox_SelectionMode = 1172,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewBase_CanDragItems = 1173,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewBase_CanReorderItems = 1174,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewBase_DataFetchSize = 1175,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewBase_Footer = 1176,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewBase_FooterTemplate = 1177,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewBase_FooterTransitions = 1178,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewBase_Header = 1179,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewBase_HeaderTemplate = 1180,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewBase_HeaderTransitions = 1181,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewBase_IncrementalLoadingThreshold = 1182,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewBase_IncrementalLoadingTrigger = 1183,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewBase_IsActiveView = 1184,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewBase_IsItemClickEnabled = 1185,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewBase_IsSwipeEnabled = 1186,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewBase_IsZoomedInView = 1187,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewBase_ReorderMode = 1188,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewBase_SelectedItems = 1189,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewBase_SelectionMode = 1190,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewBase_SemanticZoomOwner = 1191,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewBase_ShowsScrollingPlaceholders = 1192,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RepeatButton_Delay = 1193,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RepeatButton_Interval = 1194,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_BringIntoViewOnFocusChange = 1195,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_ComputedHorizontalScrollBarVisibility = 1196,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_ComputedVerticalScrollBarVisibility = 1197,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_ExtentHeight = 1198,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_ExtentWidth = 1199,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_HorizontalOffset = 1200,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_HorizontalScrollBarVisibility = 1201,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_HorizontalScrollMode = 1202,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_HorizontalSnapPointsAlignment = 1203,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_HorizontalSnapPointsType = 1204,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_IsDeferredScrollingEnabled = 1205,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_IsHorizontalRailEnabled = 1206,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_IsHorizontalScrollChainingEnabled = 1207,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_IsScrollInertiaEnabled = 1208,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_IsVerticalRailEnabled = 1209,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_IsVerticalScrollChainingEnabled = 1210,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_IsZoomChainingEnabled = 1211,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_IsZoomInertiaEnabled = 1212,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_LeftHeader = 1213,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_MaxZoomFactor = 1214,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_MinZoomFactor = 1215,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_ScrollableHeight = 1216,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_ScrollableWidth = 1217,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_TopHeader = 1218,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_TopLeftHeader = 1219,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_VerticalOffset = 1220,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_VerticalScrollBarVisibility = 1221,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_VerticalScrollMode = 1222,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_VerticalSnapPointsAlignment = 1223,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_VerticalSnapPointsType = 1224,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_ViewportHeight = 1225,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_ViewportWidth = 1226,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_ZoomFactor = 1227,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_ZoomMode = 1228,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_ZoomSnapPoints = 1229,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_ZoomSnapPointsType = 1230,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToggleButton_IsChecked = 1231,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToggleButton_IsThreeState = 1232,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToggleMenuFlyoutItem_IsChecked = 1233,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_VirtualizingStackPanel_AreScrollSnapPointsRegular = 1234,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_VirtualizingStackPanel_IsVirtualizing = 1236,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_VirtualizingStackPanel_Orientation = 1237,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_VirtualizingStackPanel_VirtualizationMode = 1238,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_WrapGrid_HorizontalChildrenAlignment = 1239,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_WrapGrid_ItemHeight = 1240,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_WrapGrid_ItemWidth = 1241,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_WrapGrid_MaximumRowsOrColumns = 1242,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_WrapGrid_Orientation = 1243,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_WrapGrid_VerticalChildrenAlignment = 1244,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarButton_Icon = 1245,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarButton_IsCompact = 1246,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarButton_Label = 1247,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarToggleButton_Icon = 1248,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarToggleButton_IsCompact = 1249,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarToggleButton_Label = 1250,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_GridViewItem_TemplateSettings = 1251,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItem_TemplateSettings = 1252,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RadioButton_GroupName = 1253,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Glyphs_ColorFontPaletteIndex = 1267,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Glyphs_IsColorFontEnabled = 1268,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarViewTemplateSettings_HasMoreContentAfter = 1274,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarViewTemplateSettings_HasMoreContentBefore = 1275,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarViewTemplateSettings_HasMoreViews = 1276,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarViewTemplateSettings_HeaderText = 1277,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarViewTemplateSettings_WeekDay1 = 1280,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarViewTemplateSettings_WeekDay2 = 1281,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarViewTemplateSettings_WeekDay3 = 1282,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarViewTemplateSettings_WeekDay4 = 1283,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarViewTemplateSettings_WeekDay5 = 1284,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarViewTemplateSettings_WeekDay6 = 1285,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarViewTemplateSettings_WeekDay7 = 1286,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_CalendarIdentifier = 1291,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_DayOfWeekFormat = 1299,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_DisplayMode = 1302,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_FirstDayOfWeek = 1303,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_IsOutOfScopeEnabled = 1317,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_IsTodayHighlighted = 1318,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_MaxDate = 1320,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_MinDate = 1321,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_NumberOfWeeksInView = 1327,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_SelectedDates = 1333,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_SelectionMode = 1335,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_TemplateSettings = 1336,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarViewDayItem_Date = 1339,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarViewDayItem_IsBlackout = 1340,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentPresenter_LineHeight = 1425,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarViewTemplateSettings_MinViewWidth = 1435,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewBase_SelectedRanges = 1459,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitViewTemplateSettings_CompactPaneGridLength = 1462,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitViewTemplateSettings_NegativeOpenPaneLength = 1463,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitViewTemplateSettings_NegativeOpenPaneLengthMinusCompactLength = 1464,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitViewTemplateSettings_OpenPaneGridLength = 1465,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitViewTemplateSettings_OpenPaneLengthMinusCompactLength = 1466,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitView_CompactPaneLength = 1467,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitView_Content = 1468,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitView_DisplayMode = 1469,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitView_IsPaneOpen = 1470,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitView_OpenPaneLength = 1471,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitView_Pane = 1472,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitView_PanePlacement = 1473,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitView_TemplateSettings = 1474,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_Transform3D = 1475,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CompositeTransform3D_CenterX = 1476,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CompositeTransform3D_CenterY = 1478,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CompositeTransform3D_CenterZ = 1480,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CompositeTransform3D_RotationX = 1482,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CompositeTransform3D_RotationY = 1484,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CompositeTransform3D_RotationZ = 1486,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CompositeTransform3D_ScaleX = 1488,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CompositeTransform3D_ScaleY = 1490,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CompositeTransform3D_ScaleZ = 1492,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CompositeTransform3D_TranslateX = 1494,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CompositeTransform3D_TranslateY = 1496,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CompositeTransform3D_TranslateZ = 1498,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PerspectiveTransform3D_Depth = 1500,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PerspectiveTransform3D_OffsetX = 1501,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PerspectiveTransform3D_OffsetY = 1502,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RelativePanel_Above = 1508,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RelativePanel_AlignBottomWith = 1509,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RelativePanel_AlignLeftWith = 1510,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RelativePanel_AlignRightWith = 1515,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RelativePanel_AlignTopWith = 1516,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RelativePanel_Below = 1517,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RelativePanel_LeftOf = 1520,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RelativePanel_RightOf = 1521,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitViewTemplateSettings_OpenPaneLength = 1524,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PasswordBox_PasswordRevealMode = 1527,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitView_PaneBackground = 1528,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsStackPanel_AreStickyGroupHeadersEnabled = 1529,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ItemsWrapGrid_AreStickyGroupHeadersEnabled = 1530,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_MenuFlyoutSubItem_Items = 1531,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_MenuFlyoutSubItem_Text = 1532,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_CanDrag = 1534,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DataTemplate_ExtensionInstance = 1535,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RelativePanel_AlignHorizontalCenterWith = 1552,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RelativePanel_AlignVerticalCenterWith = 1553,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TargetPropertyPath_Path = 1555,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TargetPropertyPath_Target = 1556,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_VisualState_Setters = 1558,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_VisualState_StateTriggers = 1559,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AdaptiveTrigger_MinWindowHeight = 1560,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AdaptiveTrigger_MinWindowWidth = 1561,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Setter_Target = 1562,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_BlackoutForeground = 1565,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_CalendarItemBackground = 1566,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_CalendarItemBorderBrush = 1567,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_CalendarItemBorderThickness = 1568,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_CalendarItemForeground = 1569,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_CalendarViewDayItemStyle = 1570,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_DayItemFontFamily = 1571,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_DayItemFontSize = 1572,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_DayItemFontStyle = 1573,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_DayItemFontWeight = 1574,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_FirstOfMonthLabelFontFamily = 1575,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_FirstOfMonthLabelFontSize = 1576,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_FirstOfMonthLabelFontStyle = 1577,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_FirstOfMonthLabelFontWeight = 1578,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_FirstOfYearDecadeLabelFontFamily = 1579,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_FirstOfYearDecadeLabelFontSize = 1580,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_FirstOfYearDecadeLabelFontStyle = 1581,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_FirstOfYearDecadeLabelFontWeight = 1582,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_FocusBorderBrush = 1583,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_HorizontalDayItemAlignment = 1584,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_HorizontalFirstOfMonthLabelAlignment = 1585,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_HoverBorderBrush = 1586,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_MonthYearItemFontFamily = 1588,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_MonthYearItemFontSize = 1589,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_MonthYearItemFontStyle = 1590,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_MonthYearItemFontWeight = 1591,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_OutOfScopeBackground = 1592,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_OutOfScopeForeground = 1593,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_PressedBorderBrush = 1594,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_PressedForeground = 1595,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_SelectedBorderBrush = 1596,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_SelectedForeground = 1597,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_SelectedHoverBorderBrush = 1598,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_SelectedPressedBorderBrush = 1599,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_TodayFontWeight = 1600,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_TodayForeground = 1601,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_VerticalDayItemAlignment = 1602,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_VerticalFirstOfMonthLabelAlignment = 1603,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RelativePanel_AlignBottomWithPanel = 1606,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RelativePanel_AlignHorizontalCenterWithPanel = 1607,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RelativePanel_AlignLeftWithPanel = 1608,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RelativePanel_AlignRightWithPanel = 1609,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RelativePanel_AlignTopWithPanel = 1610,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RelativePanel_AlignVerticalCenterWithPanel = 1611,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewBase_IsMultiSelectCheckBoxEnabled = 1612,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationProperties_Level = 1614,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationProperties_PositionInSet = 1615,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationProperties_SizeOfSet = 1616,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_CheckBoxBrush = 1617,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_CheckMode = 1618,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_PressedBackground = 1620,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_SelectedPressedBackground = 1621,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Control_IsTemplateFocusTarget = 1623,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_FocusSecondaryBorderBrush = 1628,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_PointerOverForeground = 1630,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FontIcon_MirroredWhenRightToLeft = 1631,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarViewTemplateSettings_CenterX = 1632,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarViewTemplateSettings_CenterY = 1633,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarViewTemplateSettings_ClipRect = 1634,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PasswordBox_TextReadingOrder = 1650,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichEditBox_TextReadingOrder = 1651,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_TextReadingOrder = 1652,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichEditBox_DesiredCandidateWindowAlignment = 1660,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_DesiredCandidateWindowAlignment = 1662,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarDatePicker_CalendarIdentifier = 1663,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarDatePicker_CalendarViewStyle = 1664,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarDatePicker_Date = 1665,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarDatePicker_DateFormat = 1666,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarDatePicker_DayOfWeekFormat = 1667,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarDatePicker_DisplayMode = 1668,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarDatePicker_FirstDayOfWeek = 1669,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarDatePicker_Header = 1670,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarDatePicker_HeaderTemplate = 1671,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarDatePicker_IsCalendarOpen = 1672,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarDatePicker_IsGroupLabelVisible = 1673,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarDatePicker_IsOutOfScopeEnabled = 1674,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarDatePicker_IsTodayHighlighted = 1675,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarDatePicker_MaxDate = 1676,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarDatePicker_MinDate = 1677,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarDatePicker_PlaceholderText = 1678,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarView_IsGroupLabelVisible = 1679,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentPresenter_Background = 1680,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentPresenter_BorderBrush = 1681,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentPresenter_BorderThickness = 1682,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentPresenter_CornerRadius = 1683,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentPresenter_Padding = 1684,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Grid_BorderBrush = 1685,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Grid_BorderThickness = 1686,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Grid_CornerRadius = 1687,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Grid_Padding = 1688,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RelativePanel_BorderBrush = 1689,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RelativePanel_BorderThickness = 1690,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RelativePanel_CornerRadius = 1691,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RelativePanel_Padding = 1692,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_StackPanel_BorderBrush = 1693,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_StackPanel_BorderThickness = 1694,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_StackPanel_CornerRadius = 1695,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_StackPanel_Padding = 1696,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PasswordBox_InputScope = 1697,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutoSuggestBoxQuerySubmittedEventArgs_ChosenSuggestion = 1699,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutoSuggestBoxQuerySubmittedEventArgs_QueryText = 1700,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutoSuggestBox_QueryIcon = 1701,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_StateTrigger_IsActive = 1702,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentPresenter_HorizontalContentAlignment = 1703,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentPresenter_VerticalContentAlignment = 1704,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarTemplateSettings_ClipRect = 1705,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarTemplateSettings_CompactRootMargin = 1706,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarTemplateSettings_CompactVerticalDelta = 1707,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarTemplateSettings_HiddenRootMargin = 1708,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarTemplateSettings_HiddenVerticalDelta = 1709,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarTemplateSettings_MinimalRootMargin = 1710,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarTemplateSettings_MinimalVerticalDelta = 1711,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CommandBarTemplateSettings_ContentHeight = 1712,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CommandBarTemplateSettings_NegativeOverflowContentHeight = 1713,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CommandBarTemplateSettings_OverflowContentClipRect = 1714,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CommandBarTemplateSettings_OverflowContentHeight = 1715,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CommandBarTemplateSettings_OverflowContentHorizontalOffset = 1716,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CommandBarTemplateSettings_OverflowContentMaxHeight = 1717,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CommandBarTemplateSettings_OverflowContentMinWidth = 1718,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBar_TemplateSettings = 1719,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CommandBar_CommandBarOverflowPresenterStyle = 1720,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CommandBar_CommandBarTemplateSettings = 1721,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DrillInThemeAnimation_EntranceTarget = 1722,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DrillInThemeAnimation_EntranceTargetName = 1723,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DrillInThemeAnimation_ExitTarget = 1724,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DrillInThemeAnimation_ExitTargetName = 1725,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DrillOutThemeAnimation_EntranceTarget = 1726,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DrillOutThemeAnimation_EntranceTargetName = 1727,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DrillOutThemeAnimation_ExitTarget = 1728,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DrillOutThemeAnimation_ExitTargetName = 1729,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_XamlBindingHelper_DataTemplateComponent = 1730,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationProperties_Annotations = 1732,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationAnnotation_Element = 1733,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationAnnotation_Type = 1734,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationPeerAnnotation_Peer = 1735,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationPeerAnnotation_Type = 1736,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Hyperlink_UnderlineStyle = 1741,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Control_IsFocusEngaged = 1749,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Control_IsFocusEngagementEnabled = 1752,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichEditBox_ClipboardCopyFormat = 1754,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CommandBarTemplateSettings_OverflowContentMaxWidth = 1757,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ComboBoxTemplateSettings_DropDownContentMinWidth = 1758,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_MenuFlyoutPresenterTemplateSettings_FlyoutContentMinWidth = 1762,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_MenuFlyoutPresenter_TemplateSettings = 1763,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationProperties_LandmarkType = 1766,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationProperties_LocalizedLandmarkType = 1767,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RepositionThemeTransition_IsStaggeringEnabled = 1769,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListBox_SingleSelectionFollowsFocus = 1770,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewBase_SingleSelectionFollowsFocus = 1771,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_BitmapImage_AutoPlay = 1773,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_BitmapImage_IsAnimatedBitmap = 1774,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_BitmapImage_IsPlaying = 1775,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationProperties_FullDescription = 1776,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationProperties_IsDataValidForForm = 1777,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationProperties_IsPeripheral = 1778,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationProperties_LocalizedControlType = 1779,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FlyoutBase_AllowFocusOnInteraction = 1780,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextElement_AllowFocusOnInteraction = 1781,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FrameworkElement_AllowFocusOnInteraction = 1782,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Control_RequiresPointer = 1783,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_ContextFlyout = 1785,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextElement_AccessKey = 1786,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_AccessKeyScopeOwner = 1787,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_IsAccessKeyScope = 1788,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationProperties_DescribedBy = 1790,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_AccessKey = 1803,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Hyperlink_XYFocusDown = 1808,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Hyperlink_XYFocusLeft = 1809,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Hyperlink_XYFocusRight = 1810,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Hyperlink_XYFocusUp = 1811,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CommandBarTemplateSettings_EffectiveOverflowButtonVisibility = 1816,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarSeparator_IsInOverflow = 1817,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CommandBar_DefaultLabelPosition = 1818,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CommandBar_IsDynamicOverflowEnabled = 1819,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CommandBar_OverflowButtonVisibility = 1820,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarButton_IsInOverflow = 1821,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarButton_LabelPosition = 1822,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarToggleButton_IsInOverflow = 1823,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarToggleButton_LabelPosition = 1824,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FlyoutBase_LightDismissOverlayMode = 1825,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Popup_LightDismissOverlayMode = 1827,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarDatePicker_LightDismissOverlayMode = 1829,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DatePicker_LightDismissOverlayMode = 1830,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SplitView_LightDismissOverlayMode = 1831,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TimePicker_LightDismissOverlayMode = 1832,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBar_LightDismissOverlayMode = 1833,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutoSuggestBox_LightDismissOverlayMode = 1834,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ComboBox_LightDismissOverlayMode = 1835,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarSeparator_DynamicOverflowOrder = 1836,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarButton_DynamicOverflowOrder = 1837,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarToggleButton_DynamicOverflowOrder = 1838,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FrameworkElement_FocusVisualMargin = 1839,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FrameworkElement_FocusVisualPrimaryBrush = 1840,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FrameworkElement_FocusVisualPrimaryThickness = 1841,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FrameworkElement_FocusVisualSecondaryBrush = 1842,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FrameworkElement_FocusVisualSecondaryThickness = 1843,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FlyoutBase_AllowFocusWhenDisabled = 1846,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FrameworkElement_AllowFocusWhenDisabled = 1847,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ComboBox_IsTextSearchEnabled = 1848,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextElement_ExitDisplayModeOnAccessKeyInvoked = 1849,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_ExitDisplayModeOnAccessKeyInvoked = 1850,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FlyoutBase_ElementSoundMode = 1869,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Control_ElementSoundMode = 1870,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Hyperlink_ElementSoundMode = 1871,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationProperties_FlowsFrom = 1876,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationProperties_FlowsTo = 1877,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextElement_TextDecorations = 1879,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_TextDecorations = 1881,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Control_DefaultStyleResourceUri = 1882,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentDialog_PrimaryButtonStyle = 1884,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentDialog_SecondaryButtonStyle = 1885,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextElement_KeyTipHorizontalOffset = 1890,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextElement_KeyTipPlacementMode = 1891,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextElement_KeyTipVerticalOffset = 1892,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_KeyTipHorizontalOffset = 1893,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_KeyTipPlacementMode = 1894,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_KeyTipVerticalOffset = 1895,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FlyoutBase_OverlayInputPassThroughElement = 1896,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_XYFocusKeyboardNavigation = 1897,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationProperties_Culture = 1898,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_XYFocusDownNavigationStrategy = 1918,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_XYFocusLeftNavigationStrategy = 1919,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_XYFocusRightNavigationStrategy = 1920,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_XYFocusUpNavigationStrategy = 1921,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Hyperlink_XYFocusDownNavigationStrategy = 1922,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Hyperlink_XYFocusLeftNavigationStrategy = 1923,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Hyperlink_XYFocusRightNavigationStrategy = 1924,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Hyperlink_XYFocusUpNavigationStrategy = 1925,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextElement_AccessKeyScopeOwner = 1926,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextElement_IsAccessKeyScope = 1927,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Hyperlink_FocusState = 1934,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentDialog_CloseButtonCommand = 1936,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentDialog_CloseButtonCommandParameter = 1937,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentDialog_CloseButtonStyle = 1938,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentDialog_CloseButtonText = 1939,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentDialog_DefaultButton = 1940,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichEditBox_SelectionHighlightColorWhenNotFocused = 1941,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_SelectionHighlightColorWhenNotFocused = 1942,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SvgImageSource_RasterizePixelHeight = 1948,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SvgImageSource_RasterizePixelWidth = 1949,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SvgImageSource_UriSource = 1950,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_LoadedImageSurface_DecodedPhysicalSize = 1955,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_LoadedImageSurface_DecodedSize = 1956,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_LoadedImageSurface_NaturalSize = 1957,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ComboBox_SelectionChangedTrigger = 1958,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_XamlCompositionBrushBase_FallbackColor = 1960,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_Lights = 1962,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_MenuFlyoutItem_Icon = 1963,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_MenuFlyoutSubItem_Icon = 1964,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_BitmapIcon_ShowAsMonochrome = 1965,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_HighContrastAdjustment = 1967,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichEditBox_MaxLength = 1968,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_TabFocusNavigation = 1969,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Control_IsTemplateKeyTipTarget = 1970,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Hyperlink_IsTabStop = 1972,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Hyperlink_TabIndex = 1973,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichEditBox_DisabledFormattingAccelerators = 1977,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichEditBox_CharacterCasing = 1978,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_CharacterCasing = 1979,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_IsTextTrimmed = 1980,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlockOverflow_IsTextTrimmed = 1981,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBlock_IsTextTrimmed = 1982,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextHighlighter_Background = 1985,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextHighlighter_Foreground = 1986,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextHighlighter_Ranges = 1987,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_TextHighlighters = 1988,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBlock_TextHighlighters = 1989,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FrameworkElement_ActualTheme = 1992,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Grid_ColumnSpacing = 1993,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Grid_RowSpacing = 1994,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_StackPanel_Spacing = 1995,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Block_HorizontalTextAlignment = 1996,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_HorizontalTextAlignment = 1997,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBlock_HorizontalTextAlignment = 1998,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichEditBox_HorizontalTextAlignment = 1999,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_HorizontalTextAlignment = 2000,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_PlaceholderForeground = 2001,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ComboBox_PlaceholderForeground = 2002,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_KeyboardAccelerator_IsEnabled = 2003,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_KeyboardAccelerator_Key = 2004,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_KeyboardAccelerator_Modifiers = 2005,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_KeyboardAccelerator_ScopeOwner = 2006,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_KeyboardAccelerators = 2007,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_RevealBackground = 2009,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_RevealBackgroundShowsAboveContent = 2010,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_RevealBorderBrush = 2011,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ListViewItemPresenter_RevealBorderThickness = 2012,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_KeyTipTarget = 2014,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarButtonTemplateSettings_KeyboardAcceleratorTextMinWidth = 2015,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarToggleButtonTemplateSettings_KeyboardAcceleratorTextMinWidth = 2016,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_MenuFlyoutItemTemplateSettings_KeyboardAcceleratorTextMinWidth = 2017,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_MenuFlyoutItem_TemplateSettings = 2019,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarButton_TemplateSettings = 2021,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarToggleButton_TemplateSettings = 2023,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_KeyboardAcceleratorPlacementMode = 2028,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_KeyboardAcceleratorPlacementTarget = 2061,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_CenterPoint = 2062,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_Rotation = 2063,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_RotationAxis = 2064,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_Scale = 2065,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_TransformMatrix = 2066,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_Translation = 2067,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationProperties_HeadingLevel = 2069,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_MenuFlyoutItem_KeyboardAcceleratorTextOverride = 2090,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarButton_KeyboardAcceleratorTextOverride = 2091,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarToggleButton_KeyboardAcceleratorTextOverride = 2092,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_IconSource_Foreground = 2112,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_BitmapIconSource_ShowAsMonochrome = 2113,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_BitmapIconSource_UriSource = 2114,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FontIconSource_FontFamily = 2115,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FontIconSource_FontSize = 2116,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FontIconSource_FontStyle = 2117,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FontIconSource_FontWeight = 2118,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FontIconSource_Glyph = 2119,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FontIconSource_IsTextScaleFactorEnabled = 2120,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FontIconSource_MirroredWhenRightToLeft = 2121,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PathIconSource_Data = 2122,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_SymbolIconSource_Symbol = 2123,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_Shadow = 2130,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_IconSourceElement_IconSource = 2131,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PasswordBox_CanPasteClipboardContent = 2137,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_CanPasteClipboardContent = 2138,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_CanRedo = 2139,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_CanUndo = 2140,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FlyoutBase_ShowMode = 2141,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FlyoutBase_Target = 2142,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Control_CornerRadius = 2143,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutomationProperties_IsDialog = 2149,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarElementContainer_DynamicOverflowOrder = 2150,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarElementContainer_IsCompact = 2151,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarElementContainer_IsInOverflow = 2152,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollContentPresenter_CanContentRenderOutsideBounds = 2157,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_CanContentRenderOutsideBounds = 2158,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichEditBox_SelectionFlyout = 2159,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_SelectionFlyout = 2160,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Border_BackgroundSizing = 2161,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentPresenter_BackgroundSizing = 2162,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Control_BackgroundSizing = 2163,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Grid_BackgroundSizing = 2164,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RelativePanel_BackgroundSizing = 2165,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_StackPanel_BackgroundSizing = 2166,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_HorizontalAnchorRatio = 2170,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_VerticalAnchorRatio = 2171,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ComboBox_Text = 2208,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_Description = 2217,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ToolTip_PlacementRect = 2218,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichTextBlock_SelectionFlyout = 2219,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBlock_SelectionFlyout = 2220,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PasswordBox_SelectionFlyout = 2221,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Border_BackgroundTransition = 2222,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ContentPresenter_BackgroundTransition = 2223,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Panel_BackgroundTransition = 2224,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorPaletteResources_Accent = 2227,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorPaletteResources_AltHigh = 2228,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorPaletteResources_AltLow = 2229,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorPaletteResources_AltMedium = 2230,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorPaletteResources_AltMediumHigh = 2231,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorPaletteResources_AltMediumLow = 2232,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorPaletteResources_BaseHigh = 2233,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorPaletteResources_BaseLow = 2234,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorPaletteResources_BaseMedium = 2235,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorPaletteResources_BaseMediumHigh = 2236,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorPaletteResources_BaseMediumLow = 2237,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorPaletteResources_ChromeAltLow = 2238,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorPaletteResources_ChromeBlackHigh = 2239,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorPaletteResources_ChromeBlackLow = 2240,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorPaletteResources_ChromeBlackMedium = 2241,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorPaletteResources_ChromeBlackMediumLow = 2242,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorPaletteResources_ChromeDisabledHigh = 2243,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorPaletteResources_ChromeDisabledLow = 2244,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorPaletteResources_ChromeGray = 2245,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorPaletteResources_ChromeHigh = 2246,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorPaletteResources_ChromeLow = 2247,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorPaletteResources_ChromeMedium = 2248,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorPaletteResources_ChromeMediumLow = 2249,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorPaletteResources_ChromeWhite = 2250,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorPaletteResources_ErrorText = 2252,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorPaletteResources_ListLow = 2253,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ColorPaletteResources_ListMedium = 2254,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_TranslationTransition = 2255,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_OpacityTransition = 2256,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_RotationTransition = 2257,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_ScaleTransition = 2258,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_BrushTransition_Duration = 2261,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScalarTransition_Duration = 2262,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Vector3Transition_Duration = 2263,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Vector3Transition_Components = 2266,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FlyoutBase_IsOpen = 2267,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_StandardUICommand_Kind = 2275,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_CanBeScrollAnchor = 2276,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ThemeShadow_Receivers = 2279,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollContentPresenter_SizesContentToTemplatedParent = 2280,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ComboBox_TextBoxStyle = 2281,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Frame_IsNavigationStackEnabled = 2282,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichEditBox_ProofingMenuFlyout = 2283,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_ProofingMenuFlyout = 2284,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ScrollViewer_ReduceViewportForCoreInputViewOcclusions = 2295,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FlyoutBase_AreOpenCloseAnimationsEnabled = 2296,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FlyoutBase_InputDevicePrefersPrimaryCommands = 2297,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CalendarDatePicker_Description = 2300,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PasswordBox_Description = 2308,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PasswordBox_ErrorTemplate = 2309,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PasswordBox_HasValidationErrors = 2310,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PasswordBox_InputValidationKind = 2311,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PasswordBox_InputValidationMode = 2312,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PasswordBox_ValidationContext = 2314,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_PasswordBox_ValidationErrors = 2315,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_RichEditBox_Description = 2316,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_ErrorTemplate = 2324,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_HasValidationErrors = 2325,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_InputValidationKind = 2326,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_InputValidationMode = 2327,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_ValidationContext = 2329,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TextBox_ValidationErrors = 2330,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutoSuggestBox_Description = 2331,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutoSuggestBox_ErrorTemplate = 2332,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutoSuggestBox_HasValidationErrors = 2333,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutoSuggestBox_InputValidationKind = 2334,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutoSuggestBox_InputValidationMode = 2335,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutoSuggestBox_ValidationContext = 2337,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AutoSuggestBox_ValidationErrors = 2338,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ComboBox_Description = 2339,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ComboBox_ErrorTemplate = 2340,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ComboBox_HasValidationErrors = 2341,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ComboBox_InputValidationKind = 2342,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ComboBox_InputValidationMode = 2343,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ComboBox_ValidationContext = 2345,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_ComboBox_ValidationErrors = 2346,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_XamlUICommand_AccessKey = 2347,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_XamlUICommand_Command = 2348,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_XamlUICommand_Description = 2349,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_XamlUICommand_IconSource = 2350,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_XamlUICommand_KeyboardAccelerators = 2351,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_XamlUICommand_Label = 2352,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_DatePicker_SelectedDate = 2355,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_TimePicker_SelectedTime = 2356,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarTemplateSettings_NegativeCompactVerticalDelta = 2367,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarTemplateSettings_NegativeHiddenVerticalDelta = 2368,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_AppBarTemplateSettings_NegativeMinimalVerticalDelta = 2369,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FlyoutBase_ShouldConstrainToRootBounds = 2378,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_Popup_ShouldConstrainToRootBounds = 2379,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_FlyoutPresenter_IsDefaultShadowEnabled = 2380,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_MenuFlyoutPresenter_IsDefaultShadowEnabled = 2381,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_ActualOffset = 2382,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_ActualSize = 2383,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CommandBarTemplateSettings_OverflowContentCompactYTranslation = 2384,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CommandBarTemplateSettings_OverflowContentHiddenYTranslation = 2385,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_CommandBarTemplateSettings_OverflowContentMinimalYTranslation = 2386,
    Microsoft_UI_Xaml_Core_Direct_XamlPropertyIndex_UIElement_RasterizationScale = 2394,
};
#endif // MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.UI.Xaml.Core.Direct.XamlTypeIndex
 *
 * Introduced to Microsoft.UI.Xaml.Core.Direct.XamlDirectContract in version 1.0
 *
 *
 */

#if MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlTypeIndex
{
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_AutoSuggestBoxSuggestionChosenEventArgs = 34,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_AutoSuggestBoxTextChangedEventArgs = 35,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_CollectionViewSource = 41,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ColumnDefinition = 44,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_GradientStop = 64,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_InputScope = 74,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_InputScopeName = 75,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_KeySpline = 78,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_PathFigure = 93,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_PrintDocument = 100,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_RowDefinition = 106,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Style = 114,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_VisualState = 137,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_VisualStateGroup = 138,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_VisualStateManager = 139,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_VisualTransition = 140,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_AddDeleteThemeTransition = 177,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ArcSegment = 178,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_BackEase = 179,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_BeginStoryboard = 180,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_BezierSegment = 181,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_BindingBase = 182,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_BitmapCache = 183,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_BounceEase = 186,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_CircleEase = 187,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ColorAnimation = 188,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ColorAnimationUsingKeyFrames = 189,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ContentThemeTransition = 190,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ControlTemplate = 191,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_CubicEase = 192,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_DataTemplate = 194,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_DiscreteColorKeyFrame = 195,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_DiscreteDoubleKeyFrame = 196,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_DiscreteObjectKeyFrame = 197,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_DiscretePointKeyFrame = 198,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_DoubleAnimation = 200,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_DoubleAnimationUsingKeyFrames = 201,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_EasingColorKeyFrame = 204,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_EasingDoubleKeyFrame = 205,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_EasingPointKeyFrame = 206,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_EdgeUIThemeTransition = 207,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ElasticEase = 208,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_EllipseGeometry = 209,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_EntranceThemeTransition = 210,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_EventTrigger = 211,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ExponentialEase = 212,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Flyout = 213,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_GeometryGroup = 216,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ItemsPanelTemplate = 227,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_LinearColorKeyFrame = 230,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_LinearDoubleKeyFrame = 231,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_LinearPointKeyFrame = 232,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_LineGeometry = 233,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_LineSegment = 234,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Matrix3DProjection = 236,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_MenuFlyout = 238,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ObjectAnimationUsingKeyFrames = 240,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_PaneThemeTransition = 241,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_PathGeometry = 243,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_PlaneProjection = 244,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_PointAnimation = 245,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_PointAnimationUsingKeyFrames = 246,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_PolyBezierSegment = 248,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_PolyLineSegment = 249,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_PolyQuadraticBezierSegment = 250,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_PopupThemeTransition = 251,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_PowerEase = 252,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_QuadraticBezierSegment = 254,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_QuadraticEase = 255,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_QuarticEase = 256,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_QuinticEase = 257,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_RectangleGeometry = 258,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_RelativeSource = 259,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_RenderTargetBitmap = 260,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ReorderThemeTransition = 261,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_RepositionThemeTransition = 262,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Setter = 263,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_SineEase = 264,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_SolidColorBrush = 265,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_SplineColorKeyFrame = 266,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_SplineDoubleKeyFrame = 267,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_SplinePointKeyFrame = 268,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_BitmapImage = 285,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Border = 286,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_CompositeTransform = 295,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ContentPresenter = 296,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_DragItemThemeAnimation = 302,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_DragOverThemeAnimation = 303,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_DropTargetItemThemeAnimation = 304,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_FadeInThemeAnimation = 306,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_FadeOutThemeAnimation = 307,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Glyphs = 312,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Image = 326,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ImageBrush = 328,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_InlineUIContainer = 329,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ItemsPresenter = 332,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_LinearGradientBrush = 334,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_LineBreak = 335,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_MatrixTransform = 340,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Paragraph = 349,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_PointerDownThemeAnimation = 357,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_PointerUpThemeAnimation = 359,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_PopInThemeAnimation = 361,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_PopOutThemeAnimation = 362,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Popup = 363,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_RepositionThemeAnimation = 370,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ResourceDictionary = 371,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_RichTextBlock = 374,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_RichTextBlockOverflow = 376,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_RotateTransform = 378,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Run = 380,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ScaleTransform = 381,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_SkewTransform = 389,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Span = 390,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_SplitCloseThemeAnimation = 391,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_SplitOpenThemeAnimation = 392,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Storyboard = 393,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_SwipeBackThemeAnimation = 394,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_SwipeHintThemeAnimation = 395,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_TextBlock = 396,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_TransformGroup = 411,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_TranslateTransform = 413,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Viewbox = 417,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_AppBarSeparator = 427,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_BitmapIcon = 429,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Bold = 430,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Canvas = 432,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ContentControl = 435,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_DatePicker = 436,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_DependencyObjectCollection = 437,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Ellipse = 438,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_FontIcon = 440,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Grid = 442,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Hub = 445,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_HubSection = 446,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Hyperlink = 447,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Italic = 449,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ItemsControl = 451,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Line = 452,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_PasswordBox = 462,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Path = 463,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_PathIcon = 464,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Polygon = 465,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Polyline = 466,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ProgressRing = 468,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Rectangle = 470,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_RichEditBox = 473,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ScrollContentPresenter = 476,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_SemanticZoom = 479,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_StackPanel = 481,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_SymbolIcon = 482,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_TextBox = 483,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Thumb = 485,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_TickBar = 486,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_TimePicker = 487,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ToggleSwitch = 489,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Underline = 490,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_UserControl = 491,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_VariableSizedWrapGrid = 492,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_AppBar = 495,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_AutoSuggestBox = 499,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_CarouselPanel = 502,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ContentDialog = 506,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_FlyoutPresenter = 508,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Frame = 509,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_GridViewItemPresenter = 511,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_GroupItem = 512,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ItemsStackPanel = 514,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ItemsWrapGrid = 515,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ListViewItemPresenter = 520,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_MenuFlyoutItem = 521,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_MenuFlyoutPresenter = 522,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_MenuFlyoutSeparator = 523,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Page = 525,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ProgressBar = 528,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ScrollBar = 530,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Slider = 534,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_SwapChainBackgroundPanel = 535,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_SwapChainPanel = 536,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ToolTip = 538,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Button = 540,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ComboBoxItem = 541,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_CommandBar = 542,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_FlipViewItem = 543,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_GridViewHeaderItem = 545,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_HyperlinkButton = 546,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ListBoxItem = 547,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ListViewHeaderItem = 550,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_RepeatButton = 551,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ScrollViewer = 552,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ToggleButton = 553,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ToggleMenuFlyoutItem = 554,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_VirtualizingStackPanel = 555,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_WrapGrid = 556,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_AppBarButton = 557,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_AppBarToggleButton = 558,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_CheckBox = 559,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_GridViewItem = 560,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ListViewItem = 561,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_RadioButton = 562,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_Binding = 564,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ComboBox = 566,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_FlipView = 567,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ListBox = 568,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_GridView = 570,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ListView = 571,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_CalendarView = 707,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_CalendarViewDayItem = 709,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_CalendarPanel = 723,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_SplitView = 728,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_CompositeTransform3D = 732,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_PerspectiveTransform3D = 733,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_RelativePanel = 744,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_MenuFlyoutSubItem = 749,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_AdaptiveTrigger = 757,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_SoftwareBitmapSource = 761,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_StateTrigger = 767,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_CalendarDatePicker = 774,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_AutoSuggestBoxQuerySubmittedEventArgs = 778,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_CommandBarOverflowPresenter = 781,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_DrillInThemeAnimation = 782,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_DrillOutThemeAnimation = 783,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_AutomationAnnotation = 789,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_AutomationPeerAnnotation = 790,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_XamlLight = 855,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_SvgImageSource = 860,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_KeyboardAccelerator = 897,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_BitmapIconSource = 929,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_FontIconSource = 930,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_PathIconSource = 931,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_SymbolIconSource = 933,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_IconSourceElement = 939,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_AppBarElementContainer = 945,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ColorPaletteResources = 952,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_StandardUICommand = 961,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_ThemeShadow = 964,
    Microsoft_UI_Xaml_Core_Direct_XamlTypeIndex_XamlUICommand = 969,
};
#endif // MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Core.Direct.IXamlDirect
 *
 * Introduced to Microsoft.UI.Xaml.Core.Direct.XamlDirectContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Core.Direct.XamlDirect
 *
 *
 */
#if MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Core_Direct_IXamlDirect[] = L"Microsoft.UI.Xaml.Core.Direct.IXamlDirect";
/* [object, uuid("44B58E13-87E1-5843-AC21-C51D6321C7FB"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetObject )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [retval, out] */IInspectable * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetXamlDirectObject )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */IInspectable * object,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlTypeIndex typeIndex,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetObjectProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [in] */IInspectable * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetXamlDirectObjectProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetBooleanProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [in] */boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *SetDoubleProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [in] */DOUBLE value
        );
    HRESULT ( STDMETHODCALLTYPE *SetInt32Property )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [in] */INT32 value
        );
    HRESULT ( STDMETHODCALLTYPE *SetStringProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [in] */HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *SetDateTimeProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPointProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint value
        );
    HRESULT ( STDMETHODCALLTYPE *SetRectProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect value
        );
    HRESULT ( STDMETHODCALLTYPE *SetSizeProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [in] */__x_ABI_CWindows_CFoundation_CSize value
        );
    HRESULT ( STDMETHODCALLTYPE *SetTimeSpanProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    HRESULT ( STDMETHODCALLTYPE *SetColorProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    HRESULT ( STDMETHODCALLTYPE *SetCornerRadiusProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [in] */__x_Microsoft_CUI_CXaml_CCornerRadius value
        );
    HRESULT ( STDMETHODCALLTYPE *SetDurationProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [in] */__x_Microsoft_CUI_CXaml_CDuration value
        );
    HRESULT ( STDMETHODCALLTYPE *SetGridLengthProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [in] */__x_Microsoft_CUI_CXaml_CGridLength value
        );
    HRESULT ( STDMETHODCALLTYPE *SetThicknessProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [in] */__x_Microsoft_CUI_CXaml_CThickness value
        );
    HRESULT ( STDMETHODCALLTYPE *SetMatrixProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [in] */__x_Microsoft_CUI_CXaml_CMedia_CMatrix value
        );
    HRESULT ( STDMETHODCALLTYPE *SetMatrix3DProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [in] */__x_Microsoft_CUI_CXaml_CMedia_CMedia3D_CMatrix3D value
        );
    HRESULT ( STDMETHODCALLTYPE *SetEnumProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [in] */UINT32 value
        );
    HRESULT ( STDMETHODCALLTYPE *GetObjectProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [retval, out] */IInspectable * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetXamlDirectObjectProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetBooleanProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [retval, out] */boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetDoubleProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [retval, out] */DOUBLE * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetInt32Property )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [retval, out] */INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetStringProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [retval, out] */HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetDateTimeProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CDateTime * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetPointProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CPoint * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetRectProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CRect * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetSizeProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CSize * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetTimeSpanProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CTimeSpan * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetColorProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetCornerRadiusProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CCornerRadius * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetDurationProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CDuration * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetGridLengthProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CGridLength * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetThicknessProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CThickness * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetMatrixProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CMedia_CMatrix * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetMatrix3DProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CMedia_CMedia3D_CMatrix3D * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetEnumProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex,
        /* [retval, out] */UINT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *ClearProperty )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlPropertyIndex propertyIndex
        );
    HRESULT ( STDMETHODCALLTYPE *GetCollectionCount )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [retval, out] */UINT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetXamlDirectObjectFromCollectionAt )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */UINT32 index,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * * result
        );
    HRESULT ( STDMETHODCALLTYPE *AddToCollection )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * value
        );
    HRESULT ( STDMETHODCALLTYPE *InsertIntoCollectionAt )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */UINT32 index,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * value
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveFromCollection )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * value,
        /* [retval, out] */boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveFromCollectionAt )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */UINT32 index
        );
    HRESULT ( STDMETHODCALLTYPE *ClearCollection )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject
        );
    /* [overload, default_overload] */HRESULT ( STDMETHODCALLTYPE *AddEventHandler )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlEventIndex eventIndex,
        /* [in] */IInspectable * handler
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddEventHandler_HandledEventsToo )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlEventIndex eventIndex,
        /* [in] */IInspectable * handler,
        /* [in] */boolean handledEventsToo
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveEventHandler )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * This,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * xamlDirectObject,
        /* [in] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CXamlEventIndex eventIndex,
        /* [in] */IInspectable * handler
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectVtbl;

interface __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_GetObject(This,xamlDirectObject,result) \
    ( (This)->lpVtbl->GetObject(This,xamlDirectObject,result) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_GetXamlDirectObject(This,object,result) \
    ( (This)->lpVtbl->GetXamlDirectObject(This,object,result) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_CreateInstance(This,typeIndex,result) \
    ( (This)->lpVtbl->CreateInstance(This,typeIndex,result) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_SetObjectProperty(This,xamlDirectObject,propertyIndex,value) \
    ( (This)->lpVtbl->SetObjectProperty(This,xamlDirectObject,propertyIndex,value) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_SetXamlDirectObjectProperty(This,xamlDirectObject,propertyIndex,value) \
    ( (This)->lpVtbl->SetXamlDirectObjectProperty(This,xamlDirectObject,propertyIndex,value) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_SetBooleanProperty(This,xamlDirectObject,propertyIndex,value) \
    ( (This)->lpVtbl->SetBooleanProperty(This,xamlDirectObject,propertyIndex,value) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_SetDoubleProperty(This,xamlDirectObject,propertyIndex,value) \
    ( (This)->lpVtbl->SetDoubleProperty(This,xamlDirectObject,propertyIndex,value) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_SetInt32Property(This,xamlDirectObject,propertyIndex,value) \
    ( (This)->lpVtbl->SetInt32Property(This,xamlDirectObject,propertyIndex,value) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_SetStringProperty(This,xamlDirectObject,propertyIndex,value) \
    ( (This)->lpVtbl->SetStringProperty(This,xamlDirectObject,propertyIndex,value) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_SetDateTimeProperty(This,xamlDirectObject,propertyIndex,value) \
    ( (This)->lpVtbl->SetDateTimeProperty(This,xamlDirectObject,propertyIndex,value) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_SetPointProperty(This,xamlDirectObject,propertyIndex,value) \
    ( (This)->lpVtbl->SetPointProperty(This,xamlDirectObject,propertyIndex,value) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_SetRectProperty(This,xamlDirectObject,propertyIndex,value) \
    ( (This)->lpVtbl->SetRectProperty(This,xamlDirectObject,propertyIndex,value) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_SetSizeProperty(This,xamlDirectObject,propertyIndex,value) \
    ( (This)->lpVtbl->SetSizeProperty(This,xamlDirectObject,propertyIndex,value) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_SetTimeSpanProperty(This,xamlDirectObject,propertyIndex,value) \
    ( (This)->lpVtbl->SetTimeSpanProperty(This,xamlDirectObject,propertyIndex,value) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_SetColorProperty(This,xamlDirectObject,propertyIndex,value) \
    ( (This)->lpVtbl->SetColorProperty(This,xamlDirectObject,propertyIndex,value) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_SetCornerRadiusProperty(This,xamlDirectObject,propertyIndex,value) \
    ( (This)->lpVtbl->SetCornerRadiusProperty(This,xamlDirectObject,propertyIndex,value) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_SetDurationProperty(This,xamlDirectObject,propertyIndex,value) \
    ( (This)->lpVtbl->SetDurationProperty(This,xamlDirectObject,propertyIndex,value) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_SetGridLengthProperty(This,xamlDirectObject,propertyIndex,value) \
    ( (This)->lpVtbl->SetGridLengthProperty(This,xamlDirectObject,propertyIndex,value) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_SetThicknessProperty(This,xamlDirectObject,propertyIndex,value) \
    ( (This)->lpVtbl->SetThicknessProperty(This,xamlDirectObject,propertyIndex,value) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_SetMatrixProperty(This,xamlDirectObject,propertyIndex,value) \
    ( (This)->lpVtbl->SetMatrixProperty(This,xamlDirectObject,propertyIndex,value) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_SetMatrix3DProperty(This,xamlDirectObject,propertyIndex,value) \
    ( (This)->lpVtbl->SetMatrix3DProperty(This,xamlDirectObject,propertyIndex,value) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_SetEnumProperty(This,xamlDirectObject,propertyIndex,value) \
    ( (This)->lpVtbl->SetEnumProperty(This,xamlDirectObject,propertyIndex,value) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_GetObjectProperty(This,xamlDirectObject,propertyIndex,result) \
    ( (This)->lpVtbl->GetObjectProperty(This,xamlDirectObject,propertyIndex,result) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_GetXamlDirectObjectProperty(This,xamlDirectObject,propertyIndex,result) \
    ( (This)->lpVtbl->GetXamlDirectObjectProperty(This,xamlDirectObject,propertyIndex,result) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_GetBooleanProperty(This,xamlDirectObject,propertyIndex,result) \
    ( (This)->lpVtbl->GetBooleanProperty(This,xamlDirectObject,propertyIndex,result) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_GetDoubleProperty(This,xamlDirectObject,propertyIndex,result) \
    ( (This)->lpVtbl->GetDoubleProperty(This,xamlDirectObject,propertyIndex,result) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_GetInt32Property(This,xamlDirectObject,propertyIndex,result) \
    ( (This)->lpVtbl->GetInt32Property(This,xamlDirectObject,propertyIndex,result) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_GetStringProperty(This,xamlDirectObject,propertyIndex,result) \
    ( (This)->lpVtbl->GetStringProperty(This,xamlDirectObject,propertyIndex,result) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_GetDateTimeProperty(This,xamlDirectObject,propertyIndex,result) \
    ( (This)->lpVtbl->GetDateTimeProperty(This,xamlDirectObject,propertyIndex,result) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_GetPointProperty(This,xamlDirectObject,propertyIndex,result) \
    ( (This)->lpVtbl->GetPointProperty(This,xamlDirectObject,propertyIndex,result) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_GetRectProperty(This,xamlDirectObject,propertyIndex,result) \
    ( (This)->lpVtbl->GetRectProperty(This,xamlDirectObject,propertyIndex,result) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_GetSizeProperty(This,xamlDirectObject,propertyIndex,result) \
    ( (This)->lpVtbl->GetSizeProperty(This,xamlDirectObject,propertyIndex,result) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_GetTimeSpanProperty(This,xamlDirectObject,propertyIndex,result) \
    ( (This)->lpVtbl->GetTimeSpanProperty(This,xamlDirectObject,propertyIndex,result) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_GetColorProperty(This,xamlDirectObject,propertyIndex,result) \
    ( (This)->lpVtbl->GetColorProperty(This,xamlDirectObject,propertyIndex,result) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_GetCornerRadiusProperty(This,xamlDirectObject,propertyIndex,result) \
    ( (This)->lpVtbl->GetCornerRadiusProperty(This,xamlDirectObject,propertyIndex,result) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_GetDurationProperty(This,xamlDirectObject,propertyIndex,result) \
    ( (This)->lpVtbl->GetDurationProperty(This,xamlDirectObject,propertyIndex,result) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_GetGridLengthProperty(This,xamlDirectObject,propertyIndex,result) \
    ( (This)->lpVtbl->GetGridLengthProperty(This,xamlDirectObject,propertyIndex,result) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_GetThicknessProperty(This,xamlDirectObject,propertyIndex,result) \
    ( (This)->lpVtbl->GetThicknessProperty(This,xamlDirectObject,propertyIndex,result) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_GetMatrixProperty(This,xamlDirectObject,propertyIndex,result) \
    ( (This)->lpVtbl->GetMatrixProperty(This,xamlDirectObject,propertyIndex,result) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_GetMatrix3DProperty(This,xamlDirectObject,propertyIndex,result) \
    ( (This)->lpVtbl->GetMatrix3DProperty(This,xamlDirectObject,propertyIndex,result) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_GetEnumProperty(This,xamlDirectObject,propertyIndex,result) \
    ( (This)->lpVtbl->GetEnumProperty(This,xamlDirectObject,propertyIndex,result) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_ClearProperty(This,xamlDirectObject,propertyIndex) \
    ( (This)->lpVtbl->ClearProperty(This,xamlDirectObject,propertyIndex) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_GetCollectionCount(This,xamlDirectObject,result) \
    ( (This)->lpVtbl->GetCollectionCount(This,xamlDirectObject,result) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_GetXamlDirectObjectFromCollectionAt(This,xamlDirectObject,index,result) \
    ( (This)->lpVtbl->GetXamlDirectObjectFromCollectionAt(This,xamlDirectObject,index,result) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_AddToCollection(This,xamlDirectObject,value) \
    ( (This)->lpVtbl->AddToCollection(This,xamlDirectObject,value) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_InsertIntoCollectionAt(This,xamlDirectObject,index,value) \
    ( (This)->lpVtbl->InsertIntoCollectionAt(This,xamlDirectObject,index,value) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_RemoveFromCollection(This,xamlDirectObject,value,result) \
    ( (This)->lpVtbl->RemoveFromCollection(This,xamlDirectObject,value,result) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_RemoveFromCollectionAt(This,xamlDirectObject,index) \
    ( (This)->lpVtbl->RemoveFromCollectionAt(This,xamlDirectObject,index) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_ClearCollection(This,xamlDirectObject) \
    ( (This)->lpVtbl->ClearCollection(This,xamlDirectObject) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_AddEventHandler(This,xamlDirectObject,eventIndex,handler) \
    ( (This)->lpVtbl->AddEventHandler(This,xamlDirectObject,eventIndex,handler) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_AddEventHandler_HandledEventsToo(This,xamlDirectObject,eventIndex,handler,handledEventsToo) \
    ( (This)->lpVtbl->AddEventHandler_HandledEventsToo(This,xamlDirectObject,eventIndex,handler,handledEventsToo) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_RemoveEventHandler(This,xamlDirectObject,eventIndex,handler) \
    ( (This)->lpVtbl->RemoveEventHandler(This,xamlDirectObject,eventIndex,handler) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Core.Direct.IXamlDirectObject
 *
 * Introduced to Microsoft.UI.Xaml.Core.Direct.XamlDirectContract in version 1.0
 *
 *
 */
#if MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Core_Direct_IXamlDirectObject[] = L"Microsoft.UI.Xaml.Core.Direct.IXamlDirectObject";
/* [object, uuid("F94D4EA9-E795-4425-A8C8-498990FCE9C7"), contract] */
typedef struct __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObjectVtbl;

interface __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObjectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectObject_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Xaml.Core.Direct.IXamlDirectStatics
 *
 * Introduced to Microsoft.UI.Xaml.Core.Direct.XamlDirectContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Core.Direct.XamlDirect
 *
 *
 */
#if MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Core_Direct_IXamlDirectStatics[] = L"Microsoft.UI.Xaml.Core.Direct.IXamlDirectStatics";
/* [object, uuid("D43D0831-1CC6-5D08-8D2C-20FC338E8545"), exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics * This,
        /* [retval, out] */__x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirect * * result
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStaticsVtbl;

interface __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics_GetDefault(This,result) \
    ( (This)->lpVtbl->GetDefault(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics;
#endif /* !defined(____x_Microsoft_CUI_CXaml_CCore_CDirect_CIXamlDirectStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Xaml.Core.Direct.XamlDirect
 *
 * Introduced to Microsoft.UI.Xaml.Core.Direct.XamlDirectContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Core.Direct.IXamlDirectStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.Core.Direct.XamlDirectContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Core.Direct.IXamlDirect ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Core_Direct_XamlDirect_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Core_Direct_XamlDirect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Core_Direct_XamlDirect[] = L"Microsoft.UI.Xaml.Core.Direct.XamlDirect";
#endif
#endif // MICROSOFT_UI_XAML_CORE_DIRECT_XAMLDIRECTCONTRACT_VERSION >= 0x10000






#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __Microsoft2EUI2EXaml2ECore2EDirect_p_h__

#endif // __Microsoft2EUI2EXaml2ECore2EDirect_h__
