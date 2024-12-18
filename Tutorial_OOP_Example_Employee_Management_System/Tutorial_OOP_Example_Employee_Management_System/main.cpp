#include "Management_System.h"
#include "Engineer.h"
#include "Manager.h"
#include "CEO.h"



int main()
{
	Management_System employeeBook;

	int choice = 0;

	while (true)
	{
		employeeBook.showMenu();

		cout << "Your choice: " << endl;
		cin >> choice;

		switch (choice)
		{
		case 0: // Exit the system
			employeeBook.exitSystem();
			break;
		case 1: // Add employee
			employeeBook.addEmployee();
			system("pause");
			system("cls");
			break;
		case 2: // Show Employee
			employeeBook.showBook();
			system("pause");
			system("cls");
			break;
		case 3: // Delete Employee
			employeeBook.deleteEmployee();
			system("pause");
			system("cls");
			break;
		case 4: // Modify Employee
			employeeBook.modifyEmployee();
			system("pause");
			system("cls");
			break;
		case 5: // Search Employee
			employeeBook.searchEmployee();
			system("pause");
			system("cls");
			break;
		case 6: // Sort Employee
			employeeBook.sortEmployee();
			system("pause");
			system("cls");
			break;
		case 7: // Empty System
			employeeBook.emptyBook();
			system("pause");
			system("cls");
			break;
		default:
			system("cls");
			break;
		}
	}

	system("pause");

	return 0;
}