#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Set answer
    int number = 5;

    //Take in user guess
    int guess = get_int("Whats your guess? ");

    //Determine if guess is right or wrong
    if (guess == number)
    {
        printf("You're correct!\n");
    }
    else 
        printf("You're wrong!\n");
}