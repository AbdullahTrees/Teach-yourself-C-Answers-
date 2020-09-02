#include <stdio.h>

int main(void)
{
	int i, num;

	printf("Please input an integer. ");
	scanf("%d", &num);

	for (i=num; i>=0; i--)
	{
		printf("%d \n", i);
	}
	printf("\a"); /* your original answer included an 'if' statement inside
	the 'for loop', checking whether the i was equal to 0 or not.
	But this is highly inefficient! Because the processor is busy
	comparing i with 0 EVERY TIME the loop decrements. If you already
	know that the end result of your loop is 0, why waste so much
	processing power on checking when i will be 0??? So a single
	printf statement after the loop ends is enough, and very
	resource-efficient */

	return 0;
}