#include "func_declaration.h"

int main2()
{
	int a = 10;
	int b = 20;
	cout << "a" << a << endl;
	cout << "b" << b << endl;

	swap(&a, &b);

	cout << "a" << a << endl;
	cout << "b" << b << endl;

	return 0;
}