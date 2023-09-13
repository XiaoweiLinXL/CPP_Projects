#include <iostream>
using namespace std;

class Animal
{
public:

	virtual void speak()
	{
		cout << "Speaking..." << endl;
	}
};

class Cat :public Animal
{
public:
	void speak()
	{
		cout << "Meow..." << endl;
	}
};

class Dog :public Animal
{
public:
	void speak()
	{
		cout << "Woof..." << endl;
	}
};

void doSpeak(Animal& ani)
{
	ani.speak();
}

void test01()
{
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}

int main()
{
	test01();
	return 0;
}