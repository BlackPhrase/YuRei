#pragma once

#include <coretypes.hpp>

class YUREI_MODULE_API engine_camera
{
public:
	engine_camera();
	~engine_camera();
	
	engine_camera &operator=(const engine_camera &other);
	
	void build_precache_frame();
};