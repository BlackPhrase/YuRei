#pragma once

#include "uinput.hpp"

namespace uinput
{

struct receiver
{
	///
	virtual void on_key_pressed(uinput::Keys eKey) = 0;
	
	///
	virtual void on_key_released(uinput::Keys eKey) = 0;
	
	///
	virtual void on_button_pressed(Buttons eButton) = 0;
	
	///
	virtual void on_button_released(Buttons eButton) = 0;
};

}; // namespace uinput