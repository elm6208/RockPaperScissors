#include "Paper.h"



Paper::Paper()
{
}


Paper::~Paper()
{
	cout << getName() << "'s paper is crumpled!" << endl;
}

void Paper::print()
{
	cout << getName() << " throws --- (Paper)" << endl;
}
//if opponent is rock, win
bool Paper::operator>(Player * opponent)
{
	if (opponent->getType() == 'r')
	{
		return true;
	}
	return false;
}
//if opponent is scissors, lose
bool Paper::operator<(Player * opponent)
{
	if (opponent->getType() == 's')
	{
		return true;
	}
	return false;
}
//if opponent is paper, tie
bool Paper::operator==(Player * opponent)
{
	if (opponent->getType() == 'p')
	{
		return true;
	}
	return false;
}
