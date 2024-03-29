#pragma once

#include <coretypes.hpp>

class str_shared;

class YUREI_MODULE_API scheduled_task
{
public:
	scheduled_task();
	scheduled_task(const scheduled_task &other);
	~scheduled_task();
	
	// TODO: vtable
	
	scheduled_task &operator=(const scheduled_task &other);
	
	void schedule_register();
	void schedule_unregister();
	
	void scheduler_update(unsigned int);
	
	str_shared scheduler_name() const;
};