#include "CEO.h"

CEO::CEO(int ID, string name, int department)
{
	this->m_ID = ID;
	this->m_Name = name;
	this->m_Department = department;
}

void CEO::showInfo()
{
	cout << "Name: " << this->m_Name;
	cout << "\tID: " << this->m_ID ;
	cout << "\tPosition: " << this->getPosition();
	cout << "\tDuty: Handle everything" << endl;
}

string CEO::getPosition()
{
	return "CEO";
}