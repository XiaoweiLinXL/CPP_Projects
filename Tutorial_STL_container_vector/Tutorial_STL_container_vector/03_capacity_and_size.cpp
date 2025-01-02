//#include <iostream>
//using namespace std;
//#include <vector>
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
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	printVector(v1);
//
//	cout << "Empty?: " << v1.empty() << endl;
//
//	cout << "Capacity: " << v1.capacity() << endl;
//
//	cout << "Size: " << v1.capacity() << endl;
//
//	v1.push_back(1);
//	v1.push_back(2);
//	v1.push_back(3);
//
//	printVector(v1);
//
//	cout << "Capacity: " << v1.capacity() << endl;
//
//	cout << "Size: " << v1.size() << endl;
//
//	v1.resize(15);
//
//	printVector(v1);
//
//	cout << "Capacity: " << v1.capacity() << endl;
//
//	cout << "Size: " << v1.size() << endl;
//
//	v1.resize(10);
//
//	printVector(v1);
//
//	cout << "Capacity: " << v1.capacity() << endl;
//
//	cout << "Size: " << v1.size() << endl;
//}
//
//
//
//int main()
//{
//	test01();
//
//	return 0;
//}