#include "cinput_manager.hpp"
#include "cinput_dispatcher.hpp"

#include "dinput/inputdinput8.hpp"

#include "dummy_receiver.hpp"

//namespace uinput
//{


cinput_manager::cinput_manager(uinput::cinput_dispatcher *pDispatcher, uinput::cinputdinput8 *pImpl, uinput::configuration *pConfig) : mpDispatcher(pDispatcher), mpImpl(pImpl)
{
	mpDummyReceiver = std::make_unique<dummy_receiver>(this);
	
	add_receiver(mpDummyReceiver.get());
	
	mpImpl->init(pConfig->pWindow, pConfig->nScreenWidth, pConfig->nScreenHeight);
};

void cinput_manager::frame()
{
	mpImpl->frame();
};

void cinput_manager::add_receiver(uinput::receiver *pReceiver)
{
	mpDispatcher->add_receiver(pReceiver);
};

void cinput_manager::remove_receiver(uinput::receiver *pReceiver)
{
	mpDispatcher->remove_receiver(pReceiver);
};

bool cinput_manager::is_key_down(int key) const
{
	return mpImpl->is_key_down(key);
};

//}; // namespace uinput