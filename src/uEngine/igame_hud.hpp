#pragma once

class igame_hud
{
public:
	igame_hud();
	igame_hud(const igame_hud &other);
	~igame_hud();
	
	void load();
	
	void on_frame();
	
	void render_hud();
};

extern igame_hud *g_game_hud;