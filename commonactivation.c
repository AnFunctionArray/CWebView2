#undef UNICODE
#define COBJMACROS
#include <stddef.h>
#include <windows.ui.xaml.h>
#include <roapi.h>
#include <stdbool.h>
#include <combaseapi.h>
#include <activation.h>

HSTRING createreference(string, sizeofstring, pheader) const wchar_t* string; size_t sizeofstring; HSTRING_HEADER* pheader;
{
	HSTRING newstring;

	WindowsCreateStringReference(string, sizeofstring / sizeof(wchar_t) - 1, pheader, &newstring);

	return newstring;
}

#define createreference(string, ref) createreference((string), sizeof (string), (ref))

activateclassdirect(name, sizeofname, ptr, piid) const wchar_t* name; size_t sizeofname; char** ptr; const IID* piid;
{
	HSTRING_HEADER header;

	HSTRING string;

	WindowsCreateStringReference(name, sizeofname / sizeof(wchar_t) - 1, &header, &string);

	const HRESULT debug = RoGetActivationFactory(string, piid, ptr);
}

activateclasslight(name, sizeofname, ptr, piid) const wchar_t* name; size_t sizeofname; char** ptr; const IID* piid;
{
	HSTRING_HEADER header;

	HSTRING string;

	IInspectable* pObjInspect;

	WindowsCreateStringReference(name, sizeofname / sizeof(wchar_t) - 1, &header, &string);

	const HRESULT debug = RoActivateInstance(string, &pObjInspect);

	IInspectable_QueryInterface(pObjInspect, piid, ptr);

	IInspectable_Release(pObjInspect);
}

activateclasslight2(name, sizeofname, ptr, piid, activfact) const wchar_t* name; size_t sizeofname; char** ptr; const IID* piid;
IActivationFactory* activfact;
{
	HSTRING_HEADER header;

	HSTRING string;

	IInspectable* pObjInspect;

	WindowsCreateStringReference(name, sizeofname / sizeof(wchar_t) - 1, &header, &string);

	HRESULT debug;
	if (!activfact)
		debug = RoGetActivationFactory(string, &IID_IActivationFactory, &activfact);

	debug = IActivationFactory_ActivateInstance(activfact, &pObjInspect);

	IInspectable_QueryInterface(pObjInspect, piid, ptr);

	//IInspectable_Release(pObjInspect);
}


struct standardinterfacepart {
	IUnknownVtbl* lpVtblornull; const IID** implements; ULONG count; struct standardinterfacepart* pBase;
	size_t szExternal; HSTRING classname;
	HRESULT(*QueryInterfaceHookOnMatch)(struct standardinterfacepart* This, REFIID riid, char** ppvObject);
};

static char __getbufferandsizeAsynchandlerlen[sizeof(struct standardinterfacepart)];

size_t queyobjbasesize(struct standardinterfacepart* This)
{
	struct standardinterfacepart* origThis = This;
	for (; This->lpVtblornull; ++This);

	return This - origThis;
}

HRESULT stub() { return S_OK; }
ULONG AddRef(struct standardinterfacepart* This)
{
	ULONG refcount;
	refcount = This->count;
	InterlockedIncrement(&This->count);
	InterlockedIncrement(&refcount);
	return refcount;
}
ULONG Release(struct standardinterfacepart* This)
{
	ULONG refCount;
	//InterlockedIncrement(&This->count);
	refCount = This->count;
	InterlockedDecrement(&This->count);
	InterlockedDecrement(&refCount);
	//if (refCount == 0)
		//return This->lpVtblornull = 0, 0;//free(This), 0;

	return refCount;
}

size_t getiidscount(struct standardinterfacepart* This)
{
	size_t count = 0;

	while (This->implements[count++]);

	return --count;
}

HRESULT GetIids(
	struct standardinterfacepart* This,
	ULONG* iidCount,
	IID** iids
) {
	*iidCount = getiidscount(This);
	iids = This->implements;
	return S_OK;
}
HRESULT GetRuntimeClassName(
	struct standardinterfacepart* This,
	HSTRING* className
) {
	*className = This->classname;
	return S_OK;
}
HRESULT GetTrustLevel(
	struct standardinterfacepart* This,
	TrustLevel* trustLevel
)
{
	*trustLevel = PartialTrust;
	return S_OK;
}
HRESULT QueryInterface(This, riid, ppvObject) //query for our own handlers
struct standardinterfacepart* This; REFIID riid; char** ppvObject;
{
	if (!ppvObject) return E_POINTER;

	struct standardinterfacepart* NewThis = This;

	size_t szObject;

	size_t debug;

	/*if (!memcmp(riid, &IID_IUnknown, sizeof * riid) ||
		!memcmp(riid, &IID_IInspectable, sizeof * riid))

		return szObject = (debug = queyobjbasesize(This)) * sizeof *This + This->szExternal,
		//NewThis = malloc(szObject), memcpy(NewThis, This, szObject),
		//NewThis->count = 0,
		//NewThis->bIsNewMem = true,
		//NewThis->lpVtblornull->AddRef(NewThis),
		*ppvObject = This, S_OK;*/

	* ppvObject = 0;

	This = This->pBase;

	const IID zeroIID = { 0 };

	for (; This->lpVtblornull; ++This)
		for (const IID** implements = This->implements; *implements; ++implements)
			if (!memcmp(riid, *implements, sizeof * riid))
				return szObject = (debug = queyobjbasesize(This)) * sizeof * This + This->szExternal,
				//NewThis = malloc(szObject), memcpy(NewThis, This, szObject),
				//NewThis->count = 0,
				//NewThis->bIsNewMem = true,
				This->lpVtblornull->AddRef(This),
				* ppvObject = This,
				This->QueryInterfaceHookOnMatch
				&& This->QueryInterfaceHookOnMatch(This, riid, ppvObject), S_OK;

	return  E_NOINTERFACE;
}