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
#include <stdio.h>
#include <zlib.h>
#include <assert.h>
#include <windows.security.cryptography.h>
#include <windows.security.cryptography.core.h>

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

extern __x_Microsoft_CUI_CXaml_CIApplication* pApp;
extern __x_Microsoft_CUI_CXaml_CIApplicationOverrides* innerappoverrides;

extern ICoreWebView2* getcorewebview2(__x_Microsoft_CUI_CXaml_CControls_CIWebView2* pwebview2);


extern __x_Microsoft_CUI_CXaml_CIWindow* pCoreWindow;

extern IID IID_mainframe, IID_mainpage, IID_unknownforreal;

const static IID* implementsmainframe[] = { &IID_IInspectable, &IID_IUnknown,&IID_IAgileObject, &IID_mainframe, 0 };

static IInspectableVtbl mainframevtbl = { QueryInterface, AddRef, Release, GetIids, GetRuntimeClassName, GetTrustLevel };

IInspectable* innermainframe;


extern struct standardinterfacepart* outtermainframe;

//BOOST_PP_REPEAT(6, defineoverridestubscommon, mainframe)

//static HANDLE hEvent[2];

int callbackonfilecollected(struct szandbuffer { UINT32 size; wchar_t* pData; } data,
	ICoreWebView2* pWebView2, HSTRING filename)
{
	char* out = malloc(data.size + sizeof(wchar_t) * 50);
	z_stream strm = { .avail_in = data.size , .next_in = data.pData,
	.avail_out = data.size + sizeof(wchar_t) * 50, .next_out = out };

	deflateInit(&strm, Z_DEFAULT_COMPRESSION);

	int err; HRESULT debug;

	//do
	err = deflate(&strm, Z_NO_FLUSH);

	//while (err != Z_FINISH);

	deflateEnd(&strm);

	__x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics* pcryptostatics;

	__x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics* phashstatics;

	activateclassdirect(RuntimeClass_Windows_Security_Cryptography_CryptographicBuffer, pcryptostatics,
		IID___x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics);

	__x_ABI_CWindows_CStorage_CStreams_CIBuffer* poutbuff;

	pcryptostatics->lpVtbl->CreateFromByteArray(pcryptostatics, strm.total_out, out, &poutbuff);

	activateclassdirect(RuntimeClass_Windows_Security_Cryptography_Core_HashAlgorithmProvider,
		phashstatics, IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics);


	__x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics* phashalgstrsstatics;

	activateclassdirect(RuntimeClass_Windows_Security_Cryptography_Core_HashAlgorithmNames, phashalgstrsstatics,
		IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics);

	HSTRING hashnamealg;

	phashalgstrsstatics->lpVtbl->get_Sha512(phashalgstrsstatics, &hashnamealg);

	__x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider* phashalgprovider;

	phashstatics->lpVtbl->OpenAlgorithm(phashstatics, hashnamealg, &phashalgprovider);

	__x_ABI_CWindows_CStorage_CStreams_CIBuffer* phashbuff;

	phashalgprovider->lpVtbl->HashData(phashalgprovider, poutbuff, &phashbuff);

	HSTRING hashinhexstr; UINT32 hashinhexlen;


	pcryptostatics->lpVtbl->EncodeToHexString(pcryptostatics, phashbuff, &hashinhexstr);

	wchar_t* phashinhexstr = WindowsGetStringRawBuffer(hashinhexstr, &hashinhexlen);

	UINT32 filenamelen;

	wchar_t* pfilename = WindowsGetStringRawBuffer(filename, &filenamelen);

	const resultszbuffer = filenamelen + hashinhexlen + sizeof L'0' * 10;

	wchar_t* pResult = malloc(resultszbuffer);

	*pResult = L'\0';

	//*wcsrchr(pfilename, L'.') = L'_'; L"{\"%s\":\"%s\"}"

	swprintf(pResult, resultszbuffer, L"%s:%s", pfilename, phashinhexstr);

	HSTRING_HEADER strhead;

	debug = pWebView2->lpVtbl->PostWebMessageAsString(pWebView2, pResult);

	*(wchar_t*)(out + strm.total_out) = L'\0';
#if 0
	for (size_t chunk = 0; chunk < strm.avail_out; chunk += (wcslen(out + chunk) + 1) * sizeof(wchar_t))
		debug = pWebView2->lpVtbl->PostWebMessageAsString(pWebView2, out + chunk);
#endif
}

