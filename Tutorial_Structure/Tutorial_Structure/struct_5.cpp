#include "func_declaration.h"
#include "struct_declaration.h"

int main5()
{
	struct Teacher teachers[3];
	int num_tea = sizeof(teachers) / sizeof(teachers[0]);
	int num_stu = sizeof(teachers[0].stus) / sizeof(teachers[0].stus[0]);
	cout << "# of teachers: " << num_tea << endl;
	cout << "# of students: " << num_stu << endl;

	inputInfo(teachers, num_tea, num_stu);
	outputInfo(teachers, num_tea, num_stu);

	return 0;
}