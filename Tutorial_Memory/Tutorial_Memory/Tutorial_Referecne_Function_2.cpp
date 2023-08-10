#include<iostream>
using std::cout;
using std::endl;

int& test01()
{
	static int a = 10;
	return a;
}

int* const test02()
{
	static int a = 10;
	int* const p = &a;
	return p;
}

void func01(int& ref)
{
	ref = 100;
	cout << &ref << endl;
}

void func02(int* p)
{
	*p = 100;
	cout << &(*p) << endl;
	cout << &p << endl;;
}

int main()
{
	/*int& ref = test01();

	cout << ref << endl;
	cout << ref << endl;

	test01() = 100;

	cout << ref << endl;
	cout << ref << endl;

	ref = 1000;

	cout << ref << endl;
	cout << ref << endl;

	int* p = test02();

	cout << *p << endl;
	cout << *p << endl;*/

	int a = 10;

	const int& ref = 200;

	cout << &ref << endl;

	cout << &a << endl;

	func01(a);

	cout << a << endl;

	func02(&a);

	cout << a << endl;

	system("pause");

	return 0;
}