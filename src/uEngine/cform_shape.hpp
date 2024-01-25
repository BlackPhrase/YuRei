#pragma once

#include <coretypes.hpp>

class uobject;

class YUREI_MODULE_API cform_shape
{
public:
	cform_shape(uobject *pObject);
	cform_shape(const cform_shape &other);
	~cform_shape();
	
	// TODO: vtable
	
	cform_shape &operator=(const cform_shape &other);
	
	void add_box(struct _matrix<float> &);
	void add_sphere(struct _sphere<float> &);
	
	void compute_bounds();
	
	bool contact(const struct _sphere<float> &sphere);
	bool contact(uobject *pObject);
	
	bool _ray_query(const struct collide::ray_defs &, class collide::rq_results &results);
	
	bool valid() const;
	
	struct shape_def
	{
	};
	
	class u_vector<shape_def> &shapes() const;
};