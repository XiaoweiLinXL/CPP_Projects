#include "func_declaration.h"

int main()
{
	int arr[] = { 2,3,7,1,5,4,0,9,12,53 };
	int len = sizeof(arr) / sizeof(arr[0]);
	
	bubble_sort(arr, len);

	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}