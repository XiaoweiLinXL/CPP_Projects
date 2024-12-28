//#include <iostream>
//using namespace std;
//
//class Person1
//{
//public:
//	void showPerson1()
//	{
//		cout << "Person1" << endl;
//	}
//};
//
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		cout << "Person2" << endl;
//	}
//};
//
//// A class template's member functions are created when they are called.
//// In this example. the obj is determined only when you instantiate an instance. When you call the function, it will look for the function in obj.
//template<typename T>
//class MyClass
//{
//public:
//	T obj;
//
//	void func1()
//	{
//		obj.showPerson1();
//	}
//
//	void func2()
//	{
//		obj.showPerson2();
//	}
//};
//
//void test01()
//{
//	MyClass<Person1> m;
//	m.func1();
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}