#include "struct_declaration.h"

int main2()
{
	struct Student students[] =
	{
		{"Xiaowei", 18, 100},
		{"Yilan", 17, 100},
		{"O.o", 3, 77}
	};

	struct Student student = { "XL", 19, 100 };

	struct Student* p1 = students;
	struct Student* p2 = &student;

	cout << students << endl;
	cout << p1[1].age << endl;

	cout << student.age << endl;

	return 0;
}