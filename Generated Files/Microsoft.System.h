/* Header file automatically generated from Microsoft.System.idl */
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
#ifndef __Microsoft2ESystem_h__
#define __Microsoft2ESystem_h__
#ifndef __Microsoft2ESystem_p_h__
#define __Microsoft2ESystem_p_h__


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
#if !defined(MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION)
#define MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION)

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
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_Microsoft_CSystem_CIDispatcherQueueHandler_FWD_DEFINED__
#define ____x_Microsoft_CSystem_CIDispatcherQueueHandler_FWD_DEFINED__

namespace Microsoft {
    namespace System {
        interface IDispatcherQueueHandler;
    } /* System */
} /* Microsoft */
#define __x_Microsoft_CSystem_CIDispatcherQueueHandler Microsoft::System::IDispatcherQueueHandler

#endif // ____x_Microsoft_CSystem_CIDispatcherQueueHandler_FWD_DEFINED__

#ifndef ____x_Microsoft_CSystem_CIDispatcherQueue_FWD_DEFINED__
#define ____x_Microsoft_CSystem_CIDispatcherQueue_FWD_DEFINED__

namespace Microsoft {
    namespace System {
        interface IDispatcherQueue;
    } /* System */
} /* Microsoft */
#define __x_Microsoft_CSystem_CIDispatcherQueue Microsoft::System::IDispatcherQueue

#endif // ____x_Microsoft_CSystem_CIDispatcherQueue_FWD_DEFINED__

#ifndef ____x_Microsoft_CSystem_CIDispatcherQueue2_FWD_DEFINED__
#define ____x_Microsoft_CSystem_CIDispatcherQueue2_FWD_DEFINED__

namespace Microsoft {
    namespace System {
        interface IDispatcherQueue2;
    } /* System */
} /* Microsoft */
#define __x_Microsoft_CSystem_CIDispatcherQueue2 Microsoft::System::IDispatcherQueue2

#endif // ____x_Microsoft_CSystem_CIDispatcherQueue2_FWD_DEFINED__

#ifndef ____x_Microsoft_CSystem_CIDispatcherQueueController_FWD_DEFINED__
#define ____x_Microsoft_CSystem_CIDispatcherQueueController_FWD_DEFINED__

namespace Microsoft {
    namespace System {
        interface IDispatcherQueueController;
    } /* System */
} /* Microsoft */
#define __x_Microsoft_CSystem_CIDispatcherQueueController Microsoft::System::IDispatcherQueueController

#endif // ____x_Microsoft_CSystem_CIDispatcherQueueController_FWD_DEFINED__

#ifndef ____x_Microsoft_CSystem_CIDispatcherQueueControllerStatics_FWD_DEFINED__
#define ____x_Microsoft_CSystem_CIDispatcherQueueControllerStatics_FWD_DEFINED__

namespace Microsoft {
    namespace System {
        interface IDispatcherQueueControllerStatics;
    } /* System */
} /* Microsoft */
#define __x_Microsoft_CSystem_CIDispatcherQueueControllerStatics Microsoft::System::IDispatcherQueueControllerStatics

#endif // ____x_Microsoft_CSystem_CIDispatcherQueueControllerStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs_FWD_DEFINED__
#define ____x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs_FWD_DEFINED__

namespace Microsoft {
    namespace System {
        interface IDispatcherQueueShutdownStartingEventArgs;
    } /* System */
} /* Microsoft */
#define __x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs Microsoft::System::IDispatcherQueueShutdownStartingEventArgs

#endif // ____x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs_FWD_DEFINED__

#ifndef ____x_Microsoft_CSystem_CIDispatcherQueueStatics_FWD_DEFINED__
#define ____x_Microsoft_CSystem_CIDispatcherQueueStatics_FWD_DEFINED__

namespace Microsoft {
    namespace System {
        interface IDispatcherQueueStatics;
    } /* System */
} /* Microsoft */
#define __x_Microsoft_CSystem_CIDispatcherQueueStatics Microsoft::System::IDispatcherQueueStatics

#endif // ____x_Microsoft_CSystem_CIDispatcherQueueStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CSystem_CIDispatcherQueueTimer_FWD_DEFINED__
#define ____x_Microsoft_CSystem_CIDispatcherQueueTimer_FWD_DEFINED__

namespace Microsoft {
    namespace System {
        interface IDispatcherQueueTimer;
    } /* System */
} /* Microsoft */
#define __x_Microsoft_CSystem_CIDispatcherQueueTimer Microsoft::System::IDispatcherQueueTimer

#endif // ____x_Microsoft_CSystem_CIDispatcherQueueTimer_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions

namespace Microsoft {
    namespace System {
        class DispatcherQueue;
    } /* System */
} /* Microsoft */



#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef DEF___FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_IInspectable_USE
#define DEF___FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a547cffc-aabb-5756-ac78-86afbf041f2f"))
ITypedEventHandler<Microsoft::System::DispatcherQueue*,IInspectable*> : ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Microsoft::System::DispatcherQueue*, Microsoft::System::IDispatcherQueue*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.System.DispatcherQueue, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<Microsoft::System::DispatcherQueue*,IInspectable*> __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_IInspectable_t;
#define __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_IInspectable Windows::Foundation::__FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_IInspectable_t
/* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_IInspectable Windows::Foundation::ITypedEventHandler<Microsoft::System::IDispatcherQueue*,IInspectable*>
//#define __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_IInspectable_t Windows::Foundation::ITypedEventHandler<Microsoft::System::IDispatcherQueue*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_IInspectable_USE */


#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000



namespace Microsoft {
    namespace System {
        class DispatcherQueueShutdownStartingEventArgs;
    } /* System */
} /* Microsoft */


