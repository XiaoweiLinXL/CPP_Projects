#pragma once
#include <iostream>
#include "Employee.h"

class Engineer :public Employee
{
public:
	Engineer(int ID, string name, int department);

	~Engineer();

	void showInfo();

	string getPosition();
};