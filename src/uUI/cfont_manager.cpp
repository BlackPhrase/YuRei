#include "cfont_manager.hpp"

cfont_manager::cfont_manager()
{
};

cfont_manager::cfont_manager(const cfont_manager &other)
{
};

cfont_manager::~cfont_manager()
{
};

cfont_manager &cfont_manager::operator=(const cfont_manager &other)
{
	return *this;
};

void cfont_manager::initialize_fonts()
{
};

void cfont_manager::initialize_font(class gtl::intrusive_ptr<class urender::font, struct gtl::intrusive_base, struct urender::font_functionality> &, const char *, unsigned int)
{
};

void cfont_manager::render()
{
};

void cfont_manager::on_device_reset()
{
};

const char *cfont_manager::get_font_tex_name(const char *) const
{
	return "";
};