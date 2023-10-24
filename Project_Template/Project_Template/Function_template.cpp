#include <iostream>

void swapInt(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

template<typename T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main()
{

	int a = 10;
	int b = 20;

	mySwap(a, b);
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	double c = 1.0;
	double d = 6.0;
	mySwap<double>(c, d);
	std::cout << c << std::endl;
	std::cout << d << std::endl;


	return 0;
}