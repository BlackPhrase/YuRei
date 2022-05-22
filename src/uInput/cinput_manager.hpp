#pragma once

#include <memory>

#include "uinput.hpp"

namespace uinput
{
class cinputdinput8;
};

class cinput_manager : public uinput::manager
{
public:
	cinput_manager(uinput::cinputdinput8 *pImpl, uinput::configuration *pConfig);
	
	void frame() override;
	
	void add_receiver(uinput::receiver *pReceiver) override;
	void remove_receiver(uinput::receiver *pReceiver) override;
	
	bool is_key_down(int key) const override;
private:
	std::unique_ptr<uinput::cinputdinput8> mpImpl;
};