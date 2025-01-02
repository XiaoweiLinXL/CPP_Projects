#include <iostream>
#include <deque>
using namespace std;
#include <algorithm>

template<class t>
void printcontainer(const t& c)
{
	for (typename t::const_iterator it = c.begin(); it != c.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int> d1;

	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);
	d1.push_front(10);
	d1.push_front(20);
	d1.push_front(30);

	printcontainer(d1);

	// For a container whose iterator supports random access, we can use sort() to sort the container's elements.
	// Such as string, vector

	sort(d1.begin(), d1.end());

	printcontainer(d1);

	string str1("caedfgb");
	sort(str1.begin(), str1.end());
	cout << str1 << endl;
}

int main()
{
	test01();

	return 0;
}