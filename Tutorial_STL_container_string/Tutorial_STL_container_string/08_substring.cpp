#include <iostream>
using namespace std;

void test01()
{
	string str1("abcdefg");

	cout << str1.substr(1, 3) << endl;
}

void test02()
{
	string email = "williamxlca@gmail.com";

	int index = email.find('@');

	string username = email.substr(0, index);

	cout << username << endl;
}

int main()
{
	test02();

	return 0;
}