#include "Board.h"

int main() {


	Point p(6, 12), p1(2, 2), p2(8, 8), p3(8, 2), p4(8, 16);
	//Board board1(20, 10);
	Board board1;
	board1.drawLine(p1, p2, 'x');
	board1.drawLine(p3, p4, 'x');
	board1.print();

	return 0;
}