#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef DEF___FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_Microsoft__CSystem__CDispatcherQueueShutdownStartingEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_Microsoft__CSystem__CDispatcherQueueShutdownStartingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("69874939-0b00-5a6d-9d81-dba7c0c178f1"))
ITypedEventHandler<Microsoft::System::DispatcherQueue*,Microsoft::System::DispatcherQueueShutdownStartingEventArgs*> : ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Microsoft::System::DispatcherQueue*, Microsoft::System::IDispatcherQueue*>,Windows::Foundation::Internal::AggregateType<Microsoft::System::DispatcherQueueShutdownStartingEventArgs*, Microsoft::System::IDispatcherQueueShutdownStartingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.System.DispatcherQueue, Microsoft.System.DispatcherQueueShutdownStartingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<Microsoft::System::DispatcherQueue*,Microsoft::System::DispatcherQueueShutdownStartingEventArgs*> __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_Microsoft__CSystem__CDispatcherQueueShutdownStartingEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_Microsoft__CSystem__CDispatcherQueueShutdownStartingEventArgs Windows::Foundation::__FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_Microsoft__CSystem__CDispatcherQueueShutdownStartingEventArgs_t
/* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_Microsoft__CSystem__CDispatcherQueueShutdownStartingEventArgs Windows::Foundation::ITypedEventHandler<Microsoft::System::IDispatcherQueue*,Microsoft::System::IDispatcherQueueShutdownStartingEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_Microsoft__CSystem__CDispatcherQueueShutdownStartingEventArgs_t Windows::Foundation::ITypedEventHandler<Microsoft::System::IDispatcherQueue*,Microsoft::System::IDispatcherQueueShutdownStartingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_Microsoft__CSystem__CDispatcherQueueShutdownStartingEventArgs_USE */


#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000


namespace Microsoft {
    namespace System {
        class DispatcherQueueTimer;
    } /* System */
} /* Microsoft */



#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef DEF___FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueueTimer_IInspectable_USE
#define DEF___FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueueTimer_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("84514068-9723-583c-8afe-20cc4d64fc56"))
ITypedEventHandler<Microsoft::System::DispatcherQueueTimer*,IInspectable*> : ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Microsoft::System::DispatcherQueueTimer*, Microsoft::System::IDispatcherQueueTimer*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.System.DispatcherQueueTimer, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<Microsoft::System::DispatcherQueueTimer*,IInspectable*> __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueueTimer_IInspectable_t;
#define __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueueTimer_IInspectable Windows::Foundation::__FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueueTimer_IInspectable_t
/* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueueTimer_IInspectable Windows::Foundation::ITypedEventHandler<Microsoft::System::IDispatcherQueueTimer*,IInspectable*>
//#define __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueueTimer_IInspectable_t Windows::Foundation::ITypedEventHandler<Microsoft::System::IDispatcherQueueTimer*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueueTimer_IInspectable_USE */


#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000





namespace Microsoft {
    namespace System {
        
        typedef enum DispatcherQueuePriority : int DispatcherQueuePriority;
        
    } /* System */
} /* Microsoft */











namespace Microsoft {
    namespace System {
        class DispatcherQueueController;
    } /* System */
} /* Microsoft */











/*
 *
 * Struct Microsoft.System.DispatcherQueuePriority
 *
 * Introduced to Microsoft.System.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */

#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

namespace Microsoft {
    namespace System {
        /* [v1_enum, experimental, contract] */
        enum DispatcherQueuePriority : int
        {
            DispatcherQueuePriority_Low = -10,
            DispatcherQueuePriority_Normal = 0,
            DispatcherQueuePriority_High = 10,
        };
        
    } /* System */
} /* Microsoft */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Microsoft.System.DispatcherQueueHandler
 *
 * Introduced to Microsoft.System.LiftedContract in version 1.0
 *
 *
 */
#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CSystem_CIDispatcherQueueHandler_INTERFACE_DEFINED__)
#define ____x_Microsoft_CSystem_CIDispatcherQueueHandler_INTERFACE_DEFINED__

namespace Microsoft {
    namespace System {
        /* [object, uuid("12C37105-AC93-5BEB-98FF-0D010DB18E21"), contract] */
        MIDL_INTERFACE("12C37105-AC93-5BEB-98FF-0D010DB18E21")
        IDispatcherQueueHandler : public IUnknown
        {
        public:
            virtual HRESULT STDMETHODCALLTYPE Invoke(void) = 0;
            
        };

        extern MIDL_CONST_ID IID & IID_IDispatcherQueueHandler=_uuidof(IDispatcherQueueHandler);
        
    } /* System */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CSystem_CIDispatcherQueueHandler;
#endif /* !defined(____x_Microsoft_CSystem_CIDispatcherQueueHandler_INTERFACE_DEFINED__) */
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.System.IDispatcherQueue
 *
 * Introduced to Microsoft.System.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.System.DispatcherQueue
 *
 *
 */
#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CSystem_CIDispatcherQueue_INTERFACE_DEFINED__)
#define ____x_Microsoft_CSystem_CIDispatcherQueue_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_System_IDispatcherQueue[] = L"Microsoft.System.IDispatcherQueue";

namespace Microsoft {
    namespace System {
        /* [object, uuid("02FE405F-96CF-5B1C-8413-3AC2C2D7C264"), experimental, exclusiveto, contract] */
        MIDL_INTERFACE("02FE405F-96CF-5B1C-8413-3AC2C2D7C264")
        IDispatcherQueue : public IInspectable
        {
        public:
            virtual HRESULT STDMETHODCALLTYPE CreateTimer(
                /* [retval, out] */Microsoft::System::IDispatcherQueueTimer * * result
                ) = 0;
            /* [overload] */virtual HRESULT STDMETHODCALLTYPE TryEnqueue(
                /* [in] */Microsoft::System::IDispatcherQueueHandler  * callback,
                /* [retval, out] */::boolean * result
                ) = 0;
            /* [overload] */virtual HRESULT STDMETHODCALLTYPE TryEnqueueWithPriority(
                /* [in] */Microsoft::System::DispatcherQueuePriority priority,
                /* [in] */Microsoft::System::IDispatcherQueueHandler  * callback,
                /* [retval, out] */::boolean * result
                ) = 0;
            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ShutdownStarting(
                /* [in] */__FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_Microsoft__CSystem__CDispatcherQueueShutdownStartingEventArgs * handler,
                /* [retval, out] */EventRegistrationToken * token
                ) = 0;
            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ShutdownStarting(
                /* [in] */EventRegistrationToken token
                ) = 0;
            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ShutdownCompleted(
                /* [in] */__FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_IInspectable * handler,
                /* [retval, out] */EventRegistrationToken * token
                ) = 0;
            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ShutdownCompleted(
                /* [in] */EventRegistrationToken token
                ) = 0;
            
        };

