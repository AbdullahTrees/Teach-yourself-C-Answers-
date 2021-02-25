#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("ARGUMENTS TEST");
	printf("\nNo. of arguments called: %d", argc);

	printf("\nContents of the last argument called: %s", argv[argc - 1]);
	return 0;
}