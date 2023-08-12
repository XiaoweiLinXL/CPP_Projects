#include <iostream>
using namespace std;

int main()
{
	int scores[3][3] =
	{
		{100, 100, 100},
		{90, 50, 100},
		{60, 70, 80}
	};

	for (int row = 0; row < 3; row++)
	{
		int sum = 0;
		for (int col = 0; col < 3; col++)
		{
			sum += scores[row][col];
		}
		cout << "The " << row << " student's total score is: " << sum << endl;
	}

	return 0;
}