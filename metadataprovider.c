#undef UNICODE
#define COBJMACROS
#include <stddef.h>
#include <stdint.h>
#include <roapi.h>
#include <stdbool.h>
#include <crtdbg.h>
#include <WebView2_p.h>
#include <weakreference.h>
#include <Windows.Applicationmodel.Activation.h>
#include <Windows.ApplicationModel.core.h>
#include <Windows.UI.Core.h>
#define ENABLE_WINRT_EXPERIMENTAL_TYPES
//#include "onlywhatweneed.h
#include <Microsoft.UI.Xaml.h>
#include <boost/preprocessor/repetition/repeat.hpp>
#include <Unknwn.h>
#include <windows.foundation.h>
#include <Microsoft.UI.h>
#include <Microsoft.UI.Xaml.h>
#include <Microsoft.UI.Xaml.Controls.h>
#include <Microsoft.UI.Xaml.XamlTypeInfo.h>
#include <Microsoft.UI.Xaml.Markup.h>
#include <Microsoft.UI.Xaml.Controls.h>
#include <windows.system.h>
#include <windows.system.diagnostics.h>

#define WINAPI_FAMILY (WINAPI_FAMILY_DESKTOP_APP)
#define __ocidl_h__
//#include <oleidl.h>

#include <corewindow.h>
#include <Windows.h>
#define startinfintiteloop for(;;)

#define activateclassdirect(name, ptr, iid) activateclassdirect((name), sizeof (name), &(ptr), &(iid))

#define activateclasslight(name, ptr, iid) activateclasslight((name), sizeof (name), &(ptr), &(iid))

#define activateclasslight2(name, ptr, iid, activfact)  \
activateclasslight2((name), sizeof (name), &(ptr), &(iid), ((char*)activfact))


extern QueryInterface(), stub(), AddRef(), Release(), GetIids(),
GetRuntimeClassName(), GetTrustLevel();

extern HSTRING createreference();

extern struct xamlinterfacetype* metadata;

extern size_t nmetadata;

struct xamlinterfacetype {
	__x_Microsoft_CUI_CXaml_CMarkup_CIXamlType; const IID** implements;
	ULONG count; struct xamlinterfacetype* pBase;
	size_t szExternal; HSTRING classname;
	HRESULT(*QueryInterfaceHookOnMatch)(struct xamlinterfacetype* This,
		REFIID riid, char** ppvObject);
	struct xamltypedata {
		char* pmarkend;
		HSTRING _contentPropertyName, _itemTypeName,
			_keyTypeName, _fullName;
		bool _isArray, _isMarkupExtension, _isEnum,
			_isBindable, _isReturnTypeStub, _isLocalType, isSystemType;
		int baseTypeIndex, * (*callbackoninit)(), (*callbackadddict)();
		IInspectable* instance;
		__x_ABI_CWindows_CUI_CXaml_CInterop_CTypeKind kindOfType;
	};
};

struct xamlmemberinterfacetype {
	__x_Microsoft_CUI_CXaml_CMarkup_CIXamlMember; const IID** implements;
	ULONG count; struct xamlmemberinterfacetype* pBase;
	size_t szExternal; HSTRING classname;
	HRESULT(*QueryInterfaceHookOnMatch)(struct xamlmemberinterfacetype* This,
		REFIID riid, char** ppvObject);
	struct xamlmemberdata {
		char* pmarkend;
		HSTRING name;
		bool IsReadOnly, IsDependencyProperty, IsAttachable;
		struct xamlinterfacetype* pType;
		struct xamlinterfacetype* pTargetType;
		int (*setvalue)(IInspectable* instance, IInspectable* value);
		IInspectable* (*retrievevalue)(IInspectable* instance);
		size_t retrieveplainindex, setplainindex;
		const IID* iidinstanceobject;
	};
} *pmembermetadata;

size_t nmembermetadata;

#define createreference(string, ref) createreference((string), sizeof (string), (&ref))

