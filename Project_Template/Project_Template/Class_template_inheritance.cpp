//#include <iostream>
//
//template<typename T>
//class Base
//{
//	T m;
//};
//
//class Son :public Base<int>
//{
//
//};
//
//
//template<typename T, typename T2>
//class Son2 :public Base<T>
//{
//public:
//	Son2()
//	{
//		std::cout << typeid(T).name() << std::endl;
//		std::cout << typeid(T2).name() << std::endl;
//	}
//
//	T2 obj;
//};
//
//void test01()
//{
//	Son2<int, char> s;
//}
//
//template<typename T1, typename T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//
//	void showPerson();
//
//
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
//template<typename T1, typename T2>
//void Person<T1, T2>::showPerson()
//{
//	std::cout << this->m_Name << std::endl;
//	std::cout << this->m_Age << std::endl;
//}
//
//void test02()
//{
//	Person<std::string, int> p("Tom", 10);
//	
//	p.showPerson();
//}
//
//int main()
//{
//	//test01();
//
//	test02();
//
//	return 0;
//}