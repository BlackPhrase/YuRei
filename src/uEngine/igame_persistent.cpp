#include "igame_persistent.hpp"

igame_persistent *g_game_persistent{nullptr};

igame_persistent::igame_persistent()
{
	g_game_persistent = this;
};

igame_persistent::igame_persistent(const igame_persistent &other)
{
};

igame_persistent::~igame_persistent()
{
	g_game_persistent = nullptr;
};

igame_persistent &igame_persistent::operator=(const igame_persistent &other)
{
	return *this;
};

void igame_persistent::start(const char *)
{
};

void igame_persistent::disconnect()
{
};

void igame_persistent::on_app_start()
{
};

void igame_persistent::on_app_end()
{
};

void igame_persistent::on_app_activate()
{
};

void igame_persistent::on_app_deactivate()
{
};

void igame_persistent::on_frame()
{
};

void igame_persistent::on_game_start()
{
};

void igame_persistent::on_game_end()
{
};

unsigned int igame_persistent::game_type() const
{
	return 0;
};