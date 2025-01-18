//#include <iostream>
//#include <list>
//using namespace std;
//
//// Advantage: can add or delete element conveniently, when adding, only need to create the data and links and point the links to the correct memory
//// when deleting, only need to find the data and links and modify the links from previous and the next memory
//// Disadvantage: Iteration speed is slower than vector/array; occupy more space
//
//// No random access iterator
//// No extra memory needed compared to vector(for a vector with size 100000, the capacity would be ~130000)
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
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//
//	printList(l1);
//
//	list<int> l2(l1);
//
//	printList(l2);
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}