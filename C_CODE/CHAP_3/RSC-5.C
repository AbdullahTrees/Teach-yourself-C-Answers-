#include <stdio.h>

void proverbs(int a);

int main(void)
{
	int num;

	printf("\n\nEnter the number of the proverb to print. [0-5] ");
	scanf("%d", &num);

	proverbs(num);
	return 0;
}

void proverbs(int a)
{
	if (a>6)
		printf("\nPlease select a correct number and try again. ");
	else
	{
		if (a==1)
			printf("\nA cat in your lap is worth 10 in a Youtube video. ");
		if (a==2)
			printf("\nFor every evil thing that you find pleasurable: it may feel good now but there will be a price to pay later. ");
		if (a==3)
			printf("\nYou will never attain righteousness until you give up from that which you love, and whatever you give up, indeed God knows it well. ");
		if (a==4)
			printf("\nGive me good mothers and I'll give you a good country. ");
		if (a==5)
			printf("\nOnly we are responsible for our own errors and mistakes. Don't blame others, but blame yourself and start to recover. ");
		if (a<0)
			printf("\nPlease select a correct number and try again. ");
	}
}