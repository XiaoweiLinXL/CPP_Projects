#include "Management_System.h"

Management_System::Management_System()
{
	if (!this->isFileExist())
	{
		return;
	}
	else
	{
		if (this->isFileEmpty())
		{
			return;
		}
		else // When there is a book and it's not empty
		{
			// Get employee number
			int employeeNumber = this->getEmployeeNum();

			this->m_EmployeeNumber = employeeNumber;

			// Read the data, update the member variable
			this->updateEmployeeArray(this->m_EmployeeNumber);

			for (int i = 0; i < this->m_EmployeeNumber; i++)
			{
				cout << "ID: " << this->m_EmployeeArray[i]->m_ID << " "
					<< "\tName: " << this->m_EmployeeArray[i]->m_Name << " "
					<< "\tDepartment: " << this->m_EmployeeArray[i]->m_Department << endl;
			}

		}
	}
}

Management_System::~Management_System()
{
	if (this->m_EmployeeArray != NULL)
	{
		for (int i = 0; i < this->m_EmployeeNumber; i++)
		{
			delete this->m_EmployeeArray[i];
			this->m_EmployeeArray[i] = NULL;
		}
		delete[] this->m_EmployeeArray;
		this->m_EmployeeArray = NULL;
	}
}

void Management_System::showMenu()
{
	cout << endl;
	cout << "----------------------" << endl;
	cout << "0. Exit" << endl;
	cout << "1. Add Employee" << endl;
	cout << "2. Show Employee" << endl;
	cout << "3. Delete Employee" << endl;
	cout << "4. Modify Employee" << endl;
	cout << "5. Search Employee" << endl;
	cout << "6. Sort Employee" << endl;
	cout << "7. Empty System" << endl;
	cout << "----------------------" << endl;
	cout << endl;
}

void Management_System::exitSystem()
{
	cout << "Look forward to seeing you again!" << endl;
	system("pause");
	exit(0); // No matter where calls this, the program ends
}

void Management_System::addEmployee()
{
	// Record the number of new employee
	int numNewEmployee = 0;

	cout << "Number of new employees: ";
	cin >> numNewEmployee;

	if (numNewEmployee <= 0) // Has to be a valid number
	{
		cout << "Invalid number!" << endl;
		return;
	}
	else
	{
		// Record the new size
		int newSize = this->m_EmployeeNumber + numNewEmployee;

		// Create the array on heap with the new size
		Employee** newBook = new Employee * [newSize];

		// Put the original book into the new one
		if (this->m_EmployeeArray != NULL)
		{
			for (int i = 0; i < this->m_EmployeeNumber; i++)
			{
				newBook[i] = this->m_EmployeeArray[i];
			}
		}

		// Add the new employees
		for (int i = 0; i < numNewEmployee; i++)
		{
			// Input the info
			int id;
			string name;
			int department;

			cout << "Input the ID for new employee " << i + 1 << " : ";
			cin >> id;

			cout << "Input the Name for new employee " << i + 1 << " : ";
			cin >> name;

			cout << "1. CEO " << endl;
			cout << "2. Manager" << endl;
			cout << "3. Engineer" << endl;
			cout << "Input the Department for new employee " << i + 1 << " : ";
			cin >> department;

			switch (department)
			{
			case 1:
				newBook[this->m_EmployeeNumber + i] = new CEO(id, name, department);
				break;
			case 2:
				newBook[this->m_EmployeeNumber + i] = new Manager(id, name, department);
				break;
			case 3:
				newBook[this->m_EmployeeNumber + i] = new Engineer(id, name, department);
				break;
			default:
				break;
			}
		}
		// Delete the old array
		delete[] this->m_EmployeeArray;

		// Point to the new array
		this->m_EmployeeArray = newBook;

		// Update the employee number
		this->m_EmployeeNumber = newSize;

		cout << "Successfully added " << numNewEmployee << " employees!" << endl;

		this->m_isFileEmpty = false;

		// Save the data to a file
		this->saveEmployee();
	}
}

