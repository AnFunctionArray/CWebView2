#undef UNICODE
#define COBJMACROS
#include <stddef.h>
#include <stdint.h>
#include <roapi.h>
#include <stdbool.h>
#include <errhandlingapi.h>
#include <Windows.Applicationmodel.Activation.h>
#include <Windows.ApplicationModel.core.h>
#define ENABLE_WINRT_EXPERIMENTAL_TYPES
//#include "onlywhatweneed.h
#include <Microsoft.UI.Xaml.h>
#include <boost/preprocessor/repetition/repeat.hpp>
#include <boost/preprocessor/arithmetic/sub.hpp>
#include <Unknwn.h>
#include <windows.foundation.h>
#include <Microsoft.UI.h>
#include <Microsoft.UI.Xaml.Controls.h>
#include <Microsoft.UI.Xaml.XamlTypeInfo.h>
#include <Microsoft.UI.Xaml.Markup.h>
#include <Microsoft.UI.Xaml.Controls.h>
#include <combaseapi.h>
#include <activation.h>

#include "common.h"

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


struct appinterface {
	common_beginning_interface(__x_Microsoft_CUI_CXaml_CIApplicationOverrides)
		struct xamlmetadataproviderpart {
		common_beginning_interface(__x_Microsoft_CUI_CXaml_CMarkup_CIXamlMetadataProvider, 1)
			struct initialcallbackproviderpart {
			common_beginning_interface(__x_Microsoft_CUI_CXaml_CIApplicationInitializationCallback, 2)
		};
	};

	char* pMarkEndInterface; IInspectable* pinner;
};

__x_Microsoft_CUI_CXaml_CIApplication* pApp;
__x_Microsoft_CUI_CXaml_CIApplicationOverrides* innerappoverrides;
struct appinterface* outterappoverrides;

static __x_Microsoft_CUI_CXaml_CIApplicationOverridesVtbl overridesvtbl;

//const size_t nheadmethods = &overridesvtbl.OnActivated - &overridesvtbl;

const size_t noverrides = sizeof * innerappoverrides->lpVtbl / sizeof(char (*)()) - 6;

//BOOST_PP_REPEAT(16, declareoverridestubs, (appoverrides, 6))

//BOOST_PP_REPEAT(6, defineoverridestubscommon, appoverrides)

__x_Microsoft_CUI_CXaml_CIWindow* pCoreWindow;

HRESULT OnWindowCreated(
	__x_Microsoft_CUI_CXaml_CIApplicationOverrides* This,
	/* [in] */__x_Microsoft_CUI_CXaml_CIWindowCreatedEventArgs* args
)
{
	__x_Microsoft_CUI_CXaml_CIWindow* pWindow;
	__x_Microsoft_CUI_CXaml_CIWindowCreatedEventArgs_get_Window(args, &pWindow);
	__x_Microsoft_CUI_CXaml_CIWindow_Activate(pWindow);
	pCoreWindow = pWindow;

	return S_OK;
}

HRESULT InvokeApp(
	__x_Microsoft_CUI_CXaml_CIApplicationInitializationCallback* This,
	/* [in] */__x_Microsoft_CUI_CXaml_CIApplicationInitializationCallbackParams* p
)
{
	return S_OK;
}

IActivationFactory* pxamlcontrolsresActivFactory;

