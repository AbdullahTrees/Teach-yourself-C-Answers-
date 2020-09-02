#include <stdio.h>

int main(void)
{
	int answer, count;
	int right=0, wrong=0;

	for (count=1; count<11; count++)
	{
		printf("What is %d + %d? \n", count, count);
		scanf("%d", &answer);

		if (count+count == answer)
		{
			printf("Right! \n\n");
			right++;
		}
		else
		{
			printf("Sorry, you're wrong. The answer is %d. \n\n", count+count);
			wrong++;
		}
	}

	printf("\nWell that's enough counting for today. You got %d of the answers wrong and %d of the answers right. ", wrong, right);

	return 0;
}
