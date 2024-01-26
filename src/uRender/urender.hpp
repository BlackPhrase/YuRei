#pragma once

#include <coretypes.hpp>

namespace urender
{

class /*YUREI_MODULE_API*/ manager
{
public:
	manager() = default;
	
	virtual void init(void *pWindow);
};

class /*YUREI_MODULE_API*/ backend
{
public:
	virtual void begin_frame();
	virtual void end_frame();
};

class /*YUREI_MODULE_API*/ draw_utils
{
public:
	draw_utils() = default;
};

}; // namespace urender