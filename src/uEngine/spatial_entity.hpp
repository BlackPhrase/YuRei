#pragma once

#include <coretypes.hpp>

class uobject;
class renderable;
class sound_receiver;

class YUREI_MODULE_API spatial_entity
{
public:
	spatial_entity(class uspatial::dbase *);
	spatial_entity(const spatial_entity &other);
	~spatial_entity();
	
	// TODO: vtable
	
	spatial_entity &operator=(const spatial_entity &other);
	
	uobject *dcast_uobject() const;
	class urender::light *dcast_light() const;
	renderable *dcast_renderable() const;
	sound_receiver *dcast_sound_receiver() const;
};