HRESULT QueryInterfaceApp(This, riid, ppvObject)
struct appinterface* This; REFIID riid; char** ppvObject;
{
	if (QueryInterface(This, riid, ppvObject) == S_OK)
		return S_OK;
	return IUnknown_QueryInterface(innerappoverrides, riid, ppvObject);
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR pCmdLine, int nCmdShow)
{
	extern Run();

	//startinfintiteloop;

	//RaiseFailFastException(0, 0, 0);

	RoInitialize(RO_INIT_MULTITHREADED);

	HSTRING_HEADER strhead;

	HRESULT debug = RoGetActivationFactory(createreference(RuntimeClass_Microsoft_UI_Xaml_Controls_XamlControlsResources, strhead), &IID_IActivationFactory, &pxamlcontrolsresActivFactory);

	initmetadatastatics(), initmainpagestatics(), initfilestatics();

	extern GetXamlType(), GetXamlTypeByFullName(), GetXmlnsDefinitions();

	static __x_Microsoft_CUI_CXaml_CIApplicationOverridesVtbl appoverridesvtbl =
	{ QueryInterfaceWithInner, AddRef, Release, GetIids, GetRuntimeClassName, GetTrustLevel, };

	static __x_Microsoft_CUI_CXaml_CMarkup_CIXamlMetadataProviderVtbl appmetadataprovidervtbl = {
		QueryInterface, AddRef, Release, GetIids, GetRuntimeClassName, GetTrustLevel, GetXamlType,
		GetXamlTypeByFullName, GetXmlnsDefinitions
	};

	const static IID* implementsappoverrides[] = { &IID___x_Microsoft_CUI_CXaml_CIApplicationOverrides,
	&IID_IUnknown, &IID_IInspectable,&IID_IAgileObject, 0 };

	const static IID* implementsappmetadataprovider[] = { &IID___x_Microsoft_CUI_CXaml_CMarkup_CIXamlMetadataProvider,
	&IID_IUnknown, &IID_IInspectable,&IID_IAgileObject, 0 };

	BOOST_PP_REPEAT(10, initvtblwithstubs, (6, appoverrides));

	extern
		HRESULT OnLaunched(
			__x_Microsoft_CUI_CXaml_CIApplicationOverrides * This,
			/* [in] */__x_Microsoft_CUI_CXaml_CILaunchActivatedEventArgs * args
		);

	//appoverridesvtbl.QueryInterface = QueryInterfaceApp;
	appoverridesvtbl.OnLaunched = OnLaunched;
	appoverridesvtbl.OnWindowCreated = OnWindowCreated;

	static HSTRING_HEADER stringheadappoverridesimpl, stringgeadappmetadataprovider;

	__x_Microsoft_CUI_CXaml_CIApplicationInitializationCallbackVtbl appstartcallbackvtbl = { QueryInterface, AddRef, Release, InvokeApp };

	const static IID* implementsstartcallback[] = { &IID___x_Microsoft_CUI_CXaml_CIApplicationInitializationCallback,
	&IID_IUnknown,&IID_IAgileObject, 0 };

	struct appinterface appinterface = { &appoverridesvtbl , implementsappoverrides , 1, &appinterface, 0,
		createreference(L"CBackBone_6a4h8_Microsoft.UI.Xaml.IApplicationOverrides", stringheadappoverridesimpl), 0,
	&appmetadataprovidervtbl,  implementsappmetadataprovider, 1, &appinterface, 0,
	createreference(L"CBackBone_6a4h8_Microsoft.UI.Xaml.Markup.IXamlMetadataProvider", stringgeadappmetadataprovider), 0,
	&appstartcallbackvtbl, implementsstartcallback, 1,&appinterface,
		0, };

	outterappoverrides = &appinterface;

	__x_Microsoft_CUI_CXaml_CIApplicationFactory* pAppFact;

	activateclassdirect(RuntimeClass_Microsoft_UI_Xaml_Application, pAppFact, IID___x_Microsoft_CUI_CXaml_CIApplicationFactory);

	__x_Microsoft_CUI_CXaml_CIApplicationFactory_CreateInstance(pAppFact, &appinterface, &appinterface.pinner, &pApp);

	__x_Microsoft_CUI_CXaml_CIApplicationStatics* pAppStatics;

	activateclassdirect(RuntimeClass_Microsoft_UI_Xaml_Application, pAppStatics, IID___x_Microsoft_CUI_CXaml_CIApplicationStatics);

	//Sleep(-1);
	__x_Microsoft_CUI_CXaml_CIApplicationStatics_Start(pAppStatics, &appinterface);


	return 0;
}