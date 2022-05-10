#pragma once

#include <coretypes.hpp>

namespace urender
{

class YUREI_MODULE_API manager
{
public:
	manager() = default;
};

class YUREI_MODULE_API backend
{
public:
	void begin_frame();
	void end_frame();
};

class YUREI_MODULE_API draw_utils
{
public:
	draw_utils() = default;
};

}; // namespace urender