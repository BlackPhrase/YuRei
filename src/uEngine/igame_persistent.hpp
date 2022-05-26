#pragma once

#include <coretypes.hpp>

class YUREI_MODULE_API igame_persistent
{
public:
	igame_persistent();
	igame_persistent(const igame_persistent &other);
	virtual ~igame_persistent();
	
	// TODO: vtable
	
	igame_persistent &operator=(const igame_persistent &other);
	
	virtual void start(const char *);
	
	virtual void disconnect();
	
	virtual void on_app_start();
	virtual void on_app_end();
	
	virtual void on_app_activate();
	virtual void on_app_deactivate();
	
	virtual void on_frame();
	
	virtual void on_game_start();
	virtual void on_game_end();
	
	virtual unsigned int game_type() const;
};

YUREI_MODULE_API extern igame_persistent *g_game_persistent;