/* [propget] */HRESULT get_IsAttachable(
	struct xamlmemberinterfacetype* This,
	/* [retval, out] */boolean* value
) {
	*value = This->IsAttachable;
	return S_OK;
}
/* [propget] */HRESULT get_IsDependencyProperty(
	struct xamlmemberinterfacetype* This,
	/* [retval, out] */boolean* value
) {
	*value = This->IsDependencyProperty;
	return S_OK;
}
/* [propget] */HRESULT get_IsReadOnly(
	struct xamlmemberinterfacetype* This,
	/* [retval, out] */boolean* value
) {
	*value = This->IsReadOnly;
	return S_OK;
}
/* [propget] */HRESULT get_Name(
	struct xamlmemberinterfacetype* This,
	/* [retval, out] */HSTRING* value
) {
	*value = This->name;
	return S_OK;
}
/* [propget] */HRESULT get_TargetType(
	__x_Microsoft_CUI_CXaml_CMarkup_CIXamlMember* This,
	/* [retval, out] */__x_Microsoft_CUI_CXaml_CMarkup_CIXamlType** value
) {
	*value = 0;
	return S_OK;
}
/* [propget] */HRESULT get_Type(
	struct xamlmemberinterfacetype* This,
	/* [retval, out] */__x_Microsoft_CUI_CXaml_CMarkup_CIXamlType** value
) {
	*value = This->pType;
	return S_OK;
}
HRESULT GetValue(
	struct xamlmemberinterfacetype* This,
	/* [in] */IInspectable* instance,
	/* [retval, out] */IInspectable** result
) {
	*result = This->retrievevalue(instance, This->retrieveplainindex, This->iidinstanceobject);
	return S_OK;
}
HRESULT SetValue(
	struct xamlmemberinterfacetype* This,
	/* [in] */IInspectable* instance,
	/* [in] */IInspectable* value
) {
	This->setvalue(instance, value, This->setplainindex, This->iidinstanceobject);
	return S_OK;
}

/* [propget] */HRESULT get_BaseType(
	struct xamlinterfacetype* This,
	/* [retval, out] */__x_Microsoft_CUI_CXaml_CMarkup_CIXamlType** value
) {
	*value = metadata + This->baseTypeIndex;
	if (*value < metadata)
		*value = 0;
	return S_OK;
}
/* [propget] */HRESULT get_ContentProperty(
	struct xamlinterfacetype* This,
	/* [retval, out] */__x_Microsoft_CUI_CXaml_CMarkup_CIXamlMember** value
) {
	*value = 0;
	return S_OK;
}
/* [propget] */HRESULT get_FullName(
	struct xamlinterfacetype* This,
	/* [retval, out] */HSTRING* value
) {
	*value = This->_fullName;
	return S_OK;
}
/* [propget] */HRESULT get_IsArray(
	__x_Microsoft_CUI_CXaml_CMarkup_CIXamlType* This,
	/* [retval, out] */boolean* value
) {
	*value = false;
	return S_OK;
}
/* [propget] */HRESULT get_IsCollection(
	__x_Microsoft_CUI_CXaml_CMarkup_CIXamlType* This,
	/* [retval, out] */boolean* value
) {
	*value = false;
	return S_OK;
}
/* [propget] */HRESULT get_IsConstructible(
	struct xamlinterfacetype* This,
	/* [retval, out] */boolean* value
) {
	*value = This->callbackoninit || This->instance;
	return S_OK;
}
/* [propget] */HRESULT get_IsDictionary(
	struct xamlinterfacetype* This,
	/* [retval, out] */boolean* value
) {
	*value = This->callbackadddict;
	return S_OK;
}
/* [propget] */HRESULT get_IsMarkupExtension(
	struct xamlinterfacetype* This,
	/* [retval, out] */boolean* value
) {
	*value = This->_isMarkupExtension;
	return S_OK;
}
/* [propget] */HRESULT get_IsBindable(
	struct xamlinterfacetype* This,
	/* [retval, out] */boolean* value
) {
	*value = This->_isBindable;
	return S_OK;
}
/* [propget] */HRESULT get_ItemType(
	__x_Microsoft_CUI_CXaml_CMarkup_CIXamlType* This,
	/* [retval, out] */__x_Microsoft_CUI_CXaml_CMarkup_CIXamlType** value
) {
	*value = 0;
	return S_OK;
}
/* [propget] */HRESULT get_KeyType(
	__x_Microsoft_CUI_CXaml_CMarkup_CIXamlType* This,
	/* [retval, out] */__x_Microsoft_CUI_CXaml_CMarkup_CIXamlType** value
) {
	*value = 0;
	return S_OK;
}
/* [propget] */HRESULT get_BoxedType(
	__x_Microsoft_CUI_CXaml_CMarkup_CIXamlType* This,
	/* [retval, out] */__x_Microsoft_CUI_CXaml_CMarkup_CIXamlType** value
) {
	*value = 0;
	return S_OK;
}
/* [propget] */HRESULT get_UnderlyingType(
	struct xamlinterfacetype* This,
	/* [retval, out] */__x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName* value
) {
	if (This->isSystemType)
	{
		__x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName type = { This->_fullName, TypeKind_Primitive };
		*value = type;
	}
	else
	{
		__x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName type = { This->_fullName, This->kindOfType };
		*value = type;
	}
	return S_OK;
}
HRESULT ActivateInstance(
	struct xamlinterfacetype* This,
	/* [retval, out] */IInspectable** result
) {
	*result = This->callbackoninit ? This->callbackoninit() : This->instance;
	return S_OK;
}
HRESULT CreateFromString(
	__x_Microsoft_CUI_CXaml_CMarkup_CIXamlType* This,
	/* [in] */HSTRING value,
	/* [retval, out] */IInspectable** result
) {
	IInspectable* somearbitraryobject;
	static HSTRING_HEADER headpagename, headepagename1;

	__x_ABI_CWindows_CFoundation_CIPropertyValueStatics* pPropValueStatics;

	activateclassdirect(RuntimeClass_Windows_Foundation_PropertyValue, pPropValueStatics, IID___x_ABI_CWindows_CFoundation_CIPropertyValueStatics);

	HRESULT debug = __x_ABI_CWindows_CFoundation_CIPropertyValueStatics_CreateString(pPropValueStatics, value, result);

	//*result = 0;
	return S_OK;
}
HRESULT GetMember(
	struct xamlinterfacetype* This,
	/* [in] */HSTRING name,
	/* [retval, out] */__x_Microsoft_CUI_CXaml_CMarkup_CIXamlMember** result
) {
	for (size_t i = 0; i < nmembermetadata; ++i)
		if (i[pmembermetadata].pType == This &&
			!wcsicmp(WindowsGetStringRawBuffer(i[pmembermetadata].name, 0), WindowsGetStringRawBuffer(name, 0)))
			return *result = i + pmembermetadata, IUnknown_AddRef(*result), S_OK;
	return S_OK;
}
HRESULT AddToVector(
	__x_Microsoft_CUI_CXaml_CMarkup_CIXamlType* This,
	/* [in] */IInspectable* instance,
	/* [in] */IInspectable* value
) {
	return E_NOTIMPL;
}
HRESULT AddToMap(
	__x_Microsoft_CUI_CXaml_CMarkup_CIXamlType* This,
	/* [in] */IInspectable* instance,
	/* [in] */IInspectable* key,
	/* [in] */IInspectable* value
) {
	return E_NOTIMPL;
}
HRESULT RunInitializer(
	__x_Microsoft_CUI_CXaml_CMarkup_CIXamlType* This
) {
	return S_OK;
}

