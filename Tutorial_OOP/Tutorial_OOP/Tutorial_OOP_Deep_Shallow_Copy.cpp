#include<iostream>
using std::cout;
using std::endl;
using std::string;

class Person4
{
public:
	Person4()
	{
		cout << "Constructor without variable" << endl;
	}

	Person4(int age, int height)
	{
		m_Age = age;
		m_Height = new int(height);
		cout << "Constructor with variable" << endl;
	}

	Person4(const Person4& p)
	{
		m_Age = p.m_Age;
		m_Height = new int(*p.m_Height);
	}

	~Person4()
	{
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Destructor" << endl;
	}

	int getAge()
	{
		return m_Age;
	}

	int m_Age;
	int* m_Height; // Assign a height from Heap

};

void test001()
{
	/*Person4 p1(24, 182);
	cout << (int)&p1.m_Age << endl;

	Person4 p2(p1);
	cout << (int)&p2.m_Age << endl;*/

	Person4 p3;
}

int main7()
{
	test001();

	system("pause");

	return 0;
}