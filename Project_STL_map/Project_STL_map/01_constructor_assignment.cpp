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
//	mp1.insert({ "d", 4 });
//
//	printMap(mp1);
//
//	map<string, int> mp2(mp1);
//
//	printMap(mp2);
//
//	map<string, int> mp3;
//	mp3.insert({ "e", 5 });
//	printMap(mp3);
//
//	mp3 = mp2;
//	printMap(mp3);
//
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}