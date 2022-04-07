#pragma once

class csoundopenal
{
public:
	csoundopenal();
	~csoundopenal();
	
	void init();
	void shutdown();
	
	void update();
private:
	ALdevice *mpDevice{nullptr};
};