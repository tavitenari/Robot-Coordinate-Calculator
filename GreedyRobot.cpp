/*
"Tavi" Ioane Tenari
CSS342
10/22/16
Lab2 - GreedyRobot.cpp
*/
#include "stdafx.h"
#include "GreedyRobot.h"
using namespace std;

Robot::Robot()
{
	robot = { 0, 0 };
	treasure = { 0, 0 };
	pathString = "";
	totalPaths = 0;
}

Robot::Robot(int posX, int posY, int treasX, int treasY)
{
	robot = { posX, posY };
	treasure = { treasX, treasY };
	pathString = "";
	totalPaths = 0;
}

Robot::~Robot()
{
}

int Robot::getPosX() const
{
	return robot.posX;
}

int Robot::getPosY() const
{
	return robot.posY;
}

int Robot::getTreasX() const
{
	return treasure.posX;
}

int Robot::getTreasY() const
{
	return treasure.posY;
}

int Robot::getTotalPaths() const
{
	return totalPaths;
}

string Robot::getPathString() const
{
	return pathString;
}

void Robot::setPosX(int posX)
{
	robot.posX = posX;
}

void Robot::setPosY(int posY)
{
	robot.posY = posY;
}

void Robot::setTreasX(int treasX)
{
	treasure.posX = treasX;
}

void Robot::setTreasY(int treasY)
{
	treasure.posY = treasY;
}

//Finds collection of shortest paths to treasure and prints each path
void Robot::shortestPath(const int &posX, const int &posY, const string &pathString)
{
	if (!((posX == treasure.posX) && (posY == treasure.posY)))
	{
		if (posX < treasure.posX)
		{
			shortestPath((posX + 1), posY, pathString + "E");
		}
		if (posX > treasure.posX)
		{
			shortestPath((posX - 1), posY, pathString + "W");
		}
		if (posY < treasure.posY)
		{
			shortestPath(posX, (posY + 1), pathString + "N");
		}
		if (posY > treasure.posY)
		{
			shortestPath(posX, (posY -1), pathString + "S");
		}
	}
	else if (pathString != "")
	{
		cout << pathString << endl;
		totalPaths++;
	}
	else
	{
		cout << "Robot is already at treasure." << endl;
	}
}

istream& operator>>(istream &inStream, Robot &rob)
{
	inStream >> rob.robot.posX >> rob.robot.posY >> rob.treasure.posX >> rob.treasure.posY;
	return inStream;
}