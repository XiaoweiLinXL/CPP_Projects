#include "func_declaration.h"

void func()
{
	cout << "func 01" << endl;
}

void func(int a)
{
	cout << "func 02" << endl;
}

void func(int& a)
{
	cout << "func 03" << endl;
}


//void func(const int& a)
//{
//	cout << "func 04" << endl;
//}