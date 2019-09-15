#include "pch.h"
#include "Logic.h"

Logic::Logic()
{
	setSwitching();
}
Logic::~Logic()
{
	if (thread0.joinable() && thread1.joinable() && thread2.joinable())
	{
		join();
	}
}
void Logic::setSwitching()
{
	up = false;
	down = false;
	left = false;
	right = false;
}
void Logic::start()
{
	gameState = true;
	thread0 = thread(&Logic::display, this);   //
	thread1 = thread(&Logic::input, this);     //
	thread2 = thread(&Logic::gameLogic, this); //
}
void Logic::stop()
{
	join();
}

void Logic::join()
{
	thread0.join();
	thread1.join();
	thread2.join();
}
bool Logic::getGameState()
{
	return gameState;
}
void Logic::setGameState()
{
	gameState = !gameState;
}
void Logic::gameLogic()
{
	if (!gameState)
	{
		stop();
	}
}
void Logic::display()
{
}
void Logic::input()
{
	inputKey = _getch();
	if (inputKey == 27)
	{
		if (question())
		{
			gameState = !gameState;
		}
	}
	switch (inputKey)
	{
	case 'w':
	{
		if (up)
		{
		}
		else
		{
			setSwitching();
			up = true;
		}
	}
	break;
	case 's':
	{
		if (down)
		{
		}
		else
		{
			setSwitching();
			down = true;
		}
	}
	break;
	case 'a':
	{
		if (left)
		{
		}
		else
		{
			setSwitching();
			left = true;
		}
	}
	break;
	case 'd':
	{
		if (right)
		{
		}
		else
		{
			setSwitching();
			right = true;
		}
	}
	break;
	}
}
bool Logic::question()
{
	cout << "Czy jestes pewnien T/N?" << endl;
	char input;
	cin >> input;
	if (input == 'T')
	{
		return true;
	}
	return false;
}
void Logic::draw()
{
	system("cls"); //system("clear");
	for (int i = 0; i < width + 2; i++)
		cout << "#";
	cout << endl;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0)
				cout << "#";
			else
			{
				bool print = false;
				if (!print)
					cout << " ";
			}
			if (j == width - 1)
				cout << "#";
		}
		cout << endl;
	}
	for (int i = 0; i < width + 2; i++)
		cout << "#";
	cout << endl;
}