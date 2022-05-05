#pragma once
#include <iostream>
#include "Ptica.h"
#include <string>

using namespace std;

class Vrabac : public Ptica
{
public:
	string getType() {
		return "Vrabac";
	}
};