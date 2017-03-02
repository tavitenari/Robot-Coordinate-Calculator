/*
"Tavi" Ioane Tenari
CSS342
10/22/16
Lab2 - GreedyRobot.h
*/
#pragma once
#include <vector>
#include <String>
#include <iostream>
using namespace std;

class Robot
{
	friend istream& operator>>(istream &inStream, Robot &rob);

public:
	Robot();
	Robot(int posX, int posY, int treasX, int treasY);
	~Robot();

	int getPosX() const;
	int getPosY() const;
	int getTreasX() const;
	int getTreasY() const;
	int getTotalPaths() const;
	string getPathString() const;
	void setPosX(int posX);
	void setPosY(int posY);
	void setTreasX(int treasX);
	void setTreasY(int treasY);
	
	//Finds collection of shortest paths to treasure and prints each path
	void shortestPath(const int &posX, const int &posY, const string &path);

private:
	struct Position
	{
		int posX;
		int posY;
	};
	Position robot;
	Position treasure;
	int totalPaths;
	string pathString;
};