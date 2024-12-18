//#include <iostream>
//
//class Person
//{
//public:
//	int m_age;
//	mutable int m_age_mutable;
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
//
//	// Add a const after the function declaration, the this pointer becomes a const pointer
//	// What it points to cannot be modified.
//	void showPersonAge()
//	{
//		if (this == NULL)
//		{
//			return;
//		}
//
//		this->m_age += 100;
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
//	Person* p = new Person(10);
//	std::cout << (int)&(*p) << std::endl;
//
//	Person p1(10);
//	std::cout << (int)&p1 << std::endl;
//
//	// const object can only call the const function
//	// const function can only modify mutable member variable
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}
