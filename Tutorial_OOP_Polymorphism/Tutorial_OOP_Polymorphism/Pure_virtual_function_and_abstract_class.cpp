//#include <iostream>
//
//
//// When there is a pure virtual function in the class, the class becomes a abstract class
//// 1. An abstract class cannot be instantiated
//// 2. The derived class must rewrite the virtual function, otherwise it becomes 
////    an abstract class.
//class Base
//{
//public:
//	virtual void func() = 0;
//};
//
//class Derivedclass :public Base
//{
//public:
//	void func()
//	{
//		std::cout << "Derived class function" << std::endl;
//	}
//};
//
//void test01()
//{
//	// An abstract class cannot be instantiated
//	/*Base b;
//	new Base;*/
//
//	// The derived class has to rewrite the pure virtual function
//	//Derivedclass dc;
//
//	Base* derivedclass = new Derivedclass();
//	derivedclass->func();
//}
//
//int main()
//{
//	test01();
//	
//	return 0;
//}