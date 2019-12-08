#include <stdio.h>
#define MAXCHAR 1000
//int fopen_s(FILE* f, const char fileName, const char* mode); //open the TXT file
void readingFile()
{
	FILE* f = NULL;
	printf_s("Singleplayer:\n");
	fscanf_s(f, "Single.txt", "r");
	fclose(f);
	printf_s("\n\nMultiplayer:\n");
	fscanf_s(f, "Multi.txt", "r");
	fclose(f);
}