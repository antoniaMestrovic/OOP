#include "Board.h"

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}

Board::Board()
{
	row = 10;
	col = 20;
	ch = 'o';
	matrix = new char* [row];

	for (int i = 0; i < row; i++) {
		matrix[i] = new char[col];
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if ((i == 0) || (i == row - 1) || (j == 0) || (j == col - 1)) {
				matrix[i][j] = ch;
			}
			else {
				matrix[i][j] = ' ';
			}
		}
	}
}

Board::Board(const Board& other)
{
	row = other.row;
	col = other.col;
	ch = other.ch;
	matrix = new char* [row];

	for (int i = 0; i < row; i++) {
		matrix[i] = new char[col];
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			matrix[i][j] = other.matrix[i][j];
		}
	}
}

Board::Board(int col, int row, char ch)
{
    this->col = col;
	this->row = row;
	this->ch = ch;
	matrix = new char* [this->row];

	for (int i = 0; i < this->row; i++) {
		matrix[i] = new char[this->col];
	}

	for (int i = 0; i < this->row; i++) {
		for (int j = 0; j < this->col; j++) {
			if ((i == 0) ||( i == this->row - 1) || (j == 0) || (j == this->col - 1)) {
				matrix[i][j] = this->ch;
			}
			else {
				matrix[i][j] = ' ';
			}
		}
	}
}

Board::~Board() // destructor
{
	for (int i = 0; i < row; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
}

void Board::drawChar(Point C, char ch)
{
	if (C.x > row || C.y > col) {
		return; // not supposed to return anything but serves as a break
	}

	int numRow = round(C.x);
	int numCol = round(C.y);

	matrix[numRow][numCol] = ch;
}

void Board::verticalLine(Point C, char ch)
{
	if (C.y > col || C.x > row )
		return;

	int numRow = round(C.x);
	int numCol = round(C.y);

	for (numRow; numRow > 0; numRow--) {
		matrix[numRow][numCol] = ch;
	}
}

void Board::drawLine(Point a, Point b, char ch)
{
	if (a.x > row || a.y > col)
		return;
	if (b.x > row || b.y > col)
		return;

	if (a.x == b.x) {
		if (a.y < b.y) {
			for (a.y; a.y <= b.y; a.y++) {
				Point pin;
				pin.x = a.x;
				pin.y = a.y;
				drawChar(pin, ch);
			}
		}
		else {
			for (a.y; a.y >= b.y; a.y--) {
				Point pin;
				pin.x = a.x;
				pin.y = a.y;
				drawChar(pin, ch);
			}
		}
	}

	else if (a.y == b.y) {
		if (a.x < b.x) {
			for (a.x; a.x <= b.x; ++a.x) {
				Point pin;
				pin.x = a.x;
				pin.y = a.y;
				drawChar(pin, ch);
			}
		}
		else {
			for (a.x; a.x >= b.x; b.x--) {
				Point pin;
				pin.x = a.x;
				pin.y = a.y;
				drawChar(pin, ch);
			}
		}
	}

	else if (abs(a.x - b.x) > abs(a.y - b.y)) {
		if (a.x < b.x) {
			for (double x = a.x; x <= b.x; x += 1) {
				double resX,resY;
				resY = a.y + (b.y - a.y);
				resX = (b.x - a.x) * (x - a.x); 
				double y = resY / resX;
				
				Point pin;
				pin.x = x;
				pin.y = y;
				drawChar(pin, ch);
			}
		}
		else {
			for (double x = b.x; x < a.x; x += 1) {
				double y = a.y + ((b.y - a.y) / (b.x - a.x) * (x - a.x));
				Point pin;
				pin.x = x;
				pin.y = y;
				drawChar(pin, ch);
			}
		}
	}
	else
	{
		if (a.y < b.y) {
			for (double y = a.y; y < b.y; y += 1) {
				double x = ((b.x - a.x) * (y - a.y)) / (b.y - a.y) + a.x;
				Point pin;
				pin.x = x;
				pin.y = y;
				drawChar(pin, ch);
			}
		}

		else {
			for (double y = a.y; y < b.y; y += 1) {
				double x = ((b.x - a.x) * (y - a.y)) / (b.y - a.y) + a.x;
				Point pin;
				pin.x = x;
				pin.y = y;
				drawChar(pin, ch);
			}
		}
	}

}

void Board::print()
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << matrix[i][j];
		}
		cout << "\n";
	}
}
