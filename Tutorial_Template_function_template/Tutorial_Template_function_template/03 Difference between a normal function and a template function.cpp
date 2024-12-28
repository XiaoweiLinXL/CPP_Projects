//#include <iostream>
//using namespace std;
//
//// 1. A normal function CAN do implicit type conversion
//// 2. When a function template is doing type inference, it CAN do implicit type conversion
//// 3. When a function template is doing explicit type specification, it CAN do implicit type conversion
//
//int myAdd(int a, int b)
//{
//		return a + b;
//}
//
//template<typename T>
//T myAdd1(T a, T b)
//{
//	return a + b;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 10;
//	char c = 'c';
//	cout << myAdd(a, c) << endl;
//
//	cout << myAdd1<char>(a, c) << endl; // will convert a=10 to char
//	cout << myAdd1<int>(a, c) << endl; // will convert c='c' to int
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}