#pragma once

#include <igame_hud.hpp>

class chudmanager : public igame_hud
{
public:
	chudmanager();
	//chudmanager(const chudmanager &other);
	~chudmanager();
	
	//chudmanager &operator=(const chudmanager &other);
	
	void load() override;
	
	void on_frame() override;
	
	void render_hud() override;
};