//#include <iostream>
//
//class Person
//{
//public:
//	int* m_Age;
//
//	Person(int age) :m_Age(new int(age))
//	{
//
//	}
//
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//
//	// Deep copy, return itself so it can be used like a = b = c
//	Person& operator=(Person& p)
//	{
//		// First delete the currrent pointer destination.
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		this->m_Age = new int(*p.m_Age);
//
//		return *this;
//	}
//};
//
//int main()
//{
//	Person p1(18);
//	std::cout << *(p1.m_Age) << std::endl;
//
//	Person p2(20);
//	std::cout << *(p2.m_Age) << std::endl;
//
//	Person p3(30);
//
//	p3 = p2 = p1;
//	std::cout << *(p1.m_Age) << std::endl;
//	std::cout << *(p2.m_Age) << std::endl;
//	std::cout << *(p3.m_Age) << std::endl;
//
//}