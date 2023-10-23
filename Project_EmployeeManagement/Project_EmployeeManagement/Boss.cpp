#include "Boss.h"

Boss::Boss(int ID, std::string name, int deptID) : Employee(ID, name, deptID)
{

}

void Boss::showInfo()
{
	std::cout << "ID: " << this->m_ID
		<< "\tName: " << this->m_Name
		<< "\tDept.ID: " << this->getDepartmentName()
		<< "\tDuty: Manage everything"
		<< std::endl;
}

std::string Boss::getDepartmentName()
{
	return std::string("Boss");
}