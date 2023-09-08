//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		m_Age = new int(age);
//	}
//
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//
//	// the default assignment is shallow copy
//	// use deep copy instead, open a place on the heap to store the variable
//	Person& operator=(Person& p)
//	{
//		// first delete the variable on the heap
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		this->m_Age = new int(*p.m_Age);
//
//		return *this;
//	}
//
//	int* m_Age;
//};
//
//void test01()
//{
//	Person p1(18);
//
//	Person p2(20);
//
//	Person p3(30);
//
//	p3 = p2 = p1;
//
//	cout << "Age: " << *p1.m_Age << endl;
//	cout << "Age: " << *p2.m_Age << endl;
//	cout << "Age: " << *p3.m_Age << endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}