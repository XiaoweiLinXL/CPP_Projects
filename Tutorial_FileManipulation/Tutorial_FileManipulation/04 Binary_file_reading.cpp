#include <iostream>
#include <fstream>
using namespace std;

class Person
{
public:
	char m_Name[64];
	int m_Age;
};

void test01()
{
	ifstream ifs;

	ifs.open("person.txt", ios::in | ios::binary);

	if (!ifs.is_open())
	{
		cout << "Failed to open the file" << endl;
		return;
	}

	Person p;
	ifs.read((char*)&p, sizeof(Person));

	cout << "Name: " << p.m_Name << " Age: " << p.m_Age;

	ifs.close();
}

int main()
{
	test01();

	return 0;
}