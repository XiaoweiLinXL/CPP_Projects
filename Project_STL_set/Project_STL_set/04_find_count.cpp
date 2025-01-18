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
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//	
//	printSet(s1);
//
//	auto pos = s1.find(30);
//
//	if (pos != s1.end())
//	{
//		cout << "found: " << *pos << endl;
//		cout << "count: " << s1.count(*pos) << endl;
//	}
//	else
//	{
//		cout << "Not found" << endl;
//	}
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}