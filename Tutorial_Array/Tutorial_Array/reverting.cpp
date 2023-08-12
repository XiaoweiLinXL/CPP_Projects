#include <iostream>
using namespace std;

int main1()
{
	int arr[] = { 1,2,3,4,500,6,7,8,9,10 };

	//cout << (int)arr << endl;
	//cout << (int)&arr[1] << endl;

	//int max = 0;

	int len = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}

	for (int i = 0; i < len/2; i++)
	{
		//if (arr[i] >= max)
		//{
		//	max = arr[i];
		//}
		int temp = arr[i];
		arr[i] = arr[len - 1 - i];
		arr[len - 1 - i] = temp;
	}
	
	//cout << "Max: " << max << endl;
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}