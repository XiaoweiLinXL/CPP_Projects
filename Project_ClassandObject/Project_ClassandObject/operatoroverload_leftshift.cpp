//#include <iostream>
//using namespace std;
//
//class Person 
//{
//	friend ostream& operator<<(ostream& cout, Person& p); // global func as a friend
//
//public:
//	Person(int a, int b)
//	{
//		m_A = a;
//		m_B = b;
//	}
//
//private: 
//	int m_A;
//	int m_B;
//	
//	//// do not use member func to overload the << sign, use a global func
//	//void operator<<(int a)
//	//{
//	//	cout << this->m_B << endl;
//	//}
//};
//
//// when a program encounter cout<<class Person, it will enter this function because of the overload
//// otherwise it cannot understand what to do when cout << p happens
//// when only cout << "m_A: " happens, it will use the default operator
//ostream& operator<<(ostream& cout, Person& p)
//{
//	cout << "m_A: " << p.m_A << " m_B: " << p.m_B << endl;
//	return cout;
//}
//
//void test01()
//{
//	Person p(10, 10);
//
//	//p << 10;
//	operator<<(cout, p)<<endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}