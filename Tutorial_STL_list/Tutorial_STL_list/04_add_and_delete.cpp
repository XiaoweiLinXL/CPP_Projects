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
//	list<int> l1;
//
//	l1.push_back(1);
//	l1.push_back(2);
//	l1.push_back(3);
//
//	l1.push_front(10);
//	l1.push_front(20);
//	l1.push_front(30);
//
//	printList(l1);
//
//	l1.pop_back();
//
//	printList(l1);
//
//	l1.pop_front();
//
//	printList(l1);
//
//	l1.insert(++(l1.begin()), 30);
//
//	printList(l1);
//
//	l1.erase(++(l1.begin()));
//
//	printList(l1);
//
//	l1.remove(10);
//
//	printList(l1);
//
//	l1.clear();
//	printList(l1);
//
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}