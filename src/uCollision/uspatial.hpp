#pragma once

#include <uCore/coretypes.hpp>

#include <uMath/vec3.hpp>

namespace uspatial
{

class dbase // TODO: database?
{
public:
	// TODO: ???
};

class YUREI_MODULE_API entity
{
public:
	entity(dbase *pDataBase);
	entity(const entity &other);
	~entity(); // TODO: make virtual?
	
	entity &operator=(const entity &other);
	
	// TODO: vtable
	
	void spatial_register();
	void spatial_unregister();
	
	void spatial_move();
	
	bool spatial_inside();
	
	_vec3<float> spatial_sector_point();
private:
	dbase *mpDataBase{nullptr};
};

class YUREI_MODULE_API node
{
public:
	node();
	node(const node &other);
	~node();
	
	node &operator=(const node &other);
	
	void _init(node *);
	
	void _insert(entity *pEntity);
	void _remove(entity *pEntity);
	
	bool _empty();
};

}; // namespace uspatial