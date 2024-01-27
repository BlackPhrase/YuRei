#include "uspatial.hpp"

namespace uspatial
{

node::node()
{
};

node::node(const node &other)
{
};

node::~node()
{
};

node &node::operator=(const node &other)
{
	return *this;
};

void node::_init(node *pNode)
{
};

void node::_insert(entity *pEntity)
{
};

void node::_remove(entity *pEntity)
{
};

bool node::_empty()
{
	return true;
};

};