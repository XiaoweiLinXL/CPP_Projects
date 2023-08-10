#include <iostream>
using namespace std;

int main4() 
{

	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;

	cout << "Take a guess: ";
	int guess = 0;
	cin >> guess;

	while (guess != num) 
	{
		if (guess > num)
		{
			cout << "Too big" << endl;
		}
		else
		{
			cout << "Too small" << endl;
		}
		cout << "Take a guess: ";
		cin >> guess;
	}

	cout << "Well done!" << endl;



	system("pause");

	return 0;
}