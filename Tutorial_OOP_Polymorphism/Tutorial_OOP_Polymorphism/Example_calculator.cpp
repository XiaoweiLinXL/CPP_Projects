#include <iostream>


// Polymorphism supports the Open - Closed Principle, 
// which states that a system should be open to extension but closed to modification.

class Calculator
{
public:
	int m_Num1;
	int m_Num2;

	virtual int getresult()
	{
		return 0;
	};
};

class PlusCalculator : public Calculator
{
	int getresult()
	{
		return m_Num1 + m_Num2;
	}
};

class MultiplyCalculator : public Calculator
{
	int getresult()
	{
		return m_Num1 + m_Num2;
	}
};

int main()
{
	Calculator* pluscalculator = new PlusCalculator();

	pluscalculator->m_Num1 = 10;
	pluscalculator->m_Num2 = 20;
	std::cout << pluscalculator->getresult() << std::endl;

	delete pluscalculator;

	
	pluscalculator = NULL;

	return 0;
}