//#include <iostream>
//
//class Person1
//{
//public:
//	void showPerson1()
//	{
//		std::cout << "Person 1" << std::endl;
//	}
//};
//
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		std::cout << "Person 2" << std::endl;
//	}
//};
//
//template<typename T>
//class MyClass
//{
//public:
//	T obj;
//
//	void func1()
//	{
//		obj.showPerson1();
//	}
//	
//	void func2()
//	{
//		obj.showPerson2();
//	}
//
//};
//
//template<typename NameType, typename AgeType = int>
//class Person
//{
//public:
//
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void showPerson()
//	{
//		std::cout << "Name: " << this->m_Name << " Age: " << this->m_Age << std::endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//void test01()
//{
//	Person<std::string, int> p1("Tom", 999);
//
//	p1.showPerson();
//}
//
//void test02()
//{
//	Person<std::string> p2("Jerry", 1000);
//
//	p2.showPerson();
//}
//
//void test03()
//{
//	MyClass<Person1> m;
//	m.func1();
//	//m.func2();
//}
//
//void printPerson1(Person<std::string, int>& p)
//{
//	p.showPerson();
//}
//
//void test04()
//{
//	Person<std::string, int> p("Tom", 0);
//
//	printPerson1(p);
//}
//
//template<typename T1, typename T2>
//void printPerson2(Person<T1, T2>& p)
//{
//	p.showPerson();
//
//	std::cout << typeid(T1).name() << std::endl;
//	std::cout << typeid(T2).name() << std::endl;
//}
//
//
//void test05()
//{
//	Person<std::string, int> p("Jerry", 1);
//
//	printPerson2(p);
//
//}
//
//template<typename T>
//void printPerson3(T& p)
//{
//	p.showPerson();
//
//	std::cout << typeid(T).name() << std::endl;
//}
//
//void test06()
//{
//	Person<std::string, int> p("Kitty", 2);
//
//	printPerson3(p);
//}
//
//int main()
//{
//	//test01();
//
//	//test02();
//
//	//test03();
//
//	//test04();
//
//	//test05();
//	
//	test06();
//
//	return 0;
//}