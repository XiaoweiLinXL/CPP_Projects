//#include <iostream>
//using namespace std;
//
//template <typename T>
//void genericSort(T array[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int min = i;
//		for (int j = i + 1; j < len; j++)
//		{
//			if (array[j] < array[min])
//			{
//				min = j;
//			}
//		}
//
//		if (min != i)
//		{
//			T temp = array[i];
//			array[i] = array[min];
//			array[min] = temp;
//		}
//	}
//}
//
//template<typename T>
//void printArray(T array[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << array[i];
//		cout << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	char charArr[] = "dceabf"; // the array actually is {'d', 'c', 'e', 'a', 'b', 'f', '\0'}, and the ascii for '\0' is 0
//	int numcharArr = sizeof(charArr) / sizeof(char);
//	genericSort(charArr, numcharArr);
//	printArray(charArr, numcharArr);
//
//	int intArr[] = { 2, 3, 1, 5, 6, 4 };
//	int numintArr = sizeof(intArr) / sizeof(int);
//	genericSort(intArr, numintArr);
//	printArray(intArr, numintArr);
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}