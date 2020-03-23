#ifdef IN_BOOST_HEADERS
#ifndef IN_SYSTEM_STUB
#define IN_SYSTEM_STUB
#include "AddAllCompilerFlags.h"
#include_next <iostream.h>
#include "RemoveAllCompilerFlags.h"
#undef IN_SYSTEM_STUB
#else
#include_next <iostream.h>
#endif
#else
#include_next <iostream.h>
#endif
