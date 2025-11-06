#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Name
    string name = get_string("What is your name? ");

    // Age
    int age = get_int("What is your age? ");

    // Hometown
    string hometown = get_string("What is your hometown? ");

    // Phone
    string phone = get_string("wWhat is your phone number? ");

    // Output
    printf(
        "My new friend's name is %s, age %i.\n They are from  %s and their phone number is %s.\n",
        name, age, hometown, phone);
}