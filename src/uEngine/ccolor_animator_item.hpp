#pragma once

class str_shared;

class ccolor_animator_item
{
public:
	ccolor_animator_item();
	ccolor_animator_item(const ccolor_animator_item &other);
	~ccolor_animator_item();
	
	ccolor_animator_item &operator=(const ccolor_animator_item &other);
	
	void init_default();
	
	void resize(int nSize);
	
	void save(class gtl::intrusive_ptr<class vfs::iwriter, struct gtl::intrusive_base, class gtl::intrusive_default_functionality>);
	void load(class gtl::intrusive_ptr<class vfs::ireader, struct gtl::intrusive_base, class gtl::intrusive_default_functionality>);
	
	void insert_key(int unsigned int);
	void move_key(int, int);
	void delete_key(int nKey);
	
	int first_key_frame() const;
	int last_key_frame() const;
	
	int next_key_frame(int nFrame) const;
	int prev_key_frame(int nFrame) const;
	
	unsigned int calculate_bgr(float, int &);
	unsigned int calculate_rgb(float, int &);
	
	unsigned int interpolate_bgr(int);
	unsigned int interpolate_rgb(int);
	
	str_shared name() const;
	
	unsigned int length_ms() const;
	float length_sec() const;
	
	bool is_key(int) const;
	
	unsigned int *get_key(int nKey) const;
};