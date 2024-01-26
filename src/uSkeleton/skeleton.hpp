#pragma once

#include <coretypes.hpp>

namespace skeleton
{

struct configuration
{
	// TODO
};

struct manager
{
	// TODO
};

YUREI_MODULE_API manager *create(configuration *pConfig);
YUREI_MODULE_API void destroy();

};