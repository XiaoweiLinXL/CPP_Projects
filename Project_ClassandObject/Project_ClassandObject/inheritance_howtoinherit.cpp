//#include <iostream>
//using namespace std;
//  
//class Base1
//{
//public: 
//	int m_A;
//
//	Base1()
//	{
//		cout << "Base Constructor" << endl;
//	}
//
//	~Base1()
//	{
//		cout << "Base Destructor" << endl;
//	}
//
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son1 : public Base1
//{
//public:
//	int m_D;
//
//	Son1()
//	{
//		cout << "Son constructor" << endl;
//	}
//
//	~Son1()
//	{
//		cout << "Son destructor" << endl;
//	}
//
//	void func()
//	{
//		m_A = 10;
//		m_B = 20;
//		//m_C = 30;
//	}
//};
//
//class Son2 : protected Base1
//{
//public:
//	void func()
//	{
//		m_A = 100; // public become protected
//		m_B = 100; // protected is still protected
//		//m_C = 100; // private variable is not accessible
//	}
//};
//
//class Son3 : private Base1
//{
//public:
//	void func()
//	{
//		m_A = 100; // public becomes private
//		m_B = 100; // protected becomes private
//		//m_C = 100; // private variable is not accessible
//	}
//};
//
//void test()
//{
//	Son1 s1;
//	s1.m_A = 1000;
//
//	//Son2 s2;
//	//s2.m_A = 100; // public becomes protected, inaccessible outside the class
//
//	//cout << sizeof(Son1) << endl;
//}
//
//int main()
//{
//	test();
//
//	return 0;
//}