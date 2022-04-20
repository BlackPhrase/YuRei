#pragma once

#include "OALHeaders.hpp"

class csounddataoal;

// TODO: csoundemitteroal?
class csoundsourceoal
{
public:
	csoundsourceoal();
	~csoundsourceoal();
	
	void set_data(csounddataoal *pData);
	
	void play();
	void play_data(csounddataoal *pData);
	//void pause(); // UNUSED
	void unpause();
	void stop();
	
	void set_volume(float fValue);
	void set_pitch(float fValue);
	void set_position(float fPosX, float fPosY, float fPosZ);
	void set_velocity(float fVelX, float fVelY, float fVelZ);
	void set_looping(bool bState);
	
	float get_volume() const;
	float get_pitch() const;
	float *get_position() const;
	float *get_velocity() const;
	
	bool is_playing() const;
	bool is_looping() const;
private:
	csounddataoal *mpData{nullptr};
	
	ALuint mnID{0};
};