#pragma once

#include <coretypes.hpp>

class comotion;

class YUREI_MODULE_API cobject_animator
{
public:
	cobject_animator();
	cobject_animator(const cobject_animator &other);
	~cobject_animator();
	
	// TODO: vtable
	
	cobject_animator &operator=(const cobject_animator &other);
	
	void clear();
	
	void update(float);
	
	comotion *play(bool, const char *);
	void pause(bool bState);
	void stop();
	
	void load(const char *);
	
	void load_motions(const char *);
	
	void set_active_motion(comotion *pMotion);
	
	bool is_playing() const;
	
	const char *name() const;
	
	float &speed() const;
	
	float get_length() const;
	
	const struct _matrix<float> &xform() const;
};