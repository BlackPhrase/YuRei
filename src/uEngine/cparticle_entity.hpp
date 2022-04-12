#pragma once

class renderable;
class str_shared;

class cparticle_entity
{
public:
	cparticle_entity();
	cparticle_entity(const cparticle_entity &other);
	~cparticle_entity();
	
	// TODO: const cparticle_entity::`vftable'{for `renderable'}
	// TODO: const cparticle_entity::`vftable'{for `sheduled_task'}
	// TODO: const cparticle_entity::`vftable'{for `spatial_entity'}
	
	cparticle_entity &operator=(const cparticle_entity &other);
	
	void scheduler_update(unsigned int);
	
	renderable *dcast_renderable() const;
	
	void psi_destroy();
	void psi_internal_delete();
	void psi_set_life_time(float fTime);
	
	bool psi_alive() const;
	bool psi_is_automatic() const;
	
	bool locked() const;
	
	str_shared scheduler_name() const;
};