//#include <iostream>
//#include <fstream>
//#include <string>
//
//void test01()
//{
//	std::ifstream ifs;
//
//	ifs.open("test.txt", std::ios::in);
//
//	if (!ifs.is_open())
//	{
//		std::cout << "Fail to open a file!" << std::endl;
//		return;
//	}
//
//	//char buf[1024];
//	//while (ifs >> buf)
//	//{
//	//	std::cout << buf << std::endl;
//	//}
//
//	//char buffer[1024];
//	//while (ifs.getline(buffer, sizeof(buffer)))
//	//{
//	//	std::cout << buffer << std::endl;
//	//}
//
//	std::string buffer;
//	while (std::getline(ifs, buffer))
//	{
//		std::cout << buffer << std::endl;
//	}
//
//	ifs.close();
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}