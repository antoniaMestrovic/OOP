#include <iostream>
#include "Point.hpp"	
#include "Weapon.hpp"

using namespace std;

Weapon::Weapon(Point position, int bulletsCapacity)
{
	this->position = position;
	this->bulletsCapacity = bulletsCapacity;
	this->bulletsLeft = bulletsCapacity;
};

bool Weapon::is_empty()
{
	return (bulletsLeft == 0);
};

void Weapon::shoot()
{
	--bulletsLeft;
};

void Weapon::reload()
{
	bulletsLeft = bulletsCapacity;
};