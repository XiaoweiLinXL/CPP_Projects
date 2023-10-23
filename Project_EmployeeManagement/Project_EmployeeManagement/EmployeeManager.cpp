#include "EmployeeManager.h"

EmployeeManager::EmployeeManager()
{
	std::cout << "Constructor" << std::endl;

	std::ifstream ifs;
	ifs.open(FILENAME, std::ios::in);

	if (!ifs.is_open())
	{
		std::cout << "File not exists" << std::endl;

		this->m_EmpNum = 0;

		this->m_EmpArray = NULL;

		this->m_FileisEmpty = true;

		ifs.close();
	}
	else
	{
		char ch;
		ifs >> ch;
		if (ifs.eof())
		{
			std::cout << "File is empty" << std::endl;

			this->m_EmpNum = 0;

			this->m_EmpArray = NULL;

			this->m_FileisEmpty = true;

			ifs.close();
		}
		else
		{
			int num = this->getEmployeeNum();
			std::cout << "Number of employees: " << num << std::endl;
			this->m_EmpNum = num;

			this->m_EmpArray = new Employee * [this->m_EmpNum];

			this->m_FileisEmpty = false;

			this->initEmployee();

			for (int i = 0; i < this->m_EmpNum; i++)
			{
				std::cout << "ID: " << this->m_EmpArray[i]->m_ID
					<< " Name: " << this->m_EmpArray[i]->m_Name
					<< " Dept ID: " << this->m_EmpArray[i]->m_DepartmentID << std::endl;
			}
		}
	}
}

EmployeeManager::~EmployeeManager()
{
	std::cout << "Destructor" << std::endl;
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}

void EmployeeManager::showMenu()
{
	std::cout << "****************************************" << std::endl;
	std::cout << "****** Employee Management System ******" << std::endl;
	std::cout << "******          0. Exit           ******" << std::endl;
	std::cout << "******          1. Add            ******" << std::endl;
	std::cout << "******          2. Show           ******" << std::endl;
	std::cout << "******          3. Delete         ******" << std::endl;
	std::cout << "******          4. Edit           ******" << std::endl;
	std::cout << "******          5. Search         ******" << std::endl;
	std::cout << "******          6. Sort           ******" << std::endl;
	std::cout << "******          7. Empty          ******" << std::endl;
	std::cout << "****************************************" << std::endl;
}

void EmployeeManager::exitSystem()
{
	std::cout << "Welcome next time!" << std::endl;
	system("pause");
	exit(0);
}

void EmployeeManager::addEmployee()
{
	std::cout << "Input how many employees you want to add: ";

	int addNum = 0;
	std::cin >> addNum;

	if (addNum > 0)
	{
		int newSize = this->m_EmpNum + addNum;

		Employee** newSpace = new Employee * [newSize];

		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		for (int i = 0; i < addNum; i++)
		{
			int id;
			std::string name;
			int deptNum;

			std::cout << "Input ID of employee " << i + 1 << ":" << std::endl;
			std::cin >> id;

			std::cout << "Input Name of employee " << i + 1 << ":" << std::endl;
			std::cin >> name;

			std::cout << "Input Position of employee " << i + 1 << ":" << std::endl;
			std::cout << "0->Engineer " << std::endl;
			std::cout << "1->Manager " << std::endl;
			std::cout << "2->Boss " << std::endl;
			std::cin >> deptNum;

			switch (deptNum)
			{
			case 0:
				newSpace[this->m_EmpNum + i] = new Engineer(id, name, deptNum);
				break;
			case 1:
				newSpace[this->m_EmpNum + i] = new Manager(id, name, deptNum);
				break;
			case 2:
				newSpace[this->m_EmpNum + i] = new Boss(id, name, deptNum);
				break;
			default:
				break;
			}
		}
		delete[] this->m_EmpArray;
		this->m_EmpArray = newSpace;

		this->m_EmpNum = newSize;
		this->m_FileisEmpty = false;
		this->save();
	}
	else
	{
		std::cout << "Wrong input! Must be > 0" << std::endl;
	}

	system("pause");
	system("cls");
}

void EmployeeManager::save()
{
	std::ofstream ofs;
	ofs.open(FILENAME, std::ios::out);

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_ID << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DepartmentID << " " << std::endl;
	}

	ofs.close();
}

int EmployeeManager::getEmployeeNum()
{
	std::ifstream ifs;
	ifs.open(FILENAME, std::ios::in);

	int ID;
	std::string name;
	int deptID;

	int num = 0;

	while (ifs >> ID && ifs >> name && ifs >> deptID)
	{
		num++;
	}

	return num;
}

void EmployeeManager::initEmployee()
{
	std::ifstream ifs;
	ifs.open(FILENAME, std::ios::in);

	int ID;
	std::string name;
	int deptID;

	int index = 0;

	while (ifs >> ID && ifs >> name && ifs >> deptID)
	{
		Employee* employee = NULL;
		if (deptID == 0)
		{
			employee = new Engineer(ID, name, deptID);
		}
		else if (deptID == 1)
		{
			employee = new Manager(ID, name, deptID);
		}
		else if (deptID == 2)
		{
			employee = new Boss(ID, name, deptID);
		}
		this->m_EmpArray[index] = employee;
		index++;
	}

	ifs.close();
}

void EmployeeManager::showEmployee()
{
	if (this->m_FileisEmpty)
	{
		std::cout << "File not exists or empty!" << std::endl;
	}
	else
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			this->m_EmpArray[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}

void EmployeeManager::deleteEmployee()
{
	if (this->m_FileisEmpty)
	{
		std::cout << "File not exists or empty!" << std::endl;
	}
	else
	{
		int ID;
		std::cout << "Input Employee ID: ";
		std::cin >> ID;


		int index = this->isEmployeeExist(ID);
		if (index == -1)
		{
			std::cout << "Employee not exists!" << std::endl;
		}
		else
		{
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;
			this->save();
			std::cout << "Deleted!" << std::endl;
		}
	}
	system("pause");
	system("cls");
}

int EmployeeManager::isEmployeeExist(int id)
{
	int index = -1;
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_ID == id)
		{
			index = i;
			break;
		}
	}
	return index;
}

