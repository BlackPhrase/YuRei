#pragma once

class csoundlisteneroal
{
public:
	csoundlisteneroal();
	~csoundlisteneroal();
	
	void set_volume(float fValue);
	void set_position(float fPosX, float fPosY, float fPosZ);
	void set_velocity(float fVelX, float fVelY, float fVelZ);
	void set_direction(float fDirX, float fDirY, float fDirZ);
	
	float get_volume() const;
	float *get_position() const;
	float *get_velocity() const;
	float *get_direction() const;
private:
};