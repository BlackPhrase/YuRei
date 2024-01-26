#include "upapi.hpp"

namespace upapi
{

manager *gpManager{nullptr};

void create()
{
	gpManager = new manager(); // TODO: something inherited from it
};

void destroy()
{
	if(gpManager)
	{
		delete gpManager;
		gpManager = nullptr;
	};
};

manager *particle_manager()
{
	return gpManager;
};

};