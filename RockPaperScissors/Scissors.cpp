#include "Scissors.h"



Scissors::Scissors()
{
}


Scissors::~Scissors()
{
	cout << getName() << "'s scissors are getting rusty!" << endl;
}

void Scissors::print()
{
	cout << getName() << " throws 8>< (Scissors)" << endl;
}
//if opponent is paper, win
bool Scissors::operator>(Player * opponent)
{
	if (opponent->getType() == 'p')
	{
		return true;
	}
	return false;
}
//if opponent is rock, lose
bool Scissors::operator<(Player * opponent)
{
	if (opponent->getType() == 'r')
	{
		return true;
	}
	return false;
}
//if opponent is paper, tie
bool Scissors::operator==(Player * opponent)
{
	if (opponent->getType() == 's')
	{
		return true;
	}
	return false;
}