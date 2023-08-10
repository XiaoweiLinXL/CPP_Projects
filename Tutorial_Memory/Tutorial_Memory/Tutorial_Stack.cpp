#include<iostream>
using std::cout;
using std::endl;

int * func1()
{
	int a = 10;
	return &a;
}

int main2()
{
	int * b = func1();

	cout << *b << endl;
	cout << *b << endl;

	system("pause");

	return 0;
}