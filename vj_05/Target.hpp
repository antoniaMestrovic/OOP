#pragma once
#include "Point.hpp"	
#include <iostream>
using namespace std;
//zad3

class Target {
	bool is_hit = false;
public:
	Point bottomLeft, upperRight;
	void HitStatus(bool status)
	{
		isHit = status;
	}
	bool gotHit()
	{
		return is_hit;
	};
};