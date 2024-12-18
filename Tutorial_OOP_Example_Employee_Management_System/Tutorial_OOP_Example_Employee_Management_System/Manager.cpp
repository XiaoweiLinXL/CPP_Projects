#include "Manager.h"

Manager::Manager(int ID, string name, int department)
{
	this->m_ID = ID;
	this->m_Name = name;
	this->m_Department = department;
}

void Manager::showInfo()
{
	cout << "Name: " << this->m_Name;
	cout << "\tID: " << this->m_ID;
	cout << "\tPosition: " << this->getPosition();
	cout << "\tDuty: Complete tasks from the CEO, distribute tasks to the engineers" << endl;
}

string Manager::getPosition()
{
	return "Manager";
}