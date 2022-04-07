#pragma once

// sound data = sound buffers

class csounddataoal
{
public:
	csounddataoal();
	~csounddataoal();
	
	void loadfromfile(const char *sFilePath);
	
	ALuint get_buffer() const {return mnBufferID;}
private:
	ALuint mnBufferID{0};
};