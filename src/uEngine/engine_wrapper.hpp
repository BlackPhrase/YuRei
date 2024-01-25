#pragma once

#include <coretypes.hpp>

class YUREI_MODULE_API engine_wrapper
{
public:
	engine_wrapper();
	engine_wrapper(const engine_wrapper &other);
	~engine_wrapper();
	
	engine_wrapper &operator=(const engine_wrapper &other);
	
	void init_debug();
	void init_debug_renderer();
	
	void log(int, int, const char *msg);
	
	void debugger_file_path(int, const char *, char *, const unsigned int &);
	
	bool create_file(int, const char *filename, const void * const &, const unsigned int &);
	
	const void *open_file_buffer(int, const char *filename, const void *&, unsigned int &) const;
	void close_file_buffer(const void *pBuf);
	
	bool file_exists(int, const char *filename) const;
	
	const char *file_name(int, const char *filepath, char *, unsigned int) const;
	
	void *sound_create(const char *filename, struct uai::game_object *, class gtl::intrusive_ptr<struct uai::sound_user_data, struct uai::sound_user_data_base, class gtl::intrusive_default_functionality>);
	void sound_destroy(void *&pSound);
	
	void sound_play(void *pSound, float *pPos, bool, bool);
	void sound_stop(void *pSound);
	
	void sound_position(void *pSound, float *pPos);
	unsigned int sound_length_ms(void *pSound) const;
	
	const char *sound_file_name(const char *, char *, unsigned int) const;
	
	void *sound_feedback(void *pSound) const;
	
	bool sound_exists(const char *name) const;
	
	unsigned int time_global_ms() const;
	
	void debug_camera_position(float *);
	
	void frustum(float *, float *, float, float, void (*)(struct uai::npc *, void *), void *);
	void surface(float *, struct uai::npc *);
	
	int raytrace(struct uai::poly *, float *, struct uai::npc *, float *, struct uai::npc *);
	
	void draw_lines(int, struct urender_debug::debug_vertex *pLines, int, unsigned short *);
	void draw_triangles(int, struct urender_debug::debug_vertex *pTriangles);
	
	urender_debug::renderer *get_renderer() const;
	urender_debug::renderer *debug_renderer() const;
	//const engine_wrapper::`vftable'{for `urender_debug::engine'} // TODO
	
	//const engine_wrapper::`vftable'{for `uscript::engine'} // TODO
};

YUREI_MODULE_API engine_wrapper &engine_wrapper_instance();