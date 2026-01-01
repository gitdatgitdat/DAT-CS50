#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(void)
{
    // Starter pointer
    node *list = NULL;

    // Run loop to create three nodes
    for (int i = 0; i < 3; i++)
    {
        // Allocate memory for the size of the node
        node *n = malloc(sizeof(node));
        // Unless it equals NULL, then return error code 1
        if (n == NULL)
        {
            // TODO: Free any memeory already malloc'd
            return 1;
        }
        // Retrieve a value for the node
        n->number = get_int("Number: ");
        // Set next to null so its ready to link to the next node
        n->next = list;

        // If list is empty
        if (list == NULL)
        {
            list = n;
        }

        // If list has elements
        else
        {
            for (node *ptr = list; ptr != NULL; ptr = ptr->next)
            {
                // If at end of list
                if (ptr->next == NULL)
                {
                    ptr->next = n;
                    break;
                }
            }
        }
    }
    // Loop to print elements of the list
    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->number);
    }

    node *ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }

    return 0;
}

