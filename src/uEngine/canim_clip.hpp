#pragma once

class canim_clip
{
public:
	canim_clip();
	canim_clip(const canim_clip &other);
	~canim_clip();
	
	// TODO: vtable
	
	canim_clip &operator=(const canim_clip &other);
	
	void save(class gtl::intrusive_ptr<class vfs::iwriter, struct gtl::intrusive_base, class gtl::intrusive_default_functionality>);
	bool load(class gtl::intrusive_ptr<class vfs::ireader, struct gtl::intrusive_base, class intrusive_default_functionality>);
	
	bool equal(canim_clip *pOther) const;
};