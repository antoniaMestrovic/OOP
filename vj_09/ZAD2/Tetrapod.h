#pragma once
#include <iostream>
#include <string>

using namespace std;

class Tetrapod : public Animal
{
public:
	virtual string getType() {
		return "Tetrapod";
	}

	virtual int getNumOfLegs() {
		return 4;
	}
};