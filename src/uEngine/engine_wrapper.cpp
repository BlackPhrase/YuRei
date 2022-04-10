#include "engine_wrapper.hpp"

engine_wrapper &engine_wrapper_instance()
{
	static engine_wrapper EngineWrapper;
	return EngineWrapper;
};

engine_wrapper::engine_wrapper()
{
};

engine_wrapper::engine_wrapper(const engine_wrapper &other)
{
};

engine_wrapper::~engine_wrapper()
{
};

engine_wrapper &engine_wrapper::operator=(const engine_wrapper &other)
{
	return *this;
};

void engine_wrapper::init_debug()
{
};

void engine_wrapper::init_debug_renderer()
{
};

void engine_wrapper::log(int, int, const char *msg)
{
};

void engine_wrapper::debugger_file_path(int, const char *, char *, const unsigned int &)
{
};

bool engine_wrapper::create_file(int, const char *filename, const void * const &, const unsigned int &)
{
	return false;
};

const void *engine_wrapper::open_file_buffer(int, const char *filename, const void *&, unsigned int &) const
{
	return nullptr;
};

void engine_wrapper::close_file_buffer(const void *pBuf)
{
};

bool engine_wrapper::file_exists(int, const char *filename) const
{
	return false;
};

const char *engine_wrapper::file_name(int, const char *filepath, char *, unsigned int) const
{
	return "";
};

void *engine_wrapper::sound_create(const char *filename, struct uai::game_object *, class gtl::intrusive_ptr<struct uai::sound_user_data, struct uai::sound_user_data_base, class gtl::intrusive_default_functionality>);
{
	return nullptr;
};

void engine_wrapper::sound_destroy(void *&pSound)
{
};

void engine_wrapper::sound_play(void *pSound, float *pPos, bool, bool)
{
};

void engine_wrapper::sound_stop(void *pSound)
{
};

void engine_wrapper::sound_position(void *pSound, float *pPos)
{
};

unsigned int engine_wrapper::sound_length_ms(void *pSound) const
{
	return 0;
};

const char *engine_wrapper::sound_file_name(const char *, char *, unsigned int) const
{
	return "";
};

void *engine_wrapper::sound_feedback(void *pSound) const
{
	return nullptr;
};

bool engine_wrapper::sound_exists(const char *name) const
{
	return false;
};

unsigned int engine_wrapper::time_global_ms() const
{
	return 0;
};

void engine_wrapper::debug_camera_position(float *)
{
};

void engine_wrapper::frustum(float *, float *, float, float, void (*)(struct uai::npc *, void *), void *)
{
};

void engine_wrapper::surface(float *, struct uai::npc *)
{
};

int engine_wrapper::raytrace(struct uai::poly *, float *, struct uai::npc *, float *, struct uai::npc *)
{
	return 0;
};

void engine_wrapper::draw_lines(int, struct urender_debug::debug_vertex *pLines, int, unsigned short *)
{
};

void engine_wrapper::draw_triangles(int, struct urender_debug::debug_vertex *pTriangles)
{
};

urender_debug::renderer *engine_wrapper::get_renderer() const
{
	return nullptr;
};

urender_debug::renderer *engine_wrapper::debug_renderer() const
{
	return nullptr;
};