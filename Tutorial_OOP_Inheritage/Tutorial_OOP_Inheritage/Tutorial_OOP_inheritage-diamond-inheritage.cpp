//#include <iostream>
//
//class Animal
//{
//public:
//	int m_Age;
//};
//
//// Virtual inheritage turns the 2nd level base class to a pointer
//// Pointing toward the 1st level base class
//// It solves the issue of multiple m_Age
//class Sheep : virtual public Animal
//{
//
//};
//
//class Camel : virtual public Animal
//{
//
//};
//
//class Lama : public Sheep, public Camel
//{
//
//};
//
//int main()
//{
//	Lama lama;
//	std::cout << sizeof(lama) << std::endl;
//	return 0;
//}
//
