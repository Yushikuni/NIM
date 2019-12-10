#include "NIM.h"
#define player 1
#define ai 2


bool theWinnerIs(int whoTurns)
{
	if (whoTurns == ai)
	{
		return 1;
	}
	else
	{
		return 2;
	}
}


int ai_Turn(int nTok)
{
	int take = rand() % 2 + 1;
	int remTok = nTok - take;
	printf_s("AI take: %d \n", take);
	printf_s("Other token: %d\n", remTok);
	return remTok;
}

int singlePlayer()
{
	printf_s("Who takes a last token loses a game\n\n");
	int ppt = 0, ait = 0; //player turns, ai turns
	int aiWin = 0, plrWin = 0, onTurn = -1;
	int token = 0, save = 0;
	FILE* s = nullptr;
	printf_s("Would you like to save the game? (1/0): ");
	scanf_s("%d", &save);
	printf_s("number of tokens: ");
	scanf_s("%d", &token);
	int nextTok = -1;
	onTurn = move();
	if (save == 1)
	{
		fopen_s(&s, "save.txt", "w");
	}
	while (token > 0)
	{
		if (onTurn == 1)
		{
			printf_s("How many token would you take?: ");
			int pTT = -1; //player take token
			scanf_s("%d", &pTT);
			nextTok = playerTurn(token, pTT);
			token = nextTok;
			++ppt;
			if (save == 1)
			{
				fprintf_s(s, "Player takes: %d tokens remaining: %d\n", pTT, token);
			}
			onTurn = 2;
		}
		else
		{
			token = ai_Turn(token);
			++ait;
			if (save == 1)
			{
				fprintf_s(s, "AI takes: %d tokens remaining: %d\n", nextTok - token, token);
			}
			onTurn = 1;
		}
	}
	if (save == 1)
	{
		fclose(s);
	}

	if (theWinnerIs(1))
	{
		printf_s("The winner is: player\n");
		++plrWin;
	}
	else
	{
		printf_s("The winner is: AI\n");
		++aiWin;
	}


	FILE* f = nullptr;
	fopen_s(&f, "Single.txt", "a");

	fprintf_s(f, "Player: %d (%d)				AI: %d (%d)\n", plrWin, ppt, aiWin, ait, "Single.txt", "a");
	fclose(f);

	system("pause");
	return 0;
}
