#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void test01()
{
	// Create an instance
	ifstream ifs;

	// Open the file
	ifs.open("test.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "File open failed" << endl;
		return;
	}

	// Read the data
	//// 1.
	//char buf[1024] = {};

	//while (ifs >> buf)
	//{
	//	cout << buf << endl;
	//}

	//// 2.
	//char buf[1024] = {};

	//while (ifs.getline(buf, sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}

	//// 3. getline function needs to include <string>
	//string buf;
	//while (getline(ifs, buf))
	//{
	//	cout << buf << endl;
	//}

	// 4.
	char c;
	while ( (c=ifs.get()) != EOF)
	{
		cout << c;
	}

	ifs.close();


}

int main()
{
	test01();

	return 0;
}