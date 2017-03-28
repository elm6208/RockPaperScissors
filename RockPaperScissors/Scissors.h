#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Player.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

class Scissors : public Player
{
public:
	Scissors();
	Scissors(string nm) : Player(nm, 's') {};
	~Scissors();
	void print();
	bool operator>(Player* opponent);
	bool operator<(Player* opponent);
	bool operator==(Player* opponent);
};

