#include <iostream>
#include "Player.h"

using namespace std;

void Player::setCurrentNumber(int num) {
	currentNumber = num;
}

int Player::getCurrentNumber() {
	return currentNumber;
}

void Player::setScore() {
	score++;
}

int Player::getScore() {
	return score;
}