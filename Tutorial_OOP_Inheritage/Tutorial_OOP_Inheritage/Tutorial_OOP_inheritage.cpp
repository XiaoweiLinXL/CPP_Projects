#include <iostream>

class BasePage
{
public:
	void top()
	{
		std::cout << "top" << std::endl;
	}

	void bottom()
	{
		std::cout << "bottom" << std::endl;
	}

	void left()
	{
		std::cout << "left" << std::endl;
	}
};

class CPP :public BasePage
{
public:
	void content()
	{
		std::cout << "CPP" << std::endl;
	}
};

int main()
{
	CPP cpp;
	cpp.bottom();
	cpp.top();
	cpp.left();
	cpp.content();
}