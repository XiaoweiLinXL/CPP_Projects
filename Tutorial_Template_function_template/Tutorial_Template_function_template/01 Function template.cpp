//#include <iostream>
//using namespace std;
//
//// Swap two ints
//void swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//// Swap to floats
//void swap(double& a, double& b)
//{
//	double temp = a;
//	a = b;
//	b = temp;
//}
//
//// Too many different data types, use templates!
//template<typename T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//template<typename T>
//void func()
//{
//	cout << "Func" << endl;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	mySwap(a, b); // Auto derive the type, must get the same data type
//	              // If a is int, b is char, it's wrong
//
//	// The template T has to be determined in order to call the function
//	//func();
//	func<int>();
//	
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	mySwap<int>(a, b); // Declare the type
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}