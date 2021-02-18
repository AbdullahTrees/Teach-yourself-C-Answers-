#include <stdio.h>

double avg(float *values, int size);

int main(void)
{
	float val[10];
	int i;

	printf("Enter 10 floating point values: ");
	for (i=0; i<10; i++)
		scanf("%f", &val[i]);

	printf("\n\nThe average of these 10 values is %lf", avg(val, 10));
	return 0;
}

double avg(float *values, int size)
{
	double total = 0.0;
	int i;

	for(i = 0; i < size; i++)
	{
		total = total + *(values+i);
	}

	return total/size;
}