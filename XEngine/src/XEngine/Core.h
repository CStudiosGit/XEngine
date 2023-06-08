#pragma once

#ifdef XE_PLATFORM_WINDOWS
	#ifdef XE_BUILD_DLL
		#define XENGINE_API __declspec(dllexport)
	#else
		#define XENGINE_API __declspec(dllimport)
	#endif
#else
	#error XEngine only supports Windows!
#endif