#pragma once
#include "Employee.h"

class Manager : public Employee
{
public:
	Manager(int ID, std::string name, int deptID);

	virtual void showInfo();

	virtual std::string getDepartmentName();
};