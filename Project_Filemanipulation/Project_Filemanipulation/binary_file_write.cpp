//#include <iostream>
//#include <fstream>
//
//class Person
//{
//public:
//	char m_Name[64];
//	int m_Age;
//};
//
//void test01()
//{
//	std::ofstream ofs("person.txt", std::ios::out | std::ios::binary);
//
//	Person p = { "Xiaowei", 18 };
//
//	std::cout << &p << std::endl;
//	ofs.write((const char*)&p, sizeof(Person));
//
//	ofs.close();
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}