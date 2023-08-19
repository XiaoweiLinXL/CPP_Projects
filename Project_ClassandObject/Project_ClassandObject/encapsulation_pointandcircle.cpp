#include "point.h"
#include "circle.h"

int main()
{
	Point p;
	p.setPoint();

	Point center;
	center.setPoint();

	Circle c;
	c.setR();
	c.setCenter(center);
	c.getPointrelation(p);

	return 0;
}