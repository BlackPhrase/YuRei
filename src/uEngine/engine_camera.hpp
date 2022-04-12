#pragma once

class engine_camera
{
public:
	engine_camera();
	~engine_camera();
	
	engine_camera &operator=(const engine_camera &other);
	
	void build_precache_frame();
};