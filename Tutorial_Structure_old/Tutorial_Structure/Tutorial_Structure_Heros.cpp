#include<iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;

struct Hero
{
	string name;
	int age;
	string sex;
};

void sort(struct Hero* h, int len)
{
	for (int i = len - 1; i >= 0; i--)
	{
		for (int j = 0; j <= i - 1; j++)
		{
			if (h->age > (h + 1)->age)
			{
				struct Hero temp = *h;
				*h = *(h+1);
				*(h + 1) = temp;
			}
			h++;
		}
		h = h - i;
	}
}

void printHeros(struct Hero* h, int len)
{
	for (int i = 0; i <= len - 1; i++)
	{
		cout << "Name: " << h->name << " Age: " << h->age << " Sex: " << h->sex << endl;
		h++;
	}
}

int main()
{
	struct Hero hArray[5] = { {"a", 23, "m"}, 
							{"b", 22, "m"}, 
							{"c", 20, "m"}, 
							{"d", 21, "m"}, 
							{"e", 19, "f"} };

	int len = sizeof(hArray) / sizeof(hArray[0]);

	printHeros(&hArray[0], len);

	sort(&hArray[0], len);

	printHeros(&hArray[0], len);

	system("pause");

	return 0;
}