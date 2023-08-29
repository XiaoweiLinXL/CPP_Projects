//#include <iostream>
//using namespace std;
//
//class Building
//{
//	friend class goodFriend;
//public:
//	Building();
//
//	string m_LivingRoom;
//
//private:
//	string m_Bedroom;
//};
//
//class goodFriend
//{
//public:
//	Building* m_Building;
//
//	goodFriend();
//
//	void visit();
//};
//
//Building::Building()
//{
//	m_LivingRoom = "Living room!";
//	m_Bedroom = "Bedroom!";
//}
//
//goodFriend::goodFriend()
//{
//	m_Building = new Building;
//}
//
//void goodFriend::visit()
//{
//	cout << "Visiting..." << m_Building->m_LivingRoom << endl;
//	cout << "Visiting..." << m_Building->m_Bedroom << endl;
//}
//
//void test01()
//{
//	goodFriend good_friend;
//	good_friend.visit();
//
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}