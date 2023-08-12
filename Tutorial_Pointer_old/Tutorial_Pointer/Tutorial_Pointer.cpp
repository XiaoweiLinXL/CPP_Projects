#include <iostream>
using namespace std;

int main()
{
	float a = 10;
	float b = 20;

	float* p = &a;

	std::cout << (int)p << std::endl;

	p++;

	std::cout << (int)p << std::endl;

	std::cout << sizeof(string) << std::endl;

	system("pause");

	return 0;
}