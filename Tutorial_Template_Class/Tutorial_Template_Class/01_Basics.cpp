//#include <iostream>
//using namespace std;
//
//template<typename NameType, typename AgeType = int> // A class template can have default variable in the variable list
//class Person
//{
//public:
//	Person(NameType name, AgeType age): m_Name(name), m_Age(age)
//	{
//
//	}
//
//	void showInfo()
//	{
//		cout << "Name: " << this->m_Name << endl;
//		cout << "Age: " << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//void test01()
//{
//	Person<string, int> p1("Xiaowei", 18); // To use a class template, you have to specify the types
//	p1.showInfo();
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}