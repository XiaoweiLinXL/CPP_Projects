//#include <iostream>
//using namespace std;
//
//class Animal
//{
//public: 
//	Animal()
//	{
//		cout << "Animal constructor" << endl;
//	}
//
//	// Using virtual destructor, when destructing the base object, the son's object can also be destructed. 
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal destructor" << endl;
//	//}
//
//	// Pure virtual destructor also needs a realization
//	// If a class has a pure virtual destructor, it also becomes a abstract class 
//	virtual ~Animal() = 0;
//
//	virtual void speak() = 0;
//};
//
//Animal::~Animal()
//{
//	cout << "Animal destructor" << endl;
//}
//
//class Cat : public Animal
//{
//public:
//	virtual void speak()
//	{
//		cout << *m_Name << "Meow..." << endl;
//	}
//
//	Cat(string name)
//	{
//		cout << "Cat constructor" << endl;
//		m_Name = new string(name);
//	}
//
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "Cat destructor" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//	
//	string* m_Name;
//};
//
//void test01()
//{
//	Animal* ani = new Cat("Tom");
//	ani->speak();
//	// Base class destructor won't call destructor of the son's class if there is no virtual destructor defined
//	delete ani;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}