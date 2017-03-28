#include "Player.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Game.h"

#include <iostream>
#include <string>
#include <vector>
#include <time.h>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	//create game object to play the game
	Game game1 = Game();
	game1.assemble();
	game1.run();
	cin.get();
	return 0;
}