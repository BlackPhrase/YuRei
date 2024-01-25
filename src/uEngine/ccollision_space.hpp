#pragma once

#include <coretypes.hpp>

class uobject;
class icollision_form;

class YUREI_MODULE_API ccollision_space
{
public:
	ccollision_space();
	ccollision_space(const ccollision_space &other);
	~ccollision_space();
	
	ccollision_space &operator=(const ccollision_space &other);
	
	void load();
	
	bool ray_pick(const struct _vec3<float> &, const struct _vec3<float> &, float, enum collide:rq_target, struct collide::rq_result &, uobject *pObject);
	bool _ray_pick(const struct _vec3<float> &, const struct _vec3<float> &, float, enum collide:rq_target, struct collide::rq_result &, uobject *pObject);
	
	bool ray_query(class collide:rq_results &, const struct collide::ray_defs &, bool (*)(struct collide::rq_result &, void *), void *, bool (*)(const struct collide::ray_defs &, uobject *, void *), uobject *pObject);
	bool ray_query(class collide::rq_results &, icollision_form *, const struct collide::ray_defs &);
	bool _ray_query(class collide:rq_results &, const struct collide::ray_defs &, bool (*)(struct collide::rq_result &, void *), void *, bool (*)(const struct collide::ray_defs &, uobject *, void *), uobject *pObject);
	
	bool ray_test(const struct _vec3<float> &, const struct _vec3<float> &, float, enum collide::rq_target, struct collide::ray_cache *, uobject *pObject);
	bool _ray_test(const struct _vec3<float> &, const struct _vec3<float> &, float, enum collide::rq_target, struct collide::ray_cache *, uobject *pObject);
	
	const class _aabb3<float> &get_bounding_volume() const;
	
	int get_nearest(class u_vector<uobject*> &, const struct _vec3<float> &, float, uobject *pObject) const;
	
	class uspatial::trimodel *get_static_model() const;
	
	struct uspatial::triangle *get_static_tris() const;
	struct _vec3<float> *get_static_verts() const;
};