#include "func_declaration.h"

void showMenu()
{
	cout << "*************************************" << endl;
	cout << "*****\t" << "1. Add Contact\t" << "\t*****" << endl;
	cout << "*****\t" << "2. Show Contact\t" << "\t*****" << endl;
	cout << "*****\t" << "3. Delete Contact\t" << "*****" << endl;
	cout << "*****\t" << "4. Search Contact\t" << "*****" << endl;
	cout << "*****\t" << "5. Edit Contact\t" << "\t*****" << endl;
	cout << "*****\t" << "6. Empty Contact\t" << "*****" << endl;
	cout << "*****\t" << "0. Exit Contact Book\t" << "*****" << endl;
	cout << "*************************************" << endl;
}

void addContact(struct Book* book)
{
	if (book->size == MAX)
	{
		cout << "The book is full..." << endl;
	}
	else
	{
		cout << "Name: " << endl;
		cin.ignore();
		getline(cin, book->personArray[book->size].name);
		cout << endl;

		cout << "Sex: " << endl;
		getline(cin, book->personArray[book->size].sex);
		cout << endl;

		cout << "Age: " << endl;
		cin >> book->personArray[book->size].age;
		cin.ignore();
		cout << endl;

		cout << "Phone number: " << endl;
		getline(cin, book->personArray[book->size].phone);
		cout << endl;

		cout << "Address: " << endl;
		getline(cin, book->personArray[book->size].address);
		cout << endl;

		cout << "Success!" << endl;
		book->size++;	
	}
	system("pause");
	system("cls");
}

void viewContact(const struct Book* book)
{
	if (book->size)
	{
		for (int i = 0; i < book->size; i++)
		{
			cout << "Name: " << book->personArray[i].name << "\t";
			cout << "Sex: " << book->personArray[i].sex << "\t";
			cout << "Age: " << book->personArray[i].age << "\t\t";
			cout << "Phone number: " << book->personArray[i].phone << "\t";
			cout << "Address: " << book->personArray[i].address << endl;
		}
	}
	else
	{
		cout << "The book is empty!" << endl;
	}
	
	system("pause");
	system("cls");
}

int checkExistance(const struct Book* book, const string* pname)
{
	for (int i = 0; i < book->size; i++)
	{
		if (book->personArray[i].name == *pname)
		{
			return i;
		}
	}
	return -1;
}

void deleteContact(struct Book* book)
{
	string name;
	cout << "Input name: " << endl;
	cin.ignore();
	getline(cin, name);

	int exist = checkExistance(book, &name);
	if (exist == -1)
	{
		cout << "Not exist!" << endl;
	}
	else
	{
		for (int i = exist; i < book->size; i++)
		{
			book->personArray[i] = book->personArray[i + 1];
		}
		book->size--;
		cout << "Deleted!" << endl;
	}
	system("pause");
	system("cls");
}

void checkContact(struct Book* book)
{
	string name;
	cout << "Input name: " << endl;
	cin.ignore();
	getline(cin, name);

	int exist = checkExistance(book, &name);
	if (exist == -1)
	{
		cout << "Not exist!" << endl;
	}
	else
	{
		cout << "Name: " << book->personArray[exist].name << "\t";
		cout << "Sex: " << book->personArray[exist].sex << "\t";
		cout << "Age: " << book->personArray[exist].age << "\t\t";
		cout << "Phone number: " << book->personArray[exist].phone << "\t";
		cout << "Address: " << book->personArray[exist].address << endl;
	}
	system("pause");
	system("cls");
}

void editContact(struct Book* book)
{
	string name;
	cout << "Input name: " << endl;
	cin.ignore();
	getline(cin, name);

	int exist = checkExistance(book, &name);
	if (exist == -1)
	{
		cout << "Not exist!" << endl;
	}
	else
	{
		cout << "Modifying " << name << "'s info" << endl;
		cout << "Name: " << endl;
		cin.ignore();
		getline(cin, book->personArray[exist].name);
		cout << endl;

		cout << "Sex: " << endl;
		getline(cin, book->personArray[exist].sex);
		cout << endl;

		cout << "Age: " << endl;
		cin >> book->personArray[exist].age;
		cin.ignore();
		cout << endl;

		cout << "Phone number: " << endl;
		getline(cin, book->personArray[exist].phone);
		cout << endl;

		cout << "Address: " << endl;
		getline(cin, book->personArray[exist].address);
		cout << endl;

		cout << "Success!" << endl;
	}
	system("pause");
	system("cls");
}

void emptyBook(struct Book* book)
{
	cout << "Are you sure to empty the contact book?" << endl;
	cout << "yes/no?: ";
	string input;
	cin >> input;

	if (input == "yes")
	{
		book->size = 0;
		cout << "Empty Book!" << endl;
	}
	else
	{
		cout << "Not emptied" << endl;
	}
	
	system("pause");
	system("cls");
}