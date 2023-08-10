#include <iostream>

void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	std::cout << (int)&a << std::endl;
	std::cout << (int)&b << std::endl;

	std::cout << a << std::endl;
	std::cout << b << std::endl;

}

void swap02(int* a, int* b) 
{
	std::cout << "Address: " << a << std::endl;
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main3() 
{
	int a = 10;
	int b = 20;

	std::cout << "Address: " << &a << std::endl;

	swap02(&a, &b);

	std::cout << (int)&a << std::endl;
	std::cout << (int)&b << std::endl;

	std::cout << a << std::endl;
	std::cout << b << std::endl;

	system("pause");

	return 0;
}