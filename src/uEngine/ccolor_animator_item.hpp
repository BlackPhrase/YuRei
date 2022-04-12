#pragma once

class ccolor_animator_item
{
public:
	ccolor_animator_item();
	ccolor_animator_item(const ccolor_animator_item &other);
	~ccolor_animator_item();
	
	ccolor_animator_item &operator=(const ccolor_animator_item &other);
	
	void init_default();
	
	void delete_key(int nKey);
	
	unsigned int *get_key(int nKey) const;
	
	int first_key_frame() const;
	int next_key_frame(int nFrame) const;
	int prev_key_frame(int nFrame) const;
};