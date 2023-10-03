#include <iostream>
#include <fstream>

class Person
{
public:
	char m_Name[64];
	int m_Age;
};

void test01()
{
	std::ifstream ifs;

	ifs.open("person.txt", std::ios::in | std::ios::binary);

	if (!ifs.is_open())
	{
		std::cout << "Fail to open the file" << std::endl;
		return;
	}

	Person p;

	ifs.read((char*)&p, sizeof(Person));

	std::cout << p.m_Name << std::endl;
	std::cout << p.m_Age << std::endl;
	
}

int main()
{
	test01();

	return 0;
}