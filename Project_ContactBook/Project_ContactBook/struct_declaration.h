#pragma once
#include <iostream>
using namespace std;

#define MAX 1000

struct Person 
{
	string name;
	string sex;
	int age;
	string phone;
	string address;
};

struct Book
{
	struct Person personArray[MAX];
	int size;
};