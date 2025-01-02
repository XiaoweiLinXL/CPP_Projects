//#include <iostream>
//#include <deque>
//using namespace std;
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
//	deque<int> d1;
//
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//
//	printcontainer(d1);
//
//	d1.pop_back();
//
//	printcontainer(d1);
//
//	d1.pop_front();
//
//	printcontainer(d1);
//}
//
//void test02()
//{
//	deque<int> d1;
//
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//
//	printcontainer(d1);
//
//	d1.insert(d1.begin(), 1000);
//
//	printcontainer(d1);
//
//	d1.insert(d1.begin(), 2, 10000);
//
//	printcontainer(d1);
//
//	deque<int> d2;
//
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//
//	d1.insert(d1.begin(), d2.begin(), d2.end());
//
//	printcontainer(d1);
//}
//
//int main()
//{
//	test02();
//
//	return 0;
//}