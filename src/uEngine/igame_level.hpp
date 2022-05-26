#pragma once

#include <coretypes.hpp>

class uobject;
class str_shared;

class YUREI_MODULE_API igame_level
{
public:
	igame_level();
	igame_level(const igame_level &other);
	virtual ~igame_level();
	
	// TODO: const igame_level::`vftable'{for `iconstructable'}
	// TODO: const igame_level::`vftable'{for `uinput::receiver'}
	
	igame_level &operator=(const igame_level &other);
	
	virtual bool load(str_shared path);
	
	virtual bool load_game_specific_before();
	virtual bool load_game_specific_after();
	
	virtual void on_frame();
	virtual void on_render();
	
	virtual void set_entity(uobject *entity);
	virtual void set_view_entity(uobject *entity);
	
	virtual uobject *current_entity() const;
	virtual uobject *current_view_entity() const;
	
	virtual unsigned short gen_id();
	virtual void free_id(unsigned short id);
	
	virtual void sound_event_register(const struct usound::event &event);
	virtual void sound_event_dispatch();
	
	virtual void net_stop();
	
	virtual str_shared name() const;
	virtual str_shared level_path() const;
};

YUREI_MODULE_API extern igame_level *g_game_level;