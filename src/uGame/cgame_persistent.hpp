#pragma once

#include <igame_persistent.hpp>

class cgame_persistent : public igame_persistent
{
public:
	cgame_persistent();
	//cgame_persistent(const cgame_persistent &other);
	~cgame_persistent();
	
	// TODO: vtable?
	
	//cgame_persistent &operator=(const cgame_persistent &other);
	
	void start(const char *) override;
	
	void disconnect() override;
	
	void on_app_start() override;
	void on_app_end() override;
	
	void on_app_activate() override;
	void on_app_deactivate() override;
	
	void on_frame() override;
	
	void on_game_start() override;
	void on_game_end() override;
	
	unsigned int game_type() const override;
};