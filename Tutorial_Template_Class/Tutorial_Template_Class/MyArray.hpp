#pragma once
#include <iostream>
using namespace std;

template<typename T>
class MyArray
{
private:
	T* pAddress;
	int m_Capacity;
	int m_Size;

public:
	MyArray(int capacity)
	{
		cout << "constructor with parameter" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}
};
