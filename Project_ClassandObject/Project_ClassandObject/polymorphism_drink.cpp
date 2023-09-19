//#include <iostream>
//using namespace std;
//
//class makeDrink
//{
//public:
//	virtual void boilWater() = 0;
//	virtual void brew() = 0;
//	virtual void pour() = 0;
//	virtual void addIngredient() = 0;
//	
//	void wholeProcess()
//	{
//		boilWater();
//		brew();
//		pour();
//		addIngredient();
//	}
//};
//
//class makeCoffee : public makeDrink
//{
//public:
//	void boilWater()
//	{
//		cout << "Evian" << endl;
//	}
//
//	void brew()
//	{
//		cout << "Coffee in" << endl;
//	}
//
//	void pour()
//	{
//		cout << "pour" << endl;
//	}
//
//	void addIngredient()
//	{
//		cout << "Sugar and Milk" << endl;
//	}
//};
//
//class makeTea : public makeDrink
//{
//public:
//	void boilWater()
//	{
//		cout << "Nongfu" << endl;
//	}
//
//	void brew()
//	{
//		cout << "Tea leaf in" << endl;
//	}
//
//	void pour()
//	{
//		cout << "pour" << endl;
//	}
//
//	void addIngredient()
//	{
//		cout << "Lemon" << endl;
//	}
//};
//
//void doWork(makeDrink* abs)
//{
//	abs->wholeProcess();
//	delete abs;
//}
//
//void test01()
//{
//	doWork(new makeCoffee);
//	doWork(new makeTea);
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}#include <iostream>
//using namespace std;
//
//class makeDrink
//{
//public:
//	virtual void boilWater() = 0;
//	virtual void brew() = 0;
//	virtual void pour() = 0;
//	virtual void addIngredient() = 0;
//	
//	void wholeProcess()
//	{
//		boilWater();
//		brew();
//		pour();
//		addIngredient();
//	}
//};
//
//class makeCoffee : public makeDrink
//{
//public:
//	void boilWater()
//	{
//		cout << "Evian" << endl;
//	}
//
//	void brew()
//	{
//		cout << "Coffee in" << endl;
//	}
//
//	void pour()
//	{
//		cout << "pour" << endl;
//	}
//
//	void addIngredient()
//	{
//		cout << "Sugar and Milk" << endl;
//	}
//};
//
//class makeTea : public makeDrink
//{
//public:
//	void boilWater()
//	{
//		cout << "Nongfu" << endl;
//	}
//
//	void brew()
//	{
//		cout << "Tea leaf in" << endl;
//	}
//
//	void pour()
//	{
//		cout << "pour" << endl;
//	}
//
//	void addIngredient()
//	{
//		cout << "Lemon" << endl;
//	}
//};
//
//void doWork(makeDrink* abs)
//{
//	abs->wholeProcess();
//	delete abs;
//}
//
//void test01()
//{
//	doWork(new makeCoffee);
//	doWork(new makeTea);
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}