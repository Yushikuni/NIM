#include "NIM.h"
#define playerA 1
#define playerB 2

bool winnerIs(int whoseTurns)
{
	if (whoseTurns == playerB )
	{
		return 1;
	}
	else
	{
		return 2;
	}
}
int playersTurn(int nTok, int take, char namePlayer)
{
	if (take < 1 || take > 3)
	{
		printf_s("\nYou must choose between 1 and 3\n");
		return nTok;
	}
	int remainToken = nTok - take;
	printf_s("%s take: %d \n",&namePlayer, take);
	printf_s("Other token: %d\n", remainToken);
	return remainToken;
}
int multiPlayer()
{
	printf_s("Who take a last token win a game\n\n");
	int ppt = 0, ppt2 = 0; //player turns
	int plr2Win = 0, plr1Win = 0;
	int token = 0;
	printf_s("number of tokens: ");
	scanf_s("%d", &token);
	int nextTok = -1, pTT= -1;
	char plr1Name = NULL;
	char plr2Name = NULL;
	printf_s("Player 1 name: ");
	scanf_s("%ch", &plr1Name); //opravit, nefunkèní
	printf_s("Player 2 name: ");
	scanf_s("%ch", &plr2Name);

	while (token > 0)
	{
		switch (move())
		{
			//gliè
			case 1:
			{
				printf_s("How many token would you take?: ");
				pTT = -1;
				scanf_s("%d", &pTT);
				nextTok = playerTurn(token, pTT);
				token = nextTok;
				++ppt;
				break;
			}
			case 2:
			{
				printf_s("How many token would you take?: ");
				pTT = -1; //player take token
				scanf_s("%d", &pTT);
				nextTok = playerTurn(token, pTT);
				token = nextTok;
				++ppt2;
				break;
			}
			if (nextTok == 0)
			{
				break;
			}
		}
		if (winnerIs(1))
		{
			printf_s("The winner is: %s\n",plr1Name);
			++plr1Win;
		}
		else
		{
			printf_s("The winner is: %s\n", plr2Name);
			++plr2Win;
		}

	}
	FILE* f = nullptr;
	fopen_s(&f, "Multi.txt", "a");
	fprintf_s(f, "%s: %d (%d)				%s: %d (%d)\n", plr1Name, plr1Win, ppt, plr2Name, plr2Win, ppt2, "Multi.txt", "a");
	system("pause");
	return 0;
}
