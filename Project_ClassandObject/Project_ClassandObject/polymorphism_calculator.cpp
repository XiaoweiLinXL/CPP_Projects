#include <iostream>
using namespace std;

class Calculator
{
public:
	int m_Num1;
	int m_Num2;

	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}
	}
};

class AbstractCalculator
{
public:
	int m_Num1;
	int m_Num2;

	virtual int getResult()
	{
		return 0;
	}
};

class AddCalculator :public AbstractCalculator
{
public:

};

int main()
{
	return 0;
}