#pragma once

#include <memory>

#include <coretypes.hpp>

class cwindow;

class YUREI_MODULE_API capplication
{
public:
	capplication();
	~capplication();
	
	capplication &operator=(const capplication &other);
	
	void start(const char *cmdline);
	
	void load_title(char *, char *);
	
	void load_begin();
	void load_end();
	
	void sound_update();
	
	void on_frame();
	void on_disconnect();
	void on_quit();
private:
	std::unique_ptr<cwindow> mpWindow;
};

YUREI_MODULE_API extern capplication *g_app;