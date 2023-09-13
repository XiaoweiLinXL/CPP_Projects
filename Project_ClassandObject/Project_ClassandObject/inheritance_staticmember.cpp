//#include <iostream>
//using namespace std;
//
//class Base
//{
//public:
//	static int m_A;
//
//	static void func()
//	{
//		cout << "Base static func" << endl;
//	}
//
//	static void func(int a)
//	{
//		cout << "Base static func(int a)" << endl;
//	}
//};
//
//int Base::m_A = 100;
//
//class Son : public Base
//{
//public:
//	static int m_A;
//
//	static void func()
//	{
//		cout << "Son static func" << endl;
//	}
//};
//
//int Son::m_A = 300;
//
//int main()
//{
//	// access the variable through an object
//	Son s;
//	cout << s.m_A << endl;
//	cout << s.Base::m_A << endl;
//
//	// access the variable through the class, because the variable belongs to all objects
//	cout << Base::m_A << endl;
//	cout << Son::Base::m_A << endl;
//
//	// func with same name in the son class will cover all the funcs with same name in the base class
//	s.func();
//	s.Base::func(100);
//
//	// you can also access the static func using the class
//	Son::Base::func(200);
//
//	return 0;
//}