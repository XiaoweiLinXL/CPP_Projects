//#include <iostream>
//using namespace std;
//
//class Building
//{
//	// goodFriend() is a friend func, which can access the private variables.
//	friend void goodFriend(Building& building);
//
//public:
//	Building()
//	{
//		m_LivingRoom = "Living Room";
//		m_Bedroom = "Bedroom";
//	}
//
//	string m_LivingRoom;
//
//private:
//	string m_Bedroom;
//};
// 
//void goodFriend(Building& building)
//{
//	cout << building.m_LivingRoom << endl;
//	cout << building.m_Bedroom << endl;
//}
//
//void test01()
//{
//	Building building;
//	goodFriend(building);
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}