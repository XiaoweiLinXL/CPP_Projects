//#include <iostream>
//using namespace std;
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
//	int m_A;
//
//	Base2()
//	{
//		m_A = 200;
//	}
//};
//
//class Son :public Base1, public Base2
//{
//public:
//	int m_C;
//
//	Son()
//	{
//		m_C = 300;
//	}
//};
//
//void test01()
//{
//	Son s;
//
//	cout << sizeof(Son) << endl;
//
//	cout << s.Base2::m_A << endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}