#include "ui.hpp"

namespace ui
{

cfont_manager *g_font_manager{nullptr};

void init_globals()
{
	g_font_manager = nullptr; // TODO
};

void clean_globals()
{
	if(g_font_manager)
	{
		delete g_font_manager;
		g_font_manager = nullptr;
	};
};

}; // namespace ui