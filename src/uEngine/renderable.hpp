#pragma once

class uobject;

class renderable
{
public:
	renderable();
	renderable(const renderable &other);
	~renderable();
	
	// TODO: vtable
	
	renderable &operator=(const renderable &other);
	
	bool renderable_shadow_generate();
	
	uobject *renderable_dcast_uobject() const;
	
	class gtl::intrusive_ptr<class urender::object_attach, struct gtl::intrusive_base, class gtl::intrusive_default_functionality> renderable_roa() const;
};