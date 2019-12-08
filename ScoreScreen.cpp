#include <stdio.h>
#include "NIM.h"
#define MAXCHAR 1000

void readingFile()
{
	FILE* f = nullptr;
	printf_s("Singleplayer:\n");
	fopen_s(&f, "Single.txt", "r");
	if (f==NULL)
	{
		printf_s("file not found - Single.txt");
		
	}
	else
	{
		char c = -1;
		do
		{
			c = getc(f);
			putchar(c);
		} while (c != EOF);
		
	}
	fclose(f);

	printf_s("\n\nMultiplayer:\n");
	fopen_s(&f, "Multi.txt", "r");
	if (f == NULL)
	{
		printf_s("file not found - Multi.txt");
	}
	else
	{
		char c = -1;
		do
		{
			c = getc(f);
			putchar(c);
		} while (c!=EOF);

	}
	fclose(f);
	printf_s("pause");
}