/*
"Tavi" Ioane Tenari
CSS342
10/22/16
Lab2 - GreedyRobotDriver.cpp
*/
#include "stdafx.h"
#include "GreedyRobot.h"
using namespace std;

int main()
{
	Robot testRob;
	cout << "Give coordinates for robot and treasure:" << endl;
	cin >> testRob;
	testRob.shortestPath(testRob.getPosX(), testRob.getPosY(), testRob.getPathString());
	cout << "Number of paths: " << testRob.getTotalPaths() << endl; 
	system("pause");
    return 0;
}