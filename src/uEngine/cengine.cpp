#include "cengine.hpp"

cengine engine;

cengine::cengine()
{
};

cengine::cengine(const cengine &other)
{
};

cengine::~cengine()
{
};

cengine &cengine::operator=(const cengine &other)
{
	return *this;
};

void cengine::create()
{
};

void cengine::destroy()
{
};

void cengine::reset()
{
};

void cengine::run_prepare()
{
};

void cengine::run_unprepare()
{
};

void cengine::run_update()
{
};

void cengine::run()
{
};

void cengine::frame_move()
{
};

void cengine::on_window_activate(bool bState)
{
	if(bState)
	{
	}
	else
	{
	};
};

void cengine::pause(bool bState)
{
	mbPaused = bState;
};

void cengine::pre_cache(unsigned int)
{
};

void cengine::prefetch_register(const char *, const char *)
{
};

void cengine::prefetch_save()
{
};

void cengine::prefetch_load()
{
};

void cengine::switch_to_edit_mode()
{
};