#pragma once

#include <cstdio>

#include "receiver.hpp"

class dummy_receiver : public uinput::receiver
{
public:
	dummy_receiver(uinput::manager *pManager) : mpManager(pManager){}
	
	void on_key_pressed(uinput::Keys eKey) override
	{
		printf("%s pressed\n", mpManager->key_to_string(eKey));
	};
	
	void on_key_released(uinput::Keys eKey) override
	{
		printf("%s released\n", mpManager->key_to_string(eKey));
	};
	
	void on_button_pressed(uinput::Buttons eButton) override
	{
		printf("%s pressed\n", mpManager->button_to_string(eButton));
	};
	
	void on_button_released(uinput::Buttons eButton) override
	{
		printf("%s released\n", mpManager->button_to_string(eButton));
	};
private:
	uinput::manager *mpManager{nullptr};
};