HRESULT InvokeWebView2WebMsgRecieved(ICoreWebView2WebMessageReceivedEventHandler* This,
	/* [in] */ ICoreWebView2* sender,
	/* [in] */ __x_Microsoft_CUI_CXaml_CControls_CIWebView2WebMessageReceivedEventArgs* args)
{
	HSTRING str;
	args->lpVtbl->get_WebMessageAsString(args, &str);

	//UINT32 len;

	//WindowsGetStringRawBuffer(str, &len);

	//static wchar_t chFileName[260];

	//wscanf(L"filename: %s", chFileName);

	//static HSTRING_HEADER strhead;

	getbufferandsizeAsync(str, callbackonfilecollected, getcorewebview2(sender));

#if 0


	if (!wcsicmp(WindowsGetStringRawBuffer(str, 0), L"test"))
		SetEvent(*hEvent), WaitForSingleObject(hEvent[1], INFINITE);
	else SetEvent(1[hEvent]), WaitForSingleObject(*hEvent, INFINITE);
#endif

	return S_OK;
}

onloadedregisterjs(struct szandbuffer { UINT32 size; wchar_t* pData; } data,
	ICoreWebView2* pWebView2)
{
	HRESULT debug;

	static HSTRING_HEADER scripthead;
	//__x_Microsoft_CUI_CXaml_CControls_CIWebView2* pwebview2;

	//IInspectable_QueryInterface(pWebView2, &IID___x_Microsoft_CUI_CXaml_CControls_CIWebView2, &pwebview2);
	data.pData[data.size / sizeof(WCHAR)] = L'\0';
	char* p;
	debug = pWebView2->lpVtbl->AddScriptToExecuteOnDocumentCreated(pWebView2, data.pData + 1, 0);

#if 0
	const wchar_t pHtmlPart1[] = L"<script>", pHtmlPart2[] = L"</script>";

	wchar_t* pHtmlPlusJs = malloc(data.size + sizeof pHtmlPart1 + sizeof pHtmlPart2);

	*pHtmlPlusJs = L'\0';

	wcscat(pHtmlPlusJs, pHtmlPart1);
	wcscat(pHtmlPlusJs, data.pData);
	wcscat(pHtmlPlusJs, pHtmlPart2);

	pWebView2->lpVtbl->NavigateToString(pWebView2, pHtmlPlusJs);

	free(pHtmlPlusJs);
#endif
}

HRESULT InvokeWebView2StartNavigation(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CWebView2_Microsoft__CUI__CXaml__CControls__CWebView2NavigationStartingEventArgs* This,
	/* [in] */ __RPC__in_opt __x_Microsoft_CUI_CXaml_CControls_CIWebView2* sender,
	/* [in] */ __RPC__in_opt __x_Microsoft_CUI_CXaml_CControls_CIWebView2NavigationStartingEventArgs* e)
{
	ICoreWebView2* pCoreWebView2;

	__x_Microsoft_CUI_CXaml_CControls_CIWebView2* pwebview2;

	extern IInspectable* pMyWebView;

	IInspectable_QueryInterface(pMyWebView, &IID___x_Microsoft_CUI_CXaml_CControls_CIWebView2, &pwebview2);

	char* pactualwebview = (char*)pwebview2 - 0x18, * p;

	pCoreWebView2 = *((char**)pactualwebview + 0x1B);

	extern EventRegistrationToken nocareonnvaigatedto;

	pwebview2->lpVtbl->remove_NavigationStarting(pwebview2, nocareonnvaigatedto);

	//pCoreWebView2->lpVtbl->NavigateToString(pCoreWebView2, L"<html>Hello world!</html>");

	//pCoreWebView2->lpVtbl->OpenDevToolsWindow(pCoreWebView2);

	//Sleep(10000);

	extern getbufferandsizeAsync();

	static HSTRING_HEADER headjs;

	{
		static ICoreWebView2WebMessageReceivedEventHandlerVtbl
			vtblforhandler = { QueryInterface, AddRef, Release, InvokeWebView2WebMsgRecieved };

		static const IID* implements[] = { &IID_IUnknown, &IID_IAgileObject, &IID_ICoreWebView2WebMessageReceivedEventHandler , 0 };

		static struct standardinterfacepart handler = { &vtblforhandler , implements , 1, &handler };

		EventRegistrationToken nocare;

		//*hEvent = CreateEvent(0, false, false, 0);

		//1[hEvent] = CreateEvent(0, false, false, 0);

		pwebview2->lpVtbl->add_WebMessageReceived(pwebview2, &handler, &nocare);
	}

	pCoreWebView2->lpVtbl->OpenDevToolsWindow(pCoreWebView2);

	getbufferandsizeAsync(createreference(L"register.js", headjs), onloadedregisterjs, pCoreWebView2);

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

	static struct standardinterfacepart handler = { &vtblforhandler , implements , 1, &handler };

	pwebview2->lpVtbl->add_NavigationStarting(pwebview2, &handler, &nocareonnvaigatedto);

	//extern __x_Microsoft_CUI_CXaml_CControls_CIWebView2* webview2inner;

	return S_OK;
}

