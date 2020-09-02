#include <stdio.h>
#include <conio.h>

int main(void)
{
	double n = 0.0;
	double m = 1.0;
	char ch;

	printf("Printing fibonacci numbers forever... Hold Enter to generate and Q to quit.\n\n");
	getche();

	while (1)
	{
		printf("%lf\n", n);
		m = m + n;
		printf("%lf\n", m);
		n = n + m;

		if (m<0 || n<0)
		{
			n = 0.0;
			m = 1.0;
		}

		ch = getche();
		if (ch=='q')
			break;
	}

	return 0;
}