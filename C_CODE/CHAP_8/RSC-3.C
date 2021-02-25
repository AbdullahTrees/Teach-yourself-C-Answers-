#include <stdio.h>
#include <math.h>

double hypot(double side1, double side2);

int main(void)
{
	 double num1, num2;

	 printf("Program that calculates the length of the hypotenuse of a right-angle triangle given its two sides.");

	 do
	 {
		printf("\nEnter value of one of the sides: ");
		scanf("%lf", &num1);
		if (num1 < 0)
			printf(" -- Hey! The side of a triangle cannot be negative!");
	 }
	 while (num1 < 0);

	 do
	 {
		printf("\nAnd enter value of the other side: ");
		scanf("%lf", &num2);
		if (num2 < 0)
			printf(" -- Hey! The side of a triangle cannot be negative!");
	 }
	 while (num2 < 0);

	 printf("\n\nThe length of the hypotenuse(longest side of the right-angle triangle) is: %g", hypot(num1, num2));

	 return 0;
}

double hypot(double side1, double side2)
{
	return sqrt(pow(side1, 2) + pow(side2, 2));

}