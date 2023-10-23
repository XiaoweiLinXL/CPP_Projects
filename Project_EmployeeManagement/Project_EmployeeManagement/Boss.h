#pragma once
#include "Employee.h"

class Boss : public Employee
{
public:
	Boss(int ID, std::string name, int deptID);

	virtual void showInfo();

	virtual std::string getDepartmentName();
};
