#pragma once
#include <iostream>
#include "Employee.h"
#include "CEO.h"
#include "Manager.h"
#include "Engineer.h"

#include <fstream>
#define FILENAME "employeeBook.txt"
using namespace std;

class Management_System
{
public:
	Management_System();

	~Management_System();

	void showMenu();

	void exitSystem();

	void addEmployee();

	void deleteEmployee();

	int isEmployeeExistID(int ID);

	int isEmployeeExistName(string name);

	void modifyEmployee();

	void searchEmployee();

	void sortEmployee();

	void emptyBook();

	void saveEmployee();

	bool isFileExist();

	bool isFileEmpty();

	int getEmployeeNum();

	void updateEmployeeArray(int employeeNumber);

	void showBook();

	int m_EmployeeNumber;

	Employee** m_EmployeeArray;

	bool m_isFileEmpty;
};