#include <cs50.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    string s = get_string("String: ");
    for (int i = 0; i < 6; i++)
    {
        // We used strcomp because simple string == string won't work
        // You'll want to use this function, which is going off the place of the char in ASCII
        // Which means lower and uppercase are treated differently.
        if (strcmp(strings[i], s) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}