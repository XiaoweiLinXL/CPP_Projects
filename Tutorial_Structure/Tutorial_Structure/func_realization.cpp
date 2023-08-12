#include "func_declaration.h"

void printStuVal(struct Student stu)
{
	cout << "Value" << endl;
	cout << "Name: " << stu.name << " Age: " << stu.age << " Score: " << stu.score << endl;
	
}

void printStuAdr(struct Student* stu)
{
	cout << "Address" << endl;
	cout << "Name: " << stu->name << " Age: " << stu->age << " Score: " << stu->score << endl;
}

void inputInfo(struct Teacher* teachers, int len, int num_stu)
{
	cout << "----------INPUTING----------" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << "Input teacher " << i << "'s name: ";
		cin >> teachers[i].name;
		for (int j = 0; j < num_stu; j++)
		{
			cout << "\t" << "Input student " << j << "'s name: ";
			cin >> teachers[i].stus[j].name;
			cout << "\t" << "Input student " << j << "'s score: ";
			cin >> teachers[i].stus[j].score;
		}
	}
	cout << endl;
}

void outputInfo(const struct Teacher* teachers, int len, int num_stu)
{
	cout << "----------PRINTING----------" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << "Input teacher " << i << "'s name: " << teachers[i].name << endl;
		for (int j = 0; j < num_stu; j++)
		{
			cout << "\t" << "Input student " << j << "'s name: " << teachers[i].stus[j].name << endl;
			cout << "\t" << "Input student " << j << "'s score: " << teachers[i].stus[j].score << endl;
		}
	}
}

void sortStruct(struct Champ* champs, int len)
{
	for (int times = len - 1; times > 0; times--) 
	{
		for (int index = 0; index < times; index++)
		{
			if (champs[index].age > champs[index+1].age)
			{
				struct Champ temp = champs[index];
				champs[index] = champs[index + 1];
				champs[index + 1] = temp;
			}
		}
	}
}