#pragma once
#include <iostream>

class Point {
	double x, y, z;
public:
	Point(double x, double y, double z) { set(x, y, z); };
	Point() : Point(0, 0, 0) {};
	void set(double x, double y, double z);
	void inRandomRange(double min, double max);
	void get(double& x, double& y);
	void get(double& x, double& y, double& z);
	double getX() { return x; };
	double getY() { return y; };
	double getZ() { return z; };
	double find2D_distance(Point P);
	double find3D_distance(Point P);
	void print();
};