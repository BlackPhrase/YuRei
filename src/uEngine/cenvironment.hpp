#pragma once

class str_shared;

class cenvironment
{
public:
	cenvironment();
	cenvironment(const cenvironment &other);
	~cenvironment();
	
	cenvironment &operator=(const cenvironment &other);
	
	void load();
	void unload();
	
	void mods_load();
	void mods_unload();
	
	void reload();
	
	void invalidate();
	
	void on_device_create();
	void on_device_destroy();
	
	void on_frame();
	
	void render_flares();
	void render_last();
	
	void stop_wfx();
	
	void set_game_time(float, float);
	
	float normalize_time(float) const;
	
	void set_weather(str_shared name, bool);
	bool set_weather_fx(str_shared name);
	
	str_shared get_weather() const;
	
	float time_diff(float, float) const;
	float time_weight(float, float, float) const;
	
	bool is_wfxplaying() const;
};