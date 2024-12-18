#pragma once
#include <iostream>
#include "Employee.h"

class Manager :public Employee
{
public:
	Manager(int ID, string name, int department);

	~Manager();

	void showInfo();

	string getPosition();
};