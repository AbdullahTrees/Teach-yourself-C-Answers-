#include <stdio.h>
#include <ctype.h>
#include <string.h>

float avg(float *arr, int size_arr);

int main(void)
{
	float test[10] = {7.8234, 2.0001, 1.9123, 123123, -2345.34, 123.2388};

	printf("%f", avg(test, 6));

	return 0;
}

float avg(float *arr, int size_arr)
{
	int i;
	float total;

	for (i = 0, total = 0; i < size_arr; i++)
	{
		total = total + *(arr+i);
	}
	return total/(float)size_arr;
}
