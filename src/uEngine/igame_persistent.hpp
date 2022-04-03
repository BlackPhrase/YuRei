#pragma once

class igame_persistent
{
public:
	igame_persistent();
	igame_persistent(const igame_persistent &other);
	~igame_persistent();
	
	void start(const char *);
	
	void disconnect();
	
	void on_app_start();
	void on_app_end();
	
	void on_app_activate();
	void on_app_deactivate();
	
	void on_frame();
	
	void on_game_start();
	void on_game_end();
	
	unsigned int game_type() const;
};

extern igame_persistent *g_game_persistent;