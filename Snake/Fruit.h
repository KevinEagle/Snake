#pragma once
#include "point.h"
#include <cstdlib>
#include <random>
class Fruit
{
private:
	int points;
	point locFruit;

public:
	Fruit();
	~Fruit();
	enum fruits
	{
		APPLE, CHERRY, GRAPE, MANGO, BANAN
	};
	void add_position(int, int);
	point getNode(int);
	void spawnFruit();
	bool check_for_fruit();
};

