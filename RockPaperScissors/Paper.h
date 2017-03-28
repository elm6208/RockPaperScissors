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

class Paper : public Player
{
public:
	Paper();
	Paper(string nm) : Player(nm, 'p') {};
	~Paper();
	void print();
	bool operator>(Player* opponent);
	bool operator<(Player* opponent);
	bool operator==(Player* opponent);
};

