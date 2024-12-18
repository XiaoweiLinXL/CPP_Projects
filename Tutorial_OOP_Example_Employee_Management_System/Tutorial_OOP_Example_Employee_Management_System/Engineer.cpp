#include "Engineer.h"

Engineer::Engineer(int ID, string name, int department)
{
	this->m_ID = ID;
	this->m_Name = name;
	this->m_Department = department;
}

void Engineer::showInfo()
{
	cout << "Name: " << this->m_Name;
	cout << "\tID: " << this->m_ID;
	cout << "\tPosition: " << this->getPosition();
	cout << "\tDuty: Complete tasks from managers" << endl;
}

string Engineer::getPosition()
{
	return "Engineer";
}