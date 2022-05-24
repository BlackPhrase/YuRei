#include <cstdio>

#include "cinput_manager.hpp"
#include "cinput_dispatcher.hpp"
#include "dinput/inputdinput8.hpp"

namespace uinput
{

manager *gpManager{nullptr};
cinputdinput8 *gpImpl{nullptr};
cinput_dispatcher *gpDispatcher{nullptr};

manager *create(configuration *pConfig)
{
	printf("uInput manager creation!\n");
	gpDispatcher = new cinput_dispatcher();
	gpImpl = new cinputdinput8(gpDispatcher);
	gpManager = new cinput_manager(gpDispatcher, gpImpl, pConfig);
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
	
	if(gpDispatcher)
	{
		delete gpDispatcher;
		gpDispatcher = nullptr;
	};
};

}; // namespace uinput