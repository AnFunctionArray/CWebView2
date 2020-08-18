#undef UNICODE
#define COBJMACROS
#include <stddef.h>
#include <stdbool.h>
#include <windows.storage.h>
#include <robuffer.h>

#include "common.h"


__x_ABI_CWindows_CStorage_CIFileIOStatics* pFileStatics;

struct szandbuffer { UINT32 size; byte* pData; };


struct getbufferandsizeAsynchandler {
	__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile; const IID* implements;
	ULONG count; char* pBase; size_t szExternal; HSTRING classname;
	HRESULT(*QueryInterfaceHookOnMatch)(struct getbufferandsizeAsynchandler* This, REFIID riid, char** ppvObject);
	struct standardinterfacepart {
		__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl* pVtbl1; const IID* implements1; ULONG count1; char* pBase1;
		size_t szExternal1; HSTRING classname1;
		HRESULT(*QueryInterfaceHookOnMatch1)(struct standardinterfacepart* This, REFIID riid, char** ppvObject);
		struct externaldata {
			char* markend;
			HANDLE hWaitEvent; struct szandbuffer result; HSTRING filename;
			__FIAsyncOperation_1_Windows__CStorage__CStorageFile* pAsyncOp;
			__FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer* pAsyncOp1;
			struct getbufferandsizeAsynchandler* pRoot;
			int (*callback)(struct szandbuffer, char *); char* callbackparam;
		};
	};
};

struct szandbuffer getbufferandsz(__x_ABI_CWindows_CStorage_CStreams_CIBuffer* pBuffer)
{
	UINT32 szpixelshader;

	__x_ABI_CWindows_CStorage_CStreams_CIBuffer_get_Length(pBuffer, &szpixelshader);

	__x_ABI_CWindows_CStorage_CStreams_CIBuffer* pBufferByteAccess; //can't use in C so use some type here

	extern IID IID_IBufferByteAccess;

	__x_ABI_CWindows_CStorage_CStreams_CIBuffer_QueryInterface(pBuffer, &IID_IBufferByteAccess, &pBufferByteAccess);

	byte* pixelshader;

	((int (*)(char*, _Outptr_result_buffer_(_Inexpressible_("size given by different API")) byte * *value))pBufferByteAccess->lpVtbl->GetIids)(pBufferByteAccess, &pixelshader);

	struct szandbuffer ret = { szpixelshader ,pixelshader };

	return ret;
}

HRESULT CollectAFIleBuffer(struct standardinterfacepart* This,
	/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer* asyncInfo,
	/* [in] */ AsyncStatus status)
{
	__x_ABI_CWindows_CStorage_CStreams_CIBuffer* pBuffer;

	__FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_GetResults(asyncInfo, &pBuffer);

	if (!pBuffer) return S_OK;

	
	struct szandbuffer ret = getbufferandsz(pBuffer);

	This->result = ret;

	This->callback(ret, This->callbackparam, This->filename);

	return S_OK;
}


HRESULT CollectAFile(struct getbufferandsizeAsynchandler* This,
	/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile* asyncInfo,
	/* [in] */ AsyncStatus status)

{
	__x_ABI_CWindows_CStorage_CIStorageFile* pStorageFile;
	__FIAsyncOperation_1_Windows__CStorage__CStorageFile_GetResults(asyncInfo, &pStorageFile);

	if (!pStorageFile) return S_OK;

	__FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer* pBufferFileOperation;

	HRESULT debug = __x_ABI_CWindows_CStorage_CIFileIOStatics_ReadBufferAsync(pFileStatics, pStorageFile, &pBufferFileOperation);

	This->pAsyncOp1 = pBufferFileOperation;

	debug = __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_put_Completed(pBufferFileOperation, This);

	return S_OK;
}

getbufferandsizeAsync(HSTRING filename, int callback(struct szandbuffer), char * callbackparam)
{
	struct getbufferandsizeAsynchandler* pOwnHandler;
	__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFileVtbl* pOwnVtbl;
	__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl* pOwnVtbl1;
	__x_ABI_CWindows_CApplicationModel_CIPackage* pPackgae;

	__x_ABI_CWindows_CStorage_CIStorageFolder* pPackageFolder;

	__x_ABI_CWindows_CApplicationModel_CIPackageStatics* pPackageStatics;

	activateclassdirect(RuntimeClass_Windows_ApplicationModel_Package, pPackageStatics, IID___x_ABI_CWindows_CApplicationModel_CIPackageStatics);

	__x_ABI_CWindows_CApplicationModel_CIPackageStatics_get_Current(pPackageStatics, &pPackgae);

	__x_ABI_CWindows_CApplicationModel_CIPackage_get_InstalledLocation(pPackgae, &pPackageFolder);



	__FIAsyncOperation_1_Windows__CStorage__CStorageFile* pStorageFileOperation, * pStorageFileOperation1, * pStorageFileOperation2;

	__x_ABI_CWindows_CStorage_CIStorageFolder* pPackageFolder1;

	__x_ABI_CWindows_CStorage_CIStorageFolder_QueryInterface(pPackageFolder, &IID___x_ABI_CWindows_CStorage_CIStorageFolder, &pPackageFolder1);


	HRESULT debug = __x_ABI_CWindows_CStorage_CIStorageFolder_GetFileAsync(pPackageFolder1, filename, &pStorageFileOperation);

	static __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFileVtbl storageoperationhandlervtbl = { QueryInterface, AddRef, Release, CollectAFile };

	static __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl storageoperationhandlervtbl1 = { QueryInterface, AddRef, Release, CollectAFIleBuffer };

	pOwnVtbl = &storageoperationhandlervtbl, pOwnVtbl1 = &storageoperationhandlervtbl1;

	static struct getbufferandsizeAsynchandler storageoperationhandler;

	pOwnHandler = &storageoperationhandler;

	static const IID* implements[] = { &IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile , &IID_IUnknown, &IID_IAgileObject, 0 }, * implements1[] =
	{ &IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer , &IID_IUnknown, &IID_IAgileObject, 0 };

	struct getbufferandsizeAsynchandler localstorageoperationhandler = { pOwnVtbl, implements, 1,
		pOwnHandler, sizeof(struct externaldata),
		0, .pVtbl1 = pOwnVtbl1, implements1, 1,
		pOwnHandler, sizeof(struct externaldata),
		0, .filename = filename, .pAsyncOp = pStorageFileOperation,
		.pRoot = pOwnHandler, .callback = callback, .callbackparam = callbackparam };

	storageoperationhandler = localstorageoperationhandler;

	__FIAsyncOperation_1_Windows__CStorage__CStorageFile_put_Completed(pStorageFileOperation, pOwnHandler);
}

initfilestatics()
{
	activateclassdirect(RuntimeClass_Windows_Storage_FileIO, pFileStatics, IID___x_ABI_CWindows_CStorage_CIFileIOStatics);
}