#pragma once

#include <coretypes.hpp>

#include <windows.h>

void WndMsgPump();

class YUREI_MODULE_API cwindow
{
public:
	cwindow();
	cwindow(const cwindow &other);
	virtual ~cwindow(); // TODO: virtual?
	
	cwindow &operator=(const cwindow &other);
	
	void initialize(unsigned int width, unsigned int height, bool fullscreen, HWND hWnd, HWND hWndParent);
	void destroy();
	
	void resize(unsigned int width, unsigned int height, bool fullscreen);
//private: // TODO: temp
	HWND mhWnd{nullptr};
};