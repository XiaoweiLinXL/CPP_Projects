//#include <iostream>
//using namespace std;
//
//template<typename T>
//class Base
//{
//public:
//	T m;
//};
//
//// If the base class is a class template, must specify the template parameter of the base class during inheritance
//class DerivedClass: public Base<int>
//{
//
//};
//
//void test01()
//{
//	DerivedClass s1;
//}
//
//// If want to have flexibility about the base class, the derived class has to be a template
//template<class T1, class T2>
//class DerivedClass2 : public Base<T2>
//{
//public:
//	T1 obj;
//
//	void func()
//	{
//		cout << "T1: " << typeid(T1).name() << endl;
//		cout << "T2: " << typeid(T2).name() << endl;
//	}
//};
//
//void test02()
//{
//	DerivedClass2<int, char> D2;
//	D2.func();
//}
//
//int main()
//{
//	test02();
//
//	return 0;
//}