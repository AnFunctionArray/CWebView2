#undef UNICODE
#define COBJMACROS
#include <stddef.h>
#include <stdint.h>
#include <roapi.h>
#include <stdbool.h>

#include <Windows.Applicationmodel.Activation.h>
#include <Windows.ApplicationModel.core.h>
#define ENABLE_WINRT_EXPERIMENTAL_TYPES
//#include "onlywhatweneed.h
#include <Microsoft.UI.Xaml.h>
#include <boost/preprocessor/repetition/repeat.hpp>
#include <Unknwn.h>
#include <windows.foundation.h>
#include <Microsoft.UI.h>
#include <Microsoft.UI.Xaml.Controls.h>
#include <Microsoft.UI.Xaml.XamlTypeInfo.h>
#include <Microsoft.UI.Xaml.Markup.h>
#include <Microsoft.UI.Xaml.Controls.h>
#include <WebView2_p.h>

#define startinfintiteloop for(;;)

#define activateclassdirect(name, ptr, iid) activateclassdirect((name), sizeof (name), &(ptr), &(iid))

#define activateclasslight(name, ptr, iid) activateclasslight((name), sizeof (name), &(ptr), &(iid))

#define activateclasslight2(name, ptr, iid, activfact)  \
activateclasslight2((name), sizeof (name), &(ptr), &(iid), ((char*)activfact))

extern QueryInterface(), stub(), AddRef(), Release(), GetIids(),
GetRuntimeClassName(), GetTrustLevel();

extern HSTRING createreference();

#define createreference(string, ref) createreference((string), sizeof (string), (&ref))

struct standardinterfacepart {
	__x_Microsoft_CUI_CXaml_CIApplicationOverrides; const IID** implements;
	ULONG count; struct standardinterfacepart* pBase;
	size_t szExternal; HSTRING classname;
	HRESULT(*QueryInterfaceHookOnMatch)(struct standardinterfacepart* This, REFIID riid, char** ppvObject), * pmark;
};

