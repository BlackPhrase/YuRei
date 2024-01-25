#pragma once

#include <coretypes.hpp>

class YUREI_MODULE_API cperlin_noise1d
{
public:
	cperlin_noise1d(int);
	
	cperlin_noise1d &operator=(const cperlin_noise1d &other);
	
	void init();
	
	float noise(float);
	
	float get(float) const;
};

class YUREI_MODULE_API cperlin_noise2d
{
public:
	cperlin_noise2d(int);
	
	cperlin_noise2d &operator=(const cperlin_noise2d &other);
	
	void init();
	
	float noise(const struct _vec2<float> &);
	
	float get(float, float) const;
	
	void normalize(float * const);
};

class YUREI_MODULE_API cperlin_noise3d
{
public:
	cperlin_noise3d(int);
	
	cperlin_noise3d &operator=(const cperlin_noise3d &other);
	
	void init();
	
	float noise(const struct _vec3<float> &);
	
	float get(float, float, float) const;
	
	void normalize(float * const);
};

class YUREI_MODULE_API cperlin_noise_custom
{
public:
	cperlin_noise_custom(int);
	
	cperlin_noise_custom &operator=(const cperlin_noise_custom &other);
	
	void set_octaves(int nValue);
	void set_amplitude(float fValue);
	void set_frequency(float fValue);
	
	void set_params(int nOctaves, float fAmplitude, float fFrequency);
};