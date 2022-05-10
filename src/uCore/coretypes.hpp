#pragma once

#ifdef _WIN32
#	ifdef YRAY_MODULE_EXPORTS
#		define YUREI_MODULE_API [[gnu::dllexport]]
#	else
#		define YUREI_MODULE_API [[gnu::dllimport]]
#	endif
#else
#	define YUREI_MODULE_API
#endif