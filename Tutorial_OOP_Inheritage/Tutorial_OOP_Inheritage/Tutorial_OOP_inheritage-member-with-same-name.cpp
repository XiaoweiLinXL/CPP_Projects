//#include <iostream>
//
//class Base
//{
//public:
//	Base();
//	~Base();
//
//	int m_A;
//
//	void func()
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
//Base::Base()
//{
//	m_A = 100;
//	std::cout << "Base constructor" << std::endl;
//}
//
//Base::~Base()
//{
//	std::cout << "Base destructor" << std::endl;
//}
//
//class DerivedClass: public Base
//{
//public:
//	DerivedClass();
//	~DerivedClass();
//
//	int m_A;
//
//	void func()
//	{
//		std::cout << "Derived class func" << std::endl;
//	}
//
//private:
//
//};
//
//DerivedClass::DerivedClass()
//{
//	m_A = 200;
//	std::cout << "Child constructor" << std::endl;
//}
//
//DerivedClass::~DerivedClass()
//{
//	std::cout << "Child destructor" << std::endl;
//}
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