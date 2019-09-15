#include "pch.h"
#include "Fruit.h"


Fruit::Fruit()
{
	locFruit.x = 0;
	locFruit.y = 0;
}
Fruit::~Fruit()
{
}

void Fruit::spawnFruit()
{
	int x, y;
	x = 1 + rand() % 38;
	y = 1 + rand() % 8;

	add_position(x, y);
}
void Fruit::add_position(int x_in, int y_in) {

}
