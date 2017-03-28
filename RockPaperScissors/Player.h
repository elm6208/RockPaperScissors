#pragma once
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
class Player
{
public:
	Player();
	Player(string nm, char typ);
	virtual ~Player();
	string getName();
	char getType();
	virtual void print();
	virtual bool operator>(Player* opponent);
	virtual bool operator<(Player* opponent);
	virtual bool operator==(Player* opponent);
protected:
	// name of player
	string name;
	// type: rock paper or scissors, represented by 'r' 'p' or 's'
	char type;
};

