#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <ctype.h>
//Score Screen
int fopen_s(FILE* f, const char fileName, const char* mode);
void readingFile();
int singlePlayer();
int ai_Turn(int nTok);
int playerTurn(int nTok, int take);
/*
int volba = -1;
	printf_s("1. SinglePlayer\n2. MultiPlayer\n3. Score Screen\n4. Quick\n");
	volba = getchar();
	switch (volba)
	{
		case 1:
		{
			//singleplayer
		}
		case 2:
		{
			//multiplayer
		}
		case 3:
		{
			//score screen
			readingFile();

		}
		case 4:
		{
			//end game
			printf_s("Data has been save...\npress enter to end\n");
			fflush(stdin);
			system("pause");
		}
	}
	system("cls");

*/
