#pragma once

#include <coretypes.hpp>

class YUREI_MODULE_API cenv_effect_flares
{
public:
	cenv_effect_flares();
	cenv_effect_flares(const cenv_effect_flares &other);
	~cenv_effect_flares();
	
	// TODO: vtable
	
	cenv_effect_flares &operator=(const cenv_effect_flares &other);
	
	void invalidate();
	
	int append_def(struct uscript::property::holder *, const char *);
	
	void on_device_create();
	void on_device_destroy();
	
	void on_frame(int);
	
	void render(bool, bool, bool);
};

class YUREI_MODULE_API cenv_effect_rain
{
public:
	struct item
	{
	};
	
	struct particle
	{
	};
	
	cenv_effect_rain();
	cenv_effect_rain(const cenv_effect_rain &other);
	~cenv_effect_rain();
	
	cenv_effect_rain &operator=(const cenv_effect_rain &other);
	
	void on_frame();
	
	void render();
	
	void born(item &, float);
	
	void hit(struct _vec3<float> &vPos);
	
	void renew_item(item &, float, bool);
	
	bool ray_pick(const struct _vec3<float> &vOrigin, const struct _vec3<float> &vDir, float &, enum collide::rq_target aeTarget);
	
	void p_create();
	void p_destroy();
	
	particle *p_allocate();
	void p_free(particle *pParticle);
	
	void p_insert(particle *pParticle, particle *&particles);
	void p_remove(particle *pParticle, particle *&particles);
	
	int p_size(particle *pParticle) const;
};

class YUREI_MODULE_API cenv_effect_thunderbolt
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
	
	bool ray_pick(const struct _vec3<float> &, const struct _vec3<float> &, float &);
};