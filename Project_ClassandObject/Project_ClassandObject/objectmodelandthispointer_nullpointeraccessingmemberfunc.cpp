//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	void showClassName()
//	{
//		cout << "This is a Person class!" << endl;
//	}
//
//	void showPersonAge()
//	{
//		if (this == NULL)
//		{
//			return;
//		}
//		cout << "Age: " << m_Age << endl;
//	}
//
//	void showAddress()
//	{
//		cout << (int)&*this << endl;
//	}
//
//	int m_Age;
//};
//
//int main()
//{
//	Person p1;
//	p1.m_Age = 10;
//	Person* p = &p1;
//	p->showClassName();
//
//	// if p is a NULL pointer and the member function makes use of "this" pointer, there will be errors
//	p->showPersonAge(); 
//	//cout << p->m_Age << endl;
//
//	cout << (int)&p << endl;
//	cout << (int)&p1 << endl;
//	p->showAddress();
//
//	return 0;
//}