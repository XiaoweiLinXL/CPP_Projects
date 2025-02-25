#include <iostream>
#include <map>
using namespace std;

template<class T>
void printPairContainer(T& c)
{
	for (typename T::iterator it = c.begin(); it != c.end(); it++)
	{
		cout << "Key: " << (*it).first << " Value: " << (*it).second << endl;
	}
	cout << endl;
}

void test01()
{
	map<int, int> m1;

	m1.insert({ 1, 10 });
	m1.insert({ 2, 20 });
	m1.insert({ 3, 30 });
	m1.insert({ 4, 40 });
	m1.insert({ 5, 50 });

	printPairContainer(m1);
}

int main()
{
	test01();

	return 0;
}