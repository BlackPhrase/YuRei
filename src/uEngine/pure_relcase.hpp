#pragma once

#include <coretypes.hpp>

class YUREI_MODULE_API pure_relcase
{
public:
	pure_relcase(const pure_relcase &other);
	~pure_relcase(); // TODO: virtual?
	
	// TODO: vtable
	
	pure_relcase &operator=(const pure_relcase &other);
};