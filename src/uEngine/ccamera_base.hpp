#pragma once

#include <coretypes.hpp>

#include <vec3.hpp>

class uobject;

class YUREI_MODULE_API ccamera_base
{
public:
	ccamera_base(uobject *pObject, unsigned int);
	ccamera_base(const ccamera_base &other);
	virtual ~ccamera_base(); // for vtable
	
	ccamera_base &operator=(const ccamera_base &other);
	
	void update(struct _vec3<float> &, struct _vec3<float> &);
	
	void on_activate(ccamera_base *p);
	void on_deactivate();
	
	void move(int, float, float);
	
	void set_parent(uobject *pObject);
	
	void set(const struct _vec3<float> &, const struct _vec3<float> &, const struct _vec3<float> &);
	void set(float x, float y, float z);
	void get(struct _vec3<float> &, struct _vec3<float> &, struct _vec3<float> &);
	
	float check_lim_pitch();
	float check_lim_yaw();
	float check_lim_roll();
	
	float get_world_pitch() const;
	float get_world_yaw() const;
private:
	_vec3<float> mvPos{};
	
	uobject *mpParent{nullptr};
	
	float mfWorldPitch{0.0f};
	float mfWorldYaw{0.0f};
};