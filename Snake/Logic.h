#pragma once
#include "thread"
#include "conio.h"
#include <iostream>

using namespace std;
class Logic
{
private:
	bool gameState;
	thread thread0;
	thread thread1;
	thread thread2;
	bool up, down, left, right;
	char inputKey;
	const int width = 20;
	const int height = 20;

public:
	Logic();
	~Logic();
	void start();
	void stop();
	void setSwitching();
	void join();
	void setGameState();
	bool getGameState();
	void display();
	void input();
	void gameLogic();
	bool question();
	void draw();
};

