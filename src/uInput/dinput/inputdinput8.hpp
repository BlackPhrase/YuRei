#pragma once

#include <dinput.h>

namespace uinput
{

constexpr auto MAX_KEYBOARD_KEYS{256};

using tByte = unsigned char;

class cinputdinput8
{
public:
	~cinputdinput8();
	
	bool init(void *pWindow, int nScreenWidth, int nScreenHeight);
	
	void frame();
	
	bool is_key_down(int nKey) const;
private:
	void shutdown();
	
	bool read_keyboard();
	bool read_mouse();
	
	void process_input();
	
	void clamp_mouse_pos();
	
	int to_dinput_key(uinput::Keys eKey) const;
private:
	IDirectInput8 *mpDI{nullptr};
	IDirectInputDevice8 *mpMouse{nullptr};
	IDirectInputDevice8 *mpKeyboard{nullptr};
	
	tByte mnKeyboardState[MAX_KEYBOARD_KEYS]{};
	
	static std::unordered_map<uinput::Keys, int> mKeyMap;
	
	DIMOUSESTATE mMouseState{};
	
	int mnScreenWidth{0}, mnScreenHeight{0};
	int mnMouseX{0}, mnMouseY{0};
};

}; // namespace uinput