#define common_beginning_interface(intfctype, i) \
intfctype##Vtbl *lpVtbl##i; const IID** implements##i; \
ULONG count##i; struct appinterface* pBase##i; \
size_t szExternal##i; HSTRING classname##i; \
HRESULT(*QueryInterfaceHookOnMatch##i)(struct standardinterfacepart* This, REFIID riid, char** ppvObject);

extern __x_Microsoft_CUI_CXaml_CIApplication* pApp;
extern __x_Microsoft_CUI_CXaml_CIApplicationOverrides* innerappoverrides;

#define initvtblwithstubs(z, n, text) n##[(int (**)())(&##text##overridesvtbl)] = text##overridestub##n;

#define createoverridestubs(z, n, text) HRESULT text##overridestub##n(p, pp, ppp) \
char *p, *pp, *ppp;{ return text##inner ? n##[(HRESULT (**)())text##inner->lpVtbl](text##inner, pp, ppp) : S_OK;}


extern __x_Microsoft_CUI_CXaml_CIWindow* pCoreWindow;

extern IID IID_mainframe, IID_mainpage, IID_unknownforreal;

const static IID* implementsmainframe[] = { &IID_IInspectable, &IID_IUnknown,&IID_IAgileObject, &IID_mainframe, 0 };

static IInspectableVtbl mainframeoverridesvtbl = { QueryInterface, AddRef, Release, GetIids, GetRuntimeClassName, GetTrustLevel };

extern IInspectable* mainframeinner;

BOOST_PP_REPEAT(6, createoverridestubs, mainframe)

HRESULT InvokeWebView2StartNavigation(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CWebView2_Microsoft__CUI__CXaml__CControls__CWebView2NavigationStartingEventArgs* This,
	/* [in] */ __RPC__in_opt __x_Microsoft_CUI_CXaml_CControls_CIWebView2* sender,
	/* [in] */ __RPC__in_opt __x_Microsoft_CUI_CXaml_CControls_CIWebView2NavigationStartingEventArgs* e)
{
	ICoreWebView2* pCoreWebView2;

	__x_Microsoft_CUI_CXaml_CControls_CIWebView2* pwebview2;

	extern IInspectable* pMyWebView;

	IInspectable_QueryInterface(pMyWebView, &IID___x_Microsoft_CUI_CXaml_CControls_CIWebView2, &pwebview2);

	char* pactualwebview = (char*)pwebview2 - 0x18;

	pCoreWebView2 = *((char**)pactualwebview + 0x1B);

	pCoreWebView2->lpVtbl->NavigateToString(pCoreWebView2, L"<html>Hello world!</html>");

	extern EventRegistrationToken nocareonnvaigatedto;

	pwebview2->lpVtbl->remove_NavigationStarting(pwebview2, nocareonnvaigatedto);

	return S_OK;
}

EventRegistrationToken nocareonnvaigatedto;

HRESULT OnNavigatedTo(
	__x_Microsoft_CUI_CXaml_CControls_CIPageOverrides* This,
	/* [in] */__x_Microsoft_CUI_CXaml_CNavigation_CINavigationEventArgs* e
)
{
	ICoreWebView2* pCoreWebView2;

	__x_Microsoft_CUI_CXaml_CControls_CIWebView2* pwebview2;

	extern IInspectable* pMyWebView;

	IInspectable_QueryInterface(pMyWebView, &IID___x_Microsoft_CUI_CXaml_CControls_CIWebView2, &pwebview2);

	static __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CWebView2_Microsoft__CUI__CXaml__CControls__CWebView2NavigationStartingEventArgsVtbl
		vtblforhandler = { QueryInterface, AddRef, Release, InvokeWebView2StartNavigation };

	static const IID* implements[] = { &IID_IUnknown, &IID_IAgileObject, &IID_ICoreWebView2NavigationStartingEventHandler , 0 };

	static struct standardinterfacepart handler = { &vtblforhandler , implements , 1, &handler, sizeof(char*) };

	pwebview2->lpVtbl->add_NavigationStarting(pwebview2, &handler, &nocareonnvaigatedto);

	//extern __x_Microsoft_CUI_CXaml_CControls_CIWebView2* webview2inner;

	return S_OK;
}

static __x_Microsoft_CUI_CXaml_CControls_CIPageOverridesVtbl appmainpageoverridesvtbl = { QueryInterface, AddRef, Release, GetIids, GetRuntimeClassName, GetTrustLevel, stub, stub, stub };

const char overridesmapinpagenum[sizeof(__x_Microsoft_CUI_CXaml_CControls_CIPageOverridesVtbl) / sizeof(char (*)()) - 6];

HRESULT ActivateInstanceOfMainPage(
	__RPC__in IActivationFactory* This,
	/* [out] */ __RPC__deref_out_opt IInspectable** instance)
{
	extern struct mainpageinterface appmainpage;
	*instance = &appmainpage;
	return S_OK;
}

const static IActivationFactoryVtbl appmainpageoverridesfactoryvtbl = { QueryInterface, AddRef, Release, GetIids, GetRuntimeClassName, GetTrustLevel, ActivateInstanceOfMainPage };


struct standardinterfacepart mainframe = { &mainframeoverridesvtbl, implementsmainframe, 1, &mainframe,
	sizeof(char*), };

const static IID* implementsmainpage[] = { &IID_IInspectable, &IID_IUnknown,&IID_IAgileObject, &IID_mainpage
, &IID___x_Microsoft_CUI_CXaml_CControls_CIPageOverrides, 0 };

const static IID* implementsmainpagefact[] = { &IID_IInspectable, &IID_IUnknown,&IID_IAgileObject, &IID_IActivationFactory, 0 };

IInspectable* pMyWebView;

HRESULT Connect(
	__x_Microsoft_CUI_CXaml_CMarkup_CIComponentConnector* This,
	/* [in] */INT32 connectionId,
	/* [in] */IInspectable* target
)
{
	switch (connectionId)
	{
		case 2:
			pMyWebView = target;
		break;
	}
	return S_OK;
}
HRESULT GetBindingConnector(
	__x_Microsoft_CUI_CXaml_CMarkup_CIComponentConnector* This,
	/* [in] */INT32 connectionId,
	/* [in] */IInspectable* target,
	/* [retval, out] */__x_Microsoft_CUI_CXaml_CMarkup_CIComponentConnector** result
)
{
	*result = 0;
	return S_OK;
}

__x_Microsoft_CUI_CXaml_CMarkup_CIComponentConnectorVtbl mainpagecomponentconnectorvtbl = { QueryInterface, AddRef, Release, GetIids, GetRuntimeClassName, GetTrustLevel,Connect, GetBindingConnector };

const static IID* implementsmainpagecomponnentconnector[] = { &IID_IInspectable, &IID_IUnknown,&IID_IAgileObject, &IID___x_Microsoft_CUI_CXaml_CMarkup_CIComponentConnector, 0 };


struct mainpageinterface {
	common_beginning_interface(__x_Microsoft_CUI_CXaml_CControls_CIPageOverrides)
		struct mainpagefactpart {
		common_beginning_interface(IActivationFactory, 1)
			struct mainpagecomponentconnectpart {
			common_beginning_interface(__x_Microsoft_CUI_CXaml_CMarkup_CIComponentConnector, 2)
		};
	};

	char* pMarkEndInterface;
} appmainpage = { &appmainpageoverridesvtbl, implementsmainpage, 1, &appmainpage,
	sizeof(char*), 0, 0, &appmainpageoverridesfactoryvtbl, implementsmainpagefact, 1, &appmainpage, sizeof(char*),
	0, 0, &mainpagecomponentconnectorvtbl, implementsmainpagecomponnentconnector, 1, &appmainpage, sizeof(char*)
};

__x_Microsoft_CUI_CXaml_CControls_CIPageOverrides* appmainpageinner;

__x_Microsoft_CUI_CXaml_CControls_CIPage* pmainpageinstance;

BOOST_PP_REPEAT(9, createoverridestubs, appmainpage)

HRESULT QueryInterfaceMainPage(This, riid, ppvObject)
struct appinterface* This; REFIID riid; char** ppvObject;
{
	if (QueryInterface(This, riid, ppvObject) == S_OK)
		return S_OK;
	return IUnknown_QueryInterface(appmainpageinner, riid, ppvObject);
}

IInspectable* mainframeinner;

__x_Microsoft_CUI_CXaml_CControls_CIFrame* pMainFrame;

HRESULT OnLaunched(
	__x_Microsoft_CUI_CXaml_CIApplicationOverrides* This,
	/* [in] */__x_Microsoft_CUI_CXaml_CILaunchActivatedEventArgs* args
)
{
	//return OnLaunchedCpp(This, args);
	//__x_Microsoft_CUI_CXaml_CControls_CIXamlControlsResources* pXamlCtrlRes;
	//activateclasslight2(RuntimeClass_Microsoft_UI_Xaml_Controls_XamlControlsResources, pXamlCtrlRes, IID___x_Microsoft_CUI_CXaml_CControls_CIXamlControlsResources, 0);
	HSTRING argsstr;
	__x_Microsoft_CUI_CXaml_CILaunchActivatedEventArgs_get_Arguments(args, &argsstr);

	HRESULT debug;
	__x_Microsoft_CUI_CXaml_CControls_CIFrameFactory* pFrameFact;

	activateclassdirect(RuntimeClass_Microsoft_UI_Xaml_Controls_Frame, pFrameFact, IID___x_Microsoft_CUI_CXaml_CControls_CIFrameFactory);

	static HSTRING_HEADER mainframestrhead, mainpagestrhead;

	BOOST_PP_REPEAT(6, initvtblwithstubs, mainframe)

	mainframe.classname = createreference(L"_6a4h8_MainFrame", mainframestrhead);

	__x_Microsoft_CUI_CXaml_CControls_CIFrameFactory_CreateInstance(pFrameFact, &mainframe, &mainframeinner, &pMainFrame);

	//appmainpage.classname = createreference(L"_6a4h8_MainPage", mainpagestrhead);

	__x_ABI_CWindows_CFoundation_CIPropertyValueStatics* pPropValueStatics;

	//debug = __x_Microsoft_CUI_CXaml_CIWindow_put_Content(pWindow, pMainFrame);

	IInspectable* somearbitraryobject;
	static HSTRING_HEADER headpagename, headepagename1;

	activateclassdirect(RuntimeClass_Windows_Foundation_PropertyValue, pPropValueStatics, IID___x_ABI_CWindows_CFoundation_CIPropertyValueStatics);

	debug = __x_ABI_CWindows_CFoundation_CIPropertyValueStatics_CreateString(pPropValueStatics, argsstr, &somearbitraryobject);

#if 0

#endif

	__x_Microsoft_CUI_CXaml_CControls_CIPageFactory* pPageFact;

	activateclassdirect(RuntimeClass_Microsoft_UI_Xaml_Controls_Page, pPageFact, IID___x_Microsoft_CUI_CXaml_CControls_CIPageFactory);

	__x_Microsoft_CUI_CXaml_CControls_CIPageFactory_CreateInstance(pPageFact, &appmainpage, &appmainpageinner, &pmainpageinstance);

	__x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName typePage = { .Name = createreference(L"CBackBone.MainPage", headepagename1), .Kind = TypeKind_Metadata }
	;

	//loadmainpage();

	char test[sizeof(__x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName)];
	bool bSuccess;
	debug = (pMainFrame)->lpVtbl->Navigate(pMainFrame, typePage, somearbitraryobject, &bSuccess);

	debug =  __x_Microsoft_CUI_CXaml_CIWindow_put_Content(pCoreWindow, pMainFrame);	

	//pCoreWebView2->lpVtbl->NavigateToString(pCoreWebView2, L"<html>Hello world!</html>");

	//setframe(pMainFrame);
	return S_OK;
}


initmainpagestatics()
{
	BOOST_PP_REPEAT(6, initvtblwithstubs, appmainpage);

	static HSTRING_HEADER stringheadappmainpageoverridesimpl, stringgeadappmainpageoverridesfact,
		stringheadcomponnnetconnector;

	appmainpage.lpVtbl->QueryInterface = QueryInterfaceMainPage;
	appmainpage.lpVtbl->OnNavigatedTo = OnNavigatedTo;

	appmainpage.classname = createreference(L"CBackBone.MainPage", stringheadappmainpageoverridesimpl);
	appmainpage.classname1 = createreference(L"CBackBone.MainPageFactory", stringgeadappmainpageoverridesfact);
	appmainpage.classname2 = createreference(L"CBackBone.MainPageComponentConnector", stringgeadappmainpageoverridesfact);
}

IInspectable *loadmainpage()
{
	__x_ABI_CWindows_CFoundation_CIUriRuntimeClassFactory* pUriFact;

	activateclassdirect(RuntimeClass_Windows_Foundation_Uri, pUriFact, IID___x_ABI_CWindows_CFoundation_CIUriRuntimeClassFactory);

	__x_ABI_CWindows_CFoundation_CIUriRuntimeClass* pUri, *pUriApp;

	static HSTRING_HEADER headUri;//[2];

	__x_ABI_CWindows_CFoundation_CIUriRuntimeClassFactory_CreateUri(pUriFact, createreference(L"ms-appx:///MainPage.xaml", headUri), &pUri);

	//__x_ABI_CWindows_CFoundation_CIUriRuntimeClassFactory_CreateUri(pUriFact, createreference(L"ms-appx:///App.xaml", headUri), &pUriApp);


	__x_Microsoft_CUI_CXaml_CXamlTypeInfo_CIXamlControlsXamlMetaDataProviderStatics* controlproviderstatics;

	activateclassdirect(RuntimeClass_Microsoft_UI_Xaml_XamlTypeInfo_XamlControlsXamlMetaDataProvider, controlproviderstatics, IID___x_Microsoft_CUI_CXaml_CXamlTypeInfo_CIXamlControlsXamlMetaDataProviderStatics);

	HRESULT debug = __x_Microsoft_CUI_CXaml_CXamlTypeInfo_CIXamlControlsXamlMetaDataProviderStatics_Initialize(controlproviderstatics);

	__x_Microsoft_CUI_CXaml_CIApplicationStatics* pAppStatics;

	extern struct appinterface* pAppOutter;

	activateclassdirect(RuntimeClass_Microsoft_UI_Xaml_Application, pAppStatics, IID___x_Microsoft_CUI_CXaml_CIApplicationStatics);

	//debug = __x_Microsoft_CUI_CXaml_CIApplicationStatics_LoadComponent(pAppStatics, &pAppOutter, pUriApp);

	debug = __x_Microsoft_CUI_CXaml_CIApplicationStatics_LoadComponent(pAppStatics, &appmainpage, pUri);

	return &appmainpage;
}