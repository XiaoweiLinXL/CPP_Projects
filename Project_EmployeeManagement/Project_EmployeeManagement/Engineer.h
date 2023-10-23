#pragma once
#include "Employee.h"

class Engineer : public Employee
{
public:
	Engineer(int ID, std::string name, int deptID);

	virtual void showInfo();

	virtual std::string getDepartmentName();
};