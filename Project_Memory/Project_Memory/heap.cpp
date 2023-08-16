#include <iostream>
using namespace std;

int g_c = 10;

int* func()
{
	// "new" return the address of the newly introduced variable, which is on the heap
	// if you create a pointer to store this address, the pointer is stored on the stack
	int* p = new int(10);
	cout << (int)&p << endl;
	return p;
}

void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;

	// you can delete the data by deleting the address
	delete p;
}

int* test02()
{
	int* arr = new int[10];

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 10;
	}

	// after deleting, arr becomes a wild pointer, the address it points to is not accessible.
	delete[] arr;


	cout << arr << endl;

	return arr;
}


// if the array is created on the stack (not on the heap), it will be released after the function is finished
int* test03()
{
	int arr[10];

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 10;
	}

	return arr;
}

int main()
{
	int* p = func();

	// this should be a the address on the heap
	cout << (int)p << endl;
	cout << (int)&p << endl;
	cout << *p << endl;
	cout << *p << endl;

	// release the heap

	int a = 10;
	cout << (int)&a << endl;

	cout << (int)&g_c << endl;

	test01();

	int* main_arr = test02();

	for (int i = 0; i < 10; i++)
	{
		cout << main_arr[i] << endl;
	}

	int* arr = test03();

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}