//#include <iostream>
//
//class Person
//{
//public:
//	int m_Age;
//
//	Person(int age) :m_Age(age)
//	{
//
//	}
//
//	// Deep copy, return itself so it can be used like a = b = c
//	bool operator==(Person& p)
//	{
//		if (this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//};
//
//int main()
//{
//	Person p1(20);
//	
//	Person p2(20);
//
//	std::cout << (p1 == p2) << std::endl;
//
//}