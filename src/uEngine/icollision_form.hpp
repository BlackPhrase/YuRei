#pragma once

class uobject;

class icollision_form
{
public:
	icollision_form(uobject *pObject, enum ecollision_form_type aeType);
	icollision_form(const icollision_form &other);
	~icollision_form();
	
	// TODO: vtable
	
	icollision_form &operator=(const icollision_form &other);
	
	const class _aabb3<float> &get_bbox() const;
	const struct _sphere<float> &get_sphere() const;
	
	float get_radius() const;
	
	const enum ecollision_form_type type() const;
	
	uobject *owner() const;
};