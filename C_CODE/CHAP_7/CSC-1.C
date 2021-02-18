#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char pw[] = "top kek as heck";
	
	if (argc == 1)
	{
		printf("Wrong Usage! Input a password as the first argument!");
		return 255;
	}
	
	if (strcmp(pw, argv[1]) == 0)
	{
		printf("Access Permitted");
		return 0;
	}
	else
	{
		printf("Access Denied");
		return 1;
	}
	
}