void Management_System::saveEmployee()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);

	for (int i = 0; i < this->m_EmployeeNumber; i++)
	{
		ofs << this->m_EmployeeArray[i]->m_ID << " ";
		ofs << this->m_EmployeeArray[i]->m_Name << " ";
		ofs << this->m_EmployeeArray[i]->m_Department << endl;
	}

	ofs.close();
}

bool Management_System::isFileExist()
{
	ifstream ifs;

	ifs.open(FILENAME, ios::in);

	if (!ifs.is_open()) // If there is no such file
	{
		cout << "Employee book doesn't exist! Create a book using the menu." << endl;
		this->m_EmployeeNumber = 0;
		this->m_EmployeeArray = NULL;
		this->m_isFileEmpty = true;
		ifs.close();
		return false;
	}
	ifs.close();
	return true;
}

bool Management_System::isFileEmpty()
{
	ifstream ifs;

	ifs.open(FILENAME, ios::in);

	// If the file is empty
	char ch;
	ifs >> ch; // Read one char, if it's the end of the file, the book is empty.
	if (ifs.eof())
	{
		cout << "Employee book is empty! Add employees using the menu." << endl;
		this->m_EmployeeNumber = 0;
		this->m_EmployeeArray = NULL;
		this->m_isFileEmpty = true;
		ifs.close();
		return true;
	}
	ifs.close();
	return false;
}

int Management_System::getEmployeeNum()
{
	int id;
	string name;
	int department;

	int num = 0;

	ifstream ifs;

	ifs.open(FILENAME, ios::in);

	// Record the number of employees
	while (ifs >> id && ifs >> name && ifs >> department)
	{
		num++;
	}

	cout << "Employee number: " << num << endl;

	ifs.close();

	return num;	
}

void Management_System::updateEmployeeArray(int employeeNumber)
{
	ifstream ifs;

	ifs.open(FILENAME, ios::in);

	// Initialize the array with the size of employee number
	this->m_EmployeeArray = new Employee * [employeeNumber];

	int id;
	string name;
	int department;

	for (int i = 0; i < this->m_EmployeeNumber; i++)
	{
		while (ifs >> id && ifs >> name && ifs >> department)
		{
			switch (department)
			{
			case 1:
				this->m_EmployeeArray[i] = new CEO(id, name, department);
				break;
			case 2:
				this->m_EmployeeArray[i] = new Manager(id, name, department);
				break;
			case 3:
				this->m_EmployeeArray[i] = new Engineer(id, name, department);
				break;
			default:
				break;
			}
			break; // After one line, break, go to the next employee
		}
	}
	cout << "Book loaded!" << endl;

	ifs.close();
}

void Management_System::showBook()
{
	if (!this->isFileExist())
	{
		return;
	}
	else
	{
		if (this->isFileEmpty())
		{
			return;
		}
		else // When there is a book and it's not empty
		{
			for (int i = 0; i < this->m_EmployeeNumber; i++)
			{
				this->m_EmployeeArray[i]->showInfo();
			}
		}
	}
}

void Management_System::deleteEmployee()
{
	// First show the employee book
	this->showBook();

	cout << "Delete Employee ID: ";
	int ID;
	cin >> ID;

	int index = isEmployeeExistID(ID);

	// Determine if the employee exists
	if (index == -1)
	{
		cout << "Employee doesn't exist!" << endl;
	}
	else
	{
		// Release the memory of the deleted employee
		delete this->m_EmployeeArray[index];

		// Move everything after the delete employee forward by index 1
		for (int i = index; i < this->m_EmployeeNumber - 1; i++)
		{
			this->m_EmployeeArray[i] = this->m_EmployeeArray[i + 1];
		}

		// Update the employee number
		this->m_EmployeeNumber--;

		// Save the data to file
		this->saveEmployee();
	}
}