__x_Microsoft_CUI_CXaml_CMarkup_CIXamlTypeVtbl xamltypevtbl = {
	QueryInterface, AddRef, Release, GetIids, GetRuntimeClassName, GetTrustLevel,
	get_BaseType, get_ContentProperty,get_FullName,get_IsArray,get_IsCollection,
	get_IsConstructible,get_IsDictionary,get_IsMarkupExtension,get_IsBindable,
	get_ItemType,get_KeyType,get_BoxedType,get_UnderlyingType,ActivateInstance,
	CreateFromString,GetMember,AddToVector,AddToMap,RunInitializer
};

__x_Microsoft_CUI_CXaml_CMarkup_CIXamlMemberVtbl xamlmembervtbl = {
	QueryInterface, AddRef, Release, GetIids,
	GetRuntimeClassName, GetTrustLevel,
	get_IsAttachable, get_IsDependencyProperty
	,get_IsReadOnly,get_Name,get_TargetType,
	get_Type,GetValue,SetValue, };

const IID* xamltypeimplements[] = {
	&IID_IUnknown,&IID_IInspectable,&IID_IAgileObject,
	&IID___x_Microsoft_CUI_CXaml_CMarkup_CIXamlType, 0
}, * xamlmemberimplements[] = {
	&IID_IUnknown,&IID_IInspectable,&IID_IAgileObject,
	&IID___x_Microsoft_CUI_CXaml_CMarkup_CIXamlMember, 0
};

struct xamlinterfacetype* metadata;

size_t nmetadata;

IInspectable* get_data_webview2_Uri(IInspectable* instance)
{
	__x_ABI_CWindows_CFoundation_CIUriRuntimeClass* pReturn;

	__x_Microsoft_CUI_CXaml_CControls_CIWebView2* pWebView2;

	IInspectable_QueryInterface(instance,
		&IID___x_Microsoft_CUI_CXaml_CControls_CIWebView2, &pWebView2);

	__x_Microsoft_CUI_CXaml_CControls_CIWebView2_get_Source(pWebView2, &pReturn);

	return pReturn;
}

