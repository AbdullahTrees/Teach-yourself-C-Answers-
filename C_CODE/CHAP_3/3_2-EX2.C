#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(void)
{
	char ch;
	double side1,side2,side3,semi_peri,area;

	printf("\n\nFind the area of a (t)riangle, (c)ircle, or (r)ectangle: ");
	ch = getche();

	if (ch=='t')
	{
		printf("\nHow much information do you have regarding the triangle?: \n  a) Three sides\n  b) Two sides and the angle between them\n  c) Base and perpendicular Height from corner to base   :");
		ch = getche();

		if (ch=='a')
		{
			printf("\nEnter the three sides of the triangle - Side 1: ");
			scanf("%lf", &side1);
			printf("Side 2: ");
			scanf("%lf", &side2);
			printf("Side 3: ");
			scanf("%lf", &side3);

			semi_peri = 0.5*(side1+side2+side3);
			area = sqrt(semi_peri*(semi_peri-side1)*(semi_peri-side2)*(semi_peri-side3));

			printf("\nThe area of the triangle is %lf", area);
		}
		else
		{
			if (ch=='b')
			{
				printf("\nEnter the two sides of the triangle - Side 1: ");
				scanf("%lf", &side1);
				printf("Side 2: ");
				scanf("%lf", &side2);
				printf("Enter the angle(in radians) between the two sides of the triangle: ");
				scanf("%lf", &side3);

				area = 0.5*side1*side2*sin(side3);

				printf("\nThe area of the triangle is %lf", area);
			}
			else
			{
				if (ch=='c')
				{
					printf("\nEnter the base of the triangle: ");
					scanf("%lf", &side1);
					printf("\nEnter the perpendicular height that the corner makes to the base: ");
					scanf("%lf", &side2);

					printf("\nThe area of the triangle is %lf", 0.5*side1*side2);
				}
				else
				{
					printf("\nPlease enter the correct letter and try again. ");
					return 0;
				}
			}
		}
	}
	else
	{
		if (ch=='c')
		{
			printf("\nEnter radius of circle: ");
			scanf("%lf", &side1);

			printf("\nArea of the circle is %lf. ", M_PI*side1*side1);
		}
		else
		{
			if (ch=='r')
			{
				printf("\nEnter the two sides of the rectangle - Side 1: ");
				scanf("%lf", &side1);
				printf("Side 2: ");
				scanf("%lf", &side2);

				printf("\nArea of the rectangle is %f. ", side1*side2);
			}
			else
			{
				printf("\nPlease enter the correct letter and try again. ");
			}
		}
	}

	return 0;
}

