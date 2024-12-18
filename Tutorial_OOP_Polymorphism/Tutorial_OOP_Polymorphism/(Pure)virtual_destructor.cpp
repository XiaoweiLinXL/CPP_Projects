//#include <iostream>
//
//class Animal
//{
//public:
//	Animal()
//	{
//		std::cout << "Constructor Animal" << std::endl;
//	}
//
//	// The pure virtual destructor also needs to be defined
//	// In case there is some data on heap in the base class
//	// When there is a pure virtual destructor, the class becomes an abstract class,
//	// which can not be instantiated
//	virtual ~Animal() = 0;
//
//	virtual void talk() = 0;
//};
//
//Animal::~Animal()
//{
//	std::cout << "Animal's pure virtual destructor" << std::endl;
//}
//
//class Cat :public Animal
//{
//public:
//	std::string* m_Name;
//
//	Cat(std::string name)
//	{
//		std::cout << "Constructor Cat" << std::endl;
//		m_Name = new std::string(name);
//	}
//	
//	~Cat()
//	{
//		std::cout << "Destructor Cat" << std::endl;
//		if (m_Name != NULL)
//		{
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//
//	void talk()
//	{
//		std::cout << *m_Name << " said Meow..." << std::endl;
//	}
//};
//
//void test01()
//{
//	Animal* animal = new Cat("Tom");
//	animal->talk();
//
//	// Base class destructor will not call the destructor of the derived class
//	// If the derived class has data on heap, there will be memory leak
//	// The destructor in the base class has to be a virtual destructor
//	delete animal;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}