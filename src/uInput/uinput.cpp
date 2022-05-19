#include "uinput.hpp"

#include <cstdio>

namespace uinput
{

manager *gpManager{nullptr};

manager *create(configuration *pConfig)
{
	printf("uInput manager creation!\n");
	gpManager = new manager(pConfig);
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