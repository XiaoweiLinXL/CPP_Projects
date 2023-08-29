//#include <iostream>
//using namespace std;
//
//
//class Person
//{
//public:
//	void showPerson() const
//	{
//		// this pointer is defined for every function by default like "Person * const this = object;"
//		//this->m_Age = 100; // const Person * const this
//		this->m_Birth = 1997;
//	}
//
//	int m_Age;
//	mutable int m_Birth;
//};
//
//void test02()
//{
//	const Person p; // const object can not change member variable unless it's a mutable and it can only call const member func
//	p.m_Birth = 100;
//
//}
//
//int main()
//{
//
//
//	return 0;
//}