        extern MIDL_CONST_ID IID & IID_IDispatcherQueue=_uuidof(IDispatcherQueue);
        
    } /* System */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CSystem_CIDispatcherQueue;
#endif /* !defined(____x_Microsoft_CSystem_CIDispatcherQueue_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.System.IDispatcherQueue2
 *
 * Introduced to Microsoft.System.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.System.DispatcherQueue
 *
 *
 */
#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CSystem_CIDispatcherQueue2_INTERFACE_DEFINED__)
#define ____x_Microsoft_CSystem_CIDispatcherQueue2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_System_IDispatcherQueue2[] = L"Microsoft.System.IDispatcherQueue2";

namespace Microsoft {
    namespace System {
        /* [object, uuid("628F432E-6697-5026-8432-185BF55F1524"), experimental, exclusiveto, contract] */
        MIDL_INTERFACE("628F432E-6697-5026-8432-185BF55F1524")
        IDispatcherQueue2 : public IInspectable
        {
        public:
            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasThreadAccess(
                /* [retval, out] */::boolean * value
                ) = 0;
            
        };

        extern MIDL_CONST_ID IID & IID_IDispatcherQueue2=_uuidof(IDispatcherQueue2);
        
    } /* System */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CSystem_CIDispatcherQueue2;
#endif /* !defined(____x_Microsoft_CSystem_CIDispatcherQueue2_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.System.IDispatcherQueueController
 *
 * Introduced to Microsoft.System.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.System.DispatcherQueueController
 *
 *
 */
#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CSystem_CIDispatcherQueueController_INTERFACE_DEFINED__)
#define ____x_Microsoft_CSystem_CIDispatcherQueueController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_System_IDispatcherQueueController[] = L"Microsoft.System.IDispatcherQueueController";

namespace Microsoft {
    namespace System {
        /* [object, uuid("CD77F174-B93B-5B26-BA6C-2E5D6EE81C5C"), experimental, exclusiveto, contract] */
        MIDL_INTERFACE("CD77F174-B93B-5B26-BA6C-2E5D6EE81C5C")
        IDispatcherQueueController : public IInspectable
        {
        public:
            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DispatcherQueue(
                /* [retval, out] */Microsoft::System::IDispatcherQueue * * value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE ShutdownQueueAsync(
                /* [retval, out] */Windows::Foundation::IAsyncAction * * operation
                ) = 0;
            
        };

        extern MIDL_CONST_ID IID & IID_IDispatcherQueueController=_uuidof(IDispatcherQueueController);
        
    } /* System */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CSystem_CIDispatcherQueueController;
#endif /* !defined(____x_Microsoft_CSystem_CIDispatcherQueueController_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.System.IDispatcherQueueControllerStatics
 *
 * Introduced to Microsoft.System.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.System.DispatcherQueueController
 *
 *
 */
#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CSystem_CIDispatcherQueueControllerStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CSystem_CIDispatcherQueueControllerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_System_IDispatcherQueueControllerStatics[] = L"Microsoft.System.IDispatcherQueueControllerStatics";

namespace Microsoft {
    namespace System {
        /* [object, uuid("1776A6FD-CB56-5553-9381-E3E0F0DDB647"), experimental, exclusiveto, contract] */
        MIDL_INTERFACE("1776A6FD-CB56-5553-9381-E3E0F0DDB647")
        IDispatcherQueueControllerStatics : public IInspectable
        {
        public:
            virtual HRESULT STDMETHODCALLTYPE CreateOnDedicatedThread(
                /* [retval, out] */Microsoft::System::IDispatcherQueueController * * result
                ) = 0;
            
        };

        extern MIDL_CONST_ID IID & IID_IDispatcherQueueControllerStatics=_uuidof(IDispatcherQueueControllerStatics);
        
    } /* System */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CSystem_CIDispatcherQueueControllerStatics;
#endif /* !defined(____x_Microsoft_CSystem_CIDispatcherQueueControllerStatics_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.System.IDispatcherQueueShutdownStartingEventArgs
 *
 * Introduced to Microsoft.System.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.System.DispatcherQueueShutdownStartingEventArgs
 *
 *
 */
#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs_INTERFACE_DEFINED__)
#define ____x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_System_IDispatcherQueueShutdownStartingEventArgs[] = L"Microsoft.System.IDispatcherQueueShutdownStartingEventArgs";

namespace Microsoft {
    namespace System {
        /* [object, uuid("B0A4EA8B-AD6C-5DEF-8546-1541E5112E94"), experimental, exclusiveto, contract] */
        MIDL_INTERFACE("B0A4EA8B-AD6C-5DEF-8546-1541E5112E94")
        IDispatcherQueueShutdownStartingEventArgs : public IInspectable
        {
        public:
            virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                /* [retval, out] */Windows::Foundation::IDeferral * * result
                ) = 0;
            
        };

