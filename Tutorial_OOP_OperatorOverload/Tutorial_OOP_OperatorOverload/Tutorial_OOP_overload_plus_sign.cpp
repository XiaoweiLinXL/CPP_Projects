//#include <iostream>
//
//class Person
//{
//public:
//	int m_A;
//	int m_B;
//
//	// member function for plus sign overload
//	Person operator+(Person& p)
//	{
//		Person temp;
//		temp.m_A = this->m_A + p.m_A;
//		temp.m_B = this->m_B + p.m_B;
//		return temp;
//	}
//
//	// Plus sign overload and also be function overloaded
//	Person operator+(int num)
//	{
//		Person temp;
//		temp.m_A = this->m_A + num;
//		temp.m_B = this->m_B + num;
//		return temp;
//	}
//};
//
////// Can also use global function to overload plus sign
////Person operator+(Person& p1, Person& p2)
////{
////	Person temp;
////	temp.m_A = p1.m_A + p2.m_A;
////	temp.m_B = p1.m_B + p2.m_B;
////	return temp;
////}
//
//int main()
//{
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//	p1 = p1 + p1 + p1;
//
//	std::cout << p1.m_A << std::endl;
//	std::cout << p1.m_B << std::endl;
//
//}