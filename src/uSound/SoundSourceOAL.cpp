#include "SoundSourceOAL.hpp"
#include "SoundDataOAL.hpp"

csoundsourceoal::csoundsourceoal()
{
	alGenSources(1, &mnID);
	
	// TODO: reset()?
	set_volume(1.0f);
	set_pitch(1.0f);
	set_position(0.0f, 0.0f, 0.0f);
};

csoundsourceoal::~csoundsourceoal()
{
	alDeleteSources(1, &mnID);
};

void csoundsourceoal::set_data(csounddataoal *pData)
{
	alSourcei(mnID, AL_BUFFER, pData->get_buffer());
};

void csoundsourceoal::play()
{
	alSourcePlay(mnID);
};

void csoundsourceoal::play_data(csounddataoal *pData)
{
	set_data(pData);
	play();
};

/*
void csoundsourceoal::pause()
{
	alSourcePause(mnID);
};
*/

void csoundsourceoal::unpause()
{
	play();
};

void csoundsourceoal::stop()
{
	alSourceStop(mnID);
};

void csoundsourceoal::set_volume(float fValue)
{
	alSourcef(mnID, AL_GAIN, fValue);
};

void csoundsourceoal::set_pitch(float fValue)
{
	alSourcef(mnID, AL_PITCH, fValue);
};

void csoundsourceoal::set_position(float fPosX, float fPosY, float fPosZ)
{
	alSource3f(mnID, AL_POSITION, fPosX, fPosY, fPosZ);
};

void csoundsourceoal::set_velocity(float fVelX, float fVelY, float fVelZ)
{
	alSource3f(mnID, AL_VELOCITY, fVelX, fVelY, fVelZ);
};

void csoundsourceoal::set_looping(bool bState)
{
	alSourcei(mnID, AL_LOOPING, bState ? AL_TRUE : AL_FALSE);
};

float csoundsourceoal::get_volume() const
{
	return 0.0f;
};

float csoundsourceoal::get_pitch() const
{
	return 0.0f;
};

float *csoundsourceoal::get_position() const
{
	return nullptr;
};

float *csoundsourceoal::get_velocity() const
{
	return nullptr;
};

bool csoundsourceoal::is_playing() const
{
	int nSourceState{0};
	alGetSourcei(mnID, AL_SOURCE_STATE, &nSourceState);
	return nSourceState == AL_PLAYING;
};

bool csoundsourceoal::is_looping() const
{
	int nLoopingState{0};
	alGetSourcei(mnID, AL_LOOPING, &nLoopingState);
	return nLoopingState;
};