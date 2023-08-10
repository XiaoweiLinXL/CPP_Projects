#include <iostream>
using namespace std;

int main1()
{
	int arr[3][3] = { {100, 100, 100}, {90, 50, 100}, {60, 70, 80} };

	string names[3] = { "Alex", "Bob", "Charlie" };

	/*for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 1; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}*/

	for (int i = 0; i <= 2; i++)
	{
		int sum = 0;
		for (int j = 0; j <= 2; j++)
		{
			sum += arr[i][j];
		}
		cout << "The score of " << names[i] << " is: " << sum << endl;
	}

	system("pause");

	return 0;
}