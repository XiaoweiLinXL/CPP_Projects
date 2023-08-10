#include <iostream>
using namespace std;

#define Day 7

int main()
{
	const short num = 32768;

	float f2 = 3142321412e-2f;

	double d1 = 12321233.14;

	char ch = '\n';

	char str1[] = "Hello World!";

	string str2 = "Goodbye World!";

	bool flag = false;

	/*float a = 1.0f;

	cout << "Now a is: " << a << endl;

	cin >> a;

	cout << "Now a is: " << a << endl;*/

	cout << "Now bool is: " << flag << endl;

	cin >> flag;

	cout << "Now bool is: " << flag << endl;

	/*int a = 1;

	cout << "Now a is: " << a << endl;

	cin >> a;

	cout << "Now a is: " << a << endl;*/

	cout << "The bool is: " << flag << endl;

	cout << sizeof(bool) << endl;

	cout << "f2 = " << f2 << endl;


	// Only display six significant figures
	cout << "d1 = " << d1 << endl;

	cout << str1 << endl;
	cout << str2 << endl;

	// Display how much memory used
	cout << sizeof(ch) << endl;

	//ch = 'a';
	// Output a char
	cout << ch << endl;

	cout << "Day: " << Day << endl;

	// Horizontal table
	cout << "aaaaaaaaaa\thelloworld" << endl;
	cout << "aaaaaa\thelloworld" << endl;

	system("pause");

	return 0;
}