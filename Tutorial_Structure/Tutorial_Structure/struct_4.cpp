#include "struct_declaration.h"
#include "func_declaration.h"

int main4()
{
	struct Student s = { "Xiaowei", 18, 100 };

	cout << "Name: " << s.name << endl;

	printStuVal(s);

	cout << "Name: " << s.name << endl;

	cout << "Name: " << s.name << endl;

	printStuAdr(&s);

	cout << "Name: " << s.name << endl;

	return 0;
}