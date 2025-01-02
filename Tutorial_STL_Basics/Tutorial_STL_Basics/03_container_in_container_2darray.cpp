#include <iostream>
using namespace std;
#include <vector>

void test01()
{
	vector<vector<int>> v;

	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;

	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
	}

	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		for (vector<int>::iterator it2 = (*it).begin(); it2 != (*it).end(); it2++)
		{
			cout << (*it2) << " ";
		}
		cout << endl;
	}
}

void test02()
{
	vector<int> v1 = { 1,2,3,4,5 };
	v1.push_back(6);
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << *(it) << endl;
	}
}

int main()
{
	test02();

	return 0;
}