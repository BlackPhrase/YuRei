#pragma once

class cenvelope
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
	
	void delete_key(float fKey);
	
	void rotate_keys(float);
	
	float evaluate(float);
	
	float get_length(float *, float *) const;
};