#include <stdio.h>

void mystrcat(char *returnstr, char *added);

int main(void)
{
	char str1[20] = "Hello", *str2 = "There";

	printf("Demonstration of custom strcat() function...\n");
	printf("str1: %s\nstr2: %s\n", str1, str2);

	mystrcat(str1, str2);

	printf("Both strings have now been concatenated into str1, str1: %s", str1);

	return 0;
}

void mystrcat(char *returnstr, char *added)
{
	while(*returnstr)
		returnstr++;

	while(*added)
	{
		*returnstr = *added;
		returnstr++, added++;
	}
	*returnstr = '\0';
	return;
}