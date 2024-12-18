#pragma once
#include <iostream>
using namespace std;

class Employee
{
public:
	int m_ID;
	string m_Name;
	int m_Department;

	virtual void showInfo() = 0;

	virtual string getPosition() = 0;
};