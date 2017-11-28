// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers

// TODO: reference additional headers your program requires here
#include<windows.h>
#include<Shlwapi.h>
#include<cstdlib>
#include <cassert>
#include <sstream>
#include<httpserv.h>
#include<wchar.h>
#include<vector>
#include"..\IISLib\hashtable.h"
#include"..\IISLib\stringu.h"
#include"..\IISLib\stringa.h"
#include"..\IISLib\multisz.h"
#include"..\IISLib\dbgutil.h"
#include"..\IISLib\ahutil.h"
#include"..\IISLib\hashfn.h"
#include"environmentvariablehash.h"
#include"utility.h"
#include"fx_ver.h"

#define ASPNETCORE_EVENT_PROVIDER L"IIS AspNetCore Module"
#define ASPNETCORE_IISEXPRESS_EVENT_PROVIDER L"IIS Express AspNetCore Module"
