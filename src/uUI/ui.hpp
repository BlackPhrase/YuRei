#pragma once

#include <uCore/coretypes.hpp>

struct cfont_manager;

namespace ui // TODO: or a class?
{

YUREI_MODULE_API extern cfont_manager *g_font_manager;

YUREI_MODULE_API void init_globals();
YUREI_MODULE_API void clean_globals();

}; // namespace ui