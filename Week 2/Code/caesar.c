#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

// The user provides an input less than or equal to 26
int main(int argc, string argv[])
{
    // Check program was run with just one argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Check if each char in argv[1] is a digit
    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        if (isdigit(argv[1][i]) == false)
        {
            printf("Usage: ./caesar key\n");
            return 2;
        }
    }

    // Convert argv[1] from a string to an int
    int key = atoi(argv[1]);

    // Take text input from user
    string ptext = get_string("plaintext:  ");

    // For each char in plaintext;
        // Rotate by the key value entered with the program
            // Preserve upper and lowercase
            // isalpha
            // islower
            // isupper
        // If not alpha, make no changes

    // Ceaar's formula:
    // c base of i = (p base of i + k) % 26
    // c = cipher and the result we're after
    // p = plaintext that is input by the user
    // k = key, which is provided on startup
    // % refers to the remainder when dividing by, in this case, 26
        // To be able to use this
        // ASCII > Alphabetical (0 to 26)
        // Shift using Caesar's formula
        // Alphabetical > ASCII

    // Print the string back to the user
    // printf("ciphertext %s", c)
}