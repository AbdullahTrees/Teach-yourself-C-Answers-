#include <stdio.h>

int main(void)
{
    int ar[10], i, odd, even;

    printf("Enter 10 integers...\n");

    for (i=0; i<10; i++)
        scanf("%d", &ar[i]);

    for(i=0, odd=0, even=0; i<10; i++)
    {
        if (ar[i] % 2)
            odd = odd + ar[i];
        else
            even = even + ar[i];
    }

    printf("\n\nSum of all odd numbers in the array = %d", odd);
    printf("\nSum of all even numbers in the array = %d", even);

    return 0;
}
