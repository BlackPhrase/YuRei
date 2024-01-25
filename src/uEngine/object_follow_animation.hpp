#pragma once

#include <coretypes.hpp>

class uobject;

class YUREI_MODULE_API object_follow_animation
{
public:
	object_follow_animation(uobject *pObject);
	~object_follow_animation();
	
	object_follow_animation &operator=(const object_follow_animation &other);
	
	void update();
	
	void bind();
	void unbind();
};