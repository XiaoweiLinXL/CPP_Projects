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
//	s1.insert(2);
//	s1.insert(1);
//	s1.insert(4);
//	s1.insert(3);
//	s1.insert(3);
//	// auto sort
//	// cannot have repeated value
//	cout << s1.size() << endl;
//
//	printSet(s1);
//
//	set<int> s2(s1);
//
//	printSet(s2);
//
//	set<int> s3 = s2;
//
//	printSet(s3);
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}