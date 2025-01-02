//#include <iostream>
//using namespace std;
//#include <deque>
//
//template<class T>
//void printContainer(const T& c)
//{
//	for (typename T::const_iterator it = c.begin(); it != c.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int> d1 = { 1,2,3,4,5 };
//
//	printContainer(d1);
//
//	cout << d1.size() << endl;
//
//	deque<int> d2;
//
//	cout << d2.size() << endl;
//
//	d2 = d1;
//
//	printContainer(d2);
//
//	cout << d2.size() << endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}