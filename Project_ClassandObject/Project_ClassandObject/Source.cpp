//#include <iostream>
//using namespace std;
//
//class Phone
//{
//public: 
//	string name;
//
//	Phone(string pName)
//	{
//		name = pName;
//	}
//};
//
//class Person
//{
//public:
//	// The compiler will try to initialize all the variable before going into the constructor,
//	// declaring the member object without initializing it before the constructor will try to 
//	// use the default constructor of the member object, if it's not existed, error pops up.
//
//	// The compiler will construct the member object first, then the father object
//	// When destruction, will destruct the father object first, then the member object (opposite)
//	string m_Name;
//	Phone m_Phone;
//
//
//	//Person()
//	//{
//	//	m_Name = "Xiaowei";
//	//	m_Phone = Phone("Apple");
//	//}
//
//	// If there is an initialization list, the member will be initialized as described in the initialization list.
//	Person(string name, string pName): m_Name(name), m_Phone(pName) // Phone m_Phone = "pName";
//	{
//
//	}
//
//
//};
//
//void test09()
//{
//	Person p("Xiaowei", "Apple 12");
//	cout << p.m_Name << " is holding " << p.m_Phone.name << endl;
//}
//
//int main()
//{
//
//	test09();
//
//	return 0;
//}