#include "urender.hpp"

#include <windows.h>

extern urender::manager *g_render;
extern urender::backend *g_backend;
extern urender::draw_utils *g_du;

urender::manager gRenderManager;
urender::backend gRenderBackend;
urender::draw_utils gRenderDrawUtils;

BOOL WINAPI DllMain(HINSTANCE hInstDLL, DWORD fdwReason, LPVOID lpReserved)
{
	if(fdwReason == DLL_PROCESS_ATTACH)
	{
		g_render = &gRenderManager;
		g_backend = &gRenderBackend;
		g_du = &gRenderDrawUtils;
		//return true;
	};
	
	//return false;
	return true;
};