//#include <iostream>
//
//class MakingDrinks
//{
//public:
//	void boilingwater()
//	{
//		std::cout << "Boiling water" << std::endl;
//	}
//
//	virtual void brewing() = 0;
//
//	void fillingcups()
//	{
//		std::cout << "Filling cups" << std::endl;
//	}
//
//	virtual void addons() = 0;
//
//	void MakingDrink()
//	{
//		boilingwater();
//		brewing();
//		fillingcups();
//		addons();
//	}
//};
//
//class MakingCoffee :public MakingDrinks
//{
//public:
//	void brewing()
//	{
//		std::cout << "Brewing coffee" << std::endl;
//	}
//
//	void addons()
//	{
//		std::cout << "Add sugar and milk" << std::endl;
//	}
//};
//
//class MakingTea :public MakingDrinks
//{
//public:
//	void brewing()
//	{
//		std::cout << "Brewing tea" << std::endl;
//	}
//
//	void addons()
//	{
//		std::cout << "Add wolfberry" << std::endl;
//	}
//};
//
//void doWork(MakingDrinks* abs)
//{
//	abs->MakingDrink();
//
//	// Delete the memory on heap
//	delete abs;
//}
//
//void test01()
//{
//	doWork(new MakingCoffee());
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}