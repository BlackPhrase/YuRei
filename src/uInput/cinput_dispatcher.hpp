#pragma once

#include <vector>

#include "uinput.hpp"

namespace uinput
{

struct receiver;

// TODO: custom
class cinput_dispatcher
{
public:
	~cinput_dispatcher();
	
	void add_receiver(receiver *pReceiver);
	void remove_receiver(receiver *pReceiver);
	
	void key_pressed(Keys eKey);
	void key_released(Keys eKey);
private:
	std::vector<receiver*> mvReceivers;
};

}; // namespace uinput