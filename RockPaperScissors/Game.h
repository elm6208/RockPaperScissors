#pragma once
#include <iostream>
#include <vector>
#include "Player.h"
#include <time.h>
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
using std::vector;
using std::cin;
using std::cout;
using std::endl;
class Game
{
protected:
	vector<Player*> plyrs;
public:
	Game();
	~Game();
	void assemble();
	void run();
};

