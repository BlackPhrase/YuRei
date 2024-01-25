#pragma once

#include <coretypes.hpp>

class cenvironment;

class YUREI_MODULE_API cenv_descriptor
{
public:
	cenv_descriptor();
	cenv_descriptor(const cenv_descriptor &other);
	~cenv_descriptor();
	
	cenv_descriptor &operator=(const cenv_descriptor &other);
	
	void load(const char *, const char *, cenvironment *pEnv);
	
	void copy(const cenv_descriptor &other);
};