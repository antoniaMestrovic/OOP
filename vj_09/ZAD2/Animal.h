#pragma once
#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
	//string type;
	//int	numOfLegs;
	virtual string getType() = 0;
	virtual int getNumOfLegs() = 0;
};