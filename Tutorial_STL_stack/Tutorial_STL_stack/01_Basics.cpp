#include <iostream>
#include <stack>
using namespace std;

void test01()
{
	stack<int> stk;

	stk.push(10);
	stk.push(20);
	stk.push(30);
	stk.push(40);

	cout << stk.size() << endl;

	while (	!stk.empty())
	{
		cout << stk.top() << endl;
		stk.pop();
	}

	cout << stk.size() << endl;
}


int main()
{
	test01();

	return 0;
}