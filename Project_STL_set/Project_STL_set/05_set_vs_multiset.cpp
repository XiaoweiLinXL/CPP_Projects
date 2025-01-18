//#include <iostream>
//#include <set>
//using namespace std;
//
//template<class T>
//void printSet(T& set)
//{
//	for (typename T::iterator it = set.begin(); it != set.end(); it++)
//	{
//		cout << *it << endl;
//	}
//}
//
//void test01()
//{
//	set<int> s1;
//
//	auto res = s1.insert(10);
//	cout << res.second << endl;
//	auto res1 = s1.insert(10);
//	cout << res1.second << endl;
//
//	printSet(s1);
//
//	multiset<int> s2;
//	s2.insert(20); // no bool return variable
//	s2.insert(10);
//	s2.insert(30);
//	s2.insert(10);
//
//	printSet(s2);
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}