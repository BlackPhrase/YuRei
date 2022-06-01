#pragma once

#include <unordered_map>

#include <dinput.h>

namespace uinput
{

constexpr auto MAX_KEYBOARD_KEYS{256};

using tByte = unsigned char;

class cinput_dispatcher;

class cinputdinput8
{
public:
	cinputdinput8(cinput_dispatcher *pDispatcher);
	~cinputdinput8();
	
	bool init(void *pWindow, int nScreenWidth, int nScreenHeight);
	
	void frame();
	
	bool is_key_down(/*const tByte &KeyboardState,*/ uinput::Keys eKey) const;
	bool is_button_down(uinput::Buttons eButton) const;
private:
	void shutdown();
	
	bool read_keyboard();
	bool read_mouse();
	
	void process_input();
	
	void clamp_mouse_pos();
	
	int to_dinput_key(uinput::Keys eKey) const;
	uinput::Keys to_internal_key(int nKey) const;
	
	int to_dinput_button(uinput::Buttons eButton) const;
	uinput::Buttons to_internal_button(int nButton) const;
	
	bool is_key_pressed(int nKey) const;
	bool is_key_released(int nKey) const;
	
	bool is_button_pressed(int nButton) const;
	bool is_button_released(int nButton) const;
private:
	IDirectInput8 *mpDI{nullptr};
	IDirectInputDevice8 *mpMouse{nullptr};
	IDirectInputDevice8 *mpKeyboard{nullptr};
	
	cinput_dispatcher *mpDispatcher{nullptr};
	
	tByte mnKeyboardState[MAX_KEYBOARD_KEYS]{};
	tByte mnOldKeyboardState[MAX_KEYBOARD_KEYS]{};
	
	static std::unordered_map<uinput::Keys, int> mKeyMap;
	static std::unordered_map<uinput::Buttons, int> mButtonMap;
	
	DIMOUSESTATE mMouseState{};
	DIMOUSESTATE mOldMouseState{};
	
	int mnScreenWidth{0}, mnScreenHeight{0};
	int mnMouseX{0}, mnMouseY{0};
};

}; // namespace uinput