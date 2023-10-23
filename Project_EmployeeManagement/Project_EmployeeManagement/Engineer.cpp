#include "Engineer.h"

Engineer::Engineer(int ID, std::string name, int deptID): Employee(ID, name, deptID)
{

}

void Engineer::showInfo()
{
	std::cout << "ID: " << this->m_ID
		<< "\tName: " << this->m_Name
		<< "\tDept.ID: " << this->getDepartmentName()
		<< "\tDuty: Development and report to manager"
		<< std::endl;
}

std::string Engineer::getDepartmentName()
{
	return std::string("Engineer");
}