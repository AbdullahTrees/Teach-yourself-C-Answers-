#include <stdio.h>

int mystrlen(char * mystring);

int main(void)
{
	char le_stringy[250];

	printf("WARNING: gets() implementation! DO NOT ENTER MORE THAN 250 chars!\n");
	printf("Demonstration of muh string length measuring device... Enter a string: ");

	gets(le_stringy);

	printf("\nLength of the string is... %d", mystrlen(le_stringy));

	return 0;
}

int mystrlen(char * mystring)
{
	int length = 0;

	for(; *mystring; mystring++, length++);

	return length;
}