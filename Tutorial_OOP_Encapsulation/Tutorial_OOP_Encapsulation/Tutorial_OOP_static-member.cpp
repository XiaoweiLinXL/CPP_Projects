//#include<iostream>
//using std::cout;
//using std::endl;
//using std::string;
//
//class Person
//{
//public:
//	Person()
//	{
//
//	}
//
//	Person(int a)
//	{
//		m_A = a;
//	}
//
//	// All objects share the same data
//	// Can be accessed through an object or the class itself
//	// Can also be asigned permission
//	static int m_A;
//
//	int m_B;
//
//
//	// All objects share the same function
//	// Can only access the static member variable
//	static void func()
//	{
//		m_A = 0;
//		cout << "Call static void func" << endl;
//	}
//};
//
//int Person::m_A = 100;
//
//void test000001()
//{
//	Person p;
//	//p.func();
//	Person::func();
//}
//
//int main()
//{
//	/*Person p1;
//
//	Person p2;
//
//	cout << (int)&p1.m_A << endl;
//	cout << (int)&p2.m_A << endl;
//	cout << (int)&Person::m_A << endl;*/
//
//	test000001();
//
//	system("pause");
//
//	return 0;
//}