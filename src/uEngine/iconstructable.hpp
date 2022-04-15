#pragma once

class iconstructable
{
public:
	iconstructable();
	iconstructable(const iconstructable &other);
	~iconstructable();
	
	// TODO: vtable
	
	iconstructable &operator=(const iconstructable &other);
};