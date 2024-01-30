#include "cuibase_window.hpp"

cuibase_window::cuibase_window()
{
};

cuibase_window::cuibase_window(const cuibase_window &other)
{
};

cuibase_window &cuibase_window::operator=(const cuibase_window &other)
{
	return *this;
};

void cuibase_window::show(bool bState)
{
};

void cuibase_window::set_wnd_width(float fWidth)
{
};

void cuibase_window::set_wnd_height(float fHeight)
{
};

void cuibase_window::set_wnd_pos(const struct _vec2<float> &)
{
};

void cuibase_window::set_wnd_rect(const class _aabb2<float> &)
{
};

void cuibase_window::set_wnd_size(const struct _vec2<float> &)
{
};

void cuibase_window::on_frame()
{
};

void cuibase_window::on_paint()
{
};

bool cuibase_window::is_shown() const
{
	return false;
};

struct _vec2<float> cuibase_window::get_wnd_size() const
{
	return {};
};

const class _aabb2<float> &cuibase_window::get_wnd_rect() const
{
	return {};
};