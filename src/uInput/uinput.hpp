#pragma once

#include <memory>

#include <coretypes.hpp>

namespace uinput
{

class cinputdinput8;

struct /*YUREI_MODULE_API*/ configuration
{
	void *pWindow{nullptr};
	
	int nScreenWidth{0};
	int nScreenHeight{0};
};

struct YUREI_MODULE_API manager
{
	manager(configuration *pConfig);
	
	virtual void frame();
	
	virtual bool is_key_down(int key) const;
private:
	std::unique_ptr<cinputdinput8> mpImpl;
};

YUREI_MODULE_API manager *create(configuration *pConfig);
YUREI_MODULE_API void destroy();

}; // namespace uinput