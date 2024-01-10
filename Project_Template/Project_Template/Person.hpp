#pragma once
#include <iostream>

template<typename T1, typename T2>
class Person
{
public:
	Person(T1 name, T2 age);

	void showPerson();


	T1 m_Name;
	T2 m_Age;
};

template<typename T1, typename T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}

template<typename T1, typename T2>
void Person<T1, T2>::showPerson()
{
	std::cout << this->m_Name << std::endl;
	std::cout << this->m_Age << std::endl;
}