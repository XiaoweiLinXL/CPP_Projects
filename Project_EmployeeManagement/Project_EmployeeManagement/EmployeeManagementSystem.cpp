#include "EmployeeManager.h"
#include "Engineer.h"
#include "Manager.h"
#include "Boss.h"

int main()
{
	//Employee* employee1 = new Engineer(30, "Xiaowei Lin", 0);
	//employee1->showInfo();

	//Employee* employee2 = new Manager(29, "Yilan Deng", 1);
	//employee2->showInfo();

	//Employee* employee3 = new Boss(28, "Yilan Deng", 2);
	//employee3->showInfo();


	EmployeeManager manager;

	int choice = 0;

	while (true) 
	{
		manager.showMenu();

		std::cout << std::endl;
		std::cout << "Please choose from the menu: ";
		std::cin >> choice;

		switch (choice)
		{
		case 0:
			return 0;
			manager.exitSystem();
			break;
		case 1:
			manager.addEmployee();
			break;
		case 2:
			manager.showEmployee();
			break;
		case 3:
			manager.deleteEmployee();
			break;
		case 4:
			manager.editEmployee();
			break;
		case 5:
			manager.searchEmployee();
			break;
		case 6:
			manager.sortEmployee();
			break;
		case 7:
			manager.cleanBook
			();
			break;
		default:
			system("cls");
			break;
		}
	}

	return 0;
}