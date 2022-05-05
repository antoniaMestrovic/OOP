#pragma once
#include <iostream>
#include "Pauk.h"
#include <string>

using namespace std;

class Tarantula : public Pauk
{
public:
	string getType() {
		return "Tarantula";
	}
};