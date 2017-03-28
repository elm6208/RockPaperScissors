#include "Rock.h"



Rock::Rock()
{
}




Rock::~Rock()
{
	cout << getName() << "'s rock is pretty heavy!" << endl;
}

void Rock::print()
{
	cout << getName() << " throws O (Rock)" << endl;
}
//if opponent is scissors, win
bool Rock::operator>(Player * opponent)
{
	if (opponent->getType() == 's')
	{
		return true;
	}
	return false;
}
//if opponent is paper, win
bool Rock::operator<(Player * opponent)
{
	if (opponent->getType() == 'p')
	{
		return true;
	}
	return false;
}
//if opponent is rock, tie
bool Rock::operator==(Player * opponent)
{
	if (opponent->getType() == 'r')
	{
		return true;
	}
	return false;
}