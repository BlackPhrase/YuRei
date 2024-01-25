#pragma once

#include <coretypes.hpp>

class str_shared;
class renderable;

struct _matrix;

class icollision_form;

class YUREI_MODULE_API uobject
{
public:
	uobject();
	uobject(const uobject &other);
	~uobject();
	
	// TODO: const uobject::`vftable'{for `iconstructable'}
	// TODO: const uobject::`vftable'{for `renderable'}
	// TODO: const uobject::`vftable'{for `sheduled_task'}
	// TODO: const uobject::`vftable'{for `spatial_entity'}
	
	uobject &operator=(const uobject &other);
	
	void scheduler_update(unsigned int);
	
	void update_cl();
	
	void spatial_register();
	void spatial_unregister();
	
	void spatial_move();
	void spatial_update(float, float);
	
	void on_editor_render(bool);
	
	void on_change_visual();
	
	void on_before_chield();
	void on_after_chield();
	
	void on_before_independent();
	void on_after_independent();
	
	bool net_spawn();
	void net_destroy();
	
	void net_relcase(uobject *pObject);
	
	void cfg_load(const char *);
	void cfg_reload(class u_vector<class std::basic_string<char, struct std::char_traits<char>, class allocator_t<char>>> &);
	
	void death_effect_enable();
	void death_effect_update(float);
	
	void processing_activate();
	void processing_deactivate();
	
	bool processing_enabled() const;
	
	bool renderable_shadow_generate();
	void renderable_render();
	
	void force_transform(const struct _matrix<float> &);
	
	void center(struct _vec3<float> &vPos);
	
	icollision_form *cform() const;
	
	const class _aabb3<float> &bounding_box() const;
	
	class urender::sector *sector() const;
	
	uobject *renderable_dcast_uobject() const;
	
	void h_add_child(uobject *pObject);
	void h_remove_child(uobject *pObject, bool);
	
	uobject *h_set_parent(uobject *pObject);
	
	uobject *h_root() const;
	const uobject *h_root() const;
	
	uobject *h_parent() const;
	const uobject *h_parent() const;
	
	bool has_rootmover() const;
	
	void c_name_set(str_shared sName);
	void c_name_sect_set(str_shared sName);
	void c_name_visual_set(str_shared sName);
	
	str_shared c_name() const;
	str_shared c_name_sect() const;
	str_shared c_name_visual() const;
	
	unsigned short ID() const;
	
	void set_id(unsigned short nID);
	void set_enabled(bool bState);
	void set_visible(bool bState);
	void set_readonly(bool bState);
	void set_selected(bool bState);
	void set_destroy(bool bState);
	
	bool get_enabled() const;
	bool get_visible() const;
	bool get_readonly() const;
	bool get_selected() const;
	bool get_destroy() const;
	
	float radius() const;
	
	struct _vec3<float> &position() const;
	const struct _vec3<float> &position() const;
	
	struct _vec3<float> &direction() const;
	const struct _vec3<float> &direction() const;
	
	float scheduler_frequency() const;
	str_shared scheduler_name() const;
	
	_matrix<float> &xform() const;
	const _matrix<float> &xform() const;
	
	uobject *dcast_uobject() const;
	renderable *dcast_renderable() const;
	
	class gtl::intrusive_ptr<class urender::model, struct gtl::intrusive_base, class gtl::intrusive_default_functionality> visual() const;
	
	class gtl::intrusive_ptr<class urender::object_attach, struct gtl::intrusive_base, class gtl::intrusive_default_functionality> ROA() const;
};