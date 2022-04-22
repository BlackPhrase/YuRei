#pragma once

struct cfont_manager;

namespace ui // TODO: or a class?
{

cfont_manager *g_font_manager{nullptr};

void init_globals()
{
	g_font_manager = nullptr;
};

void clean_globals()
{
	g_font_manager = nullptr;
};

}; // namespace ui