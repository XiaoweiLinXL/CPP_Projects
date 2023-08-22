#pragma once
#include <iostream>
using namespace std;

class Person
{
public:
	Person();

	Person(int a, int height);

	Person(const Person& p);

	~Person();

	void printAge();

	void printHeight();
	
private:
	int m_age;

	// I want to create a variable on the heap. If this is the case, we need to provide a copy constructor to avoid shallow copy.
	int* m_height;
};