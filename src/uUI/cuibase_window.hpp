#pragma once

#include <uCore/coretypes.hpp>

#include <uMath/vec2.hpp>

class YUREI_MODULE_API cuibase_window
{
public:
	cuibase_window();
	cuibase_window(const cuibase_window &other);
	// TODO: no destructor?
	
	// TODO: vtable
	
	cuibase_window &operator=(const cuibase_window &other);
	
	void show(bool bState);
	
	void set_wnd_width(float fWidth);
	void set_wnd_height(float fHeight);
	void set_wnd_pos(const struct _vec2<float> &);
	void set_wnd_rect(const class _aabb2<float> &);
	void set_wnd_size(const struct _vec2<float> &);
	
	void on_frame();
	void on_paint();
	
	bool is_shown() const;
	
	struct _vec2<float> get_wnd_size() const; // TODO: no reference?
	const class _aabb2<float> &get_wnd_rect() const;
};