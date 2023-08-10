#include<iostream>
using std::cout;
using std::endl;
using std::string;

int g_a = 10;

int main1()
{
	int a = 10;
	cout << (int)&a << endl;

	cout << (int)&g_a << endl;

	static int s_a = 10;
	cout << (int)&s_a << endl;;

	const string s = "hello world";
	cout << (int)&s << endl;

	const int c_l_a = 10;
	cout << (int)&c_l_a << endl;

	system("pause");

	return 0;
}