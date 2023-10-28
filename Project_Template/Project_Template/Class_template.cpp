#include <iostream>


template<typename NameType, typename AgeType = int>
class Person
{
public:

	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		std::cout << "Name: " << this->m_Name << " Age: " << this->m_Age << std::endl;
	}

	NameType m_Name;
	AgeType m_Age;
};

void test01()
{
	Person<std::string, int> p1("Tom", 999);

	p1.showPerson();
}

void test02()
{
	Person<std::string> p2("Jerry", 1000);

	p2.showPerson();
}

int main()
{
	test01();

	test02();

	return 0;
}