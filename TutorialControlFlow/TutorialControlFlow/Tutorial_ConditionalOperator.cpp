#include <iostream>
using namespace std;

int main3()
{
	int a = 0;
	int b = 0;
	int c = 0;

	cout << "Input A: " << endl;
	cin >> a;
	cout << "Input B: " << endl;
	cin >> b;

	cout << "A: " << a << endl;
	cout << "B: " << b << endl;

	(a > b ? c = a : c = b) = 100;
	cout << "C: " << c << endl;

	system("pause");

	return 0;
}