#include <stdio.h>
#include <cs50.h>

string get_name(void);

int main(void)
{
    string name = get_name();
    printf("Hello, %s!\n", name);
}

string get_name(void)
{
    return get_string("What is your name? ");
}
