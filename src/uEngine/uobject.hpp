#pragma once

class uobject
{
public:
	uobject();
	uobject(const uobject &other);
	~uobject();
	
	void scheduler_update(unsigned int);
	
	void spatial_register();
	void spatial_unregister();
	
	void spatial_move();
	void spatial_update(float, float);
	
	void set_id(unsigned short nID);
	void set_enabled(bool bState);
	void set_readonly(bool bState);
	void set_selected(bool bState);
	void set_destroy(bool bState);
	
	void on_editor_render(bool);
};