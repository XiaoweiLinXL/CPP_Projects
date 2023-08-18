#include <iostream>
using namespace std;

// don't have two classes with the same name
class Person1
{
	// member variable name should be different from the parameter
private:
	string name;
	int m_age;
	string partner;

public:
	void setName()
	{
		cout << "Input Name: " << endl;
		cin >> name;
	}

	void printName()
	{
		cout << "Name: " << name << endl;
	}

	void printAge()
	{
		cout << "Age: " << m_age << endl;
	}

	void setAge(int age)
	{
		if (age < 0 || age > 150)
		{
			cout << "Invalid!" << endl;
			return;
		}
		else
		{
			cout << "Set!" << endl;
			m_age = age;
		}
	}

	void setPartner()
	{
		cout << "Input Partner: " << endl;
		cin >> partner;
	}

};

int main()
{
	Person1 p;

	p.setName();
	p.printName();
	p.printAge();
	p.setPartner();
	p.setAge(10);
	p.printAge();

	return 0;
}