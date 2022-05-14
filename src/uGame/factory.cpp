#include <coretypes.hpp>

extern "C"
{

YUREI_MODULE_API void *factory_create()
{
	return nullptr;
};

YUREI_MODULE_API void factory_destroy(void *p)
{
};

}; // extern "C"

// or

/*
void *factory_create()
{
	return nullptr;
};

void factory_destroy()
{
};
*/