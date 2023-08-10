#include<iostream>
using std::cout;
using std::endl;
using std::string;

class Person5
{
private:
	string m_Name;
	int m_Age;
	string m_Partner;

public:
	void setName(string name)
	{
		m_Name = name;
	}

	string getName()
	{
		return m_Name;
	}

	void setAge(int age)
	{
		if (age < 0 || age>150)
		{
			cout << "The age is wrong!" << endl;
			return;
		}
		m_Age = age;
	}

	int getAge()
	{
		m_Age = 24;
		return m_Age;
	}

	void setPartner(string name)
	{
		m_Partner = name;
	}

};

int main2()
{
	/*Person p;

	p.setName("William");

	p.setPartner("Yilly");

	cout << p.getName() << endl;*/

	system("pause");

	return 0;
}