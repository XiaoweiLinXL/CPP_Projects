//#include <iostream>
//#include <set>
//using namespace std;
//
//void printSet(const set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << endl;
//	}
//}
//
//void test01()
//{
//	set<int> s1;
//
//	s1.insert(3);
//	s1.insert(1);
//	s1.insert(12);
//	s1.insert(4);
//
//	printSet(s1);
//
//	cout << s1.empty() << endl;
//	cout << s1.size() << endl;
//}
//
//void test02()
//{
//	set<int> s1;
//
//	s1.insert(3);
//	s1.insert(1);
//	s1.insert(12);
//	s1.insert(4);
//
//	set<int> s2;
//
//	s2.insert(30);
//	s2.insert(10);
//	s2.insert(120);
//	s2.insert(40);
//
//	printSet(s1);
//	printSet(s2);
//
//	s1.swap(s2);
//
//	printSet(s1);
//	printSet(s2);
//
//}
//
//int main()
//{
//	test02();
//
//	return 0;
//}