#include "SoundDataOAL.hpp"

csounddataoal::csounddataoal()
{
	alGenBuffers(1, &mnBufferID);
};

csounddataoal::~csounddataoal()
{
	alDeleteBuffers(1, &mnBufferID);
};

void csounddataoal::loadfromfile(const char *sFilePath)
{
	// TODO: actually load data from the file
	//alBufferData(mnBufferID); // TODO
};