//#include <iostream>
//using namespace std;
//
//// 1. If both the normal and template works, prioritize using the normal function
//// 2. Call the template function anyway using an empty template variable list
//// 3. Template function can be overloaded
//// 4. If the template function match better, call the template function
//
//void myPrint(int a, int b)
//{
//	cout << "Normal function" << endl;
//}
//
//template<typename T>
//void myPrint(T a, T b)
//{
//	cout << "Template function 1" << endl;
//}
//
//template<typename T>
//void myPrint(T a, T b, T c)
//{
//	cout << "Template function 2" << endl;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	myPrint(a, b); // Will call the normal function (#1) 
//
//	myPrint<>(a, b); // Will call the template function because of the empty template variable list (#2)
//
//	myPrint(a, b, c); // Template function overload (#3)
//
//	char c1 = 'c1';
//
//	char c2 = 'c2';
//
//	myPrint(c1, c2); // Will call the template function 1 because it has a better match (#4)
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}