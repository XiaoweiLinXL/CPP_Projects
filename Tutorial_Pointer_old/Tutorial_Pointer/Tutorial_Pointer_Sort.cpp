#include <iostream>


// Sort using pointers only
void sort(int* p, int len)
{
	for (int i = len - 1; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			if (*p > *(p+1))
			{
				int temp = *p;
				*p = *(p + 1);
				*(p + 1) = temp;
			}
			p++;
		}
		p = p - i;
	}
}

void sort2(int* p, int len)
{
	for (int i = len - 1; i >= 1; i--)
	{
		for (int j = 0; j <= i - 1; j++)
		{
			if (p[j] > p[j + 1])
			{
				int temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}
}


int main4()
{
	int array[] = { 4,3,6,9,1,2,10,8,7,5 };

	int len = sizeof(array) / sizeof(array[0]);

	std::cout << "The series before sorting:" << std::endl;

	for (int i = 0; i <= len - 1; i++)
	{
		std::cout << array[i] << std::endl;
	}

	std::cout << std::endl;

	sort2(array, len);

	std::cout << std::endl;

	std::cout << "The series after sorting:" << std::endl;

	for (int i = 0; i <= len - 1; i++)
	{
		std::cout << array[i] << std::endl;
	}

	system("pause");

	return 0;
}