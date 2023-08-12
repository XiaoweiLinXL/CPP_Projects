#include<iostream>
using std::string;
using std::cout;
using std::endl;

struct Student
{
	string name;
	int age;
	int score;
};

int main3()
{
	Student s1 = {"William", 24, 6};

	Student* p = &s1;

	cout << p->name << endl;
	//cout << (int)p << endl;

	system("pause");

	return 0;
}