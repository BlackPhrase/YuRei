#pragma once

class cengine
{
public:
	cengine();
	cengine(const cengine &other);
	~cengine();
	
	cengine &operator=(const cengine &other);
	
	void create();
	void destroy();
	
	void reset();
	
	void run_prepare();
	void run_unprepare();
	
	void run_update();
	
	void run();
	
	void frame_move();
	
	void on_window_activate(bool bState);
	
	void pause(bool bState);
	bool paused() const {return mbPaused;}
	
	void pre_cache(unsigned int);
	
	void prefetch_register(const char *, const char *);
	
	void prefetch_save();
	void prefetch_load();
	
	void switch_to_edit_mode();
private:
	bool mbPaused{false};
};

extern cengine engine;