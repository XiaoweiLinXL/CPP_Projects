#pragma once
#include <iostream>
using namespace std;

struct Student
{
	string name;
	int age;
	int score;
};

struct Teacher {
	int id;
	string name;
	int age;
	struct Student stus[5];
};

struct Champ {
	string name;
	int age;
};
