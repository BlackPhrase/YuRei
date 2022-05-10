#include <coretypes.hpp>

#include <../urender/urender.hpp>

#include <../usound/usound.hpp>
#include <../uinput/uinput.hpp>

#include "cengine.hpp"

#include <windows.h>

HMODULE gpRenderLib{nullptr}; // TODO: make private
HMODULE gpRenderDebugLib{nullptr}; // TODO: make private

HMODULE gpEditorLib{nullptr}; // TODO: make private
HMODULE gpGameLib{nullptr}; // TODO: make private

struct usound::manager *g_sound{nullptr};
struct uinput::manager *g_input{nullptr};

YUREI_MODULE_API urender::manager *g_render{nullptr};
YUREI_MODULE_API urender::backend *g_backend{nullptr};
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
	gpEditorLib = LoadLibrary("uEditor");
	
	// TODO: get exports from the game module
	
	usound::configuration *pSoundConfig{nullptr};
	//usound::manager *pSoundManager{usound::create(pSoundConfig)};
	
	//g_sound = pSoundManager;
	
	uinput::configuration *pInputConfig{nullptr};
	uinput::manager *pInputManager{uinput::create(pInputConfig)};
	
	g_input = pInputManager;
	
	gpRenderLib = LoadLibrary("uRender");
	gpRenderDebugLib = LoadLibrary("uRenderDebug");
	
	gpGameLib = LoadLibrary("uGame");
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