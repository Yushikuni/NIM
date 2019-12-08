// NIM.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//


#include "NIM.h"

int main()
{
    std::cout << "Hello World!\n";
	int volba = -1;
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
			printf_s("Data has been save...\n");
			system("pause");
			break;
		}
	}
	system("cls");	
}

// Spuštění programu: Ctrl+F5 nebo nabídka Ladit > Spustit bez ladění
// Ladění programu: F5 nebo nabídka Ladit > Spustit ladění

// Tipy pro zahájení práce:
//   1. K přidání nebo správě souborů použijte okno Průzkumník řešení.
//   2. Pro připojení ke správě zdrojového kódu použijte okno Team Explorer.
//   3. K zobrazení výstupu sestavení a dalších zpráv použijte okno Výstup.
//   4. K zobrazení chyb použijte okno Seznam chyb.
//   5. Pokud chcete vytvořit nové soubory kódu, přejděte na Projekt > Přidat novou položku. Pokud chcete přidat do projektu existující soubory kódu, přejděte na Projekt > Přidat existující položku.
//   6. Pokud budete chtít v budoucnu znovu otevřít tento projekt, přejděte na Soubor > Otevřít > Projekt a vyberte příslušný soubor .sln.
