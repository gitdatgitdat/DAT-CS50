#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

unsigned int hash(const char* word);

int main(void)
{
    // Get word to hash
    char* word = get_string("Word: ");
    // Print the has value of provided word
    printf("Hash value: %i\n", hash(word));
}

unsigned int hash(const char* word)
{
    // Input handling if none is provided
    if (word == NULL || word[0] == '\0')
    {
        printf("Must provide input.");
        return 1;
    }

    // Set the first letter to lower
    char first_letter = tolower((unsigned char)word[0]);

    // If the first letter is equal to or great than a
    // And equal to or lesser than z
    if (first_letter >= 'a' && first_letter <= 'z')
    {
        // Return the value - the ASCII of 'a'
        return first_letter - 'a';
    }
    else
    {
        // Otherwise return error
        return 1;
    }
}
