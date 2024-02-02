#pragma once

#include <uCore/coretypes.hpp>

namespace uai
{

struct YUREI_MODULE_API sound_user_data_base
{
public:
	sound_user_data_base();
	
	sound_user_data_base &operator=(const sound_user_data_base &other);
};

struct YUREI_MODULE_API sound_user_data // : public sound_user_data_base?
{
public:
	sound_user_data();
	sound_user_data(const sound_user_data &other);
	
	// TODO: const vtable
	
	sound_user_data &operator=(const sound_user_data &other);
};

struct space_restriction
{
	struct YUREI_MODULE_API shape
	{
		shape &operator=(const shape &other);
	};
};

};

// NOTE: underscores with args size in bytes at the end
// TODO: __cdecl? __stdcall?

YUREI_MODULE_API void add(/*20 bytes*/);
YUREI_MODULE_API void remove(/*8 bytes*/);

YUREI_MODULE_API void add_edge(/*16 bytes*/);
YUREI_MODULE_API void remove_edge(/*12 bytes*/);

YUREI_MODULE_API void construct(/*16 bytes*/);

YUREI_MODULE_API void create_brain_unit(/*16 bytes*/);
YUREI_MODULE_API void release_brain_unit(/*4 bytes*/);

YUREI_MODULE_API void create_graph(/*8 bytes*/);
YUREI_MODULE_API void remove_graph(/*8 bytes*/);

YUREI_MODULE_API void create_graph_vertex(/*20 bytes*/);
YUREI_MODULE_API void remove_graph_vertex(/*8 bytes*/);

YUREI_MODULE_API void create_ground_holder(/*4 bytes*/);
YUREI_MODULE_API void release_ground_holder(/*4 bytes*/);

YUREI_MODULE_API void create_sound_collection(/*20 bytes*/);
YUREI_MODULE_API void release_sound_collection(/*4 bytes*/);

YUREI_MODULE_API void create_sound_player(/*8 bytes*/);
YUREI_MODULE_API void release_sound_player(/*4 bytes*/);

YUREI_MODULE_API void create_sound_position_tracker_bone(/*4 bytes*/);
YUREI_MODULE_API void release_sound_position_tracker_bone(/*4 bytes*/);

YUREI_MODULE_API void release_sound_user_data(/*4 bytes*/); // TODO: no create_sound_user_data func?

YUREI_MODULE_API void get_graph(/*8 bytes*/);
YUREI_MODULE_API void get_graph_vertex(/*8 bytes*/);

YUREI_MODULE_API void get_ground_holder(/*4 bytes*/);

YUREI_MODULE_API void matrix_convention(/*4 bytes*/);

YUREI_MODULE_API void option(/*8 bytes*/);

YUREI_MODULE_API void notify_on_debug_render();
YUREI_MODULE_API void notify_on_object_destroy(/*4 bytes*/);

YUREI_MODULE_API void uai_assign_engine(/*4 bytes*/); // TODO: apparently a pointer to uEngine?
YUREI_MODULE_API void uai_notify_on_cleanup();