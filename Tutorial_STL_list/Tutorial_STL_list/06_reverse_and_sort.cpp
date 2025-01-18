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
//	l1.push_back(4);
//	l1.push_back(5);
//
//	printList(l1);
//
//	l1.reverse();
//
//	printList(l1);
//}
//
//bool myCompare(int v1, int v2)
//{
//	return(v1 > v2);
//}
//
//void test02()
//{
//	list<int> l1;
//
//	l1.push_back(2);
//	l1.push_back(1);
//	l1.push_back(4);
//	l1.push_back(5);
//	l1.push_back(3);
//
//	printList(l1);
//	
//	// All containers that does not allow random access cannot use the STL algorithm
//	// But the container itself will provide some algorithms
//	l1.sort(); // In ascending order
//	printList(l1);
//
//	l1.sort(myCompare);
//	printList(l1);
//}
//
//int main()
//{
//	test02();
//
//	return 0;
//}