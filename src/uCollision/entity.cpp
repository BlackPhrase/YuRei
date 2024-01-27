#include "uspatial.hpp"

namespace uspatial
{

entity::entity(dbase *pDataBase) : mpDataBase(pDataBase)
{
};

entity::entity(const entity &other)
{
};

entity::~entity()
{
};

entity &entity::operator=(const entity &other)
{
	return *this;
};

void entity::spatial_register()
{
};

void entity::spatial_unregister()
{
};

void entity::spatial_move()
{
};

bool entity::spatial_inside()
{
	return false;
};

_vec3<float> entity::spatial_sector_point()
{
	return {};
};

}; // namespace uspatial