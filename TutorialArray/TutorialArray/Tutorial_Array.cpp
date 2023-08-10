#include <iostream>
using namespace std;

int main()
{

	int array[9] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
	int* p = array;
	cout << *p << endl;
	cout << *(++p) << endl;

	/*for (int i = sizeof(array) / sizeof(array[0]) - 1; i >= 0; i--)
	{
		for (int j = 0; j <= i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}

	for (int k = 0; k <= sizeof(array) / sizeof(array[0]) - 1; k++)
	{
		cout << array[k] << endl;
	}*/


	//int inverse_array[sizeof(array) / sizeof(array[0])];

	//for (int i = 0; i <= sizeof(array)/sizeof(array[0]) - 1; i++)
	//{
	//	inverse_array[i] = array[4 - i];
	//}

	//for (int i = 0; i <= 4; i++)
	//{
	//	cout << array[i] << endl;
	//}

	//for (int i = 0; i <= 4; i++)
	//{
	//	cout << inverse_array[i] << endl;
	//}
	

	/*int array[5] = { 300,350,200,400,250 };
	int top = 0;

	for (int i = 0; i <= 4; i++) 
	{
		if (array[i] > top)
		{
			top = array[i];
		}
	}

	cout << top << endl;*/

	system("pause");

	return 0;
}