/* wOOOOOOO FILE I/O WHEEEEEE

muh text viewer application
Created by abdullah da baws

1% in the way to make my own OS
*/

#include <stdio.h>

int main(char argc, char *argv[])
{
	char ch;
	FILE *text;

	// proper arguments check
	if (argc != 2)
	{
		printf("Simple text viewer\nUsage: %s <filename>", argv[0]);
		return 1;
	}


	text = fopen(argv[1], "r");
	if (text == NULL)
	{
		printf("Simple text viewer\nError reading file: Are you sure the file exists?");
		return 255;
	}

	while((ch = fgetc(text)) != EOF)
		putchar(ch);
	
	fclose(text);

	return 0;
}