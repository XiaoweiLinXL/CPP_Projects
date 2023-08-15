#include "func_declaration.h"
#include "struct_declaration.h"

int main()
{
	int selection = 0;
	struct Book book;
	book.size = 0;
	string name;

	while (1)
	{
		showMenu();
		cout << "Option: " << endl;
		cin >> selection;
		cout << endl;
		string name;

		switch (selection)
		{
		case 1:
			addContact(&book);
			break;
		case 2:
			viewContact(&book);
			break;
		case 3:
			deleteContact(&book);
			break;
		case 4:
			checkContact(&book);
			break;
		case 5:
			editContact(&book);
			break;
		case 6:
			emptyBook(&book);
			break;
		case 0:
			cout << "Exiting..." << endl;
			system("pause");
			return 0;
			break;

		default:
			showMenu();
		}
	}
	

	return 0;
}