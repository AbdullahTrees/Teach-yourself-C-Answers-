#include <stdio.h>
#include <conio.h>

#define pwsize 80

void censored_input(char input[]);

int main(void)
{
    char pw_server[pwsize] = "Tristan", pw_client[pwsize] = "";
    int i;

    printf("Impertigo Developer Controls\nPlease enter your credentials\nUsername: topkekasheck\n");
    censored_input(pw_client);

    printf("\n%s", pw_client);
    return 0;
}

void censored_input(char input[])
{
    signed int i;
    char ch;

    printf("Enter your password: ");

    for (i=0; i<pwsize; i++)
    {
        ch = getch();

        if (ch == '\r')
        {
            input[i] = '\0';
            return;
        }

        printf("*");
        input[i] = ch;

        if (ch == '\b')
        {
            if (i == 0)
                i = i - 1;
            else
                i = i - 2;
            printf("\b \b");
        }
    }
}
