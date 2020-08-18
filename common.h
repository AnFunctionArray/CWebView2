#include <Hstring.h>
#include <setjmp.h>
#include <boost/preprocessor/arithmetic/add.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/arithmetic/add.hpp>
#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/repetition/repeat.hpp>
#include <inspectable.h>
#include <crtdbg.h>
#define startinfintiteloop for(;;)

#define activateclassdirect(name, ptr, iid) activateclassdirect((name), sizeof (name), &(ptr), &(iid))

#define activateclasslight(name, ptr, iid) activateclasslight((name), sizeof (name), &(ptr), &(iid))

#define activateclasslight2(name, ptr, iid)  \
activateclasslight2((name), sizeof (name), &(ptr), &(iid))

extern QueryInterface(), stub(), AddRef(), Release(), GetIids(),
GetRuntimeClassName(), GetTrustLevel(), QueryInterfaceWithInner();

extern HSTRING createreference();

static HSTRING(*_createreference)() = createreference;

#define createreferencewithsize(string, size, ref) _createreference((string), (size), (&ref))

#define createreference(string, ref) createreference((string), sizeof (string), (&ref))

/*
#define paramsdecl(z, n, text) text##n,

#define paramsdef(z, n, text) *text##n,

#define createoverridestubs(_z, n, text) HRESULT text##overridestub##n(BOOST_PP_REPEAT(BOOST_PP_SUB(z_MAX_ARGS_COUNT, 1), paramsdecl, p) BOOST_PP_CAT(p, BOOST_PP_SUB(z, 1))) \
char BOOST_PP_REPEAT(BOOST_PP_SUB(z_MAX_ARGS_COUNT, 1), paramsdef, p) BOOST_PP_CAT(*p, BOOST_PP_SUB(z, 1));{ return inner##text && \
n##[(HRESULT (**)())inner##text->lpVtbl](inner##text, BOOST_PP_REPEAT(BOOST_PP_SUB(z_MAX_ARGS_COUNT, 1), paramsdecl, p) BOOST_PP_CAT(p, BOOST_PP_SUB(z, 1))), \
n##[(HRESULT (**)())outter##text->lpVtbl](outter##text->lpVtbl, BOOST_PP_REPEAT(BOOST_PP_SUB(z_MAX_ARGS_COUNT, 1), paramsdecl, p) BOOST_PP_CAT(p, BOOST_PP_SUB(z, 1))), S_OK;}
*/

//extern char *stub_proxy_asm();

extern IInspectableVtbl commonimplvtbl;

//#define createoverridestubs(z, n, text) HRESULT text##overridestub##n(char *p) \
{ stubhook(p, inner##text, stub_proxy_asm(), n); }

#define declareforwardfunc(z, n, base)  \
extern HRESULT BOOST_PP_CAT(forwardfunc, BOOST_PP_ADD(n, base))();

#define MAX_FORWARD_FUNCS_USED 16

BOOST_PP_REPEAT(MAX_FORWARD_FUNCS_USED, declareforwardfunc, 0)

//BOOST_PP_CAT(BOOST_PP_TUPLE_ELEM(2, 0, text), \
BOOST_PP_ADD(BOOST_PP_TUPLE_ELEM(2, 1, text), n))();

//#define defineoverridestubscommon(z, n, text) HRESULT text##n(p, pp, ppp) char *p, *pp, *ppp; \
{ return commonstubhook(p, pp, ppp, n, inner##text); }

#define initvtblwithstubs(z, n, baseplustext) (BOOST_PP_TUPLE_ELEM(2, 0, baseplustext)+n)\
	[(int (**)())(&BOOST_PP_CAT(BOOST_PP_TUPLE_ELEM(2, 1, baseplustext),vtbl))] = stub;

//jmp_buf env; struct commonimplementationout params; \
	if(!setjmp(env)) \
		params = commonimplementation(p, inner##text, n, &env), p = params.p, f = params.f; \
	else params.f(params.f, f); \
}
