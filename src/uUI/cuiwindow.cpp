#include "cuiwindow.hpp"

cuiwindow::cuiwindow()
{
};

cuiwindow::cuiwindow(const cuiwindow &other)
{
};

cuiwindow::~cuiwindow()
{
};

cuiwindow &cuiwindow::operator=(const cuiwindow &other)
{
	return *this;
};

void cuiwindow::do_frame()
{
};

void cuiwindow::do_paint()
{
};

void cuiwindow::attach_child(cuiwindow *pWindow)
{
};

void cuiwindow::detach_child(cuiwindow *pWindow)
{
};

void cuiwindow::detach_all()
{
};

void cuiwindow::post_event(cuiwindow *, short, void *)
{
};

void cuiwindow::safe_remove_child(cuiwindow *pChild)
{
};

void cuiwindow::set_parent(cuiwindow *pParent)
{
};

void cuiwindow::set_message_target(cuiwindow *pTarget)
{
};

void cuiwindow::set_auto_delete(bool bState)
{
};

void cuiwindow::set_window_name(const str_shared &name)
{
};

void cuiwindow::on_focus_receive()
{
};

void cuiwindow::on_focus_lost()
{
};

void cuiwindow::on_click()
{
};

void cuiwindow::on_db_click()
{
};

void cuiwindow::on_mouse(const struct _vec2<float> &, enum euimessages)
{
};

void cuiwindow::on_mouse_down(int nButton)
{
};

void cuiwindow::on_mouse_up(int nButton)
{
};

void cuiwindow::on_mouse_move()
{
};

void cuiwindow::on_mouse_scroll(float fDelta)
{
};

void cuiwindow::on_notify_parent(cuiwindow *pParent, short, void *)
{
};

bool cuiwindow::is_focused() const
{
	return false;
};

bool cuiwindow::is_child(cuiwindow *parent) const
{
	return false;
};

bool cuiwindow::is_auto_delete() const
{
	return false;
};

int cuiwindow::get_child_num() const
{
	return 0;
};

cuiwindow *cuiwindow::find_child(const str_shared &name) const
{
	return nullptr;
};

cuiwindow *cuiwindow::pick_child(const struct _vec2<float> &) const
{
	return nullptr;
};

class u_list<cuiwindow*> &cuiwindow::get_child_wnd_list() const
{
	return {};
};

cuiwindow *cuiwindow::get_parent() const
{
	return nullptr;
};

cuiwindow *cuiwindow::get_message_target() const
{
	return nullptr;
};

const str_shared &cuiwindow::get_window_name() const
{
	return {};
};

void cuiwindow::get_absolute_pos(struct _vec2<float> &) const
{
};

void cuiwindow::get_absolute_rect(class _aabb2<float> &) const
{
};