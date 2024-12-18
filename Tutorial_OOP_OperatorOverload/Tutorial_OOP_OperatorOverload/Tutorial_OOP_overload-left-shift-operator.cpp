//#include <iostream>
//
//class Person
//{
//	friend std::ostream& operator<<(std::ostream& cout, Person& p);
//
//public:
//	Person(int a, int b) : m_A(a), m_B(b)
//	{
//
//	}
//private:
//	int m_A;
//	int m_B;
//
//	// Usually not use member function to overload the left shift operator
//};
//
//// Use global function to overload the left shift operator
//// Can only have one ostream object, pass as reference
//std::ostream& operator<<(std::ostream& cout, Person& p)
//{
//	std::cout << "m_A: " << p.m_A << " m_B: " << p.m_B << std::endl;
//	return std::cout;
//}
//
//int main()
//{
//	Person p1(10,10);
//
//	std::cout << p1 << std::endl;
//
//}