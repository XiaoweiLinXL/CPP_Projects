//#include <iostream>
//
//void swapInt(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//template<typename T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//template<typename T>
//void mySort(T a[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		int max = i;
//		for (int j = i + 1; j < size; j++)
//		{
//			if (a[j] > a[max])
//			{
//				max = j;
//			}
//		}
//
//		if (max != i)
//		{
//			T temp = a[i];
//			a[i] = a[max];
//			a[max] = temp;
//		}
//	}
//}
//
//template<typename T>
//void printArr(T arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		std::cout << arr[i] << " ";
//	}
//}
//
//
//void test01()
//{
//	char charArr[] = "ecadfb";
//
//	int size = sizeof(charArr) / sizeof(charArr[0]);
//
//	mySort(charArr, size);
//
//	printArr(charArr, size);
//
//	int arr[] = { 3,4,21,67,423,1,5 };
//
//	int size1 = sizeof(arr) / sizeof(arr[0]);
//
//	mySort(arr, size1);
//
//	printArr(arr, size1);
//}
//
//template<typename T>
//T add(T a, T b)
//{
//	return a + b;
//}
//
//int add1(int a, int b)
//{
//	return a + b;
//} 
//
//template<typename T>
//bool myCompare(T& a, T& b)
//{
//	if (a == b)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//
//
//class Person
//{
//public:
//
//	Person(std::string name, int age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//
//	std::string m_Name;
//	int m_Age;
//};
//
//template<> bool myCompare(Person& p1, Person& p2)
//{
//	if (p1.m_Age == p2.m_Age && p1.m_Name == p2.m_Name)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//
//void test02()
//{
//	int a = 10;
//	int b = 20;
//
//	Person p1("Tom", 10);
//	Person p2("Tom", 10);
//
//	if (myCompare(p1, p2))
//	{
//		std::cout << "Equal" << std::endl;
//
//	}
//	else
//	{
//		std::cout << "Not equal" << std::endl;
//	}
//}
//
//int main()
//{
//
//	//int a = 10;
//	//int b = 20;
//
//	//mySwap(a, b);
//	//std::cout << a << std::endl;
//	//std::cout << b << std::endl;
//
//	//double c = 1.0;
//	//double d = 6.0;
//	//mySwap<double>(c, d);
//	//std::cout << c << std::endl;
//	//std::cout << d << std::endl;
//
//	//test01();
//
//	//int e = 10;
//	//char f = 'f';
//
//	//std::cout << add<char>(e, f);
//
//	test02();
//
//	return 0;
//}