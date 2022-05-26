#include "cgame_persistent.hpp"

cgame_persistent gGamePersistent;
g_game_persistent = &gGamePersistent;

cgame_persistent::cgame_persistent()
{
	//g_game_persistent = this;
};

//cgame_persistent::cgame_persistent(const igame_persistent &other)
//{
//};

cgame_persistent::~cgame_persistent()
{
	g_game_persistent = nullptr;
};

//cgame_persistent &cgame_persistent::operator=(const cgame_persistent &other)
//{
	//return *this;
//};

void cgame_persistent::start(const char *something)
{
	igame_persistent::stat(something);
};

void cgame_persistent::disconnect()
{
	igame_persistent::disconnect();
};

void cgame_persistent::on_app_start()
{
	igame_persistent::on_app_start();
};

void cgame_persistent::on_app_end()
{
	igame_persistent::on_app_end();
};

void cgame_persistent::on_app_activate()
{
	igame_persistent::on_app_activate();
};

void cgame_persistent::on_app_deactivate()
{
	igame_persistent::on_app_deactivate();
};

void cgame_persistent::on_frame()
{
	igame_persistent::on_frame();
};

void cgame_persistent::on_game_start()
{
	igame_persistent::on_game_start();
};

void cgame_persistent::on_game_end()
{
	igame_persistent::on_game_end();
};

unsigned int cgame_persistent::game_type() const
{
	return igame_persistent::game_type();
};