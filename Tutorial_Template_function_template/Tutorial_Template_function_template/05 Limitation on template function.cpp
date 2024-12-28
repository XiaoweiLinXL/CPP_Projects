#include <iostream>
using namespace std;

class Person
{
public:
	
	string m_Name;
	int m_Age;

	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
};

template<typename T>
bool myCompare(T a, T b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool myCompare(Person p1, Person p2)
{
	if (p1.m_Age == p2.m_Age && p1.m_Name == p2.m_Name)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void test01()
{
	int m[] = { 1,2,3,4,5,6 };
	int n[] = { 2,3,4,5,6,7 };
	cout << *(m+1) << endl;
}

void test02()
{
	int a = 10;
	int b = 20;

	cout << myCompare(a, b) << endl;
}

void test03()
{
	Person p1("Xiaowei", 18);
	Person p2("Xiaowei", 18);

	cout << myCompare(p1, p2) << endl;
}

int main()
{
	test03();

	return 0;
}