#include "func_declaration.h"
#include "struct_declaration.h"

int main()
{
	struct Champ champs[5] =
	{
		{"A", 18},
		{"B", 20},
		{"C", 3},
		{"D", 56},
		{"E", 90}
	};

	int len = sizeof(champs) / sizeof(champs[0]);

	for (int i = 0; i < len; i++)
	{
		cout << "Name: " << champs[i].name << " Age: " << champs[i].age << endl;
	}

	sortStruct(champs, len);

	for (int i = 0; i < len; i++)
	{
		cout << "Name: " << champs[i].name << " Age: " << champs[i].age << endl;
	}

	return 0;
}