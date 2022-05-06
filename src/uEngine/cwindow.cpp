#include <stdexcept>

#include "cwindow.hpp"

void WndMsgPump()
{
	static MSG Msg{};
	
	if(PeekMessage(&Msg, nullptr, 0, 0, PM_REMOVE))
	{
		TranslateMessage(&Msg);
		DispatchMessage(&Msg);
	};
};

LRESULT CALLBACK MainWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch(uMsg)
	{
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hWnd, uMsg, wParam, lParam);
	};
	
	return 0;
};

cwindow::cwindow()
{
};

cwindow::cwindow(const cwindow &other)
{
};

cwindow::~cwindow()
{
};

cwindow &cwindow::operator=(const cwindow &other)
{
	return *this;
};

void cwindow::initialize(unsigned int width, unsigned int height, bool fullscreen, HWND hWnd, HWND hWndParent)
{
	if(hWnd)
	{
		mhWnd = hWnd;
		return;
	};
	
	HINSTANCE hAppInstance{GetModuleHandle(nullptr)};
	
	WNDCLASS WndClass{};
	
	WndClass.style = CS_HREDRAW | CS_VREDRAW;
	WndClass.lpfnWndProc = reinterpret_cast<WNDPROC>(MainWndProc);
	WndClass.cbClsExtra = 0;
	WndClass.cbWndExtra = 0;
	WndClass.hInstance = hAppInstance;
	WndClass.hIcon = LoadIcon(nullptr, IDI_APPLICATION);
	WndClass.hCursor = LoadCursor(nullptr, IDC_ARROW);
	WndClass.hbrBackground = reinterpret_cast<HBRUSH>(GetStockObject(BLACK_BRUSH));
	WndClass.lpszMenuName = "MainMenu";
	WndClass.lpszClassName = "MainWindowClass";
	
	if(!RegisterClass(&WndClass))
		throw std::runtime_error("");
	
	DWORD dwWndStyle{WS_OVERLAPPEDWINDOW};
	DWORD dwWndExStyle{0};
	
	int nWndXPos{0};
	int nWndYPos{0};
	
	if(fullscreen)
	{
		nWndXPos = CW_USEDEFAULT;
		nWndYPos = CW_USEDEFAULT;
	};
	
	mhWnd = CreateWindowEx(dwWndExStyle, "MainWindowClass", "U-Engine", dwWndStyle, nWndXPos, nWndYPos, width, height, hWndParent, nullptr, hAppInstance, nullptr);
	
	if(!mhWnd)
		throw std::runtime_error("Failed to create a window!");
	
	ShowWindow(mhWnd, SW_NORMAL); // TODO: remove?
};

void cwindow::destroy()
{
	mhWnd = nullptr;
};

void cwindow::resize(unsigned int width, unsigned int height, bool fullscreen)
{
};