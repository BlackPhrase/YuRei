#pragma once

class uobject;
class str_shared;

class igame_level
{
public:
	igame_level();
	igame_level(const igame_level &other);
	~igame_level();
	
	bool load(str_shared path);
	
	bool load_game_specific_before();
	bool load_game_specific_after();
	
	void on_frame();
	void on_render();
	
	void set_entity(uobject *entity);
	void set_view_entity(uobject *entity);
	
	uobject *current_entity() const;
	uobject *current_view_entity() const;
	
	unsigned short gen_id();
	void free_id(unsigned short id);
	
	void sound_event_register(const struct usound::event &event);
	
	void sound_event_dispatch();
	
	str_shared name() const;
	str_shared level_path() const;
};

extern igame_level *g_game_level;