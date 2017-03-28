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

class Rock : public Player
{
public:
	Rock();
	Rock(string nm) : Player(nm, 'r') {};
	~Rock();
	void print();
	bool operator>(Player* opponent);
	bool operator<(Player* opponent);
	bool operator==(Player* opponent);
};

