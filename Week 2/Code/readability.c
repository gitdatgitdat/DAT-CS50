#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    // Prompt user for text
    string text = get_string("Text: ");

    // Count the number of letters, words, and sentences in the text
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    // Compute the Coleman-Liau index
    // index = 0.0588 * L - 0.296 * S - 15.8
    // L = average number of letters per 100 words
    // S = average number of sentences per 100 words
    float avrg_ltrs = (float) letters / words * 100;
    float avrg_sent = (float) sentences / words * 100;
    float index = 0.0588 * avrg_ltrs - 0.296 * avrg_sent - 15.8;
    int grade = (int) round(index);

    // Print the grade level
    // If index is < 1, say "Before Grade 1"
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    // Or if index is >= 16, say "Grade 16+"
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    // Else print the grade rounded to the nearest int
    else
    {
        printf("Grade %i\n", grade);
    }
}

int count_letters(string text)
{
    // Set variable for number of letters
    int letter_count = 0;
    // Go through the string until you hit nul
    // Increase letter_count by one for each alpha character
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isalpha(text[i]))
        {
            letter_count++;
        }
    }
    // Return sum to main
    return letter_count;
}

int count_words(string text)
{
    // Set variable for number of words
    int word_count = 1;
    // Determine length of string
    int len = strlen(text);
    // Run for loop based on length of string
    for (int i = 0; i < len; i++)
    {
        // Go through the string array, but don't count spaces (32 in ASCII)
        if (text[i] == 32 && i != 0)
        {
            word_count++;
        }
    }
    // Return sum to main
    return word_count;
}

int count_sentences(string text)
{
    // Set variable for number of sentences
    int sentences = 0;
    // Go through string until you hit nul
    for (int i = 0; text[i] != '\0'; i++)
    {
        // When detecting a '.' '?' or '!' increment variable by 1
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences++;
        }
    }
    // Return sum to main
    return sentences;
}
