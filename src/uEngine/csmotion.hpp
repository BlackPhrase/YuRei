#pragma once

class csmotion
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
	
	void save();
	bool load();
	
	void optimize();
	
	void world_rotate(int, float x, float y, float z);
	
	void _evaluate();
	
	class u_vector<struct st_bone_motion> &bone_motions();
	
	struct _flags<unsigned char> get_motion_flags(int) const;
};