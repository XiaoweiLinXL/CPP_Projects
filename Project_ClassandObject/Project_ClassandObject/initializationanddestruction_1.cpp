#include "perosn.h"

void test01()
{
	// Defined on stack, destructed after the function is finished, which will call the destructor
	// Do not include "()" when using default constructor, because the compiler thinks it's declaring a function
	Person p1;

	Person p2(10, 180);
	p2.printAge();

	Person p3(p2);
	p3.printAge();
}

int main5()
{
	test01();

	// Destructed when the program is finished
	Person pk;

	system("pause");

	return 0;
}