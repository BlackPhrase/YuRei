#pragma once

#include "OALHeaders.hpp"

class csoundopenal
{
public:
	csoundopenal();
	~csoundopenal();
	
	void init();
	void shutdown();
	
	void update();
private:
	ALCdevice *mpDevice{nullptr};
	ALCcontext *mpContext{nullptr};
};