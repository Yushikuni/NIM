#include "NIM.h"
#define playerA 1
#define playerB 2

bool winnerIs(int whoseTurns)
{
	if (whoseTurns == playerB)
	{
		return 1;
	}
	else
	{
		return 2;
	}
}
int multiPlayer()
{
	printf_s("Who take a last token lose this game\n\n");
	int plr2Win = 0, plr1Win = 0, token = 0, ppt = 0, ppt2 = 0, pTT = -1, nextTok = -1, onTurn = -1, save = 0;
	char plr1Name = 'A';
	char plr2Name = 'B';
	FILE* s = nullptr;
	printf_s("Would you like to save the game? (1/0): ");
	scanf_s("%d", &save);
	printf_s("number of tokens: ");
	scanf_s("%d", &token);
	onTurn = move();
	if (save == 1)
	{
		fopen_s(&s, "save.txt", "w");
	}
	while (token > 0)
	{
		if (onTurn == 1)
		{
			printf_s("Player A: How many token would you take?: ");
			pTT = -1;
			scanf_s("%d", &pTT);
			nextTok = playerTurn(token, pTT);
			token = nextTok;
			++ppt;
			if (save == 1)
			{
				fprintf_s(s, "player A takes: %d tokens remaining: %d\n", pTT, token);
			}
			onTurn = 2;
		}
		else
		{
			printf_s("Player B: How many token would you take?: ");
			pTT = -1; //player take token
			scanf_s("%d", &pTT);
			nextTok = playerTurn(token, pTT);
			token = nextTok;
			++ppt2;
			if (save == 1)
			{
				fprintf_s(s, "player B takes: %d tokens remaining: %d\n", pTT, token);
			}
			onTurn = 1;
		}
	}
	if (save == 1)
	{
		fclose(s);
	}

	if (winnerIs(1))
	{
		printf_s("The winner is: %c\n", plr1Name);
		++plr1Win;
	}
	else
	{
		printf_s("The winner is: %c\n", plr2Name);
		++plr2Win;
	}
	FILE* f = nullptr;
	fopen_s(&f, "Multi.txt", "a");
	fprintf_s(f, "%c: %d (%d)				%c: %d (%d)\n", plr1Name, plr1Win, ppt, plr2Name, plr2Win, ppt2, "Multi.txt", "a");
	system("pause");
	return 0;
}
