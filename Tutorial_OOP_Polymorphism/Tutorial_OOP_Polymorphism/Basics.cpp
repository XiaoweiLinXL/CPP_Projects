//#include <iostream>
//
//// Polymorphism conditions
//// 1 - Inheritage
//// 2 - Derived class should rewrite the virtual function of the base class
//// 3 - Base class's reference/pointer points toward the derived class's instance
//
//class Animal
//{
//public:
//	// Without "virtual", the address of the function will be assigned before the program is run
//	// After adding "virtual", the address of the function will be assigned when the program is run
//	virtual void talk()
//	{
//		std::cout << "Talking..." << std::endl;
//	}
//};
//
//class Cat : public Animal
//{
//	void talk()
//	{
//		std::cout << "Meow..." << std::endl;
//	}
//};
//
//class Dog : public Animal
//{
//	void talk()
//	{
//		std::cout << "Woof!" << std::endl;
//	}
//};
//
//void doTalk(Animal &animal)
//{
//	animal.talk();
//}
//
//int main()
//{ 
//	Cat cat;
//	doTalk(cat);
//	Dog dog;
//	doTalk(dog);
//}