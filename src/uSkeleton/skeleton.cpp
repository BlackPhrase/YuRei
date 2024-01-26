#include "skeleton.hpp"

namespace skeleton
{

manager *gpManager{nullptr};

manager *create(configuration *pConfig)
{
	// TODO: check if already created?
	
	gpManager = new manager(pConfig); // TODO: manager virtual interface -> inherited class instantiation
	//gpManager->init(pConfig);
	return gpManager;
};

void destroy()
{
	if(gpManager)
	{
		delete gpManager;
		gpManager = nullptr;
	};
};

};