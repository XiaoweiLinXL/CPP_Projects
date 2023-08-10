#include <iostream>
using std::string;

struct Student
{
	string name;
	int age;
	int score;
}s3;

int main1()
{
	struct Student s1;
	s1.name = "William";
	s1.age = 24;
	s1.score = 6;

	std::cout << "Name: " << s1.name << " Age: " << s1.age << " Score: " << s1.score << std::endl;

	struct Student s2 = { "Yilly",24,6 };
	std::cout << "Name: " << s2.name << " Age: " << s2.age << " Score: " << s2.score << std::endl;

	s3 = { "Caesar", 24, 6 };
	std::cout << "Name: " << s3.name << " Age: " << s3.age << " Score: " << s3.score << std::endl;

	system("pause");

	return 0;
}