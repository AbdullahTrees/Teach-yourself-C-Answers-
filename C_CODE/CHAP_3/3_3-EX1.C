#include <stdio.h>

int main(void)
{
	int i;
	float speed=1.0;
	float distance=0;

	printf("\n\nSo, uhm... How many times do you want to calculate drive time? ");
	scanf("%d", &i);

	if (i<=0)
	{
		printf("\n...Really now... You're gonna calculate the drive time %d times? Please enter a correct number and try again. ", i);
		return 0;
	}

	for( ;(i>0)&&(speed!=0) ;i-- )
	{
		printf("\nSo... For calculation #%d, what is the average speed of the car? (km/h or MPH) ", i);
		scanf("%f", &speed);

		printf("\nAnd... what is the distance the car is travelling through at that speed? (km or miles) ");
		scanf("%f", &distance);

		if (speed == 0)
		{
			speed = 1.0;
			printf("\nUhm......... If your speed is zero how are you ever gonna get there? Let's try that again...\n");
		}
		else
			printf("\nThe estimated driving time is roughly %f hours", distance/speed);
	}

	return 0;
}