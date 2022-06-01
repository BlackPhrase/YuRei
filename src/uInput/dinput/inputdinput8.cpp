//#include <debug.hpp>

#include "../uinput.hpp"
#include "../cinput_dispatcher.hpp"
#include "inputdinput8.hpp"

namespace uinput
{

std::unordered_map<uinput::Keys, int> cinputdinput8::mKeyMap =
{
	{uinput::Keys::Escape, DIK_ESCAPE},
	//{uinput::Keys::Tilde, DIK_GRAVE},
	{uinput::Keys::Tab, DIK_TAB},
	{uinput::Keys::CapsLock, DIK_CAPSLOCK},
	
	{uinput::Keys::Enter, DIK_RETURN},
	
	{uinput::Keys::LShift, DIK_LSHIFT},
	{uinput::Keys::RShift, DIK_RSHIFT},
	
	{uinput::Keys::LCtrl, DIK_LCONTROL},
	{uinput::Keys::RCtrl, DIK_RCONTROL},
	
	{uinput::Keys::LAlt, DIK_LALT},
	{uinput::Keys::RAlt, DIK_RALT},
	//Menu,
	
	{uinput::Keys::Up, DIK_UP},
	{uinput::Keys::Down, DIK_DOWN},
	{uinput::Keys::Left, DIK_LEFT},
	{uinput::Keys::Right, DIK_RIGHT},
	
	{uinput::Keys::Equals, DIK_EQUALS},
	{uinput::Keys::Minus, DIK_MINUS},
	
	{uinput::Keys::Space, DIK_SPACE},
	{uinput::Keys::BackSpace, DIK_BACKSPACE},
	
	{uinput::Keys::Home, DIK_HOME},
	{uinput::Keys::End, DIK_END},
	
	{uinput::Keys::Insert, DIK_INSERT},
	{uinput::Keys::Delete, DIK_DELETE},
	
	{uinput::Keys::PageUp, DIK_PGUP},
	{uinput::Keys::PageDown, DIK_PGDN},
	
	{uinput::Keys::LBracket, DIK_LBRACKET},
	{uinput::Keys::RBracket, DIK_RBRACKET},
	
	{uinput::Keys::Slash, DIK_SLASH},
	{uinput::Keys::BackSlash, DIK_BACKSLASH},
	
	{uinput::Keys::Period, DIK_PERIOD},
	{uinput::Keys::Comma, DIK_COMMA},
	{uinput::Keys::SemiColon, DIK_SEMICOLON},
	{uinput::Keys::Quote, DIK_APOSTROPHE},
	
	{uinput::Keys::A, DIK_A},
	{uinput::Keys::B, DIK_B},
	{uinput::Keys::C, DIK_C},
	{uinput::Keys::D, DIK_D},
	{uinput::Keys::E, DIK_E},
	{uinput::Keys::F, DIK_F},
	{uinput::Keys::G, DIK_G},
	{uinput::Keys::H, DIK_H},
	{uinput::Keys::I, DIK_I},
	{uinput::Keys::J, DIK_J},
	{uinput::Keys::K, DIK_K},
	{uinput::Keys::L, DIK_L},
	{uinput::Keys::M, DIK_M},
	{uinput::Keys::N, DIK_N},
	{uinput::Keys::O, DIK_O},
	{uinput::Keys::P, DIK_P},
	{uinput::Keys::Q, DIK_Q},
	{uinput::Keys::R, DIK_R},
	{uinput::Keys::S, DIK_S},
	{uinput::Keys::T, DIK_T},
	{uinput::Keys::U, DIK_U},
	{uinput::Keys::V, DIK_V},
	{uinput::Keys::W, DIK_W},
	{uinput::Keys::X, DIK_X},
	{uinput::Keys::Y, DIK_Y},
	{uinput::Keys::Z, DIK_Z},
	
	{uinput::Keys::F1, DIK_F1},
	{uinput::Keys::F2, DIK_F2},
	{uinput::Keys::F3, DIK_F3},
	{uinput::Keys::F4, DIK_F4},
	{uinput::Keys::F5, DIK_F5},
	{uinput::Keys::F6, DIK_F6},
	{uinput::Keys::F7, DIK_F7},
	{uinput::Keys::F8, DIK_F8},
	{uinput::Keys::F9, DIK_F9},
	{uinput::Keys::F10, DIK_F10},
	{uinput::Keys::F11, DIK_F11},
	{uinput::Keys::F12, DIK_F12},
	
	{uinput::Keys::k0, DIK_0},
	{uinput::Keys::k1, DIK_1},
	{uinput::Keys::k2, DIK_2},
	{uinput::Keys::k3, DIK_3},
	{uinput::Keys::k4, DIK_4},
	{uinput::Keys::k5, DIK_5},
	{uinput::Keys::k6, DIK_6},
	{uinput::Keys::k7, DIK_7},
	{uinput::Keys::k8, DIK_8},
	{uinput::Keys::k9, DIK_9},
	
	{uinput::Keys::NumPlus, DIK_ADD},
	{uinput::Keys::NumMinus, DIK_SUBTRACT},
	{uinput::Keys::NumMultiply, DIK_MULTIPLY},
	{uinput::Keys::NumDivide, DIK_DIVIDE},
	{uinput::Keys::NumPeriod, DIK_DECIMAL},
	{uinput::Keys::NumEnter, DIK_NUMPADENTER},
	
	{uinput::Keys::Num0, DIK_NUMPAD0},
	{uinput::Keys::Num1, DIK_NUMPAD1},
	{uinput::Keys::Num2, DIK_NUMPAD2},
	{uinput::Keys::Num3, DIK_NUMPAD3},
	{uinput::Keys::Num4, DIK_NUMPAD4},
	{uinput::Keys::Num5, DIK_NUMPAD5},
	{uinput::Keys::Num6, DIK_NUMPAD6},
	{uinput::Keys::Num7, DIK_NUMPAD7},
	{uinput::Keys::Num8, DIK_NUMPAD8},
	{uinput::Keys::Num9, DIK_NUMPAD9}
};

std::unordered_map<uinput::Buttons, int> cinputdinput8::mButtonMap =
{
	{uinput::Buttons::Left, DIMOFS_BUTTON0},
	{uinput::Buttons::Right, DIMOFS_BUTTON1},
	{uinput::Buttons::Middle, DIMOFS_BUTTON2}
};

cinputdinput8::cinputdinput8(cinput_dispatcher *pDispatcher) : mpDispatcher(pDispatcher){}

cinputdinput8::~cinputdinput8()
{
	shutdown();
};

bool cinputdinput8::init(void *pWindow, int nScreenWidth, int nScreenHeight)
{
	mnScreenWidth = nScreenHeight;
	mnScreenHeight = nScreenHeight;
	
	if(FAILED(DirectInput8Create(GetModuleHandle(nullptr), DIRECTINPUT_VERSION, IID_IDirectInput8, reinterpret_cast<void**>(&mpDI), nullptr)))
		return false;
	
	// Keyboard
	
	if(FAILED(mpDI->CreateDevice(GUID_SysKeyboard, &mpKeyboard, nullptr)))
		return false;
	
	if(FAILED(mpKeyboard->SetDataFormat(&c_dfDIKeyboard)))
		return false;
	
	if(FAILED(mpKeyboard->SetCooperativeLevel(reinterpret_cast<HWND>(pWindow), DISCL_FOREGROUND | DISCL_EXCLUSIVE)))
	{
		//msg("INPUT: Can't set the coop level.");
		return false;
	};
	
	if(FAILED(mpKeyboard->Acquire()))
		return false;
	
	// Mouse
	
	if(FAILED(mpDI->CreateDevice(GUID_SysMouse, &mpMouse, nullptr)))
		return false;
	
	if(FAILED(mpMouse->SetDataFormat(&c_dfDIMouse)))
		return false;
	
	if(FAILED(mpMouse->SetCooperativeLevel(reinterpret_cast<HWND>(pWindow), DISCL_FOREGROUND | DISCL_NONEXCLUSIVE)))
	{
		//msg("INPUT: Can't set the coop level.");
		return false;
	};
	
	if(FAILED(mpMouse->Acquire()))
		return false;
	
	return true;
};

void cinputdinput8::frame()
{
	// TODO: make if(!(a or b)) return?
	
	if(!read_keyboard())
		return;
	
	if(!read_mouse())
		return;
	
	process_input();
};

bool cinputdinput8::is_key_down(uinput::Keys eKey) const
{
	return mnKeyboardState[to_dinput_key(eKey)] & 0x80;
};

bool cinputdinput8::is_button_down(uinput::Buttons eButton) const
{
	return mMouseState.rgbButtons[to_dinput_button(eButton)] & 0x80;
};

void cinputdinput8::shutdown()
{
	if(mpMouse)
	{
		mpMouse->Unacquire();
		mpMouse->Release();
		mpMouse = nullptr;
	};
	
	if(mpKeyboard)
	{
		mpKeyboard->Unacquire();
		mpKeyboard->Release();
		mpKeyboard = nullptr;
	};
	
	if(mpDI)
	{
		mpDI->Release();
		mpDI = nullptr;
	};
};

bool cinputdinput8::read_keyboard()
{
	HRESULT hResult{mpKeyboard->GetDeviceState(sizeof(mnKeyboardState), reinterpret_cast<LPVOID>(&mnKeyboardState))};
	
	if(FAILED(hResult))
	{
		if(hResult == DIERR_INPUTLOST || hResult == DIERR_NOTACQUIRED)
			mpKeyboard->Acquire();
		else
			return false;
	};
	
	return true;
};

bool cinputdinput8::read_mouse()
{
	HRESULT hResult{mpMouse->GetDeviceState(sizeof(DIMOUSESTATE), reinterpret_cast<LPVOID>(&mMouseState))};
	
	if(FAILED(hResult))
	{
		if(hResult == DIERR_INPUTLOST || hResult == DIERR_NOTACQUIRED)
			mpMouse->Acquire();
		else
			return false;
	};
	
	return true;
};

void cinputdinput8::process_input()
{
	// Keyboard
	
	for(int i = 0; i < MAX_KEYBOARD_KEYS; ++i)
	{
		auto eKey{to_internal_key(i)};
		
		if(is_key_pressed(i))
			mpDispatcher->key_pressed(eKey);
		
		if(is_key_released(i))
			mpDispatcher->key_released(eKey);
	};
	
	memcpy(mnOldKeyboardState, mnKeyboardState, sizeof(mnKeyboardState));
	
	// Mouse
	
	mnMouseX = mMouseState.lX;
	mnMouseY = mMouseState.lY;
	
	clamp_mouse_pos();
	
	for(int i = 0; i < 3; ++i)
	{
		auto nButton{DIMOFS_BUTTON0 + i};
		
		if(is_button_pressed(i))
			mpDispatcher->button_pressed(to_internal_button(nButton));
		
		if(is_button_released(i))
			mpDispatcher->button_released(to_internal_button(nButton));
	};
	
	mOldMouseState = mMouseState;
	//memcpy(&mOldMouseState, &mMouseState, sizeof(mMouseState));
};

void cinputdinput8::clamp_mouse_pos()
{
	if(mnMouseX < 0)
		mnMouseX = 0;
	
	if(mnMouseY < 0)
		mnMouseY = 0;
	
	if(mnMouseX > mnScreenWidth)
		mnMouseX = mnScreenWidth;
	
	if(mnMouseY > mnScreenHeight)
		mnMouseY = mnScreenHeight;
};

int cinputdinput8::to_dinput_key(uinput::Keys eKey) const
{
	return mKeyMap[eKey];
};

uinput::Keys cinputdinput8::to_internal_key(int nKey) const
{
	for(const auto &[key, value] : mKeyMap)
		if(value == nKey)
			return key;
	
	return uinput::Keys::Invalid;
};

int cinputdinput8::to_dinput_button(uinput::Buttons eButton) const
{
	return mButtonMap[eButton];
};

uinput::Buttons cinputdinput8::to_internal_button(int nButton) const
{
	for(const auto &[button, value] : mButtonMap)
		if(value == nButton)
			return button;
	
	return uinput::Buttons::Invalid;
};

bool cinputdinput8::is_key_pressed(int nKey) const
{
	return (mnKeyboardState[nKey] & 0x80) && !(mnOldKeyboardState[nKey] & 0x80);
};

bool cinputdinput8::is_key_released(int nKey) const
{
	return !(mnKeyboardState[nKey] & 0x80) && (mnOldKeyboardState[nKey] & 0x80);
};

bool cinputdinput8::is_button_pressed(int nButton) const
{
	return (mMouseState.rgbButtons[nButton] & 0x80) && !(mOldMouseState.rgbButtons[nButton] & 0x80);
};

bool cinputdinput8::is_button_released(int nButton) const
{
	return !(mMouseState.rgbButtons[nButton] & 0x80) && (mOldMouseState.rgbButtons[nButton] & 0x80);
};

}; // namespace uinput