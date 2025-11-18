#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    // Prompt user for text
        // If does not contain one word,
        // starts or ends with a space,
        // and does not have multiple spaces in a row
    string text = get_string("Text: ");

    // Count the number of letters, words, and sentences in the text
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    // Compute the Coleman-Liau index
        // index = 0.0588 * L - 0.296 * S - 15.8
        // L = average number of letters per 100 words
        // S = average number of sentences per 100 words

    //Print the grade level
}

int count_letters(string text)
{
    int letter_count = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isalpha(text[i]))
        {
            letter_count++;
        }
    }
    return letter_count;
}

int count_words(string text)
{
    int word_count = 1;
    int len = strlen(text);
    for(int i = 0; i < len; i++)
    {
        if(text[i] == 32 && i != 0)
        {
            word_count++;
        }
    }
    return word_count;
}

int count_sentences(string text)
{
    // Return the number of sentences in text
}