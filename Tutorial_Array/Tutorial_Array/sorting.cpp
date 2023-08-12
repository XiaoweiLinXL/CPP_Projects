#include <iostream>
using namespace std;

int main2()
{
	int arr[] = { 4,2,8,0,5,7,1,3,9 };

	int len = sizeof(arr) / sizeof(arr[0]);

	int times = len - 1;

	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}


	for (int time = times; time > 0; time--)
	{
		for (int i = 0; i < time; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}

	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
	

	return 0;
}