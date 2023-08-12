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

struct Teacher
{
	int id;
	string name;
	int age;
	struct Student stu[3];
};

int main4()
{
	Teacher t = { 21947072, "Presbo", 30, {{"William",24,6}, {}, {}} };

	cout << t.stu[0].name << endl;

	system("pause");

	return 0;
}