#pragma once

class hemisphere
{
public:
	void build(int, float, void (*)(float, float, float, float, void *), void *);
	
	int indices(int, const unsigned short *&) const;
	int vertices(int, const struct _vec3<float> *&) const;
};