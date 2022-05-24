#include "cinput_dispatcher.hpp"

#include "receiver.hpp"

namespace uinput
{

cinput_dispatcher::~cinput_dispatcher()
{
};

void cinput_dispatcher::add_receiver(receiver *pReceiver)
{
	mvReceivers.push_back(pReceiver);
};

void cinput_dispatcher::remove_receiver(receiver *pReceiver)
{
	//mvReceivers
};

void cinput_dispatcher::key_pressed(Keys eKey)
{
	for(const auto &It : mvReceivers)
		It->on_key_pressed(eKey);
};

void cinput_dispatcher::key_released(Keys eKey)
{
	for(const auto &It : mvReceivers)
		It->on_key_released(eKey);
};

}; // namespace uinput