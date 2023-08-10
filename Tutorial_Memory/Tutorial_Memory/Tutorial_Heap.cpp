#include<iostream>
using std::cout;
using std::endl;

int* func()
{
	int * p = new int(10);
	return p;
}

void test01()
{
	int* p = func();
	cout << p << endl;
	cout << p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	delete p;

	//cout << p << endl;
	//cout << *p << endl;
}

void test02()
{
	int* p = new int[10];

	for (int i = 0; i <= 9; i++)
	{
		p[i] = i + 10;
	}

	for (int i = 0; i <= 9; i++)
	{
		cout << p[i] << endl;
	}

	//p++;
	//cout << *p << endl;

	delete[] p;

	/*for (int i = 0; i <= 9; i++)
	{
		cout << p[i] << endl;
	}*/

	//delete[] p;

	//return p;
}

int main3()
{
	test02();

	//cout << *(++p) << endl;

	system("pause");

	return 0;
}