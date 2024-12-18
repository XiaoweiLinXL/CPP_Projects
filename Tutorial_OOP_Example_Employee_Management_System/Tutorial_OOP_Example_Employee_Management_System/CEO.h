#pragma once
#include <iostream>
#include "Employee.h"

class CEO :public Employee
{
public:
	CEO(int ID, string name, int department);

	~CEO();

	void showInfo();

	string getPosition();
};
