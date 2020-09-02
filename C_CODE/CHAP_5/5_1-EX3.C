#include <stdio.h>

int main(void)
{
	float item[100];
	float tempcopy;
	int count, a, b, t, v;

	// Choose array size
	printf("Bubble Sort for floating-point numbers... How many numbers? ");
	scanf("%d", &count);

	if (count > 99 || count < 0)
	{
		do
		{
			printf("\nThe number you have entered is too large. \nBubble Sort for floating-point numbers... How many numbers? [Max 100] ");
			scanf("%d", &count);
		}
		while (count > 99 || count < 0);
	}

	// Read in numbers
	printf("\n\n");
	for (t = 0; t < count; t++)
	{
		printf("Number #%d: ", t+1);
		scanf("%f", &item[t]);
	}

	//DEBUG: Confirm array size/settings
	/*printf("DEBUG: Array 'item' = {");
	for (v = 0; v < count; v++)
	{
		printf("%g, ", item[v]);
	}
	printf("\b\b}");*/

	// Bubble Sorter: Made it up by learning the principles. Since I didn't copy it directly from the book, it may be inefficient.

	for (a = 0; a < count; a++)
	{
		for (b = 0; b < count; b++)
		{
			if (item[a] < item[b])
			{
				tempcopy = item[b];
				item[b] = item[a];
				item[a] = tempcopy;
			}
		}
	}

	printf("\n\nDone! Results\nArray 'item' = {");
	for (v = 0; v < count; v++)
	{
		printf("%g, ", item[v]);
	}
	printf("\b\b}");

	return 0;
}