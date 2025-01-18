//#include <iostream>
//#include <list>
//using namespace std;
//
//template<class T>
//void printList(const list<T>& L)
//{
//	for (typename list<T>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int> L1;
//
//	L1.push_back(1);
//	L1.push_back(2);
//	L1.push_back(3);
//	L1.push_back(4);
//
//	printList(L1);
//
//	list<int> L2;
//	L2 = L1;
//
//	printList(L2); 
//
//	L2.assign(10, 100);
//
//	printList(L2);
//
//	L1.swap(L2);
//
//	printList(L1);
//	printList(L2);
//}
//
//int main()
//{
//	test01(); 
//
//	return 0;
//}