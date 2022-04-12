#pragma once

class cenv_effect_flares
{
public:
	cenv_effect_flares();
	cenv_effect_flares(const cenv_effect_flares &other);
	~cenv_effect_flares();
	
	// TODO: vtable
	
	cenv_effect_flares &operator=(const cenv_effect_flares &other);
	
	void invalidate();
	
	void on_device_create();
	void on_device_destroy();
	
	void on_frame(int);
	
	void render(bool, bool, bool);
};

class cenv_effect_rain
{
public:
	struct item
	{
	};
	
	cenv_effect_rain();
	cenv_effect_rain(const cenv_effect_rain &other);
	~cenv_effect_rain();
	
	cenv_effect_rain &operator=(const cenv_effect_rain &other);
	
	void on_frame();
	
	void render();
	
	void born();
	
	void hit(struct _vec3<float> &vPos);
	
	void renew_item(item &, float, bool);
	
	void p_create();
	void p_destroy();
};

class cenv_effect_thunderbolt
{
public:
	cenv_effect_thunderbolt();
	cenv_effect_thunderbolt(const cenv_effect_thunderbolt &other);
	~cenv_effect_thunderbolt();
	
	cenv_effect_thunderbolt &operator=(const cenv_effect_thunderbolt &other);
	
	void on_frame(int, float, float);
	
	void render();
	
	void bolt(int, float, float);
	
	int append_def(const char *);
};