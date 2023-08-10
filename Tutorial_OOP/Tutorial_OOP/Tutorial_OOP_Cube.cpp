#include<iostream>
using std::cout;
using std::endl;
using std::string;

class Cube
{
private:
	int m_L;
	int m_W;
	int m_H;

public:
	void setL(int L)
	{
		m_L = L;
	}

	void setW(int W)
	{
		m_W = W;
	}

	void setH(int H)
	{
		m_H = H;
	}

	int getL()
	{
		return m_L;
	}

	int getW()
	{
		return m_W;
	}

	int getH()
	{
		return m_H;
	}

	int getSurface()
	{
		return 2 * (m_H * m_L + m_H * m_W + m_L * m_W);
	}

	int getVolume()
	{
		return m_H * m_W * m_L;
	}

	void compareCubeinClass(Cube &c)
	{
		if (c.getH() == m_H && c.getL() == m_L && c.getW() == m_W)
		{
			cout << "They are the same cube!" << endl;
		}
		else
		{
			cout << "They are not the same!" << endl;
		}
	}

	//void compareCube(Cube& c1, Cube& c2)// Reference, so that there is no copy
	//{
	//	if (c1.getL() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW())
	//	{
	//		cout << "They are the same cube!" << endl;
	//	}
	//	else
	//	{
	//		cout << "They are not the same!" << endl;
	//	}
	//}
};

void compareCube(Cube& c1, Cube& c2)// Reference, so that there is no copy
{
	if (c1.getL() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW())
	{
		cout << "They are the same cube!" << endl;
	}
	else
	{
		cout << "They are not the same!" << endl;
	}
}

int main3()
{
	Cube c1;

	c1.setH(10);
	c1.setW(10);
	c1.setL(10);

	Cube c2;

	c2.setH(10);
	c2.setW(10);
	c2.setL(10);
	

	compareCube(c1, c2);

	c1.compareCubeinClass(c2);

	system("pause");

	return 0;
}