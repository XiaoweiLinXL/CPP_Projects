//#include <iostream>
//
//class BaseClass
//{
//public:
//	int m_A;
//	int m_A_1;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class DerivedClass1 :public BaseClass
//{
//public:
//	int m_D;
//};
//
//int main()
//{
//	BaseClass bc;
//
//	bc.m_A = 100;
//
//	std::cout << bc.m_A << std::endl;
//
//	DerivedClass1 dc1;
//
//	dc1.m_A = 200;
//
//	std::cout << dc1.m_A << std::endl;
//	std::cout << bc.m_A << std::endl;
//
//	//std::cout << dc1.m_A << std::endl;
//	
//	// All the non-static member will be inherited by the derived class  
//	std::cout << sizeof(dc1) << std::endl;
//
//	std::cout << (int)&dc1.m_A << std::endl;
//	std::cout << (int)&bc.m_A << std::endl;
//
//}