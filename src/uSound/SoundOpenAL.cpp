#include <stdexcept>

#include "SoundOpenAL.hpp"

csoundopenal::csoundopenal()
{
	mpDevice = alcOpenDevice(0);
	
	if(!mpDevice)
		throw std::runtime_error("* [sound] OpenAL: Failed to create device.");
	
	mpContext = alcCreateContext(mpDevice, 0);
	
	if(mpContext)
		throw std::runtime_error("* [sound] OpenAL: Failed to create context.");
	
	alcMakeContextCurrent(mpContext);
	
	bool bEnumExtPresent{alcIsExtensionPresent(mpDevice, "ALC_ENUMERATION_EXT")};
};

csoundopenal::~csoundopenal()
{
	alcMakeContextCurrent(nullptr);
	
	alcDestroyContext(mpContext);
	alcCloseDevice(mpDevice);
};