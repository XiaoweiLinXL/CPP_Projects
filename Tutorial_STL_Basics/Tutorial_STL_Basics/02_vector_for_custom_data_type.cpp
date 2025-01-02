//#include <iostream>
//using namespace std;
//#include <vector>
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//void test01()
//{
//	vector<Person> v;
//
//	Person p1("Xiaowei", 27);
//	Person p2("Yilan", 26);
//	Person p3("William", 27);
//	Person p4("Caesar", 25);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "Name: " << (*it).m_Name << " Age: " << (*it).m_Age << endl;
//		cout << "Name: " << it->m_Name << " Age: " << it->m_Age << endl;
//	}
//}
//
//void test02()
//{
//	vector<Person*> v;
//
//	Person p1("Xiaowei", 27);
//	Person p2("Yilan", 26);
//	Person p3("William", 27);
//	Person p4("Caesar", 25);
//
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "Name: " << (**it).m_Name << " Age: " << (**it).m_Age << endl;
//		cout << "Name: " << (*it)->m_Name << " Age: " << (*it)->m_Age << endl;
//	}
//}
//
//int main()
//{
//	test02();
//
//	system("pause");
//
//	return 0;
//}