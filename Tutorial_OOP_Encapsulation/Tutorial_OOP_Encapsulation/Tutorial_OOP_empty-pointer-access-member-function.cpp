//#include <iostream>
//
//class Person
//{
//public:
//	int m_age;
//
//	Person(int age) : m_age(age)
//	{
//
//	}
//
//	void showClassName() 
//	{
//		std::cout << "Person class" << std::endl;
//	}
//
//	void showPersonAge()
//	{
//		if (this == NULL)
//		{
//			return;
//		}
//
//		std::cout << "Age: " << this->m_age << std::endl;
//	}
//
//	// If not return the reference, it will create a temp, not the origin object 
//	Person& PersonaddAge(Person& p)
//	{
//		this->m_age += p.m_age;
//		return *this;
//	}
//};
//
//void test01()
//{
//	// Null pointer can access the member function
//	// but not if the member function is accessing a member variable
//	Person* p = NULL;
//
//	p->showPersonAge();
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}
