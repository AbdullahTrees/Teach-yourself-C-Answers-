#include <stdio.h>

int main(void)
{
	int rooms, i, l, w, area;

	printf("This program calculates the square footage of a house. \nHow many rooms are there in the house? \n");
	scanf("%d", &rooms);

	printf("\n\n");
	area = 0;

	for (i=1;i<=rooms;i++)
	{
		printf("So, for Room #%d, what are the dimensions of this room?\n", i);
		printf("What is the length of this room? (in feet) \n");
		scanf("%d", &l);
		printf("And what is the width of this room? (in feet) \n");
		scanf("%d", &w);

		area = area+ l*w;
	}

	printf("\n\nWell, I think that's all the rooms. The total square footage inside your house is %d sq.ft. ", area);

	return 0;
}
