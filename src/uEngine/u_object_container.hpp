#pragma once

#include <coretypes.hpp>

class uobject;
class str_shared;

class YUREI_MODULE_API u_object_container
{
public:
	u_object_container();
	u_object_container(const u_object_container &other);
	~u_object_container();
	
	u_object_container &operator=(const u_object_container &other);
	
	void load();
	void unload();
	
	void update();
	
	void single_update(uobject *pObject);
	
	uobject *create(const char *);
	void destroy(uobject *pObject);
	
	void relcase_register(class fastdelegate::FastDelegate1<uobject *, void>, int *p);
	void relcase_unregister(int *p);
	
	void net_register(uobject *pObject);
	void net_unregister(uobject *pObject);
	
	void net_import(class gtl::intrusive_ptr<class vfs::ireader, struct gtl::intrusive_base, class gtl::intrusive_default_functionality>);
	unsigned int net_export(class gtl::intrusive_ptr<class vfs::iwriter, struct gtl::intrusive_base, class gtl::intrusive_default_functionality>, unsigned int, unsigned int);
	
	uobject *net_find(unsigned int id) const;
	
	void o_sleep(uobject *pObject);
	void o_activate(uobject *pObject);
	
	void o_remove(class u_vector<uobject*> &vObjects, uobject *pObject);
	
	uobject *o_get_by_iterator(unsigned int it) const;
	
	uobject *find_object_by_name(const char *sName) const;
	uobject *find_object_by_name(str_shared sName) const;
	uobject *find_object_by_clsid(str_shared sClassID) const;
	
	unsigned int o_count() const;
};