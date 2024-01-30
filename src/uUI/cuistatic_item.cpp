#include "cuistatic_item.hpp"

cuistatic_item::cuistatic_item()
{
};

cuistatic_item::cuistatic_item(const cuistatic_item &other)
{
};

cuistatic_item::~cuistatic_item()
{
};

cuistatic_item &cuistatic_item::operator=(const cuistatic_item &other)
{
	return *this;
};

void cuistatic_item::init_shader(const char *, const char *, const class _aabb2<float> &, const struct _vec2<float> &)
{
};

void cuistatic_item::do_render()
{
};

void cuistatic_item::set_color(unsigned int nColor)
{
};

void cuistatic_item::set_heading_angle(const float &)
{
};

void cuistatic_item::set_heading_pivot(const struct _vec2<float> &)
{
};

void cuistatic_item::set_rect_func(const class fastdelegate::FastDelegate1<class _aabb2<float> &, void> &)
{
};

void cuistatic_item::set_stretch_mode()
{
};

void cuistatic_item::set_tile_mode()
{
};