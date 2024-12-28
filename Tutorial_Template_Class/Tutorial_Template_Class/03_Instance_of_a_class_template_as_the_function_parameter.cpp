//#include <iostream>
//using namespace std;
//
//template<typename T1, typename T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void showPerson()
//	{
//		cout << "Name: " << this->m_Name << endl;
//		cout << "Age: " << this->m_Age << endl;
//	}
//
//	T1 m_Name;
//	T2 m_Age;
//};
//
//// 1. Specify the input type, it is more clear
//void printPerson1(Person<string, int> &person)
//{
//	person.showPerson();
//}
//
//void test01()
//{
//	Person<string, int> p1("Xiaowei", 18);
//	printPerson1(p1);
//}
//
//// 2. Turn the function into a function template, the function template parameters are the class template parameter
//template<typename T1, typename T2>
//void printPerson2(Person<T1, T2>& person)
//{
//	person.showPerson();
//	cout << "T1: " << typeid(T1).name() << endl;
//	cout << "T2: " << typeid(T2).name() << endl;
//}
//
//void test02()
//{
//	Person<string, int> p2("Yilan", 17);
//	printPerson2(p2);
//}
//
//// 3. Turn the function into a function template, the fucntion template parameters are the class itself
//
//template<typename T>
//void printPerson3(T person)
//{
//	person.showPerson();
//	cout << "T: " << typeid(T).name() << endl;
//}
//
//void test03()
//{
//	Person<string, int> p3("William", 18);
//	printPerson3(p3);
//}
//
//int main()
//{
//	test01();
//
//	test02();
//
//	test03();
//
//	return 0;
//}