#include <iostream>
using namespace std;


// constant reference is equivalent to "const int* const p"
void test03(const int& a)
{
	//a += 100;
	cout << a << endl;
}

int main3()
{
	int a = 100;

	test03(a);

	return 0;
}