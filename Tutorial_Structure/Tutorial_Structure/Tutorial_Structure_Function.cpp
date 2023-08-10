#include<iostream>
using std::string;
using std::cout;
using std::endl;
using std::cin;

struct Student
{
	string name;
	//int age;
	int score;
};

struct Teacher
{
	string name;
	struct Student students[5];
};

void printStudent1(struct Student s)
{
	cout << "1" << endl;
	cout << &s << endl;
	cout << s.name << endl;
	//cout << s.age << endl;
	cout << s.score << endl;
}

void printStudent2(const struct Student* s)
{
	cout << "2" << endl;
	cout << s << endl;
	cout << (*s).name << endl;
	//cout << s->age << endl;
	cout << s->score << endl;
}

void inputTeacher(struct Teacher* t, int len)
{
	for (int i = 0; i <= len - 1; i++)
	{
		cout << "Input the " << i + 1 << " teacher's name: ";
		cin >> t->name;
		t++;
	}
}

void inputStudent(struct Teacher* t, int len)
{
	for (int i = 0; i <= len - 1; i++)
	{
		for (int j = 0; j <= 4; j++)
		{
			cout << "Input the " << i + 1 << " teacher's " << j + 1 << " student's name: ";
			cin >> t->students[j].name;
		}
		t++;
	}

	t = t - 3;

	for (int i = 0; i <= len - 1; i++)
	{
		for (int j = 0; j <= 4; j++)
		{
			cout << "Input the " << i + 1 << " teacher's " << j + 1 << " student's score: ";
			cin >> t->students[j].score;
		}
		t++;
	}

	//for (int i = 0; i <= 2; i++)
	//{
	//	for (int j = 0; j <= 4; j++)
	//	{
	//		cout << "Input the " << i << " teacher's " << j + 1 << " student's score: ";
	//		cin >> t->students[j].score;
	//	}
	//}
}

void outputAll(struct Teacher* t)
{
	for (int i = 0; i <= 2; i++)
	{
		cout << "Teacher's name: " << t->name << endl;
		for (int j = 0; j <= 4; j++)
		{
			cout << "\t" << t->name << "'s student " << t->students[j].name << "'s score is " << t->students[j].score << endl;
		}
		t++;
	}
}

int main5()
{
	struct Teacher teachers[3];

	int len = sizeof(teachers) / sizeof(teachers[0]);
	
	inputTeacher(&teachers[0], len);

	inputStudent(&teachers[0], len);

	outputAll(&teachers[0]);

	system("pause");

	return 0;
}