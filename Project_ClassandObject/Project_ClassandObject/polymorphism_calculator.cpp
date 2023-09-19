//#include <iostream>
//using namespace std;
//
//class Calculator
//{
//public:
//	int m_Num1;
//	int m_Num2;
//
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_Num1 + m_Num2;
//		}
//		else if (oper == "-")
//		{
//			return m_Num1 - m_Num2;
//		}
//		else if (oper == "*")
//		{
//			return m_Num1 * m_Num2;
//		}
//	}
//};
//
//class AbstractCalculator
//{
//public:
//	int m_Num1;
//	int m_Num2;
//
//	// It's a pure virtual function
//	// As long as a class has a pure virtual function, the class is an abstract class
//	// 1. cannot instantiate
//	// 2. the son class mush rewrite the pure virtual function, otherwise it's also an abstract class
//	virtual int getResult() = 0;
//};
//
//class AddCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//
//void test01()
//{
//	AbstractCalculator *cal = new AddCalculator;
//	cal->m_Num1 = 10;
//	cal->m_Num2 = 20;
//	cout << cal->getResult() << endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}