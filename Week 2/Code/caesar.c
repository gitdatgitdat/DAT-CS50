#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

    // Begin output
    printf("ciphertext: ");

    // For loop through ptext
    for (int i = 0; i < strlen(ptext); i++)
    {
        // Current element of ptext
        char c = ptext[i];

        // If alpha, run through this loop
        if (isalpha(c))
        {
            // If upper, rotate here
            if (isupper(c))
            {
                int pi = c - 'A';
                int ci = (pi + key) % 26;
                char encrypt = ci + 'A';
                printf("%c", encrypt);
            }
            // If alpha but not upper, must be lower
            // Rotate here
            else
            {
                int pi = c - 'a';
                int ci = (pi + key) % 26;
                char encrypt = ci + 'a';
                printf("%c", encrypt);
            }
        }
        // If not alpha, don't rotate
        else
        {
            printf("%c", c);
        }
    }
    printf("\n");
}

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

