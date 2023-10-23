#include "Manager.h"

Manager::Manager(int ID, std::string name, int deptID) : Employee(ID, name, deptID)
{

}

void Manager::showInfo()
{
	std::cout << "ID: " << this->m_ID
		<< "\tName: " << this->m_Name
		<< "\tDept.ID: " << this->getDepartmentName()
		<< "\tDuty: Report to boss and distribute tasks to engineers"
		<< std::endl;
}

std::string Manager::getDepartmentName()
{
	return std::string("Manager");
}