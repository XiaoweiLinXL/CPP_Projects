#include<iostream>
using std::cout;
using std::endl;
using std::string;

class Person
{
public:
	Person()
	{

	}

	Person(int a)
	{
		m_A = a;
	}

	static int m_A;

	int m_B;

	static void func()
	{
		m_A = 0;
		cout << "Call static void func" << endl;
	}
};

int Person::m_A = 100;

void test000001()
{
	Person p;
	//p.func();
	Person::func();
}

int main10()
{
	/*Person p1;

	Person p2;

	cout << (int)&p1.m_A << endl;
	cout << (int)&p2.m_A << endl;
	cout << (int)&Person::m_A << endl;*/

	test000001();

	system("pause");

	return 0;
}