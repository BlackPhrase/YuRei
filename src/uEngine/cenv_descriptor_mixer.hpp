#pragma once

#include <coretypes.hpp>

class cenvironment;
class cenv_descriptor;
class cenv_modifier;

class YUREI_MODULE_API cenv_descriptor_mixer
{
public:
	cenv_descriptor_mixer();
	cenv_descriptor_mixer(const cenv_descriptor_mixer &other);
	~cenv_descriptor_mixer();
	
	cenv_descriptor_mixer &operator=(const cenv_descriptor_mixer &other);
	
	void clear();
	
	void lerp(cenvironment *pEnv, cenv_descriptor &first, cenv_descriptor &second, float, cenv_modifier &, float);
};