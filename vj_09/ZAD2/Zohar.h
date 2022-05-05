#pragma once
#include <iostream>
#include "Insekt.h"
#include <string>

using namespace std;

class Zohar : public Insekt
{
public:
	 string getType() 
	{
		return "Zohar";
	}
};