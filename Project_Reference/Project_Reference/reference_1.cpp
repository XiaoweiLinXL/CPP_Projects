#include <iostream>
using namespace std;


int main1()
{
	int a = 10;
	int& b = a;

	cout << a << endl;
	cout << b << endl;

	b = 100;

	cout << a << endl;
	cout << b << endl;

	return 0;
}