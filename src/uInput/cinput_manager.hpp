#pragma once

#include <memory>

#include "uinput.hpp"

namespace uinput
{
class cinputdinput8;
class cinput_dispatcher;
};

class dummy_receiver;

class cinput_manager : public uinput::manager
{
public:
	cinput_manager(uinput::cinput_dispatcher *pDispatcher, uinput::cinputdinput8 *pImpl, uinput::configuration *pConfig);
	
	void frame() override;
	
	void add_receiver(uinput::receiver *pReceiver) override;
	void remove_receiver(uinput::receiver *pReceiver) override;
	
	bool is_key_down(uinput::Keys eKey) const override;
private:
	std::unique_ptr<uinput::cinputdinput8> mpImpl;
	
	std::unique_ptr<dummy_receiver> mpDummyReceiver;
	
	uinput::cinput_dispatcher *mpDispatcher{nullptr};
};