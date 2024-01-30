#pragma once

#include <uCore/coretypes.hpp>

#include <uMath/vec2.hpp>

class YUREI_MODULE_API cuistatic_item
{
public:
	cuistatic_item();
	cuistatic_item(const cuistatic_item &other);
	~cuistatic_item();
	
	cuistatic_item &operator=(const cuistatic_item &other);
	
	void init_shader(const char *, const char *, const class _aabb2<float> &, const struct _vec2<float> &);
	
	void do_render();
	
	void set_color(unsigned int);
	
	void set_heading_angle(const float &);
	void set_heading_pivot(const struct _vec2<float> &);
	
	void set_rect_func(const class fastdelegate::FastDelegate1<class _aabb2<float> &, void> &);
	
	void set_stretch_mode();
	void set_tile_mode();
};