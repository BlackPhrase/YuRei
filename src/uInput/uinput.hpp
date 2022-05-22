#pragma once

#include <coretypes.hpp>

namespace uinput
{

enum class Keys : int
{
	Escape
};

struct receiver;

struct /*YUREI_MODULE_API*/ configuration
{
	void *pWindow{nullptr};
	
	int nScreenWidth{0};
	int nScreenHeight{0};
};

struct YUREI_MODULE_API manager
{
	virtual ~manager() = default;
	
	virtual void frame() = 0;
	
	virtual void add_receiver(receiver *pReceiver) = 0;
	virtual void remove_receiver(receiver *pReceiver) = 0;
	
	virtual bool is_key_down(int key) const = 0;
};

YUREI_MODULE_API manager *create(configuration *pConfig);
YUREI_MODULE_API void destroy();

}; // namespace uinput