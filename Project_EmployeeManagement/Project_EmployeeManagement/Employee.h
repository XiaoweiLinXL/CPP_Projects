#pragma once
#include <iostream>
#include <string>

class Employee
{
public:
	int m_ID;
	std::string m_Name;
	int m_DepartmentID;

	Employee(int ID, std::string name, int deptID);

	virtual void showInfo() = 0;

	virtual std::string getDepartmentName() = 0;
};