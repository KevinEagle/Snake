#include "pch.h"
#include "Snake.h"
#include "point.h"
Snake::Snake()
{
	length = 1;
}
Snake::~Snake()
{
	length = 0;
	pointVec.clear();
}
void Snake::add_length(int x_in, int y_in)
{
	pointVec.push_back(point(x_in, y_in));
	length++;
}
void Snake::change_position(int x_in, int y_in, int node_in)
{
	if (node_in > pointVec.size())
	{
		return;
	}
	pointVec[node_in].x = x_in;
	pointVec[node_in].y = y_in;
}
point Snake::getNode(int node_in)
{
	if (node_in > pointVec.size())
	{
		return pointVec[pointVec.size()];
	}
	return pointVec[node_in];
}