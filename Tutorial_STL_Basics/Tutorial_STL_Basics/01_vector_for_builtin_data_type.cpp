//#include <iostream>
//using namespace std;
//
//#include <vector>
//#include <algorithm>
//
//void myPrint(int val)
//{
//	cout << val << endl;
//}
//
//void test01()
//{
//	// Create a vector container
//	vector<int> v;
//
//	// Insert element into the vector
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	//// Use an iterator to access the vector element
//	//vector<int>::iterator itBegin = v.begin(); // Begin iterator, pointing to the first element in the container
//	//vector<int>::iterator itEnd = v.end(); // End iterator, pointing to the next position of the ending element in the container
//
//	//// First kind of iteration
//	//while (itBegin != itEnd)
//	//{
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//	//}
//
//	//// Second kind of iteration
//	//for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
//	//{
//	//	cout << *it << endl;
//	//}
//
//	// Third kind of iteration: use the iteration algorithm provided by STL
//	for_each(v.begin(), v.end(), myPrint);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	
//	return 0;
//}