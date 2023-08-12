#include "struct_declaration.h"

int main3()
{
	struct Teacher t = { 777, "Xiaowei", 39, {{"Xiaowei", 18, 100}, {"Yilan", 17, 100}, {"O.o", 3, 77}} };

	cout << t.stus[3].name << endl;

	return 0;
}