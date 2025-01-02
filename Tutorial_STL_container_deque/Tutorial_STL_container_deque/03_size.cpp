//#include <iostream>
//using namespace std;
//#include <deque>
//
//template<class t>
//void printcontainer(const t& c)
//{
//	for (typename t::const_iterator it = c.begin(); it != c.end(); it++)
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
//	printcontainer(d1);
//
//	cout << d1.size() << endl;
//
//	deque<int> d2;
//
//	cout << d2.size() << endl;
//
//	d2 = d1;
//
//	printcontainer(d2);
//
//	cout << d2.size() << endl;
//
//	// There is no .capacity() in deque
//
//	// If resize to a bigger size, only add 0 after the deque
//	d2.resize(10);
//
//	printcontainer(d2);
//
//	// If resize to a smaller size, only delete the elements at the back of the deque
//	d2.resize(3);
//
//	printcontainer(d2);
//
//	cout << d2.size() << endl;
//
//
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}