//#include<iostream>
//using std::cout;
//using std::endl;
//using std::cin;
//using std::string;
//
//#define PI 3.14
//
//class Circle
//{
//	// Access Specifiers
//public:
//	
//	// Attributes
//	int radius;
//
//	// Behaviours
//	// Return the perimeter
//	double calPeri()
//	{
//		return 2 * PI * radius;
//	}
//};
//
//class Student
//{
//public:
//	string name;
//	string number;
//
//	void inputInfo()
//	{
//		cout << "Input the name: ";
//		cin >> name;
//		cout << &name << endl;
//
//		cout << "Input the number: ";
//		cin >> number;
//	}
//
//	void outputInfo()
//	{
//		cout << "Name: " << name << " Number: " << number << endl;
//	}
//
//};
//
//class Person1
//{
//public:
//	string m_Name;
//protected:
//	string m_Car;
//private:
//	string m_Password;
//
//public:
//	// Accessible in the class
//	void func()
//	{
//		m_Name = "William";
//		m_Car = "Jaguar";
//		m_Password = "123456";
//	}
//};
//
//struct S1
//{
//	void print()
//	{
//		cout << "Hello" << endl;
//	}
//};
//
//int main1()
//{
//	//// Create an object(Instantiate)
//	//Circle cl;
//
//	////cout << "The perimeter of the circle is: " << cl.calPeri() << endl;
//
//	//// Assign the attributes
//	//cl.radius = 10;
//
//	//cout << "The perimeter of the circle is: " << cl.calPeri() << endl;
//
//	Student s;
//
//	s.inputInfo();
//
//	s.outputInfo();
//
//	//cout << (int)&s << endl;
//	//cout << (int)&s.name << endl;
//	//cout << (int)&s.number << endl;
//	//cout << sizeof(string) << endl;
//
//	//s.outputInfo();
//
//	//// Instantiate
//	//Person1 p;
//
//	//cout << p.m_Name << endl;
//
//	//// Public Accessible outside the class
//	//p.m_Name = "Caesar";
//
//	//// Protected Inaccessible outside the class
//	//p.m_Car = "Benz";
//
//	//// Private Inaccessible outside the class
//	//p.m_Password = "Benz";
//
//	system("pause");
//
//	return 0;
//}