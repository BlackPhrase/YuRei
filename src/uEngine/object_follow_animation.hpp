#pragma once

class uobject;

class object_follow_animation
{
public:
	object_follow_animation(uobject *pObject);
	~object_follow_animation();
	
	object_follow_animation &operator=(const object_follow_animation &other);
	
	void update();
	
	void bind();
	void unbind();
};