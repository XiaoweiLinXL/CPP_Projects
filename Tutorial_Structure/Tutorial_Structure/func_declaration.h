#pragma once
#include <iostream>
#include "struct_declaration.h"
using namespace std;

void printStuVal(struct Student stu);

void printStuAdr(struct Student* stu);

void inputInfo(struct Teacher* teachers, int len, int num_stu);

void outputInfo(const struct Teacher* teachers, int len, int num_stu);

void sortStruct(struct Champ* champs, int len);