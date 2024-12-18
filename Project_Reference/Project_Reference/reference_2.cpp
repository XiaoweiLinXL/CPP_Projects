#include <iostream>
using namespace std;

void swap_reference(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

// do not return the reference of a local variable, which is stored on the stack
int& test01()
{
	int a = 100;
	return a;
}

// reference is equivalent to "int* const p"
int& test02()
{
	static int a = 100; // static variable, stored on the heap
	return a;
}

int main()
{
	int a = 10;
	int b = 20;

	cout << a << endl;
	cout << b << endl;

	swap_reference(a, b);

	cout << a << endl;
	cout << b << endl;

	int& ref_1 = test01();

	cout << ref_1 << endl;
	cout << ref_1 << endl;

	test01() = 1000;

	cout << ref_1 << endl;
	cout << ref_1 << endl;

	int& ref_2 = test02();

	cout << ref_2 << endl;
	cout << ref_2 << endl;

	test02() = 1000;

	cout << ref_2 << endl;
	cout << ref_2 << endl;

	return 0;
}