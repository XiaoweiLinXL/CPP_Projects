#include "func_declaration.h"

void swap(int* a, int* b)
{
	cout << (int)a << endl;
	cout << (int)b << endl;
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(int* arr, int len) {
	for (int time = len - 1; time > 0; time--)
	{
		for (int index = 0; index < time; index++)
		{
			if (arr[index] > arr[index + 1])
			{
				int temp = arr[index];
				arr[index] = arr[index + 1];
				arr[index + 1] = temp;
			}
		}
	}
}