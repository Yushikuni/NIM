#include <stdio.h>
#define MAXCHAR 1000
int fopen_s(FILE* f, const char fileName, const char* mode); //open the TXT file
void readingFile()
{
	//int c;
	//FILE* file;
	////file = fopen_s("ScoreScreen.txt", "r");
	//if (file) {
	//	while ((c = getc(file)) != EOF)
	//		putchar(c);
	//	fclose(file);
	//}
	/*
	#define CHUNK 1024 /* read 1024 bytes at a time 
	char buf[CHUNK];
	FILE* file;
	size_t nread;

	file = fopen("test.txt", "r");
	if (file) {
		while ((nread = fread(buf, 1, sizeof buf, file)) > 0)
			fwrite(buf, 1, nread, stdout);
		if (ferror(file)) {
			/* deal with error 
		}
		fclose(file);
	}
	*/
}