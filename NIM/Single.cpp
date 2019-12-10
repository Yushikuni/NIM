#include "NIM.h"
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
	int take = nTok % 4;
	int remTok = nTok - take;
	printf_s("AI take: %d \n", take);
	printf_s("Other token: %d\n", remTok);
	return remTok;
}
int singlePlayer()
{
	printf_s("Who take a last token win a game\n\n");
	int playerTurn(int nTok, int take);
	int ppt = 0, ait = 0;
	int aiWin = 0, plrWin = 0;
	int ai_Turn(int nTok);
	int token = 0;
	printf_s("number of tokens: ");
	scanf_s("%d",&token);
	while (token>0)
	{
		printf_s("How many token would you take?: ");
		int pTT = -1; //player take token
		scanf_s("%d", &pTT);
		int nextTok = playerTurn(token, pTT);
		++ppt;
		if (nextTok == token)
		{
			continue;
		}
		token = nextTok;
		token = ai_Turn(token);
		++ait;
	}
	printf_s("AI steps: %d\nPlayer steps: %d\n", ait, ppt);

	printf_s("AI win\n");
	system("pause");
	return 0;
}
