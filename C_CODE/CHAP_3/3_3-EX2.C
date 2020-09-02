#include <stdio.h>

int main(void)
{
	int i;

	printf("Give us a number ");
	scanf("%d", &i);

	for( ;i>=0;i--) { }

	if (i==-1)
		printf("\a");

	return 0;

}