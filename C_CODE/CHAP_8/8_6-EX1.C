#include <stdio.h>

int main(void)
{
	char first[25], middle[25], last[25];

	printf("Give first name: ");
	scanf("%20s", first);

	printf("Give middle name: ");
	scanf("%20s", middle);

	printf("Give last name: ");
	scanf("%20s", last);

	printf("\nYour name is: %s %s %s", first, middle, last);

	return 0;
}
