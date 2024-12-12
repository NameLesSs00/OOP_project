#pragma once
#include <iostream>
#include <vector>
#include "Employee.h"
using namespace std;

//this class is just meant to be just inherted
class StoreBase
{
private:
	int store_ID;
	string name;
	string address;
	vector<Employee>employees;
public:
	void addEmployee(Employee employee);
	void removeEmployee(int employeeId);
	void showInfo();
};

