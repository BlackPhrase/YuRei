#include "urender.hpp"

#include "d3d9/renderdeviced3d9.hpp"

namespace urender
{

//manager gRenderManager;
//backend gRenderBackend;
//draw_utils gRenderDrawUtils;

void manager::init(void *pWindow)
{
	gRenderDevice.init(pWindow);
};

}; // namespace urender