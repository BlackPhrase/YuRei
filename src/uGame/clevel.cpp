#include "clevel.hpp"

clevel gLevel;
g_game_level = &gLevel;

clevel::clevel()
{
	//g_game_level = this;
};

//clevel::clevel(const clevel &other)
//{
//};

clevel::~clevel()
{
	g_game_level = nullptr;
};

//clevel &clevel::operator=(const clevel &other)
//{
	//return *this;
//};

bool clevel::load(str_shared path)
{
	return igame_level::load(path);
};

bool clevel::load_game_specific_before()
{
	return igame_level::load_game_specific_before();
};

bool clevel::load_game_specific_after()
{
	return igame_level::load_game_specific_after();
};

void clevel::on_frame()
{
	igame_level::on_frame();
};

void clevel::on_render()
{
	igame_level::on_render();
};

void clevel::set_entity(uobject *entity)
{
	igame_level::set_entity(entity);
};

void clevel::set_view_entity(uobject *entity)
{
	igame_level::set_view_entity(entity);
};

uobject *clevel::current_entity() const
{
	return igame_level::current_entity();
};

uobject *clevel::current_view_entity() const
{
	return igame_level::current_view_entity();
};

unsigned short clevel::gen_id()
{
	return igame_level::gen_id();
};

void clevel::free_id(unsigned short id)
{
	igame_level::free_id(id);
};

void clevel::sound_event_register(const struct usound::event &event)
{
	igame_level::sound_event_register(event);
};

void clevel::sound_event_dispatch()
{
	igame_level::sound_event_dispatch();
};

void clevel::net_stop()
{
	igame_level::net_stop();
};

str_shared clevel::name() const
{
	return igame_level::name();
};

str_shared clevel::level_path() const
{
	return igame_level::level_path();
};