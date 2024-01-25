#pragma once

#include <coretypes.hpp>

struct sound;
class str_shared;

class YUREI_MODULE_API cenv_ambient
{
public:
	struct seffect
	{
	};
	
	cenv_ambient();
	cenv_ambient(const cenv_ambient &other);
	~cenv_ambient();
	
	cenv_ambient &operator=(const cenv_ambient &other);
	
	void load(const str_shared &);
	
	const str_shared &name() const;
	
	seffect *get_rnd_effect() const;
	sound *get_rnd_sound() const;
	
	unsigned int get_rnd_effect_time() const;
	unsigned int get_rnd_sound_time() const;
};