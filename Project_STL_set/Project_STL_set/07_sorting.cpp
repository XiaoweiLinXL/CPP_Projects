#include <iostream>
#include <set>
using namespace std;

class MyCompare
{
public:
	bool operator()(int v1, int v2) const // need to have a const to ensure this function
										  // does not change the object
	{
		return v1 > v2;
	}
};

class Person
{
public:
	Person(string name, int age): m_Name(name), m_Age(age)
	{
	}


	string m_Name;
	int m_Age;
};

template<class T>
class MyCompareCustomized
{
public:
	bool operator()(typename T v1, T v2) const
	{
		return v1.m_Age > v2.m_Age;
	}
};

void test01()
{
	set<int> s1;
	s1.insert(3);
	s1.insert(2);
	s1.insert(1);
	s1.insert(5);
	s1.insert(4);

	for (auto it = s1.begin(); it != s1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	set<int, MyCompare> s2;
	s2.insert(3);
	s2.insert(2);
	s2.insert(1);
	s2.insert(5);
	s2.insert(4);

	for (auto it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test02()
{
	set<Person, MyCompareCustomized<Person>> s1; // If the functor is a template class
												 // need to specify the template argument

	Person p1("Xiaowei", 28);
	Person p2("Xiaowei", 21);
	Person p3("Xiaowei", 29);
	Person p4("Xiaowei", 2);
	Person p5("Xiaowei", 32);

	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p3);
	s1.insert(p4);
	s1.insert(p5);

	for (auto it = s1.begin(); it != s1.end(); it++)
	{
		cout << (*it).m_Name << " " << (*it).m_Age << endl;
	}

}

int main()
{
	test02();

	return 0;
}