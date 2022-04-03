#pragma once

class scheduled_task;

class ctaskscheduler
{
public:
	ctaskscheduler();
	ctaskscheduler(const ctaskscheduler &other);
	~ctaskscheduler();
	
	void initialize();
	void destroy();
	
	void update();
	
	void process_step();
	
	void internal_register(scheduled_task *pTask, bool);
	void internal_unregister(scheduled_task *pTask, bool);
	
	void internal_registration();
};