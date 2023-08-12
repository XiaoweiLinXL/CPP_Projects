#include "struct_declaration.h"

int main1()
{
	struct Student s1 = {"Xiaowei", 6, 100};

	cout << "Name: " << s1.name << " Age: " << s1.age << " Score: " << s1.score << endl;

	struct Student s2 = { "Xiaowei", 25, 100 };

	return 0;
}