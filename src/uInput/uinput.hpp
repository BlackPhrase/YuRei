#pragma once

#include <coretypes.hpp>

namespace uinput
{

struct YUREI_MODULE_API configuration
{
	// TODO
};

struct YUREI_MODULE_API manager
{
	// TODO
};

YUREI_MODULE_API manager *create(configuration *pConfig);
YUREI_MODULE_API void destroy();

};