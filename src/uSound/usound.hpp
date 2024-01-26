#pragma once

#include <coretypes.hpp>

namespace usound
{

struct configuration
{
	// TODO
};

struct /*YUREI_MODULE_API*/ manager
{
	//isoundlistener *get_listener() const;
	
	//isoundsource *create_source() const;
	//void destroy_source(isoundsource *pSource);
};

struct event
{
	// TODO
};

YUREI_MODULE_API manager *create(configuration *pConfig);
YUREI_MODULE_API void destroy();

}; // namespace usound