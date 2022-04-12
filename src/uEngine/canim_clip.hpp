#pragma once

class canim_clip
{
public:
	canim_clip();
	canim_clip(const canim_clip &other);
	~canim_clip();
	
	// TODO: vtable
	
	canim_clip &operator=(const canim_clip &other);
	
	void save();
	bool load();
	
	bool equal(canim_clip *pOther) const;
};