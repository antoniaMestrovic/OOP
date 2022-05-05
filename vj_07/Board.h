#pragma once
#include <iostream>
#include <cmath>

using namespace std;

struct Point {
	double x;
	double y;

	Point() = default;
	Point(double x, double y);
};

class Board {
	int row;
	int col;
	char ch;
	char** matrix;

public:
	Board();
	Board(const Board& b);
	Board(int row, int col, char ch);
	~Board();
	void drawChar(Point C, char ch);
	void verticalLine(Point C, char ch);
	void drawLine(Point a, Point b, char ch);
	void print();

};
