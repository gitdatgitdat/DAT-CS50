#include <cs50.h>
#include <stdio.h>
#include <string.h>

//If input from user is alphabetical, print yes.
//If input from user is NOT alphabetical, print no.

int main(void)
{
    //Get user input
    string text = get_string("Input: ");

    ///Iterate through each element in the string
    //Then check if string is in alphabetical order
    for (int i = 1; i < strlen(text); i++)
    {
        if (text[i] < text[i - 1])
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");

    //
}
