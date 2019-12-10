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
	int remTok =  nTok- take;
	printf_s("AI take: %d \n", take);
	printf_s("Other token: %d\n", remTok);
	return remTok;
}

int singlePlayer()
{
	printf_s("Who take a last token win a game\n\n");
	int ppt = 0, ait = 0; //player turns, ai turns
	int aiWin = 0, plrWin = 0;
	int token = 0;
	printf_s("number of tokens: ");
	scanf_s("%d",&token);
	int nextTok = -1;
	char choose = '0';
	while (token > 0)
	{
		switch (move())
		{
			case 1:
			{
				printf_s("How many token would you take?: ");
				int pTT = -1; //player take token
				scanf_s("%d", &pTT);
				nextTok = playerTurn(token, pTT);
				token = nextTok;
				++ppt;
				break;
			}
			case 2:
			{
				token = ai_Turn(token);
				++ait;
				break;
			}
			if (nextTok <= 0)
			{
				break;
			}
		}
	}
	if(theWinnerIs(1))
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
	//printf_s("Again? y/n: ", &choose);

	system("pause");
	return 0;
}
