//#include <iostream>
//#include <map>
//using namespace std;
//
//void printMap(const map<string, int>& mp)
//{
//	for (auto it = mp.begin(); it != mp.end(); it++)
//	{
//		cout << (*it).first << " " << (*it).second << endl;
//	}
//}
//
//void test01()
//{
//	map<string, int> mp1;
//
//	mp1.insert({ "a" , 1 });
//	mp1.insert({ "c" , 3 });
//	mp1.insert({ "b" , 2 });
//
//	cout << mp1.empty() << endl;
//	cout << mp1.size() << endl;
//}
//
//void test02()
//{
//	map<string, int> mp1;
//
//	mp1.insert({ "a" , 1 });
//	mp1.insert({ "c" , 3 });
//	mp1.insert({ "b" , 2 });
//
//	printMap(mp1);
//
//	map<string, int> mp2;
//
//	mp2.insert({ "d" , 4 });
//	mp2.insert({ "f" , 6 });
//	mp2.insert({ "e" , 5 });
//
//	printMap(mp2);
//
//	mp1.swap(mp2);
//
//	printMap(mp1);
//	printMap(mp2); 
//}
//
//int main()
//{
//	test02();
//
//	return 0;
//}