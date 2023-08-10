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

int main2()
{
	Student array[] = { {"William", 24, 6}, {"Caesar", 24, 6}, {} };

	Student* p = &array[0];

	cout << sizeof(string) << endl;



	system("pause");

	return 0;
}