        extern MIDL_CONST_ID IID & IID_IDispatcherQueueShutdownStartingEventArgs=_uuidof(IDispatcherQueueShutdownStartingEventArgs);
        
    } /* System */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs;
#endif /* !defined(____x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.System.IDispatcherQueueStatics
 *
 * Introduced to Microsoft.System.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.System.DispatcherQueue
 *
 *
 */
#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CSystem_CIDispatcherQueueStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CSystem_CIDispatcherQueueStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_System_IDispatcherQueueStatics[] = L"Microsoft.System.IDispatcherQueueStatics";

namespace Microsoft {
    namespace System {
        /* [object, uuid("B5417ADD-2B64-5293-AE6D-AEE24CC0FC2A"), experimental, exclusiveto, contract] */
        MIDL_INTERFACE("B5417ADD-2B64-5293-AE6D-AEE24CC0FC2A")
        IDispatcherQueueStatics : public IInspectable
        {
        public:
            virtual HRESULT STDMETHODCALLTYPE GetForCurrentThread(
                /* [retval, out] */Microsoft::System::IDispatcherQueue * * result
                ) = 0;
            
        };

        extern MIDL_CONST_ID IID & IID_IDispatcherQueueStatics=_uuidof(IDispatcherQueueStatics);
        
    } /* System */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CSystem_CIDispatcherQueueStatics;
#endif /* !defined(____x_Microsoft_CSystem_CIDispatcherQueueStatics_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.System.IDispatcherQueueTimer
 *
 * Introduced to Microsoft.System.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.System.DispatcherQueueTimer
 *
 *
 */
#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CSystem_CIDispatcherQueueTimer_INTERFACE_DEFINED__)
#define ____x_Microsoft_CSystem_CIDispatcherQueueTimer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_System_IDispatcherQueueTimer[] = L"Microsoft.System.IDispatcherQueueTimer";

namespace Microsoft {
    namespace System {
        /* [object, uuid("30357864-57C6-59A0-B7B1-EF7177D47D4D"), experimental, exclusiveto, contract] */
        MIDL_INTERFACE("30357864-57C6-59A0-B7B1-EF7177D47D4D")
        IDispatcherQueueTimer : public IInspectable
        {
        public:
            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Interval(
                /* [retval, out] */Windows::Foundation::TimeSpan * value
                ) = 0;
            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Interval(
                /* [in] */Windows::Foundation::TimeSpan value
                ) = 0;
            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsRunning(
                /* [retval, out] */::boolean * value
                ) = 0;
            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsRepeating(
                /* [retval, out] */::boolean * value
                ) = 0;
            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsRepeating(
                /* [in] */::boolean value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE Start(void) = 0;
            virtual HRESULT STDMETHODCALLTYPE Stop(void) = 0;
            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Tick(
                /* [in] */__FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueueTimer_IInspectable * handler,
                /* [retval, out] */EventRegistrationToken * token
                ) = 0;
            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Tick(
                /* [in] */EventRegistrationToken token
                ) = 0;
            
        };

        extern MIDL_CONST_ID IID & IID_IDispatcherQueueTimer=_uuidof(IDispatcherQueueTimer);
        
    } /* System */
} /* Microsoft */

EXTERN_C const IID IID___x_Microsoft_CSystem_CIDispatcherQueueTimer;
#endif /* !defined(____x_Microsoft_CSystem_CIDispatcherQueueTimer_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.System.DispatcherQueue
 *
 * Introduced to Microsoft.System.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.System.IDispatcherQueueStatics interface starting with version 1.0 of the Microsoft.System.LiftedContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.System.IDispatcherQueue ** Default Interface **
 *    Microsoft.System.IDispatcherQueue2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_System_DispatcherQueue_DEFINED
#define RUNTIMECLASS_Microsoft_System_DispatcherQueue_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_System_DispatcherQueue[] = L"Microsoft.System.DispatcherQueue";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.System.DispatcherQueueController
 *
 * Introduced to Microsoft.System.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.System.IDispatcherQueueControllerStatics interface starting with version 1.0 of the Microsoft.System.LiftedContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.System.IDispatcherQueueController ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_System_DispatcherQueueController_DEFINED
#define RUNTIMECLASS_Microsoft_System_DispatcherQueueController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_System_DispatcherQueueController[] = L"Microsoft.System.DispatcherQueueController";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.System.DispatcherQueueShutdownStartingEventArgs
 *
 * Introduced to Microsoft.System.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.System.IDispatcherQueueShutdownStartingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_System_DispatcherQueueShutdownStartingEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_System_DispatcherQueueShutdownStartingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_System_DispatcherQueueShutdownStartingEventArgs[] = L"Microsoft.System.DispatcherQueueShutdownStartingEventArgs";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.System.DispatcherQueueTimer
 *
 * Introduced to Microsoft.System.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.System.IDispatcherQueueTimer ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_System_DispatcherQueueTimer_DEFINED
#define RUNTIMECLASS_Microsoft_System_DispatcherQueueTimer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_System_DispatcherQueueTimer[] = L"Microsoft.System.DispatcherQueueTimer";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000



#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_Microsoft_CSystem_CIDispatcherQueueHandler_FWD_DEFINED__
#define ____x_Microsoft_CSystem_CIDispatcherQueueHandler_FWD_DEFINED__
typedef interface __x_Microsoft_CSystem_CIDispatcherQueueHandler __x_Microsoft_CSystem_CIDispatcherQueueHandler;

#endif // ____x_Microsoft_CSystem_CIDispatcherQueueHandler_FWD_DEFINED__

#ifndef ____x_Microsoft_CSystem_CIDispatcherQueue_FWD_DEFINED__
#define ____x_Microsoft_CSystem_CIDispatcherQueue_FWD_DEFINED__
typedef interface __x_Microsoft_CSystem_CIDispatcherQueue __x_Microsoft_CSystem_CIDispatcherQueue;

#endif // ____x_Microsoft_CSystem_CIDispatcherQueue_FWD_DEFINED__

#ifndef ____x_Microsoft_CSystem_CIDispatcherQueue2_FWD_DEFINED__
#define ____x_Microsoft_CSystem_CIDispatcherQueue2_FWD_DEFINED__
typedef interface __x_Microsoft_CSystem_CIDispatcherQueue2 __x_Microsoft_CSystem_CIDispatcherQueue2;

#endif // ____x_Microsoft_CSystem_CIDispatcherQueue2_FWD_DEFINED__

#ifndef ____x_Microsoft_CSystem_CIDispatcherQueueController_FWD_DEFINED__
#define ____x_Microsoft_CSystem_CIDispatcherQueueController_FWD_DEFINED__
typedef interface __x_Microsoft_CSystem_CIDispatcherQueueController __x_Microsoft_CSystem_CIDispatcherQueueController;

#endif // ____x_Microsoft_CSystem_CIDispatcherQueueController_FWD_DEFINED__

#ifndef ____x_Microsoft_CSystem_CIDispatcherQueueControllerStatics_FWD_DEFINED__
#define ____x_Microsoft_CSystem_CIDispatcherQueueControllerStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CSystem_CIDispatcherQueueControllerStatics __x_Microsoft_CSystem_CIDispatcherQueueControllerStatics;

#endif // ____x_Microsoft_CSystem_CIDispatcherQueueControllerStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs_FWD_DEFINED__
#define ____x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs_FWD_DEFINED__
typedef interface __x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs __x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs;

#endif // ____x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs_FWD_DEFINED__

#ifndef ____x_Microsoft_CSystem_CIDispatcherQueueStatics_FWD_DEFINED__
#define ____x_Microsoft_CSystem_CIDispatcherQueueStatics_FWD_DEFINED__
typedef interface __x_Microsoft_CSystem_CIDispatcherQueueStatics __x_Microsoft_CSystem_CIDispatcherQueueStatics;

#endif // ____x_Microsoft_CSystem_CIDispatcherQueueStatics_FWD_DEFINED__

#ifndef ____x_Microsoft_CSystem_CIDispatcherQueueTimer_FWD_DEFINED__
#define ____x_Microsoft_CSystem_CIDispatcherQueueTimer_FWD_DEFINED__
typedef interface __x_Microsoft_CSystem_CIDispatcherQueueTimer __x_Microsoft_CSystem_CIDispatcherQueueTimer;

#endif // ____x_Microsoft_CSystem_CIDispatcherQueueTimer_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions


#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_IInspectable __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_IInspectable;

typedef struct __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_IInspectable * This,/* [in] */ __RPC__in_opt __x_Microsoft_CSystem_CIDispatcherQueue * sender,/* [in] */ __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_IInspectableVtbl;

interface __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_IInspectable_INTERFACE_DEFINED__

#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000



#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_Microsoft__CSystem__CDispatcherQueueShutdownStartingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_Microsoft__CSystem__CDispatcherQueueShutdownStartingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_Microsoft__CSystem__CDispatcherQueueShutdownStartingEventArgs __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_Microsoft__CSystem__CDispatcherQueueShutdownStartingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_Microsoft__CSystem__CDispatcherQueueShutdownStartingEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_Microsoft__CSystem__CDispatcherQueueShutdownStartingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_Microsoft__CSystem__CDispatcherQueueShutdownStartingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_Microsoft__CSystem__CDispatcherQueueShutdownStartingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_Microsoft__CSystem__CDispatcherQueueShutdownStartingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_Microsoft__CSystem__CDispatcherQueueShutdownStartingEventArgs * This,/* [in] */ __RPC__in_opt __x_Microsoft_CSystem_CIDispatcherQueue * sender,/* [in] */ __RPC__in_opt __x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_Microsoft__CSystem__CDispatcherQueueShutdownStartingEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_Microsoft__CSystem__CDispatcherQueueShutdownStartingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_Microsoft__CSystem__CDispatcherQueueShutdownStartingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_Microsoft__CSystem__CDispatcherQueueShutdownStartingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_Microsoft__CSystem__CDispatcherQueueShutdownStartingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_Microsoft__CSystem__CDispatcherQueueShutdownStartingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_Microsoft__CSystem__CDispatcherQueueShutdownStartingEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_Microsoft__CSystem__CDispatcherQueueShutdownStartingEventArgs_INTERFACE_DEFINED__

#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000



#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueueTimer_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueueTimer_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueueTimer_IInspectable __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueueTimer_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueueTimer_IInspectable;

typedef struct __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueueTimer_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueueTimer_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueueTimer_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueueTimer_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueueTimer_IInspectable * This,/* [in] */ __RPC__in_opt __x_Microsoft_CSystem_CIDispatcherQueueTimer * sender,/* [in] */ __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueueTimer_IInspectableVtbl;

interface __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueueTimer_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueueTimer_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueueTimer_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueueTimer_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueueTimer_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueueTimer_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueueTimer_IInspectable_INTERFACE_DEFINED__

#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000




typedef enum __x_Microsoft_CSystem_CDispatcherQueuePriority __x_Microsoft_CSystem_CDispatcherQueuePriority;




















/*
 *
 * Struct Microsoft.System.DispatcherQueuePriority
 *
 * Introduced to Microsoft.System.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */

#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
/* [v1_enum, experimental, contract] */
enum __x_Microsoft_CSystem_CDispatcherQueuePriority
{
    Microsoft_System_DispatcherQueuePriority_Low = -10,
    Microsoft_System_DispatcherQueuePriority_Normal = 0,
    Microsoft_System_DispatcherQueuePriority_High = 10,
};
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Microsoft.System.DispatcherQueueHandler
 *
 * Introduced to Microsoft.System.LiftedContract in version 1.0
 *
 *
 */
#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if !defined(____x_Microsoft_CSystem_CIDispatcherQueueHandler_INTERFACE_DEFINED__)
#define ____x_Microsoft_CSystem_CIDispatcherQueueHandler_INTERFACE_DEFINED__
/* [object, uuid("12C37105-AC93-5BEB-98FF-0D010DB18E21"), contract] */
typedef struct __x_Microsoft_CSystem_CIDispatcherQueueHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_Microsoft_CSystem_CIDispatcherQueueHandler * This
        );
    END_INTERFACE
    
} __x_Microsoft_CSystem_CIDispatcherQueueHandlerVtbl;

interface __x_Microsoft_CSystem_CIDispatcherQueueHandler
{
    CONST_VTBL struct __x_Microsoft_CSystem_CIDispatcherQueueHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CSystem_CIDispatcherQueueHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CSystem_CIDispatcherQueueHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CSystem_CIDispatcherQueueHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CSystem_CIDispatcherQueueHandler_Invoke(This) \
    ( (This)->lpVtbl->Invoke(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CSystem_CIDispatcherQueueHandler;
#endif /* !defined(____x_Microsoft_CSystem_CIDispatcherQueueHandler_INTERFACE_DEFINED__) */
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.System.IDispatcherQueue
 *
 * Introduced to Microsoft.System.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.System.DispatcherQueue
 *
 *
 */
#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CSystem_CIDispatcherQueue_INTERFACE_DEFINED__)
#define ____x_Microsoft_CSystem_CIDispatcherQueue_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_System_IDispatcherQueue[] = L"Microsoft.System.IDispatcherQueue";
/* [object, uuid("02FE405F-96CF-5B1C-8413-3AC2C2D7C264"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CSystem_CIDispatcherQueueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueue * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueue * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueue * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueue * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueue * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueue * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateTimer )(
        __x_Microsoft_CSystem_CIDispatcherQueue * This,
        /* [retval, out] */__x_Microsoft_CSystem_CIDispatcherQueueTimer * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *TryEnqueue )(
        __x_Microsoft_CSystem_CIDispatcherQueue * This,
        /* [in] */__x_Microsoft_CSystem_CIDispatcherQueueHandler  * callback,
        /* [retval, out] */boolean * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *TryEnqueueWithPriority )(
        __x_Microsoft_CSystem_CIDispatcherQueue * This,
        /* [in] */__x_Microsoft_CSystem_CDispatcherQueuePriority priority,
        /* [in] */__x_Microsoft_CSystem_CIDispatcherQueueHandler  * callback,
        /* [retval, out] */boolean * result
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ShutdownStarting )(
        __x_Microsoft_CSystem_CIDispatcherQueue * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_Microsoft__CSystem__CDispatcherQueueShutdownStartingEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ShutdownStarting )(
        __x_Microsoft_CSystem_CIDispatcherQueue * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ShutdownCompleted )(
        __x_Microsoft_CSystem_CIDispatcherQueue * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueue_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ShutdownCompleted )(
        __x_Microsoft_CSystem_CIDispatcherQueue * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_Microsoft_CSystem_CIDispatcherQueueVtbl;

interface __x_Microsoft_CSystem_CIDispatcherQueue
{
    CONST_VTBL struct __x_Microsoft_CSystem_CIDispatcherQueueVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CSystem_CIDispatcherQueue_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CSystem_CIDispatcherQueue_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CSystem_CIDispatcherQueue_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CSystem_CIDispatcherQueue_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CSystem_CIDispatcherQueue_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CSystem_CIDispatcherQueue_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CSystem_CIDispatcherQueue_CreateTimer(This,result) \
    ( (This)->lpVtbl->CreateTimer(This,result) )

#define __x_Microsoft_CSystem_CIDispatcherQueue_TryEnqueue(This,callback,result) \
    ( (This)->lpVtbl->TryEnqueue(This,callback,result) )

#define __x_Microsoft_CSystem_CIDispatcherQueue_TryEnqueueWithPriority(This,priority,callback,result) \
    ( (This)->lpVtbl->TryEnqueueWithPriority(This,priority,callback,result) )

#define __x_Microsoft_CSystem_CIDispatcherQueue_add_ShutdownStarting(This,handler,token) \
    ( (This)->lpVtbl->add_ShutdownStarting(This,handler,token) )

#define __x_Microsoft_CSystem_CIDispatcherQueue_remove_ShutdownStarting(This,token) \
    ( (This)->lpVtbl->remove_ShutdownStarting(This,token) )

#define __x_Microsoft_CSystem_CIDispatcherQueue_add_ShutdownCompleted(This,handler,token) \
    ( (This)->lpVtbl->add_ShutdownCompleted(This,handler,token) )

#define __x_Microsoft_CSystem_CIDispatcherQueue_remove_ShutdownCompleted(This,token) \
    ( (This)->lpVtbl->remove_ShutdownCompleted(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CSystem_CIDispatcherQueue;
#endif /* !defined(____x_Microsoft_CSystem_CIDispatcherQueue_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.System.IDispatcherQueue2
 *
 * Introduced to Microsoft.System.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.System.DispatcherQueue
 *
 *
 */
#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CSystem_CIDispatcherQueue2_INTERFACE_DEFINED__)
#define ____x_Microsoft_CSystem_CIDispatcherQueue2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_System_IDispatcherQueue2[] = L"Microsoft.System.IDispatcherQueue2";
/* [object, uuid("628F432E-6697-5026-8432-185BF55F1524"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CSystem_CIDispatcherQueue2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueue2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueue2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueue2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueue2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueue2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueue2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasThreadAccess )(
        __x_Microsoft_CSystem_CIDispatcherQueue2 * This,
        /* [retval, out] */boolean * value
        );
    END_INTERFACE
    
} __x_Microsoft_CSystem_CIDispatcherQueue2Vtbl;

interface __x_Microsoft_CSystem_CIDispatcherQueue2
{
    CONST_VTBL struct __x_Microsoft_CSystem_CIDispatcherQueue2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CSystem_CIDispatcherQueue2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CSystem_CIDispatcherQueue2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CSystem_CIDispatcherQueue2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CSystem_CIDispatcherQueue2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CSystem_CIDispatcherQueue2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CSystem_CIDispatcherQueue2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CSystem_CIDispatcherQueue2_get_HasThreadAccess(This,value) \
    ( (This)->lpVtbl->get_HasThreadAccess(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CSystem_CIDispatcherQueue2;
#endif /* !defined(____x_Microsoft_CSystem_CIDispatcherQueue2_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.System.IDispatcherQueueController
 *
 * Introduced to Microsoft.System.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.System.DispatcherQueueController
 *
 *
 */
#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CSystem_CIDispatcherQueueController_INTERFACE_DEFINED__)
#define ____x_Microsoft_CSystem_CIDispatcherQueueController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_System_IDispatcherQueueController[] = L"Microsoft.System.IDispatcherQueueController";
/* [object, uuid("CD77F174-B93B-5B26-BA6C-2E5D6EE81C5C"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CSystem_CIDispatcherQueueControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueController * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueController * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueController * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueController * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueController * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueController * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DispatcherQueue )(
        __x_Microsoft_CSystem_CIDispatcherQueueController * This,
        /* [retval, out] */__x_Microsoft_CSystem_CIDispatcherQueue * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ShutdownQueueAsync )(
        __x_Microsoft_CSystem_CIDispatcherQueueController * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
    
} __x_Microsoft_CSystem_CIDispatcherQueueControllerVtbl;

interface __x_Microsoft_CSystem_CIDispatcherQueueController
{
    CONST_VTBL struct __x_Microsoft_CSystem_CIDispatcherQueueControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CSystem_CIDispatcherQueueController_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CSystem_CIDispatcherQueueController_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CSystem_CIDispatcherQueueController_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CSystem_CIDispatcherQueueController_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CSystem_CIDispatcherQueueController_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CSystem_CIDispatcherQueueController_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CSystem_CIDispatcherQueueController_get_DispatcherQueue(This,value) \
    ( (This)->lpVtbl->get_DispatcherQueue(This,value) )

#define __x_Microsoft_CSystem_CIDispatcherQueueController_ShutdownQueueAsync(This,operation) \
    ( (This)->lpVtbl->ShutdownQueueAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CSystem_CIDispatcherQueueController;
#endif /* !defined(____x_Microsoft_CSystem_CIDispatcherQueueController_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.System.IDispatcherQueueControllerStatics
 *
 * Introduced to Microsoft.System.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.System.DispatcherQueueController
 *
 *
 */
#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CSystem_CIDispatcherQueueControllerStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CSystem_CIDispatcherQueueControllerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_System_IDispatcherQueueControllerStatics[] = L"Microsoft.System.IDispatcherQueueControllerStatics";
/* [object, uuid("1776A6FD-CB56-5553-9381-E3E0F0DDB647"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CSystem_CIDispatcherQueueControllerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueControllerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueControllerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueControllerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueControllerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueControllerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueControllerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateOnDedicatedThread )(
        __x_Microsoft_CSystem_CIDispatcherQueueControllerStatics * This,
        /* [retval, out] */__x_Microsoft_CSystem_CIDispatcherQueueController * * result
        );
    END_INTERFACE
    
} __x_Microsoft_CSystem_CIDispatcherQueueControllerStaticsVtbl;

interface __x_Microsoft_CSystem_CIDispatcherQueueControllerStatics
{
    CONST_VTBL struct __x_Microsoft_CSystem_CIDispatcherQueueControllerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CSystem_CIDispatcherQueueControllerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CSystem_CIDispatcherQueueControllerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CSystem_CIDispatcherQueueControllerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CSystem_CIDispatcherQueueControllerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CSystem_CIDispatcherQueueControllerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CSystem_CIDispatcherQueueControllerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CSystem_CIDispatcherQueueControllerStatics_CreateOnDedicatedThread(This,result) \
    ( (This)->lpVtbl->CreateOnDedicatedThread(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CSystem_CIDispatcherQueueControllerStatics;
#endif /* !defined(____x_Microsoft_CSystem_CIDispatcherQueueControllerStatics_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.System.IDispatcherQueueShutdownStartingEventArgs
 *
 * Introduced to Microsoft.System.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.System.DispatcherQueueShutdownStartingEventArgs
 *
 *
 */
#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs_INTERFACE_DEFINED__)
#define ____x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_System_IDispatcherQueueShutdownStartingEventArgs[] = L"Microsoft.System.IDispatcherQueueShutdownStartingEventArgs";
/* [object, uuid("B0A4EA8B-AD6C-5DEF-8546-1541E5112E94"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
    
} __x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgsVtbl;

interface __x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs
{
    CONST_VTBL struct __x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs_GetDeferral(This,result) \
    ( (This)->lpVtbl->GetDeferral(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs;
#endif /* !defined(____x_Microsoft_CSystem_CIDispatcherQueueShutdownStartingEventArgs_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.System.IDispatcherQueueStatics
 *
 * Introduced to Microsoft.System.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.System.DispatcherQueue
 *
 *
 */
#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CSystem_CIDispatcherQueueStatics_INTERFACE_DEFINED__)
#define ____x_Microsoft_CSystem_CIDispatcherQueueStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_System_IDispatcherQueueStatics[] = L"Microsoft.System.IDispatcherQueueStatics";
/* [object, uuid("B5417ADD-2B64-5293-AE6D-AEE24CC0FC2A"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CSystem_CIDispatcherQueueStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentThread )(
        __x_Microsoft_CSystem_CIDispatcherQueueStatics * This,
        /* [retval, out] */__x_Microsoft_CSystem_CIDispatcherQueue * * result
        );
    END_INTERFACE
    
} __x_Microsoft_CSystem_CIDispatcherQueueStaticsVtbl;

interface __x_Microsoft_CSystem_CIDispatcherQueueStatics
{
    CONST_VTBL struct __x_Microsoft_CSystem_CIDispatcherQueueStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CSystem_CIDispatcherQueueStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CSystem_CIDispatcherQueueStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CSystem_CIDispatcherQueueStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CSystem_CIDispatcherQueueStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CSystem_CIDispatcherQueueStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CSystem_CIDispatcherQueueStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CSystem_CIDispatcherQueueStatics_GetForCurrentThread(This,result) \
    ( (This)->lpVtbl->GetForCurrentThread(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CSystem_CIDispatcherQueueStatics;
#endif /* !defined(____x_Microsoft_CSystem_CIDispatcherQueueStatics_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.System.IDispatcherQueueTimer
 *
 * Introduced to Microsoft.System.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.System.DispatcherQueueTimer
 *
 *
 */
#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_Microsoft_CSystem_CIDispatcherQueueTimer_INTERFACE_DEFINED__)
#define ____x_Microsoft_CSystem_CIDispatcherQueueTimer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_System_IDispatcherQueueTimer[] = L"Microsoft.System.IDispatcherQueueTimer";
/* [object, uuid("30357864-57C6-59A0-B7B1-EF7177D47D4D"), experimental, exclusiveto, contract] */
typedef struct __x_Microsoft_CSystem_CIDispatcherQueueTimerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueTimer * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueTimer * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueTimer * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueTimer * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueTimer * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Microsoft_CSystem_CIDispatcherQueueTimer * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Interval )(
        __x_Microsoft_CSystem_CIDispatcherQueueTimer * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Interval )(
        __x_Microsoft_CSystem_CIDispatcherQueueTimer * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsRunning )(
        __x_Microsoft_CSystem_CIDispatcherQueueTimer * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsRepeating )(
        __x_Microsoft_CSystem_CIDispatcherQueueTimer * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsRepeating )(
        __x_Microsoft_CSystem_CIDispatcherQueueTimer * This,
        /* [in] */boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_Microsoft_CSystem_CIDispatcherQueueTimer * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_Microsoft_CSystem_CIDispatcherQueueTimer * This
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Tick )(
        __x_Microsoft_CSystem_CIDispatcherQueueTimer * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CSystem__CDispatcherQueueTimer_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Tick )(
        __x_Microsoft_CSystem_CIDispatcherQueueTimer * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_Microsoft_CSystem_CIDispatcherQueueTimerVtbl;

interface __x_Microsoft_CSystem_CIDispatcherQueueTimer
{
    CONST_VTBL struct __x_Microsoft_CSystem_CIDispatcherQueueTimerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Microsoft_CSystem_CIDispatcherQueueTimer_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Microsoft_CSystem_CIDispatcherQueueTimer_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Microsoft_CSystem_CIDispatcherQueueTimer_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Microsoft_CSystem_CIDispatcherQueueTimer_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Microsoft_CSystem_CIDispatcherQueueTimer_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Microsoft_CSystem_CIDispatcherQueueTimer_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Microsoft_CSystem_CIDispatcherQueueTimer_get_Interval(This,value) \
    ( (This)->lpVtbl->get_Interval(This,value) )

#define __x_Microsoft_CSystem_CIDispatcherQueueTimer_put_Interval(This,value) \
    ( (This)->lpVtbl->put_Interval(This,value) )

#define __x_Microsoft_CSystem_CIDispatcherQueueTimer_get_IsRunning(This,value) \
    ( (This)->lpVtbl->get_IsRunning(This,value) )

#define __x_Microsoft_CSystem_CIDispatcherQueueTimer_get_IsRepeating(This,value) \
    ( (This)->lpVtbl->get_IsRepeating(This,value) )

#define __x_Microsoft_CSystem_CIDispatcherQueueTimer_put_IsRepeating(This,value) \
    ( (This)->lpVtbl->put_IsRepeating(This,value) )

#define __x_Microsoft_CSystem_CIDispatcherQueueTimer_Start(This) \
    ( (This)->lpVtbl->Start(This) )

#define __x_Microsoft_CSystem_CIDispatcherQueueTimer_Stop(This) \
    ( (This)->lpVtbl->Stop(This) )

#define __x_Microsoft_CSystem_CIDispatcherQueueTimer_add_Tick(This,handler,token) \
    ( (This)->lpVtbl->add_Tick(This,handler,token) )

#define __x_Microsoft_CSystem_CIDispatcherQueueTimer_remove_Tick(This,token) \
    ( (This)->lpVtbl->remove_Tick(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Microsoft_CSystem_CIDispatcherQueueTimer;
#endif /* !defined(____x_Microsoft_CSystem_CIDispatcherQueueTimer_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.System.DispatcherQueue
 *
 * Introduced to Microsoft.System.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.System.IDispatcherQueueStatics interface starting with version 1.0 of the Microsoft.System.LiftedContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.System.IDispatcherQueue ** Default Interface **
 *    Microsoft.System.IDispatcherQueue2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_System_DispatcherQueue_DEFINED
#define RUNTIMECLASS_Microsoft_System_DispatcherQueue_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_System_DispatcherQueue[] = L"Microsoft.System.DispatcherQueue";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.System.DispatcherQueueController
 *
 * Introduced to Microsoft.System.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.System.IDispatcherQueueControllerStatics interface starting with version 1.0 of the Microsoft.System.LiftedContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.System.IDispatcherQueueController ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_System_DispatcherQueueController_DEFINED
#define RUNTIMECLASS_Microsoft_System_DispatcherQueueController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_System_DispatcherQueueController[] = L"Microsoft.System.DispatcherQueueController";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.System.DispatcherQueueShutdownStartingEventArgs
 *
 * Introduced to Microsoft.System.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.System.IDispatcherQueueShutdownStartingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_System_DispatcherQueueShutdownStartingEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_System_DispatcherQueueShutdownStartingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_System_DispatcherQueueShutdownStartingEventArgs[] = L"Microsoft.System.DispatcherQueueShutdownStartingEventArgs";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.System.DispatcherQueueTimer
 *
 * Introduced to Microsoft.System.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.System.IDispatcherQueueTimer ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_System_DispatcherQueueTimer_DEFINED
#define RUNTIMECLASS_Microsoft_System_DispatcherQueueTimer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_System_DispatcherQueueTimer[] = L"Microsoft.System.DispatcherQueueTimer";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION >= 0x10000



#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __Microsoft2ESystem_p_h__

#endif // __Microsoft2ESystem_h__
