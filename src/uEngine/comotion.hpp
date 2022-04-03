#pragma once

class cenvelope;

enum echannel_type : int;

class comotion
{
public:
	comotion();
	comotion(comotion *pOther);
	comotion(const comotion &other);
	~comotion();
	
	comotion &operator=(const comotion &other);
	
	void clear();
	
	void delete_key(float fKey);
	
	cenvelope *envelope(echannel_type) const;
};