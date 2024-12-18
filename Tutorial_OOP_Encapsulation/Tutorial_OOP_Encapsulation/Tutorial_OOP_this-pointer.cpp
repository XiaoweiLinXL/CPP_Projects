#include <iostream>

class Person
{
public:
	int m_age;

	Person(int age) : m_age(age)
	{
		
	}
  
  // The object itself can be returned using the this pointer
	// If not return the reference, it will create a temp, not the origin object 
	Person& PersonaddAge(Person& p)
	{
		this->m_age += p.m_age;
		return *this;
	}
};

void test01()
{
	Person p1(18);
	std::cout << p1.m_age << std::endl;
}

void test02() 
{
	Person p1(10);

	Person p2(10);

	p2.PersonaddAge(p1).PersonaddAge(p1).PersonaddAge(p1);

	std::cout << p2.m_age << std::endl;
}

int main()
{
	test02();

	return 0;
}