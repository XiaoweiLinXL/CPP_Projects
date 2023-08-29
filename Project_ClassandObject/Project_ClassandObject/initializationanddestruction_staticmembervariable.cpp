//#include <iostream>
//using namespace std;
//
//int a = 200;
//
//class Person
//{
//public: 
//	static int m_A;
//
//	// Non static variable cannot be accessed by a static member function, because the static function has only one sample,
//	// it doesn't know which variable it's accessing. But a non-static function is associated with the object, so it can
//	// distinguish different non-static variable.
//	static void func()
//	{
//		cout << "Print in static b" << m_A << endl;
//		// cout << "Print in static b" << m_C << endl; // Non static variable cannot be accessed by a static member function
//		cout << "Calling static void func" << endl;
//	}
//
//private:
//	static int m_B;
//	int m_C; // 
//};
//
//int Person::m_A = 200;
//int Person::m_B = 777;
//
//void test01()
//{
//	Person p1;
//	p1.m_A = 100;
//
//	cout << p1.m_A << endl;
//
//	Person p2;
//	p2.m_A = 200;
//	cout << p2.m_A << endl;
//	cout << p1.m_A << endl;
//
//	cout << (int)&p1.m_A << endl;
//	cout << (int)&p2.m_A << endl;
//	cout << (int)&a << endl;
//
//	p1.func();
//}
//
//void test02()
//{
//	// We can either access the static variable by an object or the class, because it's common in all objects
//	Person p;
//	cout << p.m_A << endl;
//	cout << Person::m_A << endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}