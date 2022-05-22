#include <coretypes.hpp>

#include <../urender/urender.hpp>

#include <../usound/usound.hpp>
#include <../uinput/uinput.hpp>

#include "cengine.hpp"
#include "capplication.hpp"

#include <windows.h>

HMODULE gpRenderLib{nullptr}; // TODO: make private
HMODULE gpRenderDebugLib{nullptr}; // TODO: make private

HMODULE gpEditorLib{nullptr}; // TODO: make private
HMODULE gpGameLib{nullptr}; // TODO: make private

struct usound::manager *g_sound{nullptr};
struct uinput::manager *g_input{nullptr};

/*YUREI_MODULE_API*/ urender::manager *g_render{nullptr};
/*YUREI_MODULE_API*/ urender::backend *g_backend{nullptr};
YUREI_MODULE_API urender::draw_utils *g_du{nullptr};

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
	usound::configuration SoundConfig{};
	//usound::manager *pSoundManager{usound::create(&SoundConfig)};
	
	//g_sound = pSoundManager;
	
	uinput::configuration InputConfig{};
	uinput::manager *pInputManager{uinput::create(&InputConfig)};
	
	g_input = pInputManager;
	
	gpRenderLib = LoadLibrary("uRender");
	gpRenderDebugLib = LoadLibrary("uRenderDebug");
	
	// TODO: load the editor library only if in editor mode
	
	gpEditorLib = LoadLibrary("uEditor");
	
	gpGameLib = LoadLibrary("uGame");
	
	// TODO: get exports from the game module
};

void cengine::destroy()
{
	uinput::destroy();
	//usound::destroy();
	
	FreeLibrary(gpGameLib);
	FreeLibrary(gpEditorLib);
	
	FreeLibrary(gpRenderDebugLib);
	FreeLibrary(gpRenderLib);
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
	
	g_app->on_frame();
};

void cengine::run()
{
	while(true) // !pWindow->close_requested()
	{
		if(g_input->is_key_down(static_cast<int>(uinput::Keys::Escape)))
			g_app->on_quit();
		
		run_update();
	};
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