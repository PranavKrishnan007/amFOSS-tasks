#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int start;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);
    int finish;
    do
    {
        finish = get_int("End size: ");
    }
    while (finish < start);
    int n = 0;
    for (int x = start; x <= finish;)
    {
        int born = x / 3;
        int dead = x / 4;
        x = x + born - dead;
        if ((x != finish) || (x < finish))
        {
            n = n + 1;
        }
    }
    if (start == finish)
    {
        printf("Years: 0");
    }
    else
    {
        printf("Years: %i", n);
    }    
}
