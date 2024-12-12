#pragma once
#include "Person.h"

class Employee : public Person
{
	string role;
	float salary;
	vector<string>schedule; // a list of schedule the string
	// must be at this following format 
	// [start: HH:MM :: end  HH:MM,start: HH:MM :: end  HH:MM]
	void viewSchedule();
	// display the schedule of this employee
	int getSalary(int months);// cala the salary over a period on months

};