int set_data_webview2_Uri(IInspectable* instance, IInspectable* value)
{
	__x_ABI_CWindows_CFoundation_CIUriRuntimeClass* pIn;

	__x_ABI_CWindows_CFoundation_CIPropertyValue* pInpropval;

	__x_Microsoft_CUI_CXaml_CControls_CIWebView2* pWebView2;

	IInspectable_QueryInterface(instance,
		&IID___x_Microsoft_CUI_CXaml_CControls_CIWebView2, &pWebView2);

	IInspectable_QueryInterface(value,
		&IID___x_ABI_CWindows_CFoundation_CIPropertyValue, &pInpropval);

	HSTRING pUristr;

	__x_ABI_CWindows_CFoundation_CIPropertyValue_GetString(pInpropval, &pUristr);

	__x_ABI_CWindows_CFoundation_CIUriRuntimeClassFactory* pUriFact;

	activateclassdirect(RuntimeClass_Windows_Foundation_Uri, pUriFact, IID___x_ABI_CWindows_CFoundation_CIUriRuntimeClassFactory);

	__x_ABI_CWindows_CFoundation_CIUriRuntimeClass* pUri;

	__x_ABI_CWindows_CFoundation_CIUriRuntimeClassFactory_CreateUri(pUriFact, pUristr, &pUri);

	__x_Microsoft_CUI_CXaml_CControls_CIWebView2_put_Source(pWebView2, pUri);
}

IInspectable* get_data_bool(IInspectable* instance, size_t where, const IID* pInterface)
{

	__x_Microsoft_CUI_CXaml_CControls_CIWebView2* pSomeobject;

	bool bValue;

	IInspectable_QueryInterface(instance, pInterface, &pSomeobject);

	where[(HRESULT(**)())pSomeobject->lpVtbl](pSomeobject, &bValue);

	__x_ABI_CWindows_CFoundation_CIPropertyValueStatics* pPropValueStatics;

	IInspectable* somearbitraryobject;

	activateclassdirect(RuntimeClass_Windows_Foundation_PropertyValue, pPropValueStatics, IID___x_ABI_CWindows_CFoundation_CIPropertyValueStatics);

	__x_ABI_CWindows_CFoundation_CIPropertyValueStatics_CreateBoolean(pPropValueStatics, bValue, &somearbitraryobject);

	return somearbitraryobject;
}

int set_data_bool(IInspectable* instance, IInspectable* value, size_t where, const IID* pInterface)
{
	__x_ABI_CWindows_CFoundation_CIPropertyValue* pIn;
	IInspectable_QueryInterface(value, &IID___x_ABI_CWindows_CFoundation_CIPropertyValue, &pIn);

	bool bValue;

	__x_ABI_CWindows_CFoundation_CIPropertyValue_GetBoolean(pIn, &bValue);

	__x_Microsoft_CUI_CXaml_CControls_CIWebView2* pSomeobject;

	IInspectable_QueryInterface(instance, pInterface, &pSomeobject);

	where[(HRESULT(**)())pSomeobject->lpVtbl](pSomeobject, bValue);
}

addXamlControlsResourcestodict(instance, key, item)
IInspectable* instance, * key, * item;
{
	//__x_Microsoft_CUI_CXaml_CControls_CIXamlControlsResources* pXamlCtrlRes;

	//IInspectable_QueryInterface(instance, &IID___x_Microsoft_CUI_CXaml_CControls_CIXamlControlsResources, &pXamlCtrlRes);

	//__debugbreak();
}

IInspectable* XamlControlResourceinit()
{
	__x_Microsoft_CUI_CXaml_CControls_CIXamlControlsResources* pXamlCtrlRes;
	extern IActivationFactory* pxamlcontrolsresActivFactory;
	activateclasslight2(RuntimeClass_Microsoft_UI_Xaml_Controls_XamlControlsResources, pXamlCtrlRes, IID___x_Microsoft_CUI_CXaml_CControls_CIXamlControlsResources, 0);
	//Sleep(10000);
	return pXamlCtrlRes;
}

static IInspectableVtbl webview2vtbl = { QueryInterface, AddRef, Release, GetIids, GetRuntimeClassName, GetTrustLevel };

const static IID* implementsmainframe[] = { &IID_IInspectable, &IID_IUnknown,&IID_IAgileObject, 
&IID___x_Microsoft_CUI_CXaml_CControls_CIWebView2, & IID_ICoreWebView2, 0 };


struct standardinterfacepart {
	IInspectable; const IID** implements;
	ULONG count; struct xamlinterfacetype* pBase;
	size_t szExternal; HSTRING classname;
	HRESULT(*QueryInterfaceHookOnMatch)(struct xamlinterfacetype* This,
		REFIID riid, char** ppvObject), *pmarkend;
}webview2 = { &webview2vtbl, implementsmainframe, 1, &webview2,
	sizeof(char*), };

IInspectable* webview2inner2;
__x_Microsoft_CUI_CXaml_CControls_CIWebView2 *webview2inner;

#define initvtblwithstubs1(z, n, text) n##[(int (**)())(text.lpVtbl)] = text##overridestub##n;

#define initvtblwithstubs2(z, n, text) n##[(int (**)())(text.lpVtbl)] = text##overridestub2##n;

