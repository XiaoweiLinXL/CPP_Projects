#include <iostream>
using namespace std;

class Cube
{
private:
	int m_l;
	int m_w;
	int m_h;

public:
	void setParams()
	{
		cout << "Input Length: " << endl;
		cin >> m_l;
		cout << "Input Width: " << endl;
		cin >> m_w;
		cout << "Input Height: " << endl;
		cin >> m_h;
	}

	void getParams()
	{
		cout << "Length: " << m_l << " Width: " << m_w << " Height: " << m_h << endl;
	}

	int getL()
	{
		return m_l;
	}

	int getW()
	{
		return m_w;
	}

	int getH()
	{
		return m_h;
	}

	int getVolumn()
	{
		return m_l * m_w * m_h;
	}

	int getArea()
	{
		return 2 * (m_l * m_w + m_l * m_h + m_w * m_h);
	}

	bool isSame(Cube &c)
	{
		if (m_l == c.getL() && m_w == c.getW() && m_h == c.getH())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

bool isSame(Cube& c1, Cube& c2)
{
	if (c1.getW() == c2.getW() && c1.getL() == c2.getL() && c1.getH() == c2.getH())
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main3()
{
	Cube c1;
	c1.setParams();
	c1.getParams();
	cout << "Area: " << c1.getArea() << endl;
	cout << "Volumn: " << c1.getVolumn() << endl;

	Cube c2;
	c2.setParams();
	c2.getParams();
	cout << "Area: " << c2.getArea() << endl;
	cout << "Volumn: " << c2.getVolumn() << endl;

	if (isSame(c1, c2))
	{
		cout << "Same cube!" << endl;
	}
	else
	{
		cout << "Different cube!" << endl;
	}

	if (c1.isSame(c2))
	{
		cout << "Same cube by class!" << endl;
	}
	else
	{
		cout << "Different cube by class!" << endl;
	}

	return 0;
}