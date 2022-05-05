#pragma once
#include <iostream>
#include <string>

using namespace std;

class HumanPlayer : public Player
{
public:
	bool isHuman() {
		return true;
	}
};