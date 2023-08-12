#include <iostream>

int main1()
{
	double arr[] = { 1.0f,2.0f,3.0f,4.0f,5.0f,6.0f,7.0f,8.0f,9.0f,10.0f };

	double* p = arr;

	/*for (int i = 0; i <= 9; i++)
	{
		std::cout << *p << std::endl;
		p++;
	}*/
	
	std::cout << sizeof(p) << std::endl;

	/*std::cout << (int)&p << std::endl;
	std::cout << (int)&*p << std::endl;
	std::cout << (int)*p << std::endl;
	
	std::cout << (int)&++p << std::endl;
	std::cout << (int)&*p << std::endl;
	std::cout << (int)*p << std::endl;*/

	system("pause");

	return 0;
}