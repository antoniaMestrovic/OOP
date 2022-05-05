
#pragma once
#include "Point.hpp"
//zad2

class Weapon {
	int bulletsCapacity, bulletsLeft;
public:
	Point position;
	Weapon() : position(), bulletsCapacity(), bulletsLeft(bulletsCapacity) {};
	Weapon(Point position, int bulletsCapacity);
	bool is_empty();
	int get_capacity() { return bulletsCapacity; };
	void shoot();
	void reload();
};