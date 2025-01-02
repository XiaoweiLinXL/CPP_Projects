//#include <iostream>
//using namespace std;
//#include <map>
//
//template<class T>
//void printPairContainer(T& c)
//{
//	for (typename T::iterator it = c.begin(); it != c.end(); it++)
//	{
//		cout << "Key: " << (*it).first << " Value: " << (*it).second << endl;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	map<int, int> m1;
//
//	m1.insert({ 1, 10 });
//	m1.insert({ 2, 20 });
//	m1.insert({ 3, 30 });
//	m1.insert({ 4, 40 });
//	m1.insert({ 5, 50 });
//
//	printPairContainer(m1);
//
//	cout << m1.size() << endl;
//
//	map<int, int> m2 = { {25, 25} };
//
//	cout << m2.size() << endl;
//
//	printPairContainer(m2);
//
//	m1.swap(m2);
//	printPairContainer(m1);
//	printPairContainer(m2);
//
//	cout << m1.size() << endl;
//	cout << m2.size() << endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}