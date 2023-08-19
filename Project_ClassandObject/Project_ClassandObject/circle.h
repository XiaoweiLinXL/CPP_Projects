#pragma once
#include "point.h"

class Circle
{
private:
	int m_r;
	Point center;

public:
	void setR();

	void setCenter(Point& p);

	void getPointrelation(Point& p);
};