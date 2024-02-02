#include "uai.hpp"

namespace uai
{

sound_user_data_base::sound_user_data_base()
{
};

sound_user_data_base &sound_user_data_base::operator=(const sound_user_data_base &other)
{
	return *this;
};

sound_user_data::sound_user_data()
{
};

sound_user_data::sound_user_data(const sound_user_data &other)
{
};
	
sound_user_data &sound_user_data::operator=(const sound_user_data &other)
{
	return *this;
};

space_restriction::shape &space_restriction::shape::operator=(const space_restriction::shape &other)
{
	return *this;
};

}; // namespace uai

void add(/*20 bytes*/)
{
};

void remove(/*8 bytes*/)
{
};

void add_edge(/*16 bytes*/)
{
};

void remove_edge(/*12 bytes*/)
{
};

void construct(/*16 bytes*/)
{
};

void create_brain_unit(/*16 bytes*/)
{
};

void release_brain_unit(/*4 bytes*/)
{
};

void create_graph(/*8 bytes*/)
{
};

void remove_graph(/*8 bytes*/)
{
};

void create_graph_vertex(/*20 bytes*/)
{
};

void remove_graph_vertex(/*8 bytes*/)
{
};

void create_ground_holder(/*4 bytes*/)
{
};

void release_ground_holder(/*4 bytes*/)
{
};

void create_sound_collection(/*20 bytes*/)
{
};

void release_sound_collection(/*4 bytes*/)
{
};

void create_sound_player(/*8 bytes*/)
{
};

void release_sound_player(/*4 bytes*/)
{
};

void create_sound_position_tracker_bone(/*4 bytes*/)
{
};

void release_sound_position_tracker_bone(/*4 bytes*/)
{
};

void release_sound_user_data(/*4 bytes*/)
{
};

void get_graph(/*8 bytes*/)
{
};

void get_graph_vertex(/*8 bytes*/)
{
};

void get_ground_holder(/*4 bytes*/)
{
};

void matrix_convention(/*4 bytes*/)
{
};

void option(/*8 bytes*/)
{
};

void notify_on_debug_render()
{
};

void notify_on_object_destroy(/*4 bytes*/)
{
};

void uai_assign_engine(/*4 bytes*/)
{
};

void uai_notify_on_cleanup()
{
};