//#include <iostream>
//
//class MyInteger
//{
//	friend std::ostream& operator<<(std::ostream& cout, MyInteger myint);
//
//private:
//	int m_Num;
//
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//
//	MyInteger& operator++()
//	{
//		++this->m_Num;
//		return *this;
//	}
//
//	MyInteger operator++(int)
//	{
//		MyInteger temp = *this;
//		this->m_Num++;
//		return temp;
//	}
//};
//
//std::ostream& operator<<(std::ostream& cout, MyInteger myint)
//{
//	std::cout << myint.m_Num << std::endl;
//	return cout;
//}
//
//int main()
//{
//	MyInteger myint;
//
//	std::cout << ((myint++)++)++ << std::endl;
//	std::cout << myint << std::endl;
//
//	int a = 1;
//	std::cout << a++ << std::endl;
//	std::cout << a << std::endl;
//}