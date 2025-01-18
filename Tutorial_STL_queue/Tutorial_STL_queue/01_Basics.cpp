#include <iostream>
#include <queue>
using namespace std;

// First in first out
// Only the front and back can be accessed, thus no iterator for this container

class Person
{
public:
	string m_Name;
	int m_Age;

	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
};

void test01()
{
	queue<Person> q;

	Person p1("Xiaowei", 27);
	Person p2("Yilan", 26);
	Person p3("William", 27);
	Person p4("Caesar", 24);

	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	cout << q.size() << endl;

	while (!q.empty())
	{
		cout << "Front: " << "Name: " << q.front().m_Name << " Age: " << q.front().m_Age << endl;

		cout << "Back: " << "Name: " << q.back().m_Name << " Age: " << q.back().m_Age << endl;

		q.pop();
	}

	cout << q.size() << endl;
}

int main()
{
	test01();

	return 0;
}