void Management_System::modifyEmployee()
{
	// Show the book first
	this->showBook();

	cout << "Enter the employee ID: ";
	int searchID;
	cin >> searchID;

	int index = this->isEmployeeExistID(searchID);

	if (index == -1) // If the employee doesn't exist
	{
		cout << "Employee doesn't exist!" << endl;
	}
	else
	{
		// Input the new information
		cout << "Found employee " << searchID << ": ";
		this->m_EmployeeArray[index]->showInfo();

		// Delete the employee
		delete this->m_EmployeeArray[index];

		cout << "Input new ID: ";
		int newID;
		cin >> newID;

		cout << "Input new Name: ";
		string newName;
		cin >> newName;

		cout << "1. CEO " << endl;
		cout << "2. Manager" << endl;
		cout << "3. Engineer" << endl;
		cout << "Input the Position: ";
		int newDepartment;
		cin >> newDepartment;

		// Update the Array
		switch (newDepartment)
		{
		case 1:
			this->m_EmployeeArray[index] = new CEO(newID, newName, newDepartment);
			break;
		case 2:
			this->m_EmployeeArray[index] = new Manager(newID, newName, newDepartment);
			break;
		case 3:
			this->m_EmployeeArray[index] = new Engineer(newID, newName, newDepartment);
			break;
		default:
			break;
		}

		// Update the Book
		this->saveEmployee();

		cout << "Modification Success!" << endl;
	}
}

void Management_System::searchEmployee()
{
	cout << "Search by: " << endl;
	cout << "1.ID" << endl;
	cout << "2.Name" << endl;
	int searchBy;
	cin >> searchBy;

	if (searchBy == 1)
	{
		cout << "Input ID: ";
		int searchID;
		cin >> searchID;

		int index = this->isEmployeeExistID(searchID);

		if (index != -1)
		{
			this->m_EmployeeArray[index]->showInfo();
		}
		else
		{
			cout << "Employee doesn't exist!" << endl;
		}

	}
	else if (searchBy == 2)
	{
		cout << "Input Name: ";
		string searchName;
		cin >> searchName;

		int flag = false;

		for (int i = 0; i < this->m_EmployeeNumber; i++)
		{
			if (searchName == this->m_EmployeeArray[i]->m_Name)
			{
				this->m_EmployeeArray[i]->showInfo();
				flag = true;
			}
		}

		if (!flag)
		{
			cout << "Employee doesn't exist!" << endl;
		}
	}
	else
	{
		cout << "Invalid Search!" << endl;
	}

}

void Management_System::sortEmployee()
{
	for (int i = 0; i < this->m_EmployeeNumber - 1; i++)
	{
		int smallestIndex = i;

		for (int j = i+1; j < this->m_EmployeeNumber; j++)
		{
			if (this->m_EmployeeArray[j]->m_Department < this->m_EmployeeArray[i]->m_Department)
			{
				smallestIndex = j;
			}
		}

		if (smallestIndex != i)
		{
			Employee* temp = this->m_EmployeeArray[i];
			this->m_EmployeeArray[i] = this->m_EmployeeArray[smallestIndex];
			this->m_EmployeeArray[smallestIndex] = temp;
		}
	}

	// Save the sorted Array
	this->saveEmployee();

	cout << "Successfully sorted: " << endl;
	this->showBook();

}

int Management_System::isEmployeeExistID(int ID)
{
	for (int i = 0; i < this->m_EmployeeNumber; i++)
	{
		if (this->m_EmployeeArray[i]->m_ID == ID)
		{
			return i;
		}
	}
	return -1;
}

int Management_System::isEmployeeExistName(string name)
{
	for (int i = 0; i < this->m_EmployeeNumber; i++)
	{
		if (this->m_EmployeeArray[i]->m_Name == name)
		{
			return i;
		}
	}
	return -1;
}

void Management_System::emptyBook()
{
	cout << "Are you sure?" << endl;
	cout << "1. Yes" << endl;
	cout << "2. Let me think about it..." << endl;
	int select;
	cin >> select;

	if (select == 2)
	{
		return;
	}
	else
	{
		ofstream ofs(FILENAME, ios::trunc); // Delete the file and create a new one
		ofs.close();

		if (this->m_EmployeeArray != NULL)
		{
			// Delete every instance on heap
			for (int i = 0; i < this->m_EmployeeNumber; i++)
			{
				delete this->m_EmployeeArray[i];
				this->m_EmployeeArray[i] = NULL;
			}

			// Delete the pointer array on heap
			delete[] this->m_EmployeeArray;

			this->m_EmployeeNumber = 0;
			this->m_isFileEmpty = true;

			cout << "Emptied the book!" << endl;
		}
	}
}