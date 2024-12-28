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

	MyArray(const MyArray<T>& array)
	{
		cout << "copy constructor" << endl;
		this->m_Capacity = array.m_Capacity;
		this->m_Size = array.m_Size;
		this->pAddress = new T[this->m_Capacity];

		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = array.pAddress[i];
		}
	}

	MyArray<T>& operator=(const MyArray<T>& array) 
	{
		cout << "operator= overload" << endl;
		// Delete the old data
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		this->m_Capacity = array.m_Capacity;
		this->m_Size = array.m_Size;
		this->pAddress = new T[this->m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = array.pAddress[i];
		}

		return *this;
	}

	void addElement(const T& newElement) // Add an element from the end of the array
	{
		// Check if the limit is hit
		if (this->m_Capacity == this->m_Size)
		{
			cout << "The array is full!" << endl;
		}
		else
		{
			// Increase the size
			this->pAddress[m_Size] = newElement;
			this->m_Size += 1;
		}
	}

	void deleteElement() // Delete the last element
	{
		// Check if the array is empty
		if (this->m_Size == 0)
		{
			cout << "The array is empty!" << endl;
		}
		else
		{
			this->m_Size -= 1; // Cannot access the last element
		}
	}

	T& operator[](int index)
	{
		if (index > this->m_Size)
		{
			cout << "Index overflow!" << endl;
		}
		return this->pAddress[index];
	}

	int getCapacity()
	{
		return this->m_Capacity;
	}

	int getSize()
	{
		return this->m_Size;
	}

	void printArray()
	{
		for (int i = 0; i < this->m_Size; i++)
		{
			cout << this->pAddress[i] << " " << endl;
		}
	}

	~MyArray()
	{
		cout << "Destructor" << endl;
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}
};
