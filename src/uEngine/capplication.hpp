#pragma once

class capplication
{
public:
	capplication();
	~capplication();
	
	void start(const char *cmdline);
	
	void load_title(char *, char *);
	
	void load_begin();
	void load_end();
	
	void sound_update();
	
	void on_frame();
	void on_disconnect();
	void on_quit();
private:
};

extern capplication *g_app;