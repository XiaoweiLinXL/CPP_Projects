//#include <iostream>
//
//class BaseClass
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class DerivedClass1 :public BaseClass
//{
//public:
//	void func()
//	{
//		m_A = 10;
//		m_B = 10; 
//	}
//};
//
//class DerivedClass2 :protected BaseClass
//{
//public:
//	void func()
//	{
//		m_A = 10;
//		m_B = 10;
//	}
//};
//
//class DerivedClass3 :private BaseClass
//{
//public:
//	void func()
//	{
//		m_A = 10;
//		m_B = 10;
//	}
//};
//
//int main()
//{
//	DerivedClass1 dc1;
//	
//	DerivedClass2 dc2;
//
//	DerivedClass3 dc3;
//}