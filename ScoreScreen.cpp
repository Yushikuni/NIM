#include <stdio.h>
#include "NIM.h"

void readingFile()
{
	FILE* f = nullptr;
	printf_s("Singleplayer:\n");
	fopen_s(&f, "Single.txt", "r");
	if (f == NULL)
	{
		fprintf_s(stderr, "file not found - Single.txt");
		return;
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
		fprintf_s(stderr, "file not found - Multi.txt");
		return;
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
	printf_s("pause");
}