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
//	mp1.insert({ "a", 1 });
//	mp1.insert({ "c", 3 });
//	mp1.insert({ "b", 2 });
//
//	printMap(mp1);
//
//	mp1["e"] = 5;
//
//	printMap(mp1);
//
//	mp1.erase(mp1.begin());
//
//	printMap(mp1);
//
//	cout << mp1.erase("a") << endl;;
//
//	printMap(mp1);
//}
//
//int main()
//{
//	test01();
//	
//	return 0;
//}