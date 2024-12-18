#pragma once
#include<iostream>
#include "point.h"
using std::cout;
using std::endl;
using std::string;

class Circle
{
private:
	int coc_X;
	int coc_Y;
	int radius;

public:
	void setX(int x);

	void setY(int y);

	void setR(int r);

	void comparePoint(Point& p);
};
