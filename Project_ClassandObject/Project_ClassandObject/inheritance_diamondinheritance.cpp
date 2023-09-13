//#include <iostream>
//using namespace std;
//
//class Animal
//{
//public:
//	int m_Age;
//};
//
//// use virtual inheritance to solve the ambiguity, Animal becomes a virtual base
//class Sheep :virtual public Animal
//{
//public:
//};
//
//class Camel :virtual public Animal
//{
//public:
//};
//
//class Lama :public Sheep, public Camel
//{
//
//};
//
//void test01()
//{
//	Lama lama;
//	/*lama.Sheep::m_Age = 10;
//	lama.Camel::m_Age = 20;
//
//	cout << lama.Sheep::m_Age << endl;
//	cout << lama.Camel::m_Age << endl;*/
//	//cout << lama.m_Age << endl;
//
//	lama.m_Age = 18;
//
//	cout << lama.m_Age << endl;
//
//	cout << sizeof(Lama) << endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}