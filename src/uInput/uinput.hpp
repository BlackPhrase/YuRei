#pragma once

#include <coretypes.hpp>

namespace uinput
{

enum class Keys : int
{
	Invalid = -1,
	
	Escape,
	//Tilde,
	Tab,
	CapsLock,
	
	Enter,
	
	LShift,
	RShift,
	
	LCtrl,
	RCtrl,
	
	LAlt, // LMenu
	RAlt, // RMenu
	//Menu,
	
	Up, // UpArrow
	Down, // DownArrow
	Left, // LeftArrow
	Right, // RightArrow
	
	Equals, //Plus
	Minus,
	
	Space,
	BackSpace,
	
	Home,
	End,
	
	Insert,
	Delete,
	
	PageUp,
	PageDown,
	
	LBracket,
	RBracket,
	
	Slash,
	BackSlash,
	
	Period,
	Comma,
	SemiColon,
	Quote,
	
	A,
	B,
	C,
	D,
	E,
	F,
	G,
	H,
	I,
	J,
	K,
	L,
	M,
	N,
	O,
	P,
	Q,
	R,
	S,
	T,
	U,
	V,
	W,
	X,
	Y,
	Z,
	
	F1,
	F2,
	F3,
	F4,
	F5,
	F6,
	F7,
	F8,
	F9,
	F10,
	F11,
	F12,
	
	k0,
	k1,
	k2,
	k3,
	k4,
	k5,
	k6,
	k7,
	k8,
	k9,
	
	NumPlus,
	NumMinus,
	NumMultiply,
	NumDivide,
	NumPeriod,
	NumEnter,
	
	Num0,
	Num1,
	Num2,
	Num3,
	Num4,
	Num5,
	Num6,
	Num7,
	Num8,
	Num9
};

struct receiver;

struct /*YUREI_MODULE_API*/ configuration
{
	void *pWindow{nullptr};
	
	int nScreenWidth{0};
	int nScreenHeight{0};
};

struct YUREI_MODULE_API manager
{
	virtual ~manager() = default;
	
	virtual void frame() = 0;
	
	virtual void add_receiver(receiver *pReceiver) = 0;
	virtual void remove_receiver(receiver *pReceiver) = 0;
	
	virtual bool is_key_down(uinput::Keys eKey) const = 0;
	virtual const char *key_to_string(uinput::Keys eKey) const = 0;
};

YUREI_MODULE_API manager *create(configuration *pConfig);
YUREI_MODULE_API void destroy();

}; // namespace uinput