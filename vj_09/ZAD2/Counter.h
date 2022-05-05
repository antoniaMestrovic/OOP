#pragma once
#include <iostream>
#include "Animal.h"
#include <string>

using namespace std;

class Counter
{
private:
	int totalNumOfLegs = 0;
public:
	void addAnAnimal(Animal* animal);
	void getNumOfLegs();
};