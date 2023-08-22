#include "perosn.h"

// 1. Instantiate a new object with a current one
void test02()
{
	Person p1(10, 180);
	Person p2(p1);
}

// 2. Passing as a value, it will call the copy constructor, copying the existing object to the argument
void test03(Person p)
{

}

// 3. Return a value of a local variable.
Person test04()
{
	Person p;
	return p;
}

int main6()
{
	//test02();

	//Person p;
	//test03(p);

	//Person p = test04();

	Person p;

	system("pause");
	return 0;
}