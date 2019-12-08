#include "NIM.h"
#define player 1
#define ai 2
#define sent 500

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
				break;
			}
			case 2:
			{
				token = ai_Turn(token);
				printf_s("AI removes %d: \n", token);
				break;
			}
			if (nextTok == 0)
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
	//vytvoreni souboru ci jeho pripsani
	char sent = "Player: %d				AI: %d", plrWin, aiWin;




	system("pause");
	return 0;
}
