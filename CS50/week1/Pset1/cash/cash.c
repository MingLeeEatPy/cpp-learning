#include <stdio.h>

int change;
int coins = 0;

int calculate_quarters(int change);
int calculate_dimes(int change);
int calculate_nickels(int change);
int calculate_pennies(int change);

int main(void)
{
    do
    {
        printf("Change owed: ");
        scanf("%d", &change);
    }
    while (change < 0);

    coins += calculate_quarters(change);
    change %= 25;

    coins += calculate_dimes(change);
    change %= 10;

    coins += calculate_nickels(change);
    change %= 5;

    coins += calculate_pennies(change);

    printf("%d\n", coins);

    return 0;
}

int calculate_quarters(int change)
{
    return change / 25;
}

int calculate_dimes(int change)
{
    return change / 10;
}

int calculate_nickels(int change)
{
    return change / 5;
}

int calculate_pennies(int change)
{
    return change;
}