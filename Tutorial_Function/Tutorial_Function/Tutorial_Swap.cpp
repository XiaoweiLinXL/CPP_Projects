#include "Tutorial_Swap.h"

void swap(int* a, int* b)
{
	int c = *a;
	*a = *b;
	*b = c;
	std::cout << "Swapped" << std::endl;
}