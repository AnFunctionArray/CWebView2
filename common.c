#define ENABLE_WINRT_EXPERIMENTAL_TYPES
#include <windows.foundation.h>
#include <Microsoft.UI.h>
#include <Microsoft.UI.Xaml.h>
#include <Microsoft.UI.Xaml.Controls.h>
#include <WebView2_p.h>

ICoreWebView2 *getcorewebview2(__x_Microsoft_CUI_CXaml_CControls_CIWebView2* pwebview2)
{
	char* pactualwebview = (char*)pwebview2 - 0x18;

	return *((char**)pactualwebview + 0x1B);
}