#define createoverridestubs1(z, n, text) HRESULT text##overridestub##n(p, pp) \
char *p, *pp;{ if(text##inner) pWebView2 = text##inner; return S_OK;}//return n##[(HRESULT (**)())text##inner->lpVtbl](text##inner, pp); \
				else return S_OK; \
}

#define createoverridestubs2(z, n, text) HRESULT text##overridestub2##n(p, pp, ppp) \
char *p, *pp, *ppp;{ return text##inner2 ? n##[(HRESULT (**)())text##inner2->lpVtbl](text##inner2, pp, ppp) : S_OK;}

__x_Microsoft_CUI_CXaml_CControls_CIWebView2* pWebView2 = 0;

BOOST_PP_REPEAT(6, createoverridestubs1, webview2)

BOOST_PP_REPEAT(6, createoverridestubs2, webview2)

HRESULT QueryInterfaceWebView2Fact(This, riid, ppvObject)

struct standardinterfacepart* This; REFIID riid; char** ppvObject;
{
	if (!memcmp(riid, &IID_ICoreWebView2, sizeof * riid))
		return S_OK;
	else if (QueryInterface(This, riid, ppvObject) == S_OK)
		return S_OK;
	return IUnknown_QueryInterface(webview2inner2, riid, ppvObject);
}

static HANDLE hWaitForWebView2;


HMODULE GetKernelModule()
{
	MEMORY_BASIC_INFORMATION mbi = { 0 };
	VirtualQuery(VirtualQuery, &mbi, sizeof(mbi));
	return mbi.AllocationBase;
}


static HRESULT Invokewebnavcompleted
(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CWebView2_Microsoft__CUI__CXaml__CControls__CWebView2NavigationCompletedEventArgs* This,
	/* [in] */ __RPC__in_opt __x_Microsoft_CUI_CXaml_CControls_CIWebView2* sender,
	/* [in] */ __RPC__in_opt __x_Microsoft_CUI_CXaml_CControls_CIWebView2NavigationCompletedEventArgs* e)
{
	HRESULT debug;

	ICoreWebView2* pCoreWebView2;

	ULONG iidcount;

	IID* pIIDs;

	webview2inner->lpVtbl->GetIids(sender, &iidcount, &pIIDs);

	__x_Microsoft_CUI_CXaml_CControls_CIWebView2* pWebView;

	__x_Microsoft_CUI_CXaml_CIUIElement* puielem;

	IInspectable_QueryInterface(sender, &IID___x_Microsoft_CUI_CXaml_CControls_CIWebView2, &pWebView);

	IInspectable_QueryInterface(sender, &IID___x_Microsoft_CUI_CXaml_CIUIElement, &puielem);

	__x_Microsoft_CUI_CXaml_CIXamlRoot* pxamlr;

	puielem->lpVtbl->get_XamlRoot(puielem, &pxamlr);

	extern const IID IID_IXamlRootNative;

	IInspectable* pxamlrnat;

	HWND hxaml;

	IInspectable_QueryInterface(pxamlr, &IID_IXamlRootNative, &pxamlrnat);

	debug = 3[(HRESULT(**)(char*, HWND*))pxamlrnat->lpVtbl](pxamlrnat, &hxaml);
	static HSTRING_HEADER head;

	//__x_Microsoft_CUI_CXaml_CControls_CIWebView2_NavigateToString(pWebView, createreference(L"<html>Hello world!</html>", head));

	HMODULE hMod = GetKernelModule();

	IInspectable* (*getwebview2provider)(char*, HWND, IInspectable**) = (char*)((HMODULE(*)())GetProcAddress(hMod, "GetModuleHandleW"))(L"Microsoft.UI.Xaml.Controls.dll") + 0x2cfe38;//0x2D0278;

	IInspectable* webview2provider;

	IUnknown* punkncorewindow;

	__x_Microsoft_CUI_CXaml_CIWindow* pCoreWindow;

	extern const IID IID_ICoreWindowInterop;

	ICoreWindowInterop* pCoreWindowInterop;

	__x_ABI_CWindows_CUI_CCore_CICoreWindowStatic* pcorwinstatics;

	activateclassdirect(RuntimeClass_Windows_UI_Core_CoreWindow, pcorwinstatics, IID___x_ABI_CWindows_CUI_CCore_CICoreWindowStatic);

	pcorwinstatics->lpVtbl->GetForCurrentThread(pcorwinstatics, &pCoreWindow);

	debug = pCoreWindow->lpVtbl->QueryInterface(pCoreWindow, &IID_IUnknown, &punkncorewindow);

	debug = punkncorewindow->lpVtbl->QueryInterface(punkncorewindow, &IID_ICoreWindowInterop, &pCoreWindowInterop);

	HWND hCurrentWnd;

	pCoreWindowInterop->lpVtbl->get_WindowHandle(pCoreWindowInterop, &hCurrentWnd);

	WCHAR classname[256];

	char* pactualwebview = (char*)pWebView - 0x18;

	//GetClassNameW(*((HWND*)pactualwebview + 0x29), classname, 256);

	//getwebview2provider(pactualwebview, &webview2provider, *((HWND*)pactualwebview + 0x29));

	webview2provider = *((char**)pactualwebview + 0x1B);// 0xD0);

	pCoreWebView2 = webview2provider;//(char*)pWebView + 0x20;

	//for (IInspectable* p = *(char **)pactualwebview; ; ++p)
		__try
	{
		//if (webview2provider->lpVtbl->QueryInterface(webview2provider, &IID_ICoreWebView2, &pCoreWebView2) == S_OK)
			//return S_OK;
	}
	__except(EXCEPTION_EXECUTE_HANDLER) {}

	pCoreWebView2->lpVtbl->NavigateToString(pCoreWebView2, L"<html>Hello world!</html>");

	return S_OK;

	IWeakReferenceSource* pweakrefsrc;

	IWeakReference* pweakref;

	IInspectable* pref, *pref1;

	pref = sender;

	for (;;)
	{
		HRESULT debug = IInspectable_QueryInterface(pref, &IID_IWeakReferenceSource, &pweakrefsrc);

		debug = pweakrefsrc->lpVtbl->GetWeakReference(pweakrefsrc, &pweakref);

		debug = IInspectable_QueryInterface(pweakref, &IID_ICoreWebView2, &pCoreWebView2);

		debug = pweakref->lpVtbl->Resolve(pweakref, &IID___x_Microsoft_CUI_CXaml_CControls_CIWebView2, &pref);

		debug = IInspectable_QueryInterface(pref, &IID_ICoreWebView2, &pCoreWebView2);

		debug = IInspectable_QueryInterface(pref, &IID___x_Microsoft_CUI_CXaml_CControls_CIWebView2, &pref1);

		pref->lpVtbl->GetIids(pref1, &iidcount, &pIIDs);
	}
	
	return S_OK;
}


__FITypedEventHandler_2_Microsoft__CUI__CXaml__CControls__CWebView2_Microsoft__CUI__CXaml__CControls__CWebView2NavigationCompletedEventArgsVtbl webview2navcompletedhandler = {
	QueryInterface, AddRef, Release, Invokewebnavcompleted
};

const static IID* implementswebnavcompletedhandler[] = { &IID_IInspectable, &IID_IUnknown,&IID_IAgileObject,
&IID_ICoreWebView2NavigationCompletedEventHandler, 0 };

struct standardinterfacepart webnavcompletedhandler = {&webview2navcompletedhandler, implementswebnavcompletedhandler,
	1, &webnavcompletedhandler, sizeof(char*),};


IInspectable* initwebview2()
{

	__x_Microsoft_CUI_CXaml_CControls_CIWebView2Factory* pWebView2Fact;

	IActivationFactory* pObjInspect;

	BOOST_PP_REPEAT(6, initvtblwithstubs1, webview2)

		HSTRING_HEADER headstr;

	HRESULT debug = RoGetActivationFactory(createreference(RuntimeClass_Microsoft_UI_Xaml_Controls_WebView2, headstr),
		&IID_IActivationFactory, &pObjInspect);

	//webview2.lpVtbl = 0;

	extern __x_Microsoft_CUI_CXaml_CIApplication* pApp;

	debug = IInspectable_QueryInterface(pObjInspect, &IID___x_Microsoft_CUI_CXaml_CControls_CIWebView2Factory, &pWebView2Fact);
	//debug = IActivationFactory_ActivateInstance(pObjInspect, &webview2);
	debug = __x_Microsoft_CUI_CXaml_CControls_CIWebView2Factory_CreateInstance(pWebView2Fact, 0
		, 0, &pWebView2);


	BOOST_PP_REPEAT(6, initvtblwithstubs2, webview2);

	//webview2.lpVtbl->QueryInterface = QueryInterfaceWebView2Fact;

	(pWebView2Fact)->lpVtbl->CreateInstance(pWebView2Fact, &webview2, &webview2inner2, &webview2inner);

	//EventRegistrationToken sometoken;

	//debug = webview2inner->lpVtbl->add_NavigationCompleted(webview2inner, &webnavcompletedhandler, &sometoken);

	return webview2inner;

	ULONG iidcount;

	IID* pIIDs;

	webview2inner->lpVtbl->GetIids(webview2inner2, &iidcount, &pIIDs);

	__x_Microsoft_CUI_CXaml_CControls_CIAnimatedVisualPlayer* pAvp;

	debug = IInspectable_QueryInterface(webview2inner, &IID___x_Microsoft_CUI_CXaml_CControls_CIAnimatedVisualPlayer, &pAvp);

	__x_Microsoft_CUI_CXaml_CControls_CIAnimatedVisualSource* pSrc;

	debug = pAvp->lpVtbl->get_Source(pAvp, &pSrc);

	ICoreWebView2* pCoreWebView2;

	debug = IInspectable_QueryInterface(pSrc, &IID_ICoreWebView2, &pCoreWebView2);

	/*ICoreWebView2* pCoreWebView2;

	debug = IInspectable_QueryInterface(webview2inner2, &IID_ICoreWebView2, &pCoreWebView2);

	//MULTI_QI pCoreWebView2arr[1];

	//debug = CoCreateInstanceFromApp(&LIBID_WebView2, 0, CLSCTX_INPROC_SERVER, 0, 1, pCoreWebView2);

	//pCoreWebView2 = pCoreWebView2arr->pItf;
	ICoreWebView2CreateCoreWebView2EnvironmentCompletedHandlerVtbl handlervtbl = { QueryInterface, AddRef, Release, }
	struct standardinterfacepart handler

	CreateCoreWebView2EnvironmentWithOptions(0, 0, 0, )

	debug = IInspectable_QueryInterface(pCoreWebView2, &IID___x_Microsoft_CUI_CXaml_CControls_CIWebView2, &pWebView2);*/

	//return pWebView2;
	//activateclassdirect(RuntimeClass_Microsoft_UI_Xaml_Controls_WebView2, pWebView2, IID___x_Microsoft_CUI_CXaml_CControls_CIWebView2);
	return webview2inner;

}

initmetadatastatics()
{
	static HSTRING_HEADER metdatalocalclassnamesheads[14];

	HSTRING metdatalocalclassnames[] =

#define common_beginning(i, string) createreference(string, \
	(i)[metdatalocalclassnamesheads])

	{ common_beginning(0, L"Microsoft.UI.Xaml.Controls.XamlControlsResources"),
		common_beginning(1, L"CBackBone.MainPage"),
		common_beginning(2, L"Microsoft.UI.Xaml.Controls.Page"),
		common_beginning(3, L"Microsoft.UI.Xaml.ResourceDictionary"),
		common_beginning(4, L"Microsoft.UI.Xaml.Controls.WebView2"),
		common_beginning(5, L"Microsoft.UI.Xaml.FrameworkElement"),
		common_beginning(6, L"Microsoft.UI.Xaml.Controls.UserControl"),
		common_beginning(7, L"Windows.Foundation.Uri"),
		common_beginning(8, L"Boolean"),
		common_beginning(9, L"Object"),

		//member types
		common_beginning(6 + 4, L"Source"),
		common_beginning(7 + 4, L"CanGoForward"),
		common_beginning(8 + 4, L"CanGoBack"),
		common_beginning(9 + 4, L"UseCompactResources"),
	};

	static struct xamlinterfacetype metadataglobal[10];

	_STATIC_ASSERT(_countof(metdatalocalclassnames) == 14);

	static struct xamlmemberinterfacetype metadatamembersglobal[4];

#undef common_beginning

	extern struct appinterface appmainpage;
	extern loadmainpage();
	extern __x_Microsoft_CUI_CXaml_CControls_CIWebView2* pWebView2;

#define common_beginning(i) &xamltypevtbl, xamltypeimplements, \
	0, metadataglobal + i, sizeof(struct xamltypedata), \
		i[metdatalocalclassnames], \
		._fullName = i[metdatalocalclassnames], \
		.baseTypeIndex = -1

	struct xamlinterfacetype metadatalocal[] =
	{ {common_beginning(0),
		.kindOfType = TypeKind_Metadata,
		.callbackoninit = XamlControlResourceinit,
		.callbackadddict = addXamlControlsResourcestodict,
		.baseTypeIndex = 3},
	 {common_beginning(1), .instance = &appmainpage,
		._isLocalType = true,
		.callbackoninit = loadmainpage,
		.kindOfType = TypeKind_Custom,
	.baseTypeIndex = 2},
	{common_beginning(2),
		.isSystemType = true,
		.kindOfType = TypeKind_Metadata},
	{common_beginning(3),
		.isSystemType = true,
		.kindOfType = TypeKind_Metadata},
	{common_beginning(4),
		//.instance = pWebView2,
		.callbackoninit = initwebview2,
		.kindOfType = TypeKind_Metadata,
	.baseTypeIndex = 5},
	{common_beginning(5),
		.isSystemType = true,
		.kindOfType = TypeKind_Metadata},
	{common_beginning(6),
		.isSystemType = true,
		.kindOfType = TypeKind_Metadata},
	{common_beginning(7),
		.isSystemType = true,
		.kindOfType = TypeKind_Metadata},
	{common_beginning(8),
		.isSystemType = true,
		.kindOfType = TypeKind_Metadata},
	{common_beginning(9),
		.isSystemType = true,
		.kindOfType = TypeKind_Metadata} };

#define common_beginning(i) &xamlmembervtbl, xamlmemberimplements, \
	0, metadatamembersglobal + i, sizeof(struct xamlmemberdata), \
		metdatalocalclassnames[i + 6 + 4], \
		.name = metdatalocalclassnames[i + 6 + 4], \
		.IsDependencyProperty = true

	__x_Microsoft_CUI_CXaml_CControls_CIWebView2Vtbl refwebviewvtbl;

	__x_Microsoft_CUI_CXaml_CControls_CIXamlControlsResourcesVtbl refctrlresvtbl;

	struct xamlmemberinterfacetype metadatamembers[] = {
		{common_beginning(0), .pType = metadataglobal + 4,
		.setvalue = set_data_webview2_Uri,
		.retrievevalue = get_data_webview2_Uri},
		{common_beginning(1), .pType = metadataglobal + 4,
		.setvalue = set_data_bool,
		.retrievevalue = get_data_bool,
	.retrieveplainindex = &refwebviewvtbl.get_CanGoForward - &refwebviewvtbl,
	.setplainindex = &refwebviewvtbl.put_CanGoForward - &refwebviewvtbl,
	.iidinstanceobject = &IID___x_Microsoft_CUI_CXaml_CControls_CIWebView2},
	{common_beginning(2), .pType = metadataglobal + 4,
		.setvalue = set_data_bool,
		.retrievevalue = get_data_bool,
	.retrieveplainindex = &refwebviewvtbl.get_CanGoBack - &refwebviewvtbl,
	.setplainindex = &refwebviewvtbl.put_CanGoBack - &refwebviewvtbl,
	.iidinstanceobject = &IID___x_Microsoft_CUI_CXaml_CControls_CIWebView2},
	{common_beginning(3), .pType = metadataglobal,
		.setvalue = set_data_bool,
		.retrievevalue = get_data_bool,
	.retrieveplainindex = &refctrlresvtbl.get_UseCompactResources - &refctrlresvtbl,
	.setplainindex = &refctrlresvtbl.put_UseCompactResources - &refctrlresvtbl,
	.iidinstanceobject = &IID___x_Microsoft_CUI_CXaml_CControls_CIXamlControlsResources}
	};

#undef common_beginning

	memcpy(metadataglobal, metadatalocal, sizeof metadatalocal);

	memcpy(metadatamembersglobal, metadatamembers, sizeof metadatamembers);

	metadata = metadataglobal;

	nmetadata = _countof(metadataglobal);

	pmembermetadata = metadatamembersglobal;

	nmembermetadata = _countof(metadatamembersglobal);
}

/* [overload, default_overload] */HRESULT GetXamlType(
	__x_Microsoft_CUI_CXaml_CMarkup_CIXamlMetadataProvider* This,
	/* [in] */__x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName type,
	/* [retval, out] */__x_Microsoft_CUI_CXaml_CMarkup_CIXamlType** result
)
{
	for (size_t i = 0; i < nmetadata; ++i)
		if (!wcsicmp(WindowsGetStringRawBuffer(type.Name, 0), WindowsGetStringRawBuffer(i[metadata]._fullName, 0))
			&& i[metadata].kindOfType == type.Kind)
			return *result = metadata + i, !metadata[i].count && IUnknown_AddRef(metadata + i), S_OK;
	*result = 0;
	return S_OK;
}
/* [overload] */HRESULT GetXamlTypeByFullName(
	__x_Microsoft_CUI_CXaml_CMarkup_CIXamlMetadataProvider* This,
	/* [in] */HSTRING fullName,
	/* [retval, out] */__x_Microsoft_CUI_CXaml_CMarkup_CIXamlType** result
)
{
	for (size_t i = 0; i < nmetadata; ++i)
		if (!wcsicmp(WindowsGetStringRawBuffer(fullName, 0), WindowsGetStringRawBuffer(i[metadata]._fullName, 0)))
			return *result = metadata + i, !metadata[i].count && IUnknown_AddRef(metadata + i), S_OK;
	*result = 0;
	return S_OK;
}
HRESULT GetXmlnsDefinitions(
	__x_Microsoft_CUI_CXaml_CMarkup_CIXamlMetadataProvider* This,
	/* [out] */UINT32* __resultSize,
	/* [size_is(, *(__resultSize)), retval, out] */__x_Microsoft_CUI_CXaml_CMarkup_CXmlnsDefinition** result
)
{
	*__resultSize = 0;
	*result = 0;
	return S_OK;
}