void EmployeeManager::editEmployee()
{
	if (this->m_FileisEmpty)
	{
		std::cout << "File not exists or empty!" << std::endl;
	}
	else
	{
		int ID;
		std::cout << "Input Employee ID: ";
		std::cin >> ID;


		int index = this->isEmployeeExist(ID);
		if (index == -1)
		{
			std::cout << "Employee not exists!" << std::endl;
		}
		else
		{
			delete this->m_EmpArray[index];

			int id;
			std::string name;
			int deptNum;

			std::cout << "Input ID of employee to modify: ";
			std::cin >> id;

			std::cout << "Input Name of employee: ";
			std::cin >> name;

			std::cout << "Input Position of employee: " << std::endl;
			std::cout << "0->Engineer " << std::endl;
			std::cout << "1->Manager " << std::endl;
			std::cout << "2->Boss " << std::endl;
			std::cin >> deptNum;

			switch (deptNum)
			{
			case 0:
				this->m_EmpArray[index] = new Engineer(id, name, deptNum);
				break;
			case 1:
				this->m_EmpArray[index] = new Manager(id, name, deptNum);
				break;
			case 2:
				this->m_EmpArray[index] = new Boss(id, name, deptNum);
				break;
			default:
				break;
			}

			std::cout << "Edit success!" << std::endl;

			this->save();

		}
	}
	system("pause");
	system("cls");
}

void EmployeeManager::searchEmployee()
{
	if (this->m_FileisEmpty)
	{
		std::cout << "File not exists or empty!" << std::endl;
	}
	else
	{
		int select = 0;
		std::cout << "Search by employee ID or name: " << std::endl;
		std::cout << "1->employee ID " << std::endl;
		std::cout << "2->name " << std::endl;
		std::cin >> select;

		if (select == 1)
		{
			int ID = -1;
			std::cout << "Input employee ID: ";
			std::cin >> ID;

			int index = this->isEmployeeExist(ID);

			if (index == -1)
			{
				std::cout << "Employee not exist!" << std::endl;
			}
			else
			{
				std::cout << "Here is the info: " << std::endl;
				this->m_EmpArray[index]->showInfo();
			}
		}
		else if (select == 2)
		{
			std::string name;
			std::cout << "Input employee name: ";
			std::cin >> name;

			bool isExist = false;
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					std::cout << "Here is the info: " << std::endl;
					this->m_EmpArray[i]->showInfo();
					isExist = true;
				}
			}
			if (!isExist)
			{
				std::cout << "Employee not exist!" << std::endl;
			}

		}
		else
		{
			std::cout << "Invalid selection!" << std::endl;
		}
	}
	system("pause");
	system("cls");
}

void EmployeeManager::sortEmployee()
{
	if (this->m_FileisEmpty)
	{
		std::cout << "File not exists or empty!" << std::endl;
	}
	else
	{
		int select = 0;
		std::cout << "Sort descending or ascending: " << std::endl;
		std::cout << "1->Descending " << std::endl;
		std::cout << "2->Ascending " << std::endl;
		std::cin >> select;

		/*for (int i = 0; i < this->m_EmpNum; i++)
		{
			for (int j = 0; j < this->m_EmpNum - 1 - i; j++)
			{
				if (select == 1)
				{
					if (this->m_EmpArray[j]->m_ID < this->m_EmpArray[j + 1]->m_ID)
					{
						Employee* temp = this->m_EmpArray[j];
						this->m_EmpArray[j] = this->m_EmpArray[j + 1];
						this->m_EmpArray[j + 1] = temp;
					}
				}
				else
				{
					if (this->m_EmpArray[j]->m_ID > this->m_EmpArray[j + 1]->m_ID)
					{
						Employee* temp = this->m_EmpArray[j];
						this->m_EmpArray[j] = this->m_EmpArray[j + 1];
						this->m_EmpArray[j + 1] = temp;
					}
				}
			}
		}*/

		for (int i = 0; i < m_EmpNum; i++)
		{
			int minOrMax = i;
			for (int j = i + 1; j < m_EmpNum; j++)
			{
				if (select == 1)
				{
					if (m_EmpArray[minOrMax]->m_ID < m_EmpArray[j]->m_ID)
					{
						minOrMax = j;
					}
				}
				else
				{
					if (m_EmpArray[minOrMax]->m_ID > m_EmpArray[j]->m_ID)
					{
						minOrMax = j;
					}
				}
			}

			if (i != minOrMax)
			{
				Employee* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[minOrMax];
				this->m_EmpArray[minOrMax] = temp;
			}
		}
	}
	std::cout << "Sorting finished" << std::endl;
	this->save();
	this->showEmployee();

}

void EmployeeManager::cleanBook()
{
	std::cout << "Confirm?" << std::endl;
	std::cout << "1-Yes" << std::endl;
	std::cout << "2-No" << std::endl;

	int select = 0;
	std::cin >> select;

	if (select == 1)
	{
		std::ofstream ofs(FILENAME, std::ios::trunc); // delete and create a new one
		ofs.close();

		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				delete this->m_EmpArray[i];
				this->m_EmpArray[i] = NULL;
			}

			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FileisEmpty = true;
		}

		std::cout << "Empty!" << std::endl;
		system("pause");
		system("cls");

	}
	else
	{
		std::cout << "Return" << std::endl;
		system("pause");
		system("cls");
	}
}
