//#include <iostream>
//using namespace std;
//
//class Person 
//{
//public:
//	Person(int age)
//	{
//		// "this" pointer points to the object that contains the member function that's called
//		this->age = age;
//	}
//
//	// return the reference of *this
//	Person& addAge(const Person& p)
//	{
//		this->age += p.age;
//
//		return *this;
//	}
//
//	Person addAge1(const Person& p)
//	{
//		this->age += p.age;
//
//		return *this;
//	}
//
//	int age;
//};
//
//void test01()
//{
//	Person p(18);
//	cout << p.age << endl;
//}
//
//void test02()
//{
//	Person p1(18);
//	Person p2(18);
//
//	cout << (int)&p2.addAge(p1) << endl;
//	cout << (int)&p2 << endl;
//	p2.addAge1(p1);
////	cout << (int)&p2.addAge1(p1) << endl;
//
//
//	cout << sizeof(p2)<< endl;
//}
//
//int main()
//{
//	test02();
//
//	//int a = 10;
//	//int& b = a;
//
//	//cout << (int)&a << endl;
//	//cout << (int)&b << endl;
//	return 0;
//}