#pragma once

class cuibase_window
{
public:
	cuibase_window();
	cuibase_window(const cuibase_window &other);
	
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
	
	struct _vec2<float> get_end_size() const;
	const class _aabb2<float> &get_wnd_rect() const;
};