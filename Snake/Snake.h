#pragma once
#include "point.h"
#include <vector>

class Snake
{
private:
	int length;
	std::vector<point> pointVec;

public:
	Snake();
	~Snake();
	void add_length(int, int);
	void change_position(int, int, int);
	int getLength() { return pointVec.size(); }
	point getNode(int);
};

