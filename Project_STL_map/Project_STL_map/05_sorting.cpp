#include <iostream>
#include <map>
using namespace std;

class Person
{
public:
	int m_Age;
	string m_Name;

	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
};

class MyCompare
{
public:
	bool operator()(string v1, string v2) const
	{
		return v1 > v2;
	}
};

class MyCompareCustomized
{
public:
	bool operator()(Person v1, Person v2) const
	{
		return v1.m_Age > v2.m_Age;
	}
};

void test01()
{
	map<string, int, MyCompare> mp1;

	mp1.insert({ "a", 1 });
	mp1.insert({ "c", 3 });
	mp1.insert({ "b", 2 });
	mp1.insert({ "d", 4 });

	for (auto it = mp1.begin(); it != mp1.end(); it++)
	{
		cout << it->first << " " << it->second << endl;
	}
}

void test02()
{
	map<Person, int, MyCompareCustomized> mp2;

	Person p1("Xiaowei", 18);
	Person p2("Xiaowei", 28);
	Person p3("Xiaowei", 27);
	Person p4("Xiaowei", 8);
	Person p5("Xiaowei", 38);

	mp2.insert({ p1, 1 });
	mp2.insert({ p2, 2 });
	mp2.insert({ p3, 3 });
	mp2.insert({ p4, 4 });
	mp2.insert({ p5, 5 });

	for (auto it = mp2.begin(); it != mp2.end(); it++)
	{
		cout << it->first.m_Name << " " << it->first.m_Age << " " << it->second << endl;
	}
}

int main()
{
	test02();

	return 0;
}