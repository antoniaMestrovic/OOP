#include <iostream>
#include "Player.h"
#include <vector>
using namespace std;

class Game
{
private:
	vector <Player> listOfPlayers; //mora bit referenca ili pointer
	int reqScore = 2;
	int currentTotal = 0;
	bool inProgress = true;
public:
	void addAHumanPlayer();
	void addAComputerPlayer();
	void setScore(int score);
	void playersSetCoins();
	void guessTheNumber();
	void checkIfScore(int score, int p);
	void setGameProgress();
	bool GetGameProgress();
};