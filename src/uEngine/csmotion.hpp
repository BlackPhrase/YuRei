#pragma once

#include <coretypes.hpp>

class cbone;
class str_shared;
struct st_bone_motion;

class YUREI_MODULE_API csmotion
{
public:
	csmotion();
	csmotion(csmotion *pOther);
	csmotion(const csmotion &other);
	virtual ~csmotion(); // for vtable
	
	csmotion &operator=(const csmotion &other);
	
	void clear();
	
	void save_motion(const char *);
	bool load_motion(const char *);
	
	void copy_motion(csmotion *pOther);
	
	void save(class gtl::intrusive_ptr<class vfs::iwriter, struct gtl::intrusive_base, class gtl::intrusive_default_functionality>);
	bool load(class gtl::intrusive_ptr<class vfs::ireader, struct gtl::intrusive_base, class gtl::intrusive_default_functionality>);
	
	void optimize();
	
	void world_rotate(int, float x, float y, float z);
	
	void _evaluate(int, float, struct _vec3<float> &, struct _vec3<float>  &);
	
	void sort_bones_by_skeleton(class u_vector<cbone*> &);
	
	class u_vector<st_bone_motion> &bone_motions() const;
	
	st_bone_motion *find_bone_motion(str_shared sName) const;
	
	struct _flags<unsigned char> get_motion_flags(int) const;
};