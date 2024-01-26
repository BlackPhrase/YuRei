#pragma once

#include <coretypes.hpp>

namespace upapi // TODO: or class?
{

class manager
{
};

YUREI_MODULE_API void create();
YUREI_MODULE_API void destroy();

YUREI_MODULE_API manager *particle_manager();

};