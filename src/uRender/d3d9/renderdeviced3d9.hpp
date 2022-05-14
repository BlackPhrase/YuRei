#pragma once

#include <d3d9.h>

namespace urender
{

class crenderdeviced3d9
{
public:
	crenderdeviced3d9();
	~crenderdeviced3d9();
	
	void update();
	
	void clear();
	
	void begin_scene();
	void end_scene();
	
	void present();
//private:
	void init(void *pWindow);
	void shutdown();
private:
	IDirect3DDevice9 *mpDevice{nullptr};
};

extern crenderdeviced3d9 gRenderDevice;

}; // namespace urender