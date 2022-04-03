#pragma once

class engine_wrapper
{
public:
	engine_wrapper();
	engine_wrapper(const engine_wrapper &other);
	~engine_wrapper();
	
	void init_debug();
	void init_debug_renderer();
	
	void close_file_buffer(const void *pBuf);
	
	bool file_exists(int, const char *filename) const;
	
	void *sound_create();
	void sound_destroy(void *&pSound);
	
	void sound_play(void *pSound, float *pPos, bool, bool);
	void sound_stop(void *pSound);
	
	void sound_position(void *pSound, float *pPos);
	unsigned int sound_length_ms(void *pSound) const;
	
	const char *sound_file_name(const char *, char *, unsigned int) const ;
	
	void *sound_feedback(void *pSound) const;
	
	bool sound_exists(const char *name) const;
	
	urender_debug::renderer *get_renderer() const;
	urender_debug::renderer *debug_renderer() const;
};

engine_wrapper &engine_wrapper_instance();