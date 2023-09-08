//#include <iostream>
//using namespace std;
//
//class MyInt
//{
//	friend ostream& operator<<(ostream& cout, MyInt myint);
//
//private:
//	int m_Num;
//
//public:
//	MyInt()
//	{
//		m_Num = 0;
//	}
//
//	MyInt& operator++()
//	{
//		this->m_Num++;
//		return *this;
//	}
//
//	// use int as a place holder to differentiate before/after increment
//	MyInt operator++(int)
//	{
//		MyInt temp = *this;
//		this->m_Num++;
//		return temp; // after increment only return value, because you cannot reference a reference for a local variable, which will be deleted out of scope
//					 // as a result, you cannot do consecutive increment here, because only a copy is returned instead of the object itself
//	}
//
//	MyInt& operator--()
//	{
//		this->m_Num--;
//		return *this;
//	}
//
//	MyInt operator--(int)
//	{
//		MyInt temp = *this;
//		this->m_Num--;
//		return temp;
//	}
//};
//
//ostream& operator<<(ostream& cout, MyInt myint) 
//{
//	cout << "Myint: " << myint.m_Num;
//	return cout;
//}
//
////int operator++(MyInt myint)
////{
////	return ++myint.m_Num;
////}
//
//void test01()
//{
//	MyInt myint;
//	cout << ++(++myint) << endl;
//	cout << myint << endl;
//	cout << --(myint) << endl;
//	cout << myint << endl;
//}
//
//void test02()
//{
//	MyInt myint;
//	cout << (myint++) << endl;
//	cout << myint << endl;
//	cout << (myint--) << endl;
//	cout << myint << endl;
//}
//
//int main()
//{
//	test02();
//
//	return 0;
//}