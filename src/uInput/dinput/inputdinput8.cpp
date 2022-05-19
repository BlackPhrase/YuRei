#include "inputdinput8.hpp"

namespace uinput
{

cinputdinput8::~cinputdinput8()
{
	shutdown();
};

bool cinputdinput8::init(void *pWindow, int nScreenWidth, int nScreenHeight)
{
	mnScreenWidth = nScreenHeight;
	mnScreenHeight = nScreenHeight;
	
	if(FAILED(DirectInput8Create(GetModuleHandle(nullptr), DIRECTINPUT_VERSION, IID_DirectInput8, reinterpret_cast<void**>(&mpDI), nullptr)))
		return false;
	
	// Keyboard
	
	if(FAILED(mpDI->CreateDevice(GUID_SysKeyboard, &mpKeyboard, nullptr)))
		return false;
	
	
	if(FAILED(mpKeyboard->SetDataFormat(&c_dfDIKeyboard))
		return false;
	
	if(FAILED(mpKeyboard->SetCooperativeLevel(reinterpret_cast<HWND>(pWindow), DISCL_FOREGROUND | DISCL_EXCLUSIVE)))
		return false;
	
	if(FAILED(mpKeyboard->Acquire()))
		return false;
	
	// Mouse
	
	if(FAILED(mpDI->CreateDevice(GUID_SysMouse, &mpMouse, nullptr)))
		return false;
	
	
	if(FAILED(mpMouse->SetDataFormat(&c_dfDIMouse))
		return false;
	
	if(FAILED(mpMouse->SetCooperativeLevel(reinterpret_cast<HWND>(pWindow), DISCL_FOREGROUND | DISCL_NONEXCLUSIVE)))
		return false;
	
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

bool cinputdinput8::is_key_down(int nKey) const
{
	return mnKeyboardState[nKey] & 0x80;
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
	
	if(FAILED(hResult)
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
	
	if(FAILED(hResult)
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
	mnMouseX = mMouseState.IX;
	mnMouseY = mMouseState.IY;
	
	clamp_mouse_pos();
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

}; // namespace uinput