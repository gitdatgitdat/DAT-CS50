#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Declare function for scoring
int scoring(string s);

// Constant array thats used for scoring based on the alphabetical character
const int POINTS[26] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                        1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{
    // Obtain string from player 1 and 2
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Run the input through scoring function
    int score1 = scoring(word1);
    int score2 = scoring(word2);

    // Determine printf operation based on score
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int scoring(string s)
{
    // Local score variable
    int score = 0;

    // Run the loop until the end of the string array
    for (int i = 0; s[i] != '\0'; i++)
    {
        // Set c to position i currently is
        char c = s[i];
        // Is it an alphabetical char?
        if (isalpha(c))
        {
            // If so, set it to lower
            c = tolower(c);
            // Add the point value to score variable
            score += POINTS[c - 'a'];
        }
    }
    // Return score to be compared in main
    return score;
}
