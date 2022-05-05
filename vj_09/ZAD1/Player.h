#pragma once
#include <iostream>

using namespace std;

class Player
{
private:
	int currentNumber = 0;
	int score = 0;
public:
	virtual bool isHuman() = 0;
	void setCurrentNumber(int num);
	int getCurrentNumber();
	void setScore();
	int getScore();
};