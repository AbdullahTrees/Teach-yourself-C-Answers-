#include <stdio.h>

int main(void)
{
	int num;

	printf("Mailing list menu:\n\n1. Enter addresses\n2. Delete address\n3. Search the list\n4. Print the list\n5. Quit\n\nEnter the number of your choice (1-5). ");
	scanf("%d", &num);

	do
	{
		if(num==1) printf("\nEnter your address.\n");
		if(num==2) printf("\nAddress has been deleted.\n");
		if(num==3) printf("\nSearching...\n");
		if(num==4) printf("\nPrinting...\n");

		break;
	}
	while (num != 5);

	return 404;
}