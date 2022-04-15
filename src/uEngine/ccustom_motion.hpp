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
	
	void save(class gtl::intrusive_ptr<class vfs::iwriter, struct gtl::intrusive_base, class gtl::intrusive_default_functionality>);
	bool load(class gtl::intrusive_ptr<class vfs::ireader, struct gtl::intrusive_base, class gtl::intrusive_default_functionality>);
	
	void set_name(const char *name);
	void set_param(int, int, float);
	
	float FPS() const;
	int length() const;
	const char *name() const;
};