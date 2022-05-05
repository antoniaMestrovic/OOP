#include <iostream>
#include "Game.h"
#include "Human.h"
#include "Computer.h"
#include <ctime>
using namespace std;

void Game::addAHumanPlayer() {
	HumanPlayer newPlayer;
	listOfPlayers.push_back(newPlayer);
}

void Game::addAComputerPlayer() {
	ComputerPlayer newPlayer;
	listOfPlayers.push_back(newPlayer);
}

void Game::setScore(int score) {
	reqScore = score;
}

void Game::playersSetCoins() {
	srand(time(0));

	int numOfCoins = 0;
	currentTotal = 0;
	for (auto i = listOfPlayers.begin(); i != listOfPlayers.end(); ++i)
	{

		if (i->isHuman() == true) {
			cout << "Player " << distance(listOfPlayers.begin(), i) << " set number of coins:" << endl;
			cin >> numOfCoins;
			currentTotal += numOfCoins;
			i->setCurrentNumber(numOfCoins);
		}
		else {
			cout << "Computer Player " << distance(listOfPlayers.begin(), i) << " set number of coins:" << endl;
			numOfCoins = rand() % 8 + 0;
			currentTotal += numOfCoins;
			i->setCurrentNumber(numOfCoins);
		}
	}
}
void Game::guessTheNumber() {
	int guess;
	for (auto i = listOfPlayers.begin(); i != listOfPlayers.end(); i++)
	{
		cout << "Player " << distance(listOfPlayers.begin(), i) << " try to guess the number of coins:" << endl;
		cin >> guess;

		if (currentTotal == guess) {
			cout << "Player " << distance(listOfPlayers.begin(), i) << " guessed the number of coins." << endl;
			i->setScore();
			checkIfScore(i->getScore(), distance(listOfPlayers.begin(), i));
			return;
		}
	}
}

void Game::checkIfScore(int score, int pl) {
	if (score == reqScore) {
		cout << "Player " << pl << " guessed the correct sum and won the game!" << endl;
		setGameProgress();
	}
}

void Game::setGameProgress() {
	inProgress = false;
}

bool Game::GetGameProgress() {
	return inProgress;
}
