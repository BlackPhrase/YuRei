#pragma once

#include <igame_level.hpp>

class clevel : public igame_level
{
public:
	clevel();
	//clevel(const clevel &other);
	~clevel();
	
	//clevel &operator=(const clevel &other);
	
	bool load(str_shared path) override;
	
	bool load_game_specific_before() override;
	bool load_game_specific_after() override;
	
	void on_frame() override;
	void on_render() override;
	
	void set_entity(uobject *entity) override;
	void set_view_entity(uobject *entity) override;
	
	uobject *current_entity() const override;
	uobject *current_view_entity() const override;
	
	unsigned short gen_id() override;
	void free_id(unsigned short id) override;
	
	void sound_event_register(const struct usound::event &event) override;
	void sound_event_dispatch() override;
	
	void net_stop() override;
	
	str_shared name() const override;
	str_shared level_path() const override;
};