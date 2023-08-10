#include <iostream>
using namespace std;

//int main() 
//{
//	
//	int score = 0;
//	cout << "input a score: ";
//	cin >> score;
//
//	cout << "the score is " << score << endl;
//
//	if (score >= 600) 
//	{
//		if (score > 700)
//		{
//			cout << "peking university" << endl;
//		}
//		else if (score > 650)
//		{
//			cout << "tsinghua university" << endl;
//		}
//		else
//		{
//			cout << "renmin university of china" << endl;
//		}
//		cout << "excellent!" << endl;
//	}
//	else if (score >= 500)
//	{
//		cout << "good job!" << endl;
//	}
//	else
//	{
//		cout << "i am sorry..." << endl;
//	}
//
//	system("pause");
//
//	return 0;
//}

int main1()
{
	int a = 0;
	int b = 0;
	int c = 0;

	cout << "input weight a: ";
	cin >> a;
	cout << "input weight b: ";
	cin >> b;
	cout << "inout weight c: ";
	cin >> c;

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c: " << c << endl;

	if (a > b && a > c)
	{
		cout << "a is the heaviest" << endl;
	}
	else if (b > a && b > c)
	{
		cout << "b is the heaviest" << endl;
	}
	else if (c > a && c > b)
	{
		cout << "c is the heaviest" << endl;
	}
	else
	{
		cout << "equal weights happens" << endl;
	}

	system("pause");

	return 0;
}