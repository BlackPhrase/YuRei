#pragma once

#include <coretypes.hpp>

class scheduled_task;

class YUREI_MODULE_API ctaskscheduler
{
public:
	struct item
	{
	};
	
	ctaskscheduler();
	ctaskscheduler(const ctaskscheduler &other);
	~ctaskscheduler();
	
	ctaskscheduler &operator=(const ctaskscheduler &other);
	
	void initialize();
	void destroy();
	
	void update();
	
	void register_(scheduled_task *pTask, bool);
	void unregister_(scheduled_task *pTask);
	
	void process_step();
	
	void push(item &item);
	void pop();
	
	item &top() const;
	
	void ensure_order(scheduled_task *pTaskA, scheduled_task *pTaskB);
	
	void internal_register(scheduled_task *pTask, bool);
	void internal_unregister(scheduled_task *pTask, bool);
	
	void internal_registration();
};