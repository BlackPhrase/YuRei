#pragma once

class sound_receiver
{
public:
	sound_receiver();
	sound_receiver(const sound_receiver &other);
	//~sound_receiver();
	
	// TODO: vtable
	
	sound_receiver &operator=(const sound_receiver &other);
	
	void sound_receiver_event(const struct usound::event &event, float);
};