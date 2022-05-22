#include "cinput_manager.hpp"

#include "dinput/inputdinput8.hpp"

//namespace uinput
//{

cinput_manager::cinput_manager(uinput::cinputdinput8 *pImpl, uinput::configuration *pConfig) : mpImpl(pImpl)
{
	mpImpl->init(pConfig->pWindow, pConfig->nScreenWidth, pConfig->nScreenHeight);
};

void cinput_manager::frame()
{
	mpImpl->frame();
};

void cinput_manager::add_receiver(uinput::receiver *pReceiver)
{
};

void cinput_manager::remove_receiver(uinput::receiver *pReceiver)
{
};

bool cinput_manager::is_key_down(int key) const
{
	return mpImpl->is_key_down(key);
};

//}; // namespace uinput