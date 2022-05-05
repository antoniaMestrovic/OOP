#pragma once
#include <iostream>
#include <string>

using namespace std;

class Pauk : public Animal
{
public:
	string getType() {
		return "Pauk";
	}

	int getNumOfLegs() {
		return 8;
	}
};