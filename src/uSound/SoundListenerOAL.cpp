#include "SoundListenerOAL.hpp"
#include "OALHeaders.hpp"

csoundlisteneroal::csoundlisteneroal()
{
	set_position(0.0f, 0.0f, 0.0f);
	set_velocity(0.0f, 0.0f, 0.0f);
};

csoundlisteneroal::~csoundlisteneroal() = default;

void csoundlisteneroal::set_position(float fPosX, float fPosY, float fPosZ)
{
	alListener3f(AL_POSITION, fPosX, fPosY, fPosZ);
};

void csoundlisteneroal::set_velocity(float fVelX, float fVelY, float fVelZ)
{
	alListener3f(AL_VELOCITY, fVelX, fVelY, fVelZ);
};

void csoundlisteneroal::set_direction(float fDirX, float fDirY, float fDirZ)
{
	alListener3f(AL_ORIENTATION, fDirX, fDirY, fDirZ);
};

float *csoundlisteneroal::get_position() const
{
};

float *csoundlisteneroal::get_velocity() const
{
};

float *csoundlisteneroal::get_direction() const
{
};