#include <stdio.h>

int main(void)
{
    char str[1005] = "";
    int i, space=0, comma=0, full_stop=0;

    printf("Enter a string [MAX 1000 CHARS!!!]: ");
    gets(str);

    for (i=0; str[i] != '\0'; i++)
    {
        switch (str[i])
        {
            case ' ': space++; break;
            case '.': full_stop++; break;
            case ',': comma++; break;
        }
    }

    printf("\n\n# of spaces: %d\n# of commas: %d\n# of periods: %d", space, comma, full_stop);

    return 0;
}
