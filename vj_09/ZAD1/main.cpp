#include <iostream>
#include "game.h";
#include "Computer.h"
#include "Human.h"
#include "Player.h"

using namespace std;


int main() {
	Game game;

	Player* p = new ComputerPlayer;
	Player* p2 = new HumanPlayer;

	game.addAHumanPlayer();
	game.addAHumanPlayer();
	game.addAComputerPlayer();
	game.addAComputerPlayer();

	while (game.GetGameProgress())
	{
		game.playersSetCoins();
		game.guessTheNumber();
	}
}