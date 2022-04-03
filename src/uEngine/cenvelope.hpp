#pragma once

class cenvelope
{
public:
	cenvelope();
	cenvelope(cenvelope *pOther);
	cenvelope(const cenvelope &other);
	~cenvelope();
	
	void clear();
	
	void optimize();
	
	void delete_key(float fKey);
	
	float evaluate(float);
};