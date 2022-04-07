#include "SoundOpenAL.hpp"

csoundopenal::csoundopenal()
{
	mpDevice = alOpenDevice(0);
	mpContext = alCreateContext(mpDevice, 0);
	
	alMakeContextCurrent(mpContext);
};

csoundopenal::~csoundopenal()
{
	alMakeContextCurrent(nullptr);
	
	alDestroyContext(mpContext);
	alCloseDevice(mpDevice);
};