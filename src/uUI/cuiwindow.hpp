#pragma once

#include <uCore/coretypes.hpp>

#include <uMath/vec2.hpp>

class str_shared;

class YUREI_MODULE_API cuiwindow
{
public:
	cuiwindow();
	cuiwindow(const cuiwindow &other);
	~cuiwindow();
	
	// TODO: vtable
	
	cuiwindow &operator=(const cuiwindow &other);
	
	void do_frame();
	void do_paint();
	
	void attach_child(cuiwindow *pWindow);
	void detach_child(cuiwindow *pWindow);
	void detach_all();
	
	void post_event(cuiwindow *, short, void *);
	
	void safe_remove_child(cuiwindow *pChild);
	
	void set_parent(cuiwindow *pParent);
	
	void set_message_target(cuiwindow *pTarget);
	
	void set_auto_delete(bool bState);
	
	void set_window_name(const str_shared &name);
	
	void on_focus_receive();
	void on_focus_lost();
	
	void on_click();
	void on_db_click();
	
	void on_mouse(const struct _vec2<float> &, enum euimessages);
	
	void on_mouse_down(int nButton);
	void on_mouse_up(int nButton);
	
	void on_mouse_move();
	void on_mouse_scroll(float fDelta);
	
	void on_notify_parent(cuiwindow *pParent, short, void *);
	
	bool is_focused() const;
	bool is_child(cuiwindow *parent) const; // TODO: is child of parent or is the specified window is a child of me?
	bool is_auto_delete() const;
	
	int get_child_num() const;
	
	cuiwindow *find_child(const str_shared &name) const;
	cuiwindow *pick_child(const struct _vec2<float> &) const;
	
	class u_list<cuiwindow*> &get_child_wnd_list() const;
	
	cuiwindow *get_parent() const;
	cuiwindow *get_message_target() const;
	
	const str_shared &get_window_name() const;
	
	void get_absolute_pos(struct _vec2<float> &) const;
	void get_absolute_rect(class _aabb2<float> &) const;
};