#include "capplication.hpp"
//#include "cengine.hpp"
#include "cwindow.hpp"

capplication *g_app{nullptr};

capplication::capplication()
{
	g_app = this;
};

capplication::~capplication()
{
	g_app = nullptr;
};

void capplication::start(const char *cmdline)
{
	mpWindow = std::make_unique<cwindow>();
	
	mpWindow->initialize(1280, 600, false, nullptr, nullptr);
	
	// TODO
	
	//engine.create();
	
	//engine.run_prepare();
	//engine.run();
	//engine.run_unprepare();
};

void capplication::load_title(char *, char *)
{
};

void capplication::load_begin()
{
};

void capplication::load_end()
{
};

void capplication::sound_update()
{
};

void capplication::on_frame()
{
	WndMsgPump();
};

void capplication::on_disconnect()
{
};

void capplication::on_quit()
{
	//engine.destroy();
	mpWindow->destroy();
};