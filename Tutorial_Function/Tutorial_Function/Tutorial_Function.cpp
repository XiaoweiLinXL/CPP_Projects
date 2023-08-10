#include <iostream>
#include "Tutorial_Swap.h"

int main()
{
	int a = 10;
	int b = 20;

	std::cout << "Num1: " << a << std::endl;
	std::cout << "Num2: " << b << std::endl;

	swap(&a, &b);

	std::cout << "Num1: " << a << std::endl;
	std::cout << "Num2: " << b << std::endl;

	system("pause");

	return 0;
}