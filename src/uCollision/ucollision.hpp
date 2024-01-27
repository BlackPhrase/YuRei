#pragma once

#include <uCore/coretypes.hpp>

struct collector;
struct collector_p;
struct collider;
struct dbase; //struct database;
struct trimodel;

// TODO: args are unknown

YUREI_MODULE_API collector *collector_create();
YUREI_MODULE_API void collector_destroy(collector *);

YUREI_MODULE_API collector_p *collector_p_create();
YUREI_MODULE_API void collector_p_destroy(collector_p *);

YUREI_MODULE_API collider *collider_create();
YUREI_MODULE_API void collider_destroy(collider *);

YUREI_MODULE_API dbase *database_create();
YUREI_MODULE_API void database_destroy(dbase *pDataBase);

YUREI_MODULE_API trimodel *trimodel_create();
YUREI_MODULE_API void trimodel_destroy(trimodel *);