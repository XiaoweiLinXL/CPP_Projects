//#include <iostream>
//
//// Not recommended
//
//class Base1
//{
//public:
//	int m_A;
//
//	Base1()
//	{
//		m_A = 100;
//	}
//};
//
//class Base2
//{
//public:
//	int m_B;
//
//	Base2(int a)
//	{
//		m_B = a;
//	}
//};
//
//class DerivedClass : public Base1, public Base2
//{
//public:
//	int m_C;
//	int m_D;
//
//	DerivedClass(int a): Base1(), Base2(a)
//	{
//		m_C = 300;
//		m_D = 400;
//	}
//};
//
//int main()
//{
//	DerivedClass dc(100);
//	std::cout << dc.m_B << std::endl;
//	return 0;
//}