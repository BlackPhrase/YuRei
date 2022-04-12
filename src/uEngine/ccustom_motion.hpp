#pragma once

class ccustom_motion
{
public:
	ccustom_motion();
	ccustom_motion(ccustom_motion *pOther);
	ccustom_motion(const ccustom_motion &other);
	~ccustom_motion();
	
	// TODO: vtable
	
	ccustom_motion &operator=(const ccustom_motion &other);
	
	int frame_start();
	int frame_end();
	
	void save();
	bool load();
	
	void set_name(const char *name);
	void set_param(int, int, float);
	
	float FPS() const;
	int length() const;
	const char *name() const;
};