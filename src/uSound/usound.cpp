#include "usound.hpp"

namespace usound
{

manager *gpManager{nullptr};

manager *create(configuration *pConfig)
{
	gpManager = new manager();
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

}; // namespace usound