//#include "perosn.h"
//
//// If you define a constructor with arguments, the compiler doesn't provide a constructor without arguments.
//// If you define a copy constructor, the compiler doesn't provide other constructors.
//// The compiler with provide, by default, a default constructor, a destructor, and a copy constructor.
//
////Person::Person()
////{
////	m_name = "Xiaowei";
////	m_age = 18;
////	m_height = new int(180);
////
////	string pName = "Apple";
////	Phone m_phone = pName;
////	cout << "Constructor!" << endl;
////}
//
////Person::Person(int a, int height)
////{
////	m_age = a;
////	m_height = new int(height);
////	cout << "Constructor with params!" << endl;
////}
//
//Person::Person(string name, int a, int height, string pName) :m_name(name), m_age(a), m_height(new int(height)), m_phone(pName)
//{
//
//}
//
//// Copy constructor, shallow copier. The variable on the heap will be repeatedly release, which will cause problem for the destructor.
//// Should use deep copy.
////Person::Person(const Person& p)
////{
////	m_name = "Xiaowei";
////	m_age = p.m_age;
////	//m_height = p.m_height; // Shallow copy, only copy the address, will cause repeatedly releasing of the variable on the heap.
////	m_height = new int(*p.m_height); // Deep copy, create another space on the heap and store the variable
////	m_phone = p.m_phone;
////	cout << "Copy constructor!" << endl;
////}
//
//// Destructor
//Person::~Person()
//{
//	// Release the variables defined on the heap
//	if (m_height != NULL)
//	{
//		delete m_height;
//		m_height = NULL;
//	}
//	cout << "Destructor!" << endl;
//}
//
//void Person::printName()
//{
//	cout << "Name: " << m_name << endl;
//}
//
//void Person::printAge()
//{
//	cout << "Age: " << m_age << endl;
//}
//
//void Person::printHeight()
//{
//	cout << "Height: " << *m_height << endl;
//}
//
//void Person::printPhone()
//{
//	m_phone.printName();
//}