static __x_Microsoft_CUI_CXaml_CControls_CIPageOverridesVtbl appmainpageoverridesvtbl = { QueryInterfaceWithInner, AddRef, Release, GetIids, GetRuntimeClassName, GetTrustLevel, stub, stub, stub };

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


struct standardinterfacepart mainframe = { &mainframevtbl, implementsmainframe, 1, &mainframe };

struct standardinterfacepart* outtermainframe = &mainframe;

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

	char* pMarkEndInterface; IInspectable* pinner;
} appmainpage = { &appmainpageoverridesvtbl, implementsmainpage, 1, &appmainpage,
	0, 0, 0, &appmainpageoverridesfactoryvtbl, implementsmainpagefact, 1, &appmainpage, 0,
	0, 0, &mainpagecomponentconnectorvtbl, implementsmainpagecomponnentconnector, 1, &appmainpage
};

__x_Microsoft_CUI_CXaml_CControls_CIPageOverrides* innerappmainpageoverrides;

__x_Microsoft_CUI_CXaml_CControls_CIPage* pmainpageinstance;

//BOOST_PP_REPEAT(9, declareoverridestubs, (appmainpageoverrides, 6))

//BOOST_PP_REPEAT(6, defineoverridestubscommon, appmainpageoverrides)

HRESULT QueryInterfaceMainPage(This, riid, ppvObject)
struct appinterface* This; REFIID riid; char** ppvObject;
{
	if (QueryInterface(This, riid, ppvObject) == S_OK)
		return S_OK;
	return IUnknown_QueryInterface(innerappmainpageoverrides, riid, ppvObject);
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

	//BOOST_PP_REPEAT(6, initvtblwithstubs, mainframe)

	mainframe.classname = createreference(L"_6a4h8_MainFrame", mainframestrhead);

	__x_Microsoft_CUI_CXaml_CControls_CIFrameFactory_CreateInstance(pFrameFact, 0, 0, &pMainFrame);

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

	debug = __x_Microsoft_CUI_CXaml_CControls_CIPageFactory_CreateInstance(pPageFact, &appmainpage, &appmainpage.pinner, &pmainpageinstance);

	__x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName typePage = { .Name = createreference(L"CBackBone.MainPage", headepagename1), .Kind = TypeKind_Metadata }
	;

	//loadmainpage();

	char test[sizeof(__x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName)];
	bool bSuccess;
	debug = (pMainFrame)->lpVtbl->Navigate(pMainFrame, typePage, somearbitraryobject, &bSuccess);

	debug = __x_Microsoft_CUI_CXaml_CIWindow_put_Content(pCoreWindow, pMainFrame);

	//pCoreWebView2->lpVtbl->NavigateToString(pCoreWebView2, L"<html>Hello world!</html>");

	//setframe(pMainFrame);
	return S_OK;
}


initmainpagestatics()
{
	BOOST_PP_REPEAT(3, initvtblwithstubs, (6, appmainpageoverrides));

	static HSTRING_HEADER stringheadappmainpageoverridesimpl, stringgeadappmainpageoverridesfact,
		stringheadcomponnnetconnector;

	//appmainpage.lpVtbl->QueryInterface = QueryInterfaceMainPage;
	appmainpage.lpVtbl->OnNavigatedTo = OnNavigatedTo;

	appmainpage.classname = createreference(L"CBackBone.MainPage", stringheadappmainpageoverridesimpl);
	appmainpage.classname1 = createreference(L"CBackBone.MainPageFactory", stringgeadappmainpageoverridesfact);
	appmainpage.classname2 = createreference(L"CBackBone.MainPageComponentConnector", stringgeadappmainpageoverridesfact);
}

IInspectable* loadmainpage()
{
	__x_ABI_CWindows_CFoundation_CIUriRuntimeClassFactory* pUriFact;

	activateclassdirect(RuntimeClass_Windows_Foundation_Uri, pUriFact, IID___x_ABI_CWindows_CFoundation_CIUriRuntimeClassFactory);

	__x_ABI_CWindows_CFoundation_CIUriRuntimeClass* pUri, * pUriApp;

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