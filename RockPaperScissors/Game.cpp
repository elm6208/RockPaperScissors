#include "Game.h"



Game::Game()
{
}


Game::~Game()
{
	//tells the user the game is over
	cout << "End of game" << endl;
	for (int i = 0; i < plyrs.size(); i++)
	{
		delete plyrs[i];
	}
}

void Game::assemble()
{
	// Introduce the game to the user
	cout << "Let's play Rock Paper Scissors!" << endl;
	bool playerInput = false;
	int numPlayers;
	//Ask the user to enter a number of Players between 2 and 10
	while (playerInput == false)
	{
		cout << "Enter a number of Players between 2 and 10" << endl;

		cin >> numPlayers;
		//Verifies user input.
		//Again asks for an amount of Player objects if user enters an invalid number.
		if (numPlayers >= 2 && numPlayers <= 10)
		{
			playerInput = true;
		}
		else
		{
			cout << "Invalid choice." << endl;
		}
	}

	srand(time(NULL));
	int rNum;
	//Ask the user to enter the name of each Player
	for (int i = 0; i < numPlayers; i++)
	{
		cout << "Enter the name for player " << i + 1 << ":" << endl;
		string playerName;
		cin >> playerName;
		//Randomly create either a Rock, Paper, or Scissors object with the specified name and add to the vector
		rNum = rand() % 3;
		if (rNum == 0)
		{
			plyrs.push_back(new Rock(playerName));
		}
		if (rNum == 1)
		{
			plyrs.push_back(new Paper(playerName));
		}
		if (rNum == 2)
		{
			plyrs.push_back(new Scissors(playerName));
		}
	}
	return;
}

void Game::run()
{
	bool playing = true;
	while (playing)
	{
		//if there is one player left, print that they won and end the game
		if (plyrs.size() == 1)
		{
			plyrs[0]->print();
			cout << " has won the game!" << endl;
			return;
		}
		//testing if players are the same type
		bool sameType = true;
		for (int i = 0; i < plyrs.size(); i++)
		{
			if (i != 0)
			{
				if (plyrs[i]->getType() != plyrs[i - 1]->getType())
				{
					sameType = false;
				}
			}
		}
		//if remaining players are all same type, end the game
		if (sameType)
		{
			cout << "All of the remaining players are the same type." << endl;
			cout << "There is a stalemate. Game over." << endl;
			return;
		}
		//allow the user to choose 2 players to battle
		cout << "Choose 2 players to battle! (Between 0 and " << (plyrs.size() - 1) << ")" << endl;
		bool validPlyrs = false;
		int chosenPlyr1;
		int chosenPlyr2;
		//testing for valid players
		while (validPlyrs == false)
		{
			cin >> chosenPlyr1;
			cin >> chosenPlyr2;
			if (chosenPlyr1 != chosenPlyr2 && chosenPlyr1 >= 0 && chosenPlyr1 < plyrs.size()
				&& chosenPlyr2 >= 0 && chosenPlyr2 < plyrs.size())
			{
				validPlyrs = true;
			}
			//if players are not valid, ask again
			if (validPlyrs == false)
			{
				cout << "Invalid player choices. Try again." << endl;
				cout << "Choose 2 players to battle! (Between 0 and " << (plyrs.size() - 1) << ")" << endl;
			}

		}
		//if players are valid, print them
		plyrs[chosenPlyr1]->print();
		plyrs[chosenPlyr2]->print();
		//if p1 wins, delete p2
		if (*plyrs[chosenPlyr1] > plyrs[chosenPlyr2])
		{
			cout << plyrs[chosenPlyr1]->getName() << " defeats " << plyrs[chosenPlyr2]->getName() << "!" << endl;
			delete plyrs[chosenPlyr2];
			plyrs.erase(plyrs.begin() + (chosenPlyr2));
		}
		//if p2 wins, delete p1
		else if (*plyrs[chosenPlyr1] < plyrs[chosenPlyr2])
		{
			cout << plyrs[chosenPlyr2]->getName() << " defeats " << plyrs[chosenPlyr1]->getName() << "!" << endl;
			delete plyrs[chosenPlyr1];
			plyrs.erase(plyrs.begin() + (chosenPlyr1));
		}
		//tie
		else if (*plyrs[chosenPlyr1] == plyrs[chosenPlyr2])
		{
			cout << plyrs[chosenPlyr1]->getName() << " ties with " << plyrs[chosenPlyr2]->getName() << "!" << endl;
		}
	}
	
}
