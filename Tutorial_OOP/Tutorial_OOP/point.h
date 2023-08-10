#pragma once // Prevent repititive includsion
#include<iostream>
using std::cout;
using std::endl;
using std::string;

class Point
{
private:
	int m_X;
	int m_Y;

public:
	void setX(int x);

	void setY(int y);

	int getX();

	int getY();
};
