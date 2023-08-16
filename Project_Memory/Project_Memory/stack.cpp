#include <iostream>
using namespace std;

static int s_g_a = 10;
int g_a = 10;

int func()
{
	int a = 10;
	cout << (int)&a << endl;
	return a;
}

int main1()
{
	int a = 0;
	int b = 10;
	int c = 100;
	static int s_l_a = 10;

	cout << (int)&a << " " << (int)&b << " " << (int)&c << endl;

	cout << (int)&s_g_a << endl;
	cout << (int)&s_l_a << endl;
	cout << (int)&g_a << endl;

	int p = func();

	cout << (int)&p << endl;

	cout << p << endl;
	cout << p << endl;

	return 0;
}