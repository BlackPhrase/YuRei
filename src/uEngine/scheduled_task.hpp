#pragma once

class str_shared;

class scheduled_task
{
public:
	scheduled_task();
	scheduled_task(const scheduled_task &other);
	~scheduled_task();
	
	void schedule_register();
	void schedule_unregister();
	
	void scheduler_update(unsigned int);
	
	str_shared scheduler_name() const;
};