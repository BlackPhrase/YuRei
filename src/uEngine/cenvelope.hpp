#pragma once

#include <coretypes.hpp>

class YUREI_MODULE_API cenvelope
{
public:
	cenvelope();
	cenvelope(cenvelope *pOther);
	cenvelope(const cenvelope &other);
	~cenvelope();
	
	// TODO: vtable
	
	cenvelope &operator=(const cenvelope &other);
	
	void clear();
	
	void optimize();
	
	void save(class gtl::intrusive_ptr<class vfs::iwriter, struct gtl::intrusive_base, class gtl::intrusive_default_functionality>);
	void savea(class gtl::intrusive_ptr<class vfs::iwriter, struct gtl::intrusive_base, class gtl::intrusive_default_functionality>);
	void loada(class gtl::intrusive_ptr<class vfs::ireader, struct gtl::intrusive_base, class gtl::intrusive_default_functionality>);
	void load_1(class gtl::intrusive_ptr<class vfs::ireader, struct gtl::intrusive_base, class gtl::intrusive_default_functionality>);
	void load_2(class gtl::intrusive_ptr<class vfs::ireader, struct gtl::intrusive_base, class gtl::intrusive_default_functionality>);
	
	class std::_Vector_iterator<struct st_key *, class allocator_t<struct st_key *>> insert_key(float, float);
	void delete_key(float fKey);
	
	class std::_Vector_iterator<struct st_key *, class allocator_t<struct st_key *>> find_key(float, float) const;
	
	void find_nearest_key(float, class std::_Vector_iterator<struct st_key *, class allocator_t<struct st_key *>> &, class std::_Vector_iterator<struct st_key *, class allocator_t<struct st_key *>> &, float);
	
	void rotate_keys(float);
	
	bool scale_keys(float, float, float, float);
	
	float evaluate(float);
	
	float get_length(float *, float *) const;
};