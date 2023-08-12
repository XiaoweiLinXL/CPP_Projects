#include <iostream>
using namespace std;

int main1()
{
	double arr[] = { 1,2,3,4,5,6,7,8,9,0 };

	double* p = arr;
	cout << (int)p << endl;
	p++;
	cout << (int)p << endl;
	cout << *p << endl;

	return 0;
}