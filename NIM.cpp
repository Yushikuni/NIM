// NIM.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//Autor programu: Kvetuse "Pein" Husakova


#include "NIM.h"

int main()
{
	int volba = -1;
	char choose = '0';
	printf_s("1. SinglePlayer\n2. MultiPlayer\n3. Score Screen\n4. Quick\n");
	scanf_s("%d", &volba);
	switch (volba)
	{
		case 1:
		{
			//singleplayer
			printf_s("You choose a singleplayer...\n");
			singlePlayer();						
			break;
		}
		case 2:
		{
			//multiplayer
			printf_s("You choose a multiplayer...\n");
			multiPlayer();
			break;
		}
		case 3:
		{
			//score screen
			printf_s("...opening a file....\n");
			readingFile();
			system("pause");
			break;
		}
		case 4:
		{
			//end game
			printf_s("Data has been saved...\n");
			system("pause");
			break;
		}
	}
	system("cls");	
	return 0;
}
