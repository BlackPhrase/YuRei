#pragma once

class uobject;

class cform_skeleton
{
public:
	cform_skeleton(uobject *pObject);
	cform_skeleton(const cform_skeleton &other);
	~cform_skeleton();
	
	// TODO: vtable
	
	cform_skeleton &operator=(const cform_skeleton &other);
	
	void build_state();
	void build_top_level();
	
	bool _ray_query(const struct collide::ray_defs &, class collide::rq_results &results);
	
	bool valid() const;
};