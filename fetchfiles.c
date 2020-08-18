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
		//IUnknownVtbl* pVtbl2; const IID* implements2; ULONG count2; char* pBase2; size_t szExternal2;
		//HRESULT(*QueryInterfaceHookOnMatch2)(struct standardinterfacepart* This, REFIID riid, char** ppvObject);
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

	IAsyncInfo* pAsyncInfo; AsyncStatus asyncstatus;

	//HRESULT debug = __FIAsyncOperation_1_Windows__CStorage__CStorageFile_QueryInterface(This->pAsyncOp1, &IID_IAsyncInfo, &pAsyncInfo);

	//IAsyncInfo_Close(pAsyncInfo);

	
	struct szandbuffer ret = getbufferandsz(pBuffer);

	This->result = ret;

	This->callback(ret, This->callbackparam, This->filename);

	//SetEvent(This->hWaitEvent);

	return S_OK;
}


HRESULT CollectAFile(struct getbufferandsizeAsynchandler* This,
	/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile* asyncInfo,
	/* [in] */ AsyncStatus status)

{
	__x_ABI_CWindows_CStorage_CIStorageFile* pStorageFile;
	__FIAsyncOperation_1_Windows__CStorage__CStorageFile_GetResults(asyncInfo, &pStorageFile);

	if (!pStorageFile) return S_OK;

	IAsyncInfo* pAsyncInfo; AsyncStatus asyncstatus;

	//HRESULT debug = __FIAsyncOperation_1_Windows__CStorage__CStorageFile_QueryInterface(This->pAsyncOp, &IID_IAsyncInfo, &pAsyncInfo);

	//IAsyncInfo_Close(pAsyncInfo);

	//if (!pStorageFile) //if unsucessfull try again
		//return getbufferandsizeAsync(This->filename, This, This->lpVtbl), S_OK;

	__FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer* pBufferFileOperation, * pBufferFileOperation1;

	//_x_ABI_CWindows_CStorage_CIFileIOStatics* pFileStatics1;

	//__x_ABI_CWindows_CStorage_CIFileIOStatics_QueryInterface(pFileStatics, &IID___x_ABI_CWindows_CStorage_CIFileIOStatics, &pFileStatics1);

	HRESULT debug = __x_ABI_CWindows_CStorage_CIFileIOStatics_ReadBufferAsync(pFileStatics, pStorageFile, &pBufferFileOperation);

	This->pAsyncOp1 = pBufferFileOperation;

	//__FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_GetResults(pBufferFileOperation, &This[1].result);

	//debug = __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_QueryInterface(pBufferFileOperation, &IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer, &pBufferFileOperation1);

	debug = __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_put_Completed(pBufferFileOperation, This);

	debug = __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_QueryInterface(pBufferFileOperation, &IID_IAsyncInfo, &pAsyncInfo);

	IAsyncInfo_get_Status(pAsyncInfo, &asyncstatus);

	//debug = __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_Release(pBufferFileOperation);

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
		0,//, pOwnVtbl1,& IID_IUnknown, 1, pOwnHandler,sizeof(struct externaldata), 0,
		/*.hWaitEvent = CreateEvent(0, false, false, 0),*/ .filename = filename, .pAsyncOp = pStorageFileOperation,
		.pRoot = pOwnHandler, .callback = callback, .callbackparam = callbackparam };

	storageoperationhandler = localstorageoperationhandler;

	//__FIAsyncOperation_1_Windows__CStorage__CStorageFile_AddRef(pStorageFileOperation);

	//__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_AddRef(pOwnHandler);

	//__FIAsyncOperation_1_Windows__CStorage__CStorageFile_GetResults(pStorageFileOperation, &pOwnHandler->result);

	//if (__FIAsyncOperation_1_Windows__CStorage__CStorageFile_GetResults(pStorageFileOperation, &storageoperationhandler->CollectAFileForExampleResult) != S_OK)
	//__FIAsyncOperation_1_Windows__CStorage__CStorageFile_QueryInterface(pStorageFileOperation, &IID___FIAsyncOperation_1_Windows__CStorage__CStorageFile, &pStorageFileOperation1);
	__FIAsyncOperation_1_Windows__CStorage__CStorageFile_put_Completed(pStorageFileOperation, pOwnHandler);
	//__FIAsyncOperation_1_Windows__CStorage__CStorageFile_QueryInterface(pStorageFileOperation, &IID___FIAsyncOperation_1_Windows__CStorage__CStorageFile, &pStorageFileOperation2);

#if 0
	char* p;

	__FIAsyncOperation_1_Windows__CStorage__CStorageFile_get_Completed(pStorageFileOperation, &p);

	IAsyncInfo* pAsyncInfo; AsyncStatus asyncstatus;

	debug = __FIAsyncOperation_1_Windows__CStorage__CStorageFile_QueryInterface(pStorageFileOperation, &IID_IAsyncInfo, &pAsyncInfo);
#endif
	//for(;;)

	//IAsyncInfo_get_Status(pAsyncInfo, &asyncstatus),

	//IAsyncInfo_get_ErrorCode(pAsyncInfo, &debug);

	//__FIAsyncOperation_1_Windows__CStorage__CStorageFile_Release(pStorageFileOperation);
		//WaitForSingleObject(storageoperationhandler->hWaitEvent, INFINITE);
}

initfilestatics()
{
	activateclassdirect(RuntimeClass_Windows_Storage_FileIO, pFileStatics, IID___x_ABI_CWindows_CStorage_CIFileIOStatics);
}