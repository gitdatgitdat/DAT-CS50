// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// Choose number of buckets in hash table
const unsigned int N = 10007;

// Hash table
node *table[N];

// Global counter for size
unsigned int word_count = 0;

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    unsigned int h = hash(word);

    node *cursor = table[h];
    while (cursor != NULL)
    {
        if (strcasecmp(cursor->word, word) == 0)
        {
            return true;
        }
        cursor = cursor->next;
    }
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    unsigned long h = 0;

    for (int i = 0; word[i] != '\0'; i++)
    {
        unsigned char c = (unsigned char) word[i];
        c = tolower(c);

        // Include apostrophe check for words that contain one
        h = (h * 31) + c;
    }
    return (unsigned int) (h % N);
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    FILE *source = fopen(dictionary, "r");
    if (source == NULL)
    {
        perror("fopen");
        return false;
    }

    char word[LENGTH + 1];

    while (fscanf(source, "%45s", word) == 1)
    {
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            fclose(source);
            return false;
        }

        strcpy(n->word, word);

        unsigned int h = hash(word);

        n->next = table[h];
        table[h] = n;

        word_count++;
    }

    fclose(source);
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    return word_count;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    for (unsigned int i = 0; i < N; i++)
    {
        node *cursor = table[i];

        while (cursor != NULL)
        {
            node *tmp = cursor;
            cursor = cursor->next;
            free(tmp);
        }
        table[i] = NULL;
    }
    word_count = 0;
    return true;
}

