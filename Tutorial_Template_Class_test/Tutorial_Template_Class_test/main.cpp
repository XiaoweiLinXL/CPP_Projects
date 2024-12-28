#include "MyArray.hpp"

class Person
{
public:
	Person() {};
	Person(string name, int age) : m_Name(name), m_Age(age)
	{
	};

	string m_Name;
	int m_Age;
};

void test01()
{
	MyArray<int> arr1(5);

	for (int i = 0; i < arr1.getCapacity(); i++)
	{
		arr1.addElement(i);
	}
	cout << arr1.getCapacity() << endl;
	
	MyArray<int> arr2(arr1);
	arr2.printArray();

	arr2.deleteElement();
	
	arr2.printArray();

	cout << arr2.getSize() << endl;
}

void test02()
{
	MyArray<Person> arr(10);

	Person p1("Xiaowei", 27);
	Person p2("Yilan", 26);
	Person p3("William", 27);
	Person p4("Caesar", 25);

	arr.addElement(p1);
	arr.addElement(p2);
	arr.addElement(p3);
	arr.addElement(p4);

	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "Name: " << arr[i].m_Name << " Age: " << arr[i].m_Age << endl;
	}

	cout << arr.getCapacity() << endl;
	cout << arr.getSize() << endl;
}

int main()
{
	test02();

	return 0;
}