#pragma once
#include <iostream>
#include <string>

using namespace std;

class Ptica : public Animal
{
public:
	string getType() {
		return "Ptica";
	}

	 int getNumOfLegs() {
		return 2;		
	}
};