//#include <iostream>
//#include <list>
//#include <string>
//using namespace std;
//
//class Person
//{
//public:
//	string m_Name;
//	int m_Age;
//	int m_Height;
//	
//
//	Person(string name, int age, int height)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//		this->m_Height = height;
//	}
//};
//
//bool myCompare(Person p1, Person p2)
//{
//	if (p1.m_Age == p1.m_Age)
//	{
//		return p1.m_Height < p2.m_Height;
//	}
//	else
//	{
//		return p1.m_Age > p2.m_Age;
//	}
//}
//
//void printList(list<Person> l)
//{
//	for (list<Person>::iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout << "Name: " << (*it).m_Name << " Age: " << (*it).m_Age << " Height: " << (*it).m_Height << endl;
//	}
//}
//
//void test01()
//{
//	list<Person> l1;
//
//	Person p1("Xiaowei", 27, 182);
//	Person p2("Yilan", 26, 163);
//	Person p3("William", 27, 182);
//
//	l1.push_back(p1);
//	l1.push_back(p2);
//	l1.push_back(p3);
//
//	printList(l1);
//
//	l1.sort(myCompare);
//
//	cout << "After sorting: " << endl;
//
//	printList(l1);
//}
//
//int main()
//{
//	cout << stoi("");
//
//	return 0;
//}