//#include <iostream>
//#include <vector>
//using namespace std;
//
//template<class T>
//void printVector(vector<T>& v)
//{
//	for (typename vector<T>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	printVector(v1);
//
//	vector<int> v2;
//	for (int i = 10; i > 0; i--)
//	{
//		v2.push_back(i);
//	}
//
//	printVector(v2);
//
//	v1.swap(v2);
//
//	printVector(v1);
//	printVector(v2);
//}
//
//// Using swap can shrink the memory size
//void test02()
//{
//	vector<int> v;
//
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//	}
//
//	cout << "Capacity: " << v.capacity() << endl;
//	cout << "Size: " << v.size() << endl;
//
//	v.resize(3);
//	cout << "Capacity: " << v.capacity() << endl; // Will output more than 130000, waste of memory
//	cout << "Size: " << v.size() << endl;
//
//	vector<int>(v).swap(v); // Use vector<int>(v) to create an anonymous object and have it swapped with v. After this line is executed, the anonymous object 
//							// will be deleted. But when the anonymous object is created, the capacity and size will the same as the size of the vector passed in
//	                        // the copy constructor.
//
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}