#pragma once
#include <iostream>
#include "Tetrapod.h"
#include <string>

using namespace std;

class Tigar : public Tetrapod
{
public:
	string getType() {
		return "Tigar";
	}
};