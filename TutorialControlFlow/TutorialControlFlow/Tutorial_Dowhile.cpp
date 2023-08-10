#include <iostream>
using namespace std;
#include <cmath>

int main5()
{
	int i = 100;
	int count = 0;

	while (i <= 999)
	{
		//cout << i << endl;
		int ones = i % 10;
		int tens = (i / 10) % 10;
		int hund = i / 100;
		/*cout << "Ones: " << ones << endl;
		cout << "Tens: " << tens << endl;
		cout << "Hund: " << hund << endl;*/

		//cout << (ones*ones*ones + tens*tens*tens* + hund*hund*hund) << endl;

		if ((pow(ones, 3) + pow(tens, 3) + pow(hund, 3)) == i)
		{
			cout << "Daffodils number: " << i << endl;
			count++;
		}
		i++;
	}

	cout << "# of Daffodils number: " << count << endl;

	system("pause");

	return 0;
}