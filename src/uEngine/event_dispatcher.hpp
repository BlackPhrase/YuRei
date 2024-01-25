#pragma once

#include <coretypes.hpp>

namespace fastdelegate
{

template <typename T>
class FastDelegate0
{
};

//extern template class FastDelegate0<void>;

};

class YUREI_MODULE_API event_dispatcher
{
public:
	event_dispatcher();
	event_dispatcher(const event_dispatcher &other);
	~event_dispatcher();
	
	event_dispatcher &operator=(const event_dispatcher &other);
	
	void clear();
	
	void add(const fastdelegate::FastDelegate0<void> &event, int);
	void remove(const fastdelegate::FastDelegate0<void> &event);
	
	void dispatch();
private:
	
};