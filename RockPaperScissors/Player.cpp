#include "Player.h"



Player::Player()
{
}

// parameterized constructor, takes name of player and type (either rock paper or scissors)
Player::Player(string nm, char typ)
{
	name = nm;
	type = typ;
}

// deletes player
Player::~Player()
{
	cout << "Bye, " << name << endl;
}

string Player::getName()
{
	return name;
}

char Player::getType()
{
	return type;
}

//prints message about attacking
void Player::print()
{
}

bool Player::operator>(Player * opponent)
{
	return false;
}

bool Player::operator<(Player * opponent)
{
	return false;
}

bool Player::operator==(Player * opponent)
{
	return false;
}
