#include <iostream>
using namespace std;

class Building;


class GoodFriend
{
public:
	GoodFriend();

	void visit_as_friend();
	void visit_as_unknown();

	Building* m_Building;
};

class Building
{
	// The friend member function should be defined before the friend class is defined  
	friend void GoodFriend::visit_as_friend();
public:
	Building();

	string m_LivingRoom;

private:
	string m_Bedroom;
};

Building::Building()
{
	m_LivingRoom = "Living Room";
	m_Bedroom = "Bedroom";
}

GoodFriend::GoodFriend()
{
	m_Building = new Building;
}

void GoodFriend::visit_as_friend()
{
	cout << "Visit as a friend... " << m_Building->m_LivingRoom << endl;

	cout << "Visit as a friend... " << m_Building->m_Bedroom << endl;
}

void GoodFriend::visit_as_unknown()
{
	cout << "Visit as an unknown... " << m_Building->m_LivingRoom << endl;

	// cout << "Visit as an unknown... " << m_Building->m_Bedroom << endl; // a non-friend function cannot access the private variables
}

void test01()
{
	GoodFriend goodFriend;
	goodFriend.visit_as_friend();
	goodFriend.visit_as_unknown();
}

int main()
{
	test01();

	return 0;
} 