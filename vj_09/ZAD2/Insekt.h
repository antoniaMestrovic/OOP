#pragma once
#include <string>

using namespace std;

class Insekt : public Animal
{
public:
	virtual string getType() {
		return "Insekt";
	}

	virtual int getNumOfLegs() {
		return 6;
	}
};