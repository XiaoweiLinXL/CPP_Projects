#include<iostream>
using std::cout;
using std::endl;
using std::string;

class Person3
{
public:
	Person3()
	{
		cout << "Constructor without variables" << endl;
	}

	Person3(int age)
	{
		cout << "Constructor with variables" << endl;
		m_Age = age;
	}

	Person3(const Person3& p)
	{
		cout << "Copy Constructor" << endl;
		m_Age = p.m_Age;
	}

	~Person3()
	{
		cout << "Distructor" << endl;
	}

	void getAge()
	{
		cout << "The age is: " << m_Age << endl;
	}

private:
	int m_Age;
};

void test1()
{
	Person3 p1(18);
	p1.getAge();

	Person3 p2(p1);
	p2.getAge();
}

void test2()
{
	Person3 p1(24);

	Person3 p2(p1);

	p2.getAge();
}

int main6()
{
	test2();

	system("pause");

	return 0;
}