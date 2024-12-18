#include"circle.h"


void Circle::setX(int x)
{
	coc_X = x;
}

void Circle::setY(int y)
{
	coc_Y = y;
}

void Circle::setR(int r)
{
	radius = r;
}

void Circle::comparePoint(Point& p)
{
	//cout << (coc_X - p.getX())*(coc_X - p.getX()) + (coc_Y - p.getY())*(coc_Y - p.getY())) << endl;
	if ((coc_X - p.getX()) * (coc_X - p.getX()) + (coc_Y - p.getY()) * (coc_Y - p.getY()) == (radius * radius))
	{
		cout << "The point is on the circle!" << endl;
	}
	else if ((coc_X - p.getX()) * (coc_X - p.getX()) + (coc_Y - p.getY()) * (coc_Y - p.getY()) > (radius * radius))
	{
		cout << "The point is outside the circle!" << endl;
	}
	else
	{
		cout << "The point is in the circle!" << endl;
	}
}