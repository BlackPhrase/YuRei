#pragma once

#include <memory>
#include <unordered_map>

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
	const char *key_to_string(uinput::Keys eKey) const override;
	
	bool is_button_down(uinput::Buttons eButton) const override;
	const char *button_to_string(uinput::Buttons eButton) const override;
private:
	static std::unordered_map<uinput::Keys, const char *> mKeyNameMap;
	static std::unordered_map<uinput::Buttons, const char *> mButtonNameMap;
	
	std::unique_ptr<uinput::cinputdinput8> mpImpl;
	
	std::unique_ptr<dummy_receiver> mpDummyReceiver;
	
	uinput::cinput_dispatcher *mpDispatcher{nullptr};
};