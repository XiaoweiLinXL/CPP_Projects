#include "circle.h"

void Circle::setR()
{
	cout << "Input R: " << endl;
	cin >> m_r;
}

void Circle::setCenter(Point& p)
{
	center = p;
}

void Circle::getPointrelation(Point& p)
{
	int distance = pow(p.getX() - center.getX(), 2) + pow(p.getY() - center.getY(), 2);

	if (distance == pow(m_r, 2))
	{
		cout << "On the circle!" << endl;
	}
	else if (distance > pow(m_r, 2))
	{
		cout << "Outside the circle!" << endl;
	}
	else if (distance < pow(m_r, 2))
	{
		cout << "Inside the circle!" << endl;
	}
}
