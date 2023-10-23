#pragma once
#include <iostream>
#include "Employee.h"
#include "Engineer.h"
#include "Manager.h"
#include "Boss.h"

#include <fstream>
#define FILENAME "EmployeeDirectory.txt"


class EmployeeManager
{
public:
	EmployeeManager();

	void showMenu();

	void exitSystem();

	void addEmployee();

	void save();

	int getEmployeeNum();

	void initEmployee();

	void showEmployee();

	void deleteEmployee();

	void editEmployee();

	void searchEmployee();

	void sortEmployee();

	void cleanBook();

	int isEmployeeExist(int id);

	~EmployeeManager();

	int m_EmpNum;

	Employee** m_EmpArray;

	bool m_FileisEmpty;
};