//// #include "06 person.h"
//// if include "06 person.h", the compiler cannot find the function definition during link time because the functions are only defined when they are called.
//
//// 1. directly include "06 person.cpp" (not recommended)
//// 2. in practice, put the declaration and realization into one file and rename the file to ".hpp". when you see a ".hpp" file in a project, you know it's class template.
//#include "Person.hpp"
//
//void test01()
//{
//	Person<string, int> p("xiaowei", 18);
//	p.showPerson();
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}