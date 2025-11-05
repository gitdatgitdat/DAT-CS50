#include <cs50.h>
#include <stdio.h>

// all my lovely functions
int get_positive_int(void);
void print_space(int n);
void print_row(int n);

// main that grabs a number and builds a pyramid as long as its greater than zero and less than 9
int main(void)
{
    const int n = get_positive_int();
    for (int row = 1; row <= n; row++)
    {
        print_space(n - row);
        print_row(row);
    }
}

// requests user input for a number from 1 to 8 and then returns it
int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("Number: ");
    }
    while (n < 1 || n > 8);
    return n;
}

// row creation for main
void print_row(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}

// space creation for main
void print_space(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}


void print_space(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}