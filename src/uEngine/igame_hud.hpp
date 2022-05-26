#pragma once

#include <coretypes.hpp>

class YUREI_MODULE_API igame_hud
{
public:
	igame_hud();
	igame_hud(const igame_hud &other);
	virtual ~igame_hud();
	
	// TODO: vtable
	
	igame_hud &operator=(const igame_hud &other);
	
	virtual void load();
	
	virtual void on_frame();
	
	virtual void render_hud();
};

YUREI_MODULE_API extern igame_hud *g_game_hud;