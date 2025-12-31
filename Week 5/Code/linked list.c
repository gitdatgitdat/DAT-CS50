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
            return 1;
        }
        // Retrieve a value for the node
        n->number = get_int("Number: ");
        // Set next to null so its ready to link to the next node
        n->next = list;
        // Set list to point at the newly created node
        list = n;
    }
    // The loop above has the list linked in the reverse order
    // Going to the address of list will give the newest node
    node *ptr = list;
    // Then run through a loop for each node
    while (ptr != NULL)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }
}