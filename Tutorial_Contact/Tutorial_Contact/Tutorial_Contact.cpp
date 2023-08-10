#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;
#define MAX 1000

struct Contact
{
	string name;
	string sex;
	string age;
	string number;
	string address;
};

struct ContactBook
{
	struct Contact book[MAX];
	int size;
};

void showMenu()
{
	cout << "*******************************" << endl;
	cout << "***** 1. Add a contact    *****" << endl;
	cout << "***** 2. Display the list *****" << endl;
	cout << "***** 3. Delete a contact *****" << endl;
	cout << "***** 4. Search a contact *****" << endl;
	cout << "***** 5. Edit a contact   *****" << endl;
	cout << "***** 6. Empty the list   *****" << endl;
	cout << "***** 0. Exit             *****" << endl;
	cout << "*******************************" << endl;
}

void addContact(struct ContactBook* c)
{
	if (c->size == MAX)
	{
		cout << "The book is full!" << endl;
	}
	else
	{
		cout << "Input a name: ";
		cin.ignore();
		getline(cin, c->book[c->size].name);
		
		cout << "Input sex: ";
		getline(cin, c->book[c->size].sex);
		
		cout << "Input age: ";
		getline(cin, c->book[c->size].age);

		cout << "Input phone #: ";
		getline(cin, c->book[c->size].number);

		cout << "Input address: ";	
		getline(cin, c->book[c->size].address);

		c->size++;

		cout << "Successfully added!" << endl;

	}
}

void displayContact(struct ContactBook* c)
{
	if (c->size == 0)
	{
		cout << "The book is empty!" << endl;

	}
	else
	{
		for (int i = 0; i <= c->size - 1; i++)
		{
			cout << "Name: " << c->book[i].name << "\t" << "Sex: " << c->book[i].sex <<
				"\t" << "Age: " << c->book[i].age << "\t" << "Phone #: " << c->book[i].number
				<< "\t" << "Address: " << c->book[i].address << endl;
		}

	}
}

int isExist(struct ContactBook* c, string name)
{
	for (int i = 0; i <= c->size - 1; i++)
	{
		if (c->book[i].name == name)
		{
			return i;
		}
	}
	return -1;
}

void delectContact(struct ContactBook* c)
{
	cout << "Input the contact to delete: ";
	string name;
	cin >> name;

	int exist = isExist(c, name);

	if (exist == -1)
	{
		cout << "Not Exist!" << endl;
		cout << c->book[c->size].name << endl;
	}
	else
	{
		for (int i = exist; i <= c->size - 2; i++)
		{
			c->book[i] = c->book[i + 1];
		}

		c->size--;
		cout << "Delete Success!" << endl;
		c->book[c->size] = {};
		cout << c->book[c->size].name << endl;
	}

}

void searchContact(struct ContactBook* c)
{
	cout << "Input the interested contact: ";
	string name;
	cin >> name;

	int index = isExist(c, name);
	if (index == -1)
	{
		cout << "Contact Not Exist!" << endl;
	}
	else
	{
		cout << "Name: " << c->book[index].name << "\t" << "Sex: " << c->book[index].sex <<
			"\t" << "Age: " << c->book[index].age << "\t" << "Phone #: " << c->book[index].number
			<< "\t" << "Address: " << c->book[index].address << endl;
	}	
}

void editContact(struct ContactBook* c)
{
	cout << "Input the interested contact: ";
	string name;
	cin >> name;

	int index = isExist(c, name);
	if (index == -1)
	{
		cout << "Contact Not Exist!" << endl;
	}
	else
	{
		cout << "Edit a name: ";
		getline(cin, c->book[index].name);

		cout << "Edit sex: ";
		getline(cin, c->book[index].sex);

		cout << "Edit age: ";
		getline(cin, c->book[index].age);

		cout << "Edit phone #: ";
		getline(cin, c->book[index].number);

		cout << "Edit address: ";
		getline(cin, c->book[index].address);

		cout << "Edit Success!" << endl;
	}
}

void emptyBook(struct ContactBook* c) 
{
	cout << "Are you sure to EMPTY the contacts?" << endl;
	cout << "Press 1 to confirm; 0 to cancel: ";
	int isSure;
	while (true)
	{
		cin >> isSure;
		if (isSure == 1)
		{
			c->size = 0;
			cout << "Empty!" << endl;
			break;
		}
		else if (isSure == 0)
		{
			cout << "Did not Empty!" << endl;
			break;
		}
		cout << "Press 1 to confirm; 0 to cancel: ";
	}
}

int main()
{
	struct ContactBook book;
	book.size = 0;

	int select = 0;

	while (true)
	{
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1: // ADD
			addContact(&book);
			system("pause");
			system("cls");
			break;
		case 2: // DISPLAY
			displayContact(&book);
			system("pause");
			system("cls");
			break;
		case 3: // DELETE
			delectContact(&book);
			system("pause");
			system("cls");
			break;
		case 4: // SEARCH
			searchContact(&book);
			system("pause");
			system("cls");
			break;
		case 5: // EDIT
			editContact(&book);
			system("pause");
			system("cls");
			break;
		case 6: // EMPTY
			emptyBook(&book);
			system("pause");
			system("cls");
			break;
		case 0: // EXIT
			cout << "Goodbye!" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
}