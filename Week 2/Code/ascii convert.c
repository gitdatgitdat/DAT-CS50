#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get user input
    string text = get_string("Input: ");

    // Iterate each part of the string with ASCII value
    for (int i = 0; i < strlen(text); i++)
    {
        printf("%c - %i\n", text[i], text[i]);
    }
}
