#include <iostream>
using namespace std;

class Person
{
public: 
	static int m_A;
};

int Person::m_A = 200;

void test01()
{
	Person p1;
	p1.m_A = 100;

	cout << p1.m_A << endl;

	Person p2;
	p2.m_A = 200;
	cout << p2.m_A << endl;
	cout << p1.m_A << endl;
}

void test02()
{
	// We can either access the static variable by an object or the class, because it's common in all objects
	Person p;
	cout << p.m_A << endl;
	cout << Person::m_A << endl;
}

int main()
{
	test01();

	return 0;
}