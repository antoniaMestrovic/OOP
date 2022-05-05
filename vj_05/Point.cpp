#include <cstdlib>
#include <cmath>
#include "Point.hpp"
using namespace std;

void Point::set(double x, double y, double z)
{
	this->x = x, this->y = y, this->z = z;
}

void Point::inRandomRange(double min, double max)
{
	x = min + ((double)rand() / RAND_MAX) * (max - min);
	y = min + ((double)rand() / RAND_MAX) * (max - min);
	z = min + ((double)rand() / RAND_MAX) * (max - min);
}

void Point::get(double& x, double& y)
{
	x = this->x, y = this->y;
}

void Point::get(double& x, double& y, double& z)
{
	x = this->x, y = this->y, z = this->z;
}

double Point::find2D_distance(Point P)
{
	double xP, yP;
	P.get(xP, yP);
	return sqrt(pow(this->x - xP, 2) + pow(this->y - yP, 2));
}

double Point::find3D_distance(Point P)
{
	double xP, yP, zP;
	P.get(xP, yP, zP);
	return sqrt(pow(this->x - xP, 2) + pow(this->y - yP, 2) + pow(this->z - zP, 2));
}

void Point::print()
{
	cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
}