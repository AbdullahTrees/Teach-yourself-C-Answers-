#include <stdio.h>

int main(void)
{
	int group[2][20] = {0};
	int i, j, mode=0, counter=0, arraysize=20;

	printf("Mode finder: Input 20 numbers or less, Input 0 to end.\n");

	// Input phase
	for (i=0; i<20; i++)
	{
		scanf("%d", &group[0][i]);
		if (group[0][i] == 0)
		{
			arraysize = i;
			break;
		}
	}

	// Frequency finder and marking into array
	for (i=0; i<arraysize; i++)
	{
		for (j=0, counter=0; j<arraysize; j++)
		{
			if (group[0][i] == group[0][j])
			{
				counter++;
				group[1][i] = counter;
			}
		}
	}

	//DEBUG:
	printf("\n--DEBUG: Array \'group\': \n");
	for (i=0; i<arraysize; i++)
	{
		printf("%d\t%d\n", group[0][i], group[1][i]);
	}

	// Mode declaration (number with highest frequency)
	for (i=0, counter=0; i<arraysize; i++)
	{
		if (group[1][i] > counter)
		{
			counter = group[1][i];
			mode = group[0][i];
		}
	}
	printf("\n%d is mode!!", mode);

	return 0;

}