#include<iostream>
using std::cout;
using std::endl;

int main4()
{
	int a = 10;

	int& b = a;

	int& c = b;

	cout << &a << endl;
	cout << &b << endl;
	cout << &c << endl;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	int d = 20;

	cout << &d << endl;
	cout << d << endl;

	

	system("pause");

	return 0;
}