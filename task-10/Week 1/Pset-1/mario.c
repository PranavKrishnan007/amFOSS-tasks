#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    do // for re-prompting :D
    {
        n = get_int("Height: ");
    }
    while ((n < 1) || (n > 8));
    if (n == 1)
    {
        printf("#\n");
    }
    else
    {
        for (int i = 0; i < n; i++) //for the rows
        {
            for (int j = 0; j < n; j++) //for the ' ' and the '#'
            {
                if (j < n - i - 1)
                {
                    printf(" ");
                }
                else
                {
                    printf("#");
                }
            }
            printf("\n"); // For the next line
        }
    }
}
