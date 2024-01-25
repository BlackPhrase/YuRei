#pragma once

#include <coretypes.hpp>

class ccustom_motion;

struct YUREI_MODULE_API sanim_params
{
	sanim_params();
	
	sanim_params &operator=(const sanim_params &other);
	
	void update(float, float, bool);
	
	void play();
	void stop();
	
	void pause(bool bState);
	
	void set(float, float, float);
	void set(ccustom_motion *pMotion);
	
	float frame() const;
};