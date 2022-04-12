#pragma once

class uobject;

class renderable
{
public:
	renderable();
	renderable(const renderable &other);
	~renderable();
	
	// TODO: vtable
	
	renderable &operator=(const renderable &other);
	
	bool renderable_shadow_generate();
	
	uobject *renderable_dcast_uobject() const;
};