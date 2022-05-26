#include "igame_hud.hpp"

igame_hud *g_game_hud{nullptr};

igame_hud::igame_hud()
{
	g_game_hud = this;
};

igame_hud::igame_hud(const igame_hud &other)
{
};

igame_hud::~igame_hud()
{
	g_game_hud = nullptr;
};

igame_hud &igame_hud::operator=(const igame_hud &other)
{
	return *this;
};

void igame_hud::load()
{
};

void igame_hud::on_frame()
{
};

void igame_hud::render_hud()
{
};