#include <cstdio>

#include "cinput_manager.hpp"
#include "dinput/inputdinput8.hpp"

namespace uinput
{

manager *gpManager{nullptr};
cinputdinput8 *gpImpl{nullptr};

manager *create(configuration *pConfig)
{
	printf("uInput manager creation!\n");
	gpImpl = new cinputdinput8();
	gpManager = new cinput_manager(gpImpl, pConfig);
	return gpManager;
};

void destroy()
{
	if(gpManager)
	{
		delete gpManager;
		gpManager = nullptr;
	};
	
	if(gpImpl)
	{
		delete gpImpl;
		gpImpl = nullptr;
	};
};

}; // namespace uinput