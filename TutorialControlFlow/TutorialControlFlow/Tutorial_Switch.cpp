#include <iostream>
using namespace std;

int main3()
{
	cout << "Input a score: ";
	int score = 0;
	cin >> score;
	cout << "The score is: " << score << endl;

	switch (score)
	{
	case 10: 
	case 9: cout << "GOAT" << endl; break;
	case 8:
	case 7:cout << "GOOD" << endl; break;
	case 6:
	case 5:cout << "SO SO" << endl; break;

	default:cout << "SUCKS" << endl;
		break;
	}

	system("pause");

	return 0;
}