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
