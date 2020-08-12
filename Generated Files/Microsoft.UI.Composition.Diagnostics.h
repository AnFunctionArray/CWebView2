/* Header file automatically generated from Microsoft.UI.Composition.Diagnostics.idl */
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
#ifndef __Microsoft2EUI2EComposition2EDiagnostics_h__
#define __Microsoft2EUI2EComposition2EDiagnostics_h__
#ifndef __Microsoft2EUI2EComposition2EDiagnostics_p_h__
#define __Microsoft2EUI2EComposition2EDiagnostics_p_h__


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

#if !defined(MICROSOFT_UI_COMPOSITION_DIAGNOSTICS_LIFTEDCONTRACT_VERSION)
#define MICROSOFT_UI_COMPOSITION_DIAGNOSTICS_LIFTEDCONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_UI_COMPOSITION_DIAGNOSTICS_LIFTEDCONTRACT_VERSION)

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
#ifndef ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Diagnostics {
                interface ICompositionDebugHeatMaps;
            } /* Diagnostics */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps Microsoft::UI::Composition::Diagnostics::ICompositionDebugHeatMaps

#endif // ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Diagnostics {
                interface ICompositionDebugSettings;
            } /* Diagnostics */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings Microsoft::UI::Composition::Diagnostics::ICompositionDebugSettings

#endif // ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_FWD_DEFINED__

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Diagnostics {
                interface ICompositionDebugSettingsStatics;
            } /* Diagnostics */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics Microsoft::UI::Composition::Diagnostics::ICompositionDebugSettingsStatics

#endif // ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_FWD_DEFINED__



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
            namespace Diagnostics {
                
                typedef enum CompositionDebugOverdrawContentKinds : unsigned int CompositionDebugOverdrawContentKinds;
                
            } /* Diagnostics */
        } /* Composition */
    } /* UI */
} /* Microsoft */





namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Diagnostics {
                class CompositionDebugHeatMaps;
            } /* Diagnostics */
        } /* Composition */
    } /* UI */
} /* Microsoft */



namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Diagnostics {
                class CompositionDebugSettings;
            } /* Diagnostics */
        } /* Composition */
    } /* UI */
} /* Microsoft */








/*
 *
 * Struct Microsoft.UI.Composition.Diagnostics.CompositionDebugOverdrawContentKinds
 *
 * Introduced to Microsoft.UI.Composition.Diagnostics.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */

#if MICROSOFT_UI_COMPOSITION_DIAGNOSTICS_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Diagnostics {
                /* [v1_enum, flags, experimental, contract] */
                enum CompositionDebugOverdrawContentKinds : unsigned int
                {
                    CompositionDebugOverdrawContentKinds_None = 0,
                    CompositionDebugOverdrawContentKinds_OffscreenRendered = 0x1,
                    CompositionDebugOverdrawContentKinds_Colors = 0x2,
                    CompositionDebugOverdrawContentKinds_Effects = 0x4,
                    CompositionDebugOverdrawContentKinds_Shadows = 0x8,
                    CompositionDebugOverdrawContentKinds_Lights = 0x10,
                    CompositionDebugOverdrawContentKinds_Surfaces = 0x20,
                    CompositionDebugOverdrawContentKinds_SwapChains = 0x40,
                    CompositionDebugOverdrawContentKinds_All = 0xffffffff,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(CompositionDebugOverdrawContentKinds)
                
            } /* Diagnostics */
        } /* Composition */
    } /* UI */
} /* Microsoft */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_DIAGNOSTICS_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Diagnostics.ICompositionDebugHeatMaps
 *
 * Introduced to Microsoft.UI.Composition.Diagnostics.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Diagnostics.CompositionDebugHeatMaps
 *
 *
 */
