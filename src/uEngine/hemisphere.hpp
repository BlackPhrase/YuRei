#pragma once

#include <coretypes.hpp>

class YUREI_MODULE_API hemisphere
{
public:
	void build(int, float, void (*)(float, float, float, float, void *), void *);
	
	int indices(int, const unsigned short *&) const;
	int vertices(int, const struct _vec3<float> *&) const;
};