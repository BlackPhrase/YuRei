#pragma once

class cenvelope;

enum echannel_type : int;

class comotion
{
public:
	comotion();
	comotion(comotion *pOther);
	comotion(const comotion &other);
	~comotion();
	
	// TODO: vtable
	
	comotion &operator=(const comotion &other);
	
	void clear();
	
	void save(class gtl::intrusive_ptr<class vfs::iwriter, struct gtl::intrusive_base, class gtl::intrusive_default_functionality>);
	bool load(class gtl::intrusive_ptr<class vfs::ireader, struct gtl::intrusive_base, class gtl::intrusive_default_functionality>);
	
	void save_motion(const char *sName);
	bool load_motion(const char *sName);
	
	void create_key(float, const struct _vec3<float> &, const _vec3<float> &);
	void create_key(enum echannel_type aeType, float, float, float, float, float);
	void delete_key(float fKey);
	
	void find_nearest_key(float, float &, float &, float);
	
	cenvelope *envelope(echannel_type aeType) const;
	
	bool normalize_keys(float, float, float);
	bool scale_keys(float, float, float);
	
	void _evaluate(float, struct _vec3<float> &, struct _vec3<float> &);
	
	float get_length(float *, float *) const;
	
	int key_count() const;
};