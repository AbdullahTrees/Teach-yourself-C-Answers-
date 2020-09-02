#include <stdio.h>

main(void)
{
	int numarray[3][3][3];
	int i, j, k, a=1;


	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			for (k=0; k<3; k++)
			{
				numarray[i][j][k] = a++;
				printf("%d ", numarray[i][j][k]);
			}
		}
	}

	return 0;
}