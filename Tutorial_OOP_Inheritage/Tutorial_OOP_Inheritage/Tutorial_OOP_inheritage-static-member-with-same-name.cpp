//#include <iostream>
//
//class Base
//{
//public:
//	static int m_A;
//
//	static void func()
//	{
//		std::cout << "Base func" << std::endl;
//	}
//
//	// Will be hidden if the derived class has a function with the same name
//	// Should use namespace to access it
//	void func(int a)
//	{
//		std::cout << "Base func int a" << std::endl;
//	}
//
//private:
//
//};
//
//int Base::m_A = 200;
//
//class DerivedClass : public Base
//{
//public:
//
//	static int m_A;
//
//	static void func()
//	{
//		std::cout << "Derived class func" << std::endl;
//	}
//
//private:
//
//};
//
//int DerivedClass::m_A = 100;
//
//int main()
//{
//	DerivedClass dc;
//
//	std::cout << dc.m_A << std::endl;
//	std::cout << dc.Base::m_A << std::endl;
//
//	dc.func();
//	dc.Base::func();
//
//	return 0;
//}