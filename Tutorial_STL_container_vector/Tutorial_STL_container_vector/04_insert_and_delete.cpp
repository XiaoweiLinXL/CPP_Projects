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
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	
//	cout << "Capacity: " << v1.capacity() << endl;
//
//	printVector(v1);
//
//	v1.pop_back();
//	printVector(v1);
//
//	v1.insert(v1.begin()+2, 0);
//	printVector(v1);
//
//	v1.erase(v1.begin());
//	printVector(v1);
//
//	v1.erase(v1.begin(), v1.end());
//	printVector(v1);
//	
//	cout << "Capacity: " << v1.capacity() << endl;
//	cout << "Size: " << v1.size() << endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}