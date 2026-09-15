#pragma once

#ifdef VX_PLATFORM_WINDOWS
	#ifdef VX_BUILD_DLL
		#define VEXTIS_API __declspec(dllexport)
	#else
		#define VEXTIS_API __declspec(dllimport)
	#endif
#else
	#error Vextis only supports Windows!
#endif