#include <cs50.h>
#include <stdio.h>

int get_positive_int(void)
void print_row(int n);

int main(void)
{
    const int n = get_positive_int();
    for (int row = 0; row < n; row++)
    {
        print_row(n);
    }
}

int get_positive_int(void)
{
        int n;
    do
    {
         n = get_int("Number: ");
    }
    while (n < 1);
    return n;
}

void print_row(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}