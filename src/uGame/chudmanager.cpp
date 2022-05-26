#include "chudmanager.hpp"

chudmanager gHUDManager;
g_game_hud = &gHUDManager;

chudmanager::chudmanager()
{
	//g_game_hud = this;
};

//chudmanager::chudmanager(const chudmanager &other)
//{
//};

chudmanager::~chudmanager()
{
	g_game_hud = nullptr;
};

//chudmanager &operator=(const chudmanager &other)
//{
	//return *this;
//};

void chudmanager::load()
{
	igame_hud::load();
};

void chudmanager::on_frame()
{
	igame_hud::on_frame();
};

void chudmanager::render_hud()
{
	igame_hud::render_hud();
};