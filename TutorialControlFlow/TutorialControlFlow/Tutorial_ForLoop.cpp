#include <iostream>
using namespace std;

//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cout << j << "*" << i << "=" << i * j << "\t";
//		}
//		cout << endl;
//	}
//		
//
//	system("pause");
//
//	return 0;
//}

int main()
{
	int a = 0;
	cout << "Input: " << endl;
	cin >> a;

	if (a == 0) 
	{
		goto FLAG1;
	}
	else if (a == 1)
	{
		goto FLAG2;
	}
	else
	{
		goto FLAG3;
	}

FLAG1:
	cout << "000" << endl;

FLAG2:
	cout << "111" << endl; 

FLAG3:
	cout << "ELSE" << endl;



	
	
}