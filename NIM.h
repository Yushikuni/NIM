#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <ctype.h>
#include <time.h>
//Score Screen
int fopen_s(FILE* f, const char fileName, const char* mode);
void readingFile();
//single
int singlePlayer();
int ai_Turn(int nTok);
int playerTurn(int nTok, int take);
//multiplayer
int playersTurn(int nTok, int take, char namePlayer);
int multiPlayer();

//both
int move()
{
	int randomMove = rand() % 2 + 1;
	return randomMove;
}

