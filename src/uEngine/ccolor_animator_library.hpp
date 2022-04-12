#pragma once

class ccolor_animator_item;

class ccolor_animator_library
{
public:
	ccolor_animator_library();
	ccolor_animator_library(const ccolor_animator_library &other);
	~ccolor_animator_library();
	
	ccolor_animator_library &operator=(const ccolor_animator_library &other);
	
	void load(const char *);
	void unload();
	
	void save(const char *);
	
	ccolor_animator_item *append_item(const char *sName, ccolor_animator_item *pItem);
	
	ccolor_animator_item *find_item(const char *sName) const;
	class std::_Vector_iterator<class ccolor_animator_item*, class allocator_t<class ccolor_animator_item*>> find_itemi(const char *sName) const;
	
	const ccolor_animator_item *get_item(const char *sName) const;
	
	class u_vector<ccolor_animator_item*> &items() const {return mvItems;}
private:
	class u_vector<ccolor_animator_item*> mvItems;
};

extern ccolor_animator_library canim_lib;