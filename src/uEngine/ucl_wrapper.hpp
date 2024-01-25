#pragma once

#include <coretypes.hpp>

class ufrustum;

class YUREI_MODULE_API ucl_wrapper
{
public:
	ucl_wrapper();
	~ucl_wrapper();
	
	ucl_wrapper &operator=(const ucl_wrapper &other);
	
	void r_clear();
	
	struct uspatial::result *r_begin();
	struct uspatial::result *r_end();
	
	void ray_options(unsigned int);
	void box_options(unsigned int);
	void frustum_options(unsigned int);
	
	void ray_query(const class uspatial::trimodel *, const struct _vec3<float> &, const struct _vec3<float> &, float);
	void box_query(const class uspatial::trimodel *, const struct _vec3<float> &, const struct _vec3<float> &);
	void frustum_query(const class uspatial::trimodel *, const ufrustum &);
	
	int r_count() const;
};

YUREI_MODULE_API extern ucl_wrapper ucollider;