#pragma once

#include <coretypes.hpp>

class YUREI_MODULE_API iconstructable
{
public:
	iconstructable();
	iconstructable(const iconstructable &other);
	~iconstructable();
	
	// TODO: vtable
	
	iconstructable &operator=(const iconstructable &other);
};