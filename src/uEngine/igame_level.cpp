#include "igame_level.hpp"

igame_level *g_game_level{nullptr};

igame_level::igame_level()
{
	g_game_level = this;
};

igame_level::igame_level(const igame_level &other)
{
};

igame_level::~igame_level()
{
	g_game_level = nullptr;
};

igame_level &igame_level::operator=(const igame_level &other)
{
	return *this;
};

bool igame_level::load(str_shared path)
{
	return false;
};

bool igame_level::load_game_specific_before()
{
	return false;
};

bool igame_level::load_game_specific_after()
{
	return false;
};

void igame_level::on_frame()
{
};

void igame_level::on_render()
{
};

void igame_level::set_entity(uobject *entity)
{
};

void igame_level::set_view_entity(uobject *entity)
{
};

uobject *igame_level::current_entity() const
{
	return nullptr;
};

uobject *igame_level::current_view_entity() const
{
	return nullptr;
};

unsigned short igame_level::gen_id()
{
	return 0;
};

void igame_level::free_id(unsigned short id)
{
};

void igame_level::sound_event_register(const struct usound::event &event)
{
};

void igame_level::sound_event_dispatch()
{
};

void igame_level::net_stop()
{
};

str_shared igame_level::name() const
{
	return "";
};

str_shared igame_level::level_path() const
{
	return "";
};