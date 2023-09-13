//#include <iostream>
//using namespace std;
//
//class Base
//{
//public:
//	int m_A;
//
//	Base()
//	{
//		m_A = 100;
//	}
//
//	void func()
//	{
//		cout << "Base func" << endl;
//	}
//};
//
//class Son : public Base
//{
//public:
//	int m_A;
//
//	Son()
//	{
//		cout << m_A << endl; // this will access m_A in the son class
//		cout << Base::m_A << endl; // this will access m_A in the base class
//		m_A = 200;
//	}
//
//	void func()
//	{
//		cout << "Son func" << endl;
//	}
//};
//
//int main()
//{
//	//Son s;
//	//cout << s.m_A << endl;
//	//cout << s.Base::m_A << endl;
//
//	Son s;
//	s.Base::func();
//
//	return 0;
//}