#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float money;
    do
    {
        money = get_float("Change owed: ");
    }
    while (money < 0); //for getting a positive float value
    int new_money = round(money * 100);
    int coins = 0;
    while (new_money - 25 >= 0) //checking for pennies
    {
        new_money = new_money - 25;
        coins = coins + 1;
    }
    while (new_money - 10 >= 0) //checking for dimes
    {
        new_money = new_money - 10;
        coins = coins + 1;
    }
    while (new_money - 5 >= 0) //checking for nickels
    {
        new_money = new_money - 5;
        coins = coins + 1;
    }
    while (new_money - 1 >= 0) // checking for pennies
    {
        new_money = new_money - 1;
        coins = coins + 1;
    }
    printf("%i\n", coins);
}