#if MICROSOFT_UI_COMPOSITION_DIAGNOSTICS_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Diagnostics_ICompositionDebugHeatMaps[] = L"Microsoft.UI.Composition.Diagnostics.ICompositionDebugHeatMaps";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Diagnostics {
                /* [object, uuid("815016B8-F645-5C55-87B5-FE2167282B6F"), experimental, exclusiveto, contract] */
                MIDL_INTERFACE("815016B8-F645-5C55-87B5-FE2167282B6F")
                ICompositionDebugHeatMaps : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Hide(
                        /* [in] */Microsoft::UI::Composition::IVisual * subtree
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ShowMemoryUsage(
                        /* [in] */Microsoft::UI::Composition::IVisual * subtree
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ShowOverdraw(
                        /* [in] */Microsoft::UI::Composition::IVisual * subtree,
                        /* [in] */Microsoft::UI::Composition::Diagnostics::CompositionDebugOverdrawContentKinds contentKinds
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ShowRedraw(
                        /* [in] */Microsoft::UI::Composition::IVisual * subtree
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICompositionDebugHeatMaps=_uuidof(ICompositionDebugHeatMaps);
                
            } /* Diagnostics */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_DIAGNOSTICS_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Diagnostics.ICompositionDebugSettings
 *
 * Introduced to Microsoft.UI.Composition.Diagnostics.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Diagnostics.CompositionDebugSettings
 *
 *
 */
#if MICROSOFT_UI_COMPOSITION_DIAGNOSTICS_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Diagnostics_ICompositionDebugSettings[] = L"Microsoft.UI.Composition.Diagnostics.ICompositionDebugSettings";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Diagnostics {
                /* [object, uuid("F4C0C0F6-7F5F-5014-A0D6-C8C7EEECACE6"), experimental, exclusiveto, contract] */
                MIDL_INTERFACE("F4C0C0F6-7F5F-5014-A0D6-C8C7EEECACE6")
                ICompositionDebugSettings : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HeatMaps(
                        /* [retval, out] */Microsoft::UI::Composition::Diagnostics::ICompositionDebugHeatMaps * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICompositionDebugSettings=_uuidof(ICompositionDebugSettings);
                
            } /* Diagnostics */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_DIAGNOSTICS_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Diagnostics.ICompositionDebugSettingsStatics
 *
 * Introduced to Microsoft.UI.Composition.Diagnostics.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Diagnostics.CompositionDebugSettings
 *
 *
 */
#if MICROSOFT_UI_COMPOSITION_DIAGNOSTICS_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Diagnostics_ICompositionDebugSettingsStatics[] = L"Microsoft.UI.Composition.Diagnostics.ICompositionDebugSettingsStatics";

namespace Microsoft {
    namespace UI {
        namespace Composition {
            namespace Diagnostics {
                /* [object, uuid("B56F8AAB-2B8C-51AA-B974-10E5C517F50E"), experimental, exclusiveto, contract] */
                MIDL_INTERFACE("B56F8AAB-2B8C-51AA-B974-10E5C517F50E")
                ICompositionDebugSettingsStatics : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE TryGetSettings(
                        /* [in] */Microsoft::UI::Composition::ICompositor * compositor,
                        /* [retval, out] */Microsoft::UI::Composition::Diagnostics::ICompositionDebugSettings * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICompositionDebugSettingsStatics=_uuidof(ICompositionDebugSettingsStatics);
                
            } /* Diagnostics */
        } /* Composition */
    } /* UI */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_DIAGNOSTICS_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Diagnostics.CompositionDebugHeatMaps
 *
 * Introduced to Microsoft.UI.Composition.Diagnostics.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Diagnostics.ICompositionDebugHeatMaps ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_COMPOSITION_DIAGNOSTICS_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Diagnostics_CompositionDebugHeatMaps_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Diagnostics_CompositionDebugHeatMaps_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Diagnostics_CompositionDebugHeatMaps[] = L"Microsoft.UI.Composition.Diagnostics.CompositionDebugHeatMaps";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_DIAGNOSTICS_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Diagnostics.CompositionDebugSettings
 *
 * Introduced to Microsoft.UI.Composition.Diagnostics.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Composition.Diagnostics.ICompositionDebugSettingsStatics interface starting with version 1.0 of the Microsoft.UI.Composition.Diagnostics.LiftedContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Diagnostics.ICompositionDebugSettings ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_COMPOSITION_DIAGNOSTICS_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Diagnostics_CompositionDebugSettings_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Diagnostics_CompositionDebugSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Diagnostics_CompositionDebugSettings[] = L"Microsoft.UI.Composition.Diagnostics.CompositionDebugSettings";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_DIAGNOSTICS_LIFTEDCONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps;

#endif // ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings;

#endif // ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics;

#endif // ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CUI_CComposition_CICompositor_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CICompositor_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CICompositor __x_Microsoft_CUI_CComposition_CICompositor;

#endif // ____x_Microsoft_CUI_CComposition_CICompositor_FWD_DEFINED__


#ifndef ____x_Microsoft_CUI_CComposition_CIVisual_FWD_DEFINED__
#define ____x_Microsoft_CUI_CComposition_CIVisual_FWD_DEFINED__
typedef interface __x_Microsoft_CUI_CComposition_CIVisual __x_Microsoft_CUI_CComposition_CIVisual;

#endif // ____x_Microsoft_CUI_CComposition_CIVisual_FWD_DEFINED__







typedef enum __x_Microsoft_CUI_CComposition_CDiagnostics_CCompositionDebugOverdrawContentKinds __x_Microsoft_CUI_CComposition_CDiagnostics_CCompositionDebugOverdrawContentKinds;












/*
 *
 * Struct Microsoft.UI.Composition.Diagnostics.CompositionDebugOverdrawContentKinds
 *
 * Introduced to Microsoft.UI.Composition.Diagnostics.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */

#if MICROSOFT_UI_COMPOSITION_DIAGNOSTICS_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
/* [v1_enum, flags, experimental, contract] */
enum __x_Microsoft_CUI_CComposition_CDiagnostics_CCompositionDebugOverdrawContentKinds
{
    Microsoft_UI_Composition_Diagnostics_CompositionDebugOverdrawContentKinds_None = 0,
    Microsoft_UI_Composition_Diagnostics_CompositionDebugOverdrawContentKinds_OffscreenRendered = 0x1,
    Microsoft_UI_Composition_Diagnostics_CompositionDebugOverdrawContentKinds_Colors = 0x2,
    Microsoft_UI_Composition_Diagnostics_CompositionDebugOverdrawContentKinds_Effects = 0x4,
    Microsoft_UI_Composition_Diagnostics_CompositionDebugOverdrawContentKinds_Shadows = 0x8,
    Microsoft_UI_Composition_Diagnostics_CompositionDebugOverdrawContentKinds_Lights = 0x10,
    Microsoft_UI_Composition_Diagnostics_CompositionDebugOverdrawContentKinds_Surfaces = 0x20,
    Microsoft_UI_Composition_Diagnostics_CompositionDebugOverdrawContentKinds_SwapChains = 0x40,
    Microsoft_UI_Composition_Diagnostics_CompositionDebugOverdrawContentKinds_All = 0xffffffff,
};
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_DIAGNOSTICS_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Diagnostics.ICompositionDebugHeatMaps
 *
 * Introduced to Microsoft.UI.Composition.Diagnostics.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Diagnostics.CompositionDebugHeatMaps
 *
 *
 */
#if MICROSOFT_UI_COMPOSITION_DIAGNOSTICS_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Diagnostics_ICompositionDebugHeatMaps[] = L"Microsoft.UI.Composition.Diagnostics.ICompositionDebugHeatMaps";
/* [object, uuid("815016B8-F645-5C55-87B5-FE2167282B6F"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMapsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Hide )(
        __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CIVisual * subtree
        );
    HRESULT ( STDMETHODCALLTYPE *ShowMemoryUsage )(
        __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CIVisual * subtree
        );
    HRESULT ( STDMETHODCALLTYPE *ShowOverdraw )(
        __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CIVisual * subtree,
        /* [in] */__x_Microsoft_CUI_CComposition_CDiagnostics_CCompositionDebugOverdrawContentKinds contentKinds
        );
    HRESULT ( STDMETHODCALLTYPE *ShowRedraw )(
        __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CIVisual * subtree
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMapsVtbl;

interface __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMapsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_Hide(This,subtree) \
    ( (This)->lpVtbl->Hide(This,subtree) )

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_ShowMemoryUsage(This,subtree) \
    ( (This)->lpVtbl->ShowMemoryUsage(This,subtree) )

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_ShowOverdraw(This,subtree,contentKinds) \
    ( (This)->lpVtbl->ShowOverdraw(This,subtree,contentKinds) )

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_ShowRedraw(This,subtree) \
    ( (This)->lpVtbl->ShowRedraw(This,subtree) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_DIAGNOSTICS_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Diagnostics.ICompositionDebugSettings
 *
 * Introduced to Microsoft.UI.Composition.Diagnostics.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Diagnostics.CompositionDebugSettings
 *
 *
 */
#if MICROSOFT_UI_COMPOSITION_DIAGNOSTICS_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Diagnostics_ICompositionDebugSettings[] = L"Microsoft.UI.Composition.Diagnostics.ICompositionDebugSettings";
/* [object, uuid("F4C0C0F6-7F5F-5014-A0D6-C8C7EEECACE6"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HeatMaps )(
        __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings * This,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * * value
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsVtbl;

interface __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_get_HeatMaps(This,value) \
    ( (This)->lpVtbl->get_HeatMaps(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_DIAGNOSTICS_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.Composition.Diagnostics.ICompositionDebugSettingsStatics
 *
 * Introduced to Microsoft.UI.Composition.Diagnostics.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.Composition.Diagnostics.CompositionDebugSettings
 *
 *
 */
#if MICROSOFT_UI_COMPOSITION_DIAGNOSTICS_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Composition_Diagnostics_ICompositionDebugSettingsStatics[] = L"Microsoft.UI.Composition.Diagnostics.ICompositionDebugSettingsStatics";
/* [object, uuid("B56F8AAB-2B8C-51AA-B974-10E5C517F50E"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryGetSettings )(
        __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics * This,
        /* [in] */__x_Microsoft_CUI_CComposition_CICompositor * compositor,
        /* [retval, out] */__x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettings * * result
        );
    END_INTERFACE
    
} __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStaticsVtbl;

interface __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics
{
    CONST_VTBL struct __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_TryGetSettings(This,compositor,result) \
    ( (This)->lpVtbl->TryGetSettings(This,compositor,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics;
#endif /* !defined(____x_Microsoft_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_DIAGNOSTICS_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Diagnostics.CompositionDebugHeatMaps
 *
 * Introduced to Microsoft.UI.Composition.Diagnostics.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Diagnostics.ICompositionDebugHeatMaps ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_COMPOSITION_DIAGNOSTICS_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Diagnostics_CompositionDebugHeatMaps_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Diagnostics_CompositionDebugHeatMaps_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Diagnostics_CompositionDebugHeatMaps[] = L"Microsoft.UI.Composition.Diagnostics.CompositionDebugHeatMaps";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_DIAGNOSTICS_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Composition.Diagnostics.CompositionDebugSettings
 *
 * Introduced to Microsoft.UI.Composition.Diagnostics.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Composition.Diagnostics.ICompositionDebugSettingsStatics interface starting with version 1.0 of the Microsoft.UI.Composition.Diagnostics.LiftedContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Composition.Diagnostics.ICompositionDebugSettings ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_COMPOSITION_DIAGNOSTICS_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_Composition_Diagnostics_CompositionDebugSettings_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Composition_Diagnostics_CompositionDebugSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Composition_Diagnostics_CompositionDebugSettings[] = L"Microsoft.UI.Composition.Diagnostics.CompositionDebugSettings";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_COMPOSITION_DIAGNOSTICS_LIFTEDCONTRACT_VERSION >= 0x10000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __Microsoft2EUI2EComposition2EDiagnostics_p_h__

#endif // __Microsoft2EUI2EComposition2EDiagnostics_h__
