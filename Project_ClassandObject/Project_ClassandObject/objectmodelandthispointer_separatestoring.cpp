//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	int m_A; // non static member variable belongs to an object
//
//	static int m_B; // static member variable doesn't belong to an object, because every object shares one variable
//
//	void func1() {} // non static func doesn't belong to an object
//
//	static void func2() {} // static func doesn't belong to an object
//};
//int Person::m_B = 200;
//
//void test01()
//{
//	// Every empty object has a size of 1, to distinguish with the other
//	Person p;
//
//	cout << sizeof(p) << endl;
//}
//
//void test02()
//{
//	// Every empty object has a size of 1, to distinguish with the other
//	Person p;
//
//	cout << sizeof(p) << endl;
//}
//
//int main()
//{
//	test02();
//
//	return 0;
//}