#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <ctype.h>
#include <time.h>
//Score Screen
void readingFile();
//single
int singlePlayer();
int ai_Turn(int nTok);
//multiplayer
int multiPlayer();

//both
namespace
{
	int move()
	{
		srand(time(NULL));
		int randomMove = rand() % 2 + 1;
		return randomMove;
	}
	int playerTurn(int nTok, int take)
	{
		if (take < 1 || take > 3)
		{
			printf_s("\nYou must choose between 1 and 3\n");
			return nTok;
		}
		int remainToken = nTok - take;
		printf_s("Player take: %d \n", take);
		printf_s("Other token: %d\n", remainToken);
		return remainToken;
	}
}


