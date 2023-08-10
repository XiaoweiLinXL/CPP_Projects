#include<iostream>
using std::cout;
using std::endl;

int g = 10;

void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << (int)&a << endl;
	cout << (int)&b << endl;
}

void swap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

	cout << (int)&(*a) << endl;
	cout << (int)&(*b) << endl;
}

void swap03(int& a, int& b) 
{
	int temp = a;
	a = b;
	b = temp;

	cout << (int)&a << endl;
	cout << (int)&b << endl;
}

int main5()
{
	cout << (int)&g << endl;

	int a = 10;
	int b = 20;

	cout << (int)&a << endl;
	cout << (int)&b << endl;

	swap03(a, b);

	cout << a << endl;
	cout << b << endl;

	system("pause");

	return 0;
}