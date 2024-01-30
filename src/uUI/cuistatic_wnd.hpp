#pragma once

#include <uCore/coretypes.hpp>

#include <uMath/vec2.hpp>

class cui_init;

class YUREI_MODULE_API cuistatic_wnd
{
public:
	cuistatic_wnd();
	cuistatic_wnd(const cuistatic_wnd &other);
	~cuistatic_wnd();
	
	// TODO: vtable
	
	cuistatic_wnd &operator=(const cuistatic_wnd &other);
	
	void init_uistatic_wnd(cui_init *pWut);
	
	void do_paint();
	
	void set_heading_angle(const float &angle);
	void set_heading_pivot(const struct _vec2<float> &vPivot);
};