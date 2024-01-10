//#include <iostream>
//
//template<typename T1, typename T2>
//class Person
//{
//	friend void printPerson(Person<std::string, int>& p);
//
//public:
//	Person(T1 name, T2 age);
//
//private:
//	T1 m_Name;
//	T2 m_Age;
//};
//
//template<typename T1, typename T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//void printPerson(Person<std::string, int> & p)
//{
//	std::cout << p.m_Name << std::endl;
//	std::cout << p.m_Age << std::endl;
//}
//
//void test01()
//{
//	Person<std::string, int> p("Jerry", 129);
//
//	printPerson(p);
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}