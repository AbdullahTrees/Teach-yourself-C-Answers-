#include <stdio.h>

int main(void)
{
	float num;

	for (num = 1.0; (int)num <= 9; num = num + 0.1)
	{
		//if (num > 10.1)
		  //	break;      previously, (int)num <= 11, hence this would print from 1.0 to 10.0. However the book does not require this and demands 1.0 to 9.9

		printf("%.2f\n", num);
	}

	return 0;
}