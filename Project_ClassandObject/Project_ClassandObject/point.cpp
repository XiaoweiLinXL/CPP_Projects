#include "point.h"

void Point::setPoint()
{
	cout << "Input X: " << endl;
	cin >> m_x;
	cout << "Input Y: " << endl;
	cin >> m_y;
}

int Point::getX()
{
	return m_x;
}

int Point::getY()
{
	return m_y;
}