#include <cs50.h>
#include <stdio.h>

int cquarters(int change);
int cdimes(int change);
int cnickels(int change);
int cpennies(int change);

int main(void)
{
    // get user input for change owed
    int change, counter, quarters, dimes, nickels, pennies;
    do
    {
        change = get_int("How much change is owed? ");
    }
    while (change < 0);

    // increment counter to count number of coins needed

    quarters = cquarters(change);
    change = change - (quarters * 25);
    dimes = cdimes(change);
    change = change - (dimes * 10);
    nickels = cnickels(change);
    change = change - (nickels * 5);
    pennies = cpennies(change);
    change = change - (pennies * 1);
    counter = quarters + dimes + nickels + pennies;

    printf("%i\n", counter);
}

int cquarters(int change)
{
    int quarters = 0;
    while (change >= 25)
    {
        quarters++;
        change = change - 25;
    }
    return quarters;
}

int cdimes(int change)
{
    int dimes = 0;
    while (change >= 10)
    {
        dimes++;
        change = change - 10;
    }
    return dimes;
}

int cnickels(int change)
{
    int nickels = 0;
    while (change >= 5)
    {
        nickels++;
        change = change - 5;
    }
    return nickels;
}

int cpennies(int change)
{
    int pennies = 0;
    while (change >= 1)
    {
        pennies++;
        change = change - 1;
    }
    return pennies;
}
