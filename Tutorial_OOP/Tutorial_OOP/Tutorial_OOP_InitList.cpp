#include<iostream>
using std::cout;
using std::endl;
using std::string;

class Person6
{
public:
	

	Person6(): m_A(10), m_B(20), m_C(30)
	{
		cout << "Constructor without variables" << endl;
	}

	Person6(int a, int b, int c) : m_A(a), m_B(b), m_C(c)
	{
		cout << "Constructor with variables" << endl;
	}

	~Person6()
	{
		cout << "Destructor" << endl;
	}

	int m_A;
	int m_B;
	int m_C;
};

void test0001()
{
	Person6 p;
	cout << "A: " << p.m_A << endl;
	cout << "B: " << p.m_B << endl;
	cout << "C " << p.m_C << endl;

}

int main8()
{
	test0001();

	system("pause");

	return 0;
}