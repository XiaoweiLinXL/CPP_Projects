#include <iostream>
using namespace std;

#define PI 3.14

// default permission for class is private
// default permission for struct is public

class Circle
{
public:
	double m_radius;

	double calculatePerimeter()
	{
		//cout << "Calculate" << endl;

		double perimeter = 2 * PI * m_radius;

		cout << perimeter << endl;

		//cout << "Calculated" << endl;

		return perimeter;
	}
};

class Student
{
public:
	string name;
	string id;

	void setName()
	{
		cout << "Input name: " << endl;
		cin >> name;
	}

	void setID()
	{
		cout << "Input ID: " << endl;
		cin >> id;
	}

	void printInfo()
	{
		cout << "Name: " << name << endl;
		cout << "ID: " << id << endl;
	}
};

//class Person
//{
//public:
//	string name;
//	
//protected:
//	string car;
//
//private:
//	int password;
//
//public:
//	void setInfo()
//	{
//		name = "Xiaowei";
//		car = "Porsche";
//		password = 123456;
//	}
//
//	void printInfo()
//	{
//		cout << "Name: " << name << ", Car: " << car << ", Password: " << password << endl;;
//	}
//};

int main1()
{
	Circle c1;
	c1.m_radius = 10;

	c1.calculatePerimeter();

	cout << sizeof(c1) << endl;

	Student s1;
	//s1.setName();
	//s1.setID();
	//cout << s1.id << endl;
	//s1.printInfo();

	//Person p1;
	//p1.setInfo();
	//p1.printInfo();

	//p1.name = "Yilan";
	//p1.printInfo();


	return 0;
}