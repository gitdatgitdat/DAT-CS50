#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int get_quarters(int cents);
int get_dimes(int cents);
int get_nickels(int cents);
int get_pennies(int cents);

int main(void)
{
    // Asking user for the changed owed and setting owed to zero
    int cents = get_cents();
    int owed = 0;

    // Calculate the number of quarters then subtracting the value from cents
    int quarters = get_quarters(cents);
    cents -= quarters * 25;
    owed += quarters;

    // Calculate the number of dimes then subtracting the value from cents
    int dimes = get_dimes(cents);
    cents -= dimes * 10;
    owed += dimes;

    // Calculate the number of nickels then subtracting the value from cents
    int nickels = get_nickels(cents);
    cents -= nickels * 5;
    owed += nickels;

    // Calculate the number of pennies then subtracting the value from cents
    int pennies = get_pennies(cents);
    cents -= pennies * 1;
    owed += pennies;

    // Print the sum of owed
    printf("%i\n", owed);
}

// Have user provide integer to be used for cents
int get_cents(void)
{
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);
    return cents;
}

// Determine number of quarters
int get_quarters(int cents)
{
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25;
    }
    return quarters;
}

// Determine number of dimes
int get_dimes(int cents)
{
    int dimes = 0;
    while (cents >= 10)
    {
        dimes++;
        cents = cents - 10;
    }
    return dimes;
}

// Determine number of nickels
int get_nickels(int cents)
{
    int nickels = 0;
    while (cents >= 5)
    {
        nickels++;
        cents = cents - 5;
    }
    return nickels;
}

// Determine number of pennies
int get_pennies(int cents)
{
    int pennies = 0;
    while (cents >= 1)
    {
        pennies++;
        cents = cents - 1;
    }
    return pennies;
}