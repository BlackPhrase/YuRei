#pragma once

class cwindow
{
public:
	cwindow();
	cwindow(const cwindow &other);
	virtual ~cwindow();
	
	cwindow &operator(const cwindow &other);
	
	void initialize(unsigned int width, unsigned int height, bool fullscreen, HWND hWnd, HWND hWndParent);
	void destroy();
	
	void resize(unsigned int width, unsigned int height, bool fullscreen);
};