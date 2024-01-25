#pragma once

#include <coretypes.hpp>

class YUREI_MODULE_API cenv_modifier
{
public:
	cenv_modifier &operator=(const cenv_modifier &other);
	
	void load(class gtl::intrusive_ptr<class vfs::ireader, struct gtl::intrusive_base, class gtl::intrusive_default_functionality>);
	
	float sum(cenv_modifier &, struct _vec3<float> &);
};