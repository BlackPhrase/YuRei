#pragma once

#include <uCore/coretypes.hpp>

struct YUREI_MODULE_API cfont_manager
{
public:
	cfont_manager();
	cfont_manager(const cfont_manager &other);
	~cfont_manager();
	
	cfont_manager &operator=(const cfont_manager &other);
	
	void initialize_fonts();
	
	void initialize_font(class gtl::intrusive_ptr<class urender::font, struct gtl::intrusive_base, struct urender::font_functionality> &, const char *, unsigned int);
	
	void render();
	
	void on_device_reset();
	
	const char *get_font_tex_name(const char *) const;
};