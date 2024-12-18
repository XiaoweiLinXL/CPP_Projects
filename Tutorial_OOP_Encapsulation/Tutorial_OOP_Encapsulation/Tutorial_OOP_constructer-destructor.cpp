//#include<iostream>
//using std::cout;
//using std::endl;
//using std::string;
//
//class Person2
//{
//public:
//	// Constructor
//	Person2()
//	{
//		cout << "Constructor without variable" << endl;
//	}
//
//	Person2(int a)
//	{
//		age = a;
//		cout << "Constructor with variable" << endl;
//	}
//
//	// Copy constructor, parameter should be a constant reference
//	Person2(const Person2& p)
//	{
//		age = p.age;
//		cout << "Copy constructor" << endl;
//	}
//
//	~Person2()
//	{
//		cout << "Destructor" << endl;
//	}
//
//	int age;
//};
//
////void test()
////{
////	//Person1 p1;
////	///*cout << sizeof(p1) << endl;
////	//cout << (int)&p1 << endl;*/
////	//cout << p1.age << endl;
////
////	//Person1 p2(10); // Use the constructor with variables
////	///*cout << sizeof(p2) << endl;
////	//cout << (int)&p2 << endl;*/
////	//cout << p2.age << endl;
////
////	//Person1 p3(p2);
////	//cout << p3.age << endl;
////
////	//Person1 p1;
////	//Person1 p2 = Person1(10);
////	//Person1 p3 = Person1(p3);
////
////	// Person1(p3);
////
////}
//
//void test01()
//{
//	Person2 p1 = Person2(20); // created on stack, destroyed after the function is finished
//	Person2 p2 = Person2(p1);
//}
//
//void doWork(Person2 p)
//{
//
//}
//
//void test02()
//{
//	Person2 p;
//	doWork(p);
//}
//
//Person2 doWork2()
//{
//	Person2 p;
//	cout << (int)&p << endl;
//	return p;
//}
//
//void test03()
//{
//	Person2 p3 = doWork2();
//	cout << (int)&p3 << endl;
//}
//
//
//int main6()
//{
//	test03();
//
//	system("pause");
//
//	return 0;
//}