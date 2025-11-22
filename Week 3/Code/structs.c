#include <cs50.h>
#include <stdio.h>

// Define the struct
typedef struct
{
    string name;
    int votes;
} candidate;

int main(void)
{
    // Define number of canidates
    const int num = 3;
    candidate candidates[num];

    // Populate array with user input
    for (int i = 0; i < num; i++)
    {
        candidates[i].name = get_string("Name: ");
        candidates[i].votes = get_int("Voites: ");
    }

    // Determine currently the highest_vote via for loop
    int highest_vote = 0;
    for (int i = 0; i < num; i++)
    {
        if (candidates[i].votes > highest_vote)
        {
            highest_vote = candidates[i].votes;
        }
    }
    // Use highest_vote vari to select the winner
    for (int i = 0; i < num; i++)
    {
        if (candidates[i].votes == highest_vote)
        {
            printf("%s\n", candidates[i].